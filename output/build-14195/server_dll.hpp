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

namespace cs2::server {

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
    STANCE_CURRENT = 18446744073709551615,
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
    INVALID = 18446744073709551615,
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
    DEM_Error = 18446744073709551615,
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
    Default = 18446744073709551615,
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
    eInvalid = 18446744073709551615,
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
    None = 18446744073709551615,
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
    ANIM_LOOP_MODE_INVALID = 18446744073709551615,
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
    LOADOUT_SLOT_PROMOTED = 18446744073709551614,
    LOADOUT_SLOT_INVALID = 18446744073709551615,
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
    eInvalid = 18446744073709551615,
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
    ROLL_NONE = 18446744073709551615,
    ROLL_STATS = 0,
    ROLL_CREDITS = 1,
    ROLL_LATE_JOIN_LOGO = 2,
    ROLL_OUTTRO = 3,
};

enum class ScriptedOnDeath_t : std::int32_t {
    SS_ONDEATH_NOT_APPLICABLE = 18446744073709551615,
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
    eInvalid = 18446744073709551615,
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
    GEAR_SLOT_INVALID = 18446744073709551615,
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
    AMMO_POSITION_INVALID = 18446744073709551615,
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
    COMBINED = 18446744073709551615,
};

enum class PreviewEOMCelebration : std::int32_t {
    INVALID = 18446744073709551615,
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
    IN_ALL = 18446744073709551615,
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
    HITGROUP_INVALID = 18446744073709551615,
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
    SUBCLASS_SCOPE_NONE = 18446744073709551615,
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
    k_eHudPanelClassStatus_Undefined = 18446744073709551615,
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
    RUMBLE_INVALID = 18446744073709551615,
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
    eInvalid = 18446744073709551615,
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
    NeverConnected = 18446744073709551615,
    Connected = 0,
    Connecting = 1,
    Reconnecting = 2,
    Disconnecting = 3,
    Disconnected = 4,
    Reserved = 5,
};

enum class PreviewCharacterBannerAnimation : std::int32_t {
    INVALID = 18446744073709551615,
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
    ENTITY_DISSOLVE_INVALID = 18446744073709551615,
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
    NAV_OBSTACLE_TYPE_INVALID = 18446744073709551615,
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
    static constexpr std::size_t size = 0xB00;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_messageText[0x200]; // 0x850 char[512]
    std::uint8_t m_FontName[0x40]; // 0xA50 char[64]
    std::uint8_t m_BackgroundMaterialName[0x40]; // 0xA90 char[64]
    std::uint8_t m_bEnabled[0x1]; // 0xAD0 bool
    std::uint8_t m_bFullbright[0x3]; // 0xAD1 bool
    std::uint8_t m_flWorldUnitsPerPx[0x4]; // 0xAD4 float32
    std::uint8_t m_flFontSize[0x4]; // 0xAD8 float32
    std::uint8_t m_flDepthOffset[0x4]; // 0xADC float32
    std::uint8_t m_bDrawBackground[0x4]; // 0xAE0 bool
    std::uint8_t m_flBackgroundBorderWidth[0x4]; // 0xAE4 float32
    std::uint8_t m_flBackgroundBorderHeight[0x4]; // 0xAE8 float32
    std::uint8_t m_flBackgroundWorldToUV[0x4]; // 0xAEC float32
    std::uint8_t m_Color[0x4]; // 0xAF0 Color
    std::uint8_t m_nJustifyHorizontal[0x4]; // 0xAF4 PointWorldTextJustifyHorizontal_t
    std::uint8_t m_nJustifyVertical[0x4]; // 0xAF8 PointWorldTextJustifyVertical_t
    std::uint8_t m_nReorientMode[0x4]; // 0xAFC PointWorldTextReorientMode_t
};

struct CAmbientGeneric {
    static constexpr std::size_t size = 0x550;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_radius[0x4]; // 0x4A8 float32
    std::uint8_t m_flMaxRadius[0x4]; // 0x4AC float32
    std::uint8_t m_iSoundLevel[0x4]; // 0x4B0 soundlevel_t
    std::uint8_t m_dpv[0x64]; // 0x4B4 dynpitchvol_t
    std::uint8_t m_fActive[0x1]; // 0x518 bool
    std::uint8_t m_fLooping[0x7]; // 0x519 bool
    std::uint8_t m_iszSound[0x8]; // 0x520 CGameSoundEventName
    std::uint8_t m_sSourceEntName[0x8]; // 0x528 CUtlSymbolLarge
    std::uint8_t m_hSoundSource[0x4]; // 0x530 CHandle<CBaseEntity>
    std::uint8_t m_nSoundSourceEntIndex[0x1C]; // 0x534 CEntityIndex
};

struct CEnvEntityMaker {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vecEntityMins[0xC]; // 0x4A8 Vector
    std::uint8_t m_vecEntityMaxs[0xC]; // 0x4B4 Vector
    std::uint8_t m_hCurrentInstance[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_hCurrentBlocker[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_vecBlockerOrigin[0xC]; // 0x4C8 VectorWS
    std::uint8_t m_angPostSpawnDirection[0xC]; // 0x4D4 QAngle
    std::uint8_t m_flPostSpawnDirectionVariance[0x4]; // 0x4E0 float32
    std::uint8_t m_flPostSpawnSpeed[0x4]; // 0x4E4 float32
    std::uint8_t m_bPostSpawnUseAngles[0x8]; // 0x4E8 bool
    std::uint8_t m_iszTemplate[0x8]; // 0x4F0 CUtlSymbolLarge
    std::uint8_t m_pOutputOnSpawned[0x18]; // 0x4F8 CEntityIOOutput
    std::uint8_t m_pOutputOnFailedSpawn[0x18]; // 0x510 CEntityIOOutput
};

struct CPulseGraphInstance_GameBlackboard {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0x150]; // 0x0
};

struct CPointEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CFilterEnemy {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iszEnemyName[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_flRadius[0x4]; // 0x4E8 float32
    std::uint8_t m_flOuterRadius[0x4]; // 0x4EC float32
    std::uint8_t m_nMaxSquadmatesPerEnemy[0x8]; // 0x4F0 int32
    std::uint8_t m_iszPlayerName[0x8]; // 0x4F8 CUtlSymbolLarge
};

struct CCSGO_WingmanIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_bTagSelfWhenComplete[0x4]; // 0x128 bool
    std::uint8_t m_nDesiredKillPriority[0x4]; // 0x12C PulseCursorCancelPriority_t
};

struct CFuncTrackAuto {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x958]; // 0x0
};

struct CScriptedSequence {
    static constexpr std::size_t size = 0x6F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszEntry[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszPreIdle[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszPlay[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_iszPostIdle[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_iszModifierToAddOnPlay[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_iszNextScript[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_iszEntity[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_iszSyncGroup[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_nMoveTo[0x4]; // 0x4E8 ScriptedMoveTo_t
    std::uint8_t m_nMoveToGait[0x4]; // 0x4EC SharedMovementGait_t
    std::uint8_t m_nHeldWeaponBehavior[0x4]; // 0x4F0 ScriptedHeldWeaponBehavior_t
    std::uint8_t m_nForcedCrouchState[0x4]; // 0x4F4 ForcedCrouchState_t
    std::uint8_t m_bIsPlayingPreIdle[0x1]; // 0x4F8 bool
    std::uint8_t m_bIsPlayingEntry[0x1]; // 0x4F9 bool
    std::uint8_t m_bIsPlayingAction[0x1]; // 0x4FA bool
    std::uint8_t m_bIsPlayingPostIdle[0x1]; // 0x4FB bool
    std::uint8_t m_bDontRotateOther[0x1]; // 0x4FC bool
    std::uint8_t m_bIsRepeatable[0x1]; // 0x4FD bool
    std::uint8_t m_bShouldLeaveCorpse[0x1]; // 0x4FE bool
    std::uint8_t m_bStartOnSpawn[0x1]; // 0x4FF bool
    std::uint8_t m_bDisallowInterrupts[0x1]; // 0x500 bool
    std::uint8_t m_bCanOverrideNPCState[0x1]; // 0x501 bool
    std::uint8_t m_bDontTeleportAtEnd[0x1]; // 0x502 bool
    std::uint8_t m_bHighPriority[0x1]; // 0x503 bool
    std::uint8_t m_bHideDebugComplaints[0x1]; // 0x504 bool
    std::uint8_t m_bContinueOnDeath[0x1]; // 0x505 bool
    std::uint8_t m_bLoopPreIdleSequence[0x1]; // 0x506 bool
    std::uint8_t m_bLoopActionSequence[0x1]; // 0x507 bool
    std::uint8_t m_bLoopPostIdleSequence[0x1]; // 0x508 bool
    std::uint8_t m_bSynchPostIdles[0x1]; // 0x509 bool
    std::uint8_t m_bIgnoreLookAt[0x1]; // 0x50A bool
    std::uint8_t m_bIgnoreGravity[0x1]; // 0x50B bool
    std::uint8_t m_bDisableNPCCollisions[0x1]; // 0x50C bool
    std::uint8_t m_bKeepAnimgraphLockedPost[0x1]; // 0x50D bool
    std::uint8_t m_bDontAddModifiers[0x1]; // 0x50E bool
    std::uint8_t m_bDisableAimingWhileMoving[0x1]; // 0x50F bool
    std::uint8_t m_bIgnoreRotation[0x4]; // 0x510 bool
    std::uint8_t m_flRadius[0x4]; // 0x514 float32
    std::uint8_t m_flRepeat[0x4]; // 0x518 float32
    std::uint8_t m_flPlayAnimFadeInTime[0x4]; // 0x51C float32
    std::uint8_t m_flMoveInterpTime[0x4]; // 0x520 float32
    std::uint8_t m_flAngRate[0x4]; // 0x524 float32
    std::uint8_t m_flMoveSpeed[0x4]; // 0x528 float32
    std::uint8_t m_bWaitUntilMoveCompletesToStartAnimation[0x4]; // 0x52C bool
    std::uint8_t m_nNotReadySequenceCount[0x4]; // 0x530 int32
    std::uint8_t m_startTime[0x4]; // 0x534 GameTime_t
    std::uint8_t m_bWaitForBeginSequence[0x4]; // 0x538 bool
    std::uint8_t m_saved_effects[0x4]; // 0x53C int32
    std::uint8_t m_savedFlags[0x4]; // 0x540 int32
    std::uint8_t m_savedCollisionGroup[0x4]; // 0x544 int32
    std::uint8_t m_bInterruptable[0x1]; // 0x548 bool
    std::uint8_t m_sequenceStarted[0x1]; // 0x549 bool
    std::uint8_t m_bPositionRelativeToOtherEntity[0x2]; // 0x54A bool
    std::uint8_t m_hTargetEnt[0x4]; // 0x54C CHandle<CBaseEntity>
    std::uint8_t m_hNextCine[0x4]; // 0x550 CHandle<CScriptedSequence>
    std::uint8_t m_bThinking[0x1]; // 0x554 bool
    std::uint8_t m_bInitiatedSelfDelete[0x1]; // 0x555 bool
    std::uint8_t m_bIsTeleportingDueToMoveTo[0x1]; // 0x556 bool
    std::uint8_t m_bAllowCustomInterruptConditions[0x1]; // 0x557 bool
    std::uint8_t m_hForcedTarget[0x4]; // 0x558 CHandle<CBaseAnimGraph>
    std::uint8_t m_bDontCancelOtherSequences[0x1]; // 0x55C bool
    std::uint8_t m_bForceSynch[0x1]; // 0x55D bool
    std::uint8_t m_bPreventUpdateYawOnFinish[0x1]; // 0x55E bool
    std::uint8_t m_bEnsureOnNavmeshOnFinish[0x1]; // 0x55F bool
    std::uint8_t m_onDeathBehavior[0x4]; // 0x560 ScriptedOnDeath_t
    std::uint8_t m_ConflictResponse[0x4]; // 0x564 ScriptedConflictResponse_t
    std::uint8_t m_OnBeginSequence[0x18]; // 0x568 CEntityIOOutput
    std::uint8_t m_OnActionStartOrLoop[0x18]; // 0x580 CEntityIOOutput
    std::uint8_t m_OnEndSequence[0x18]; // 0x598 CEntityIOOutput
    std::uint8_t m_OnPostIdleEndSequence[0x18]; // 0x5B0 CEntityIOOutput
    std::uint8_t m_OnCancelSequence[0x18]; // 0x5C8 CEntityIOOutput
    std::uint8_t m_OnCancelFailedSequence[0x18]; // 0x5E0 CEntityIOOutput
    std::uint8_t m_OnScriptEvent[0xC8]; // 0x5F8 CEntityIOOutput[8]
    std::uint8_t m_matOtherToMain[0x20]; // 0x6C0 CTransform
    std::uint8_t m_hInteractionMainEntity[0x4]; // 0x6E0 CHandle<CBaseEntity>
    std::uint8_t m_iPlayerDeathBehavior[0x4]; // 0x6E4 int32
    std::uint8_t m_bSkipFadeIn[0x8]; // 0x6E8 bool
};

struct CFogTrigger {
    static constexpr std::size_t size = 0xA30;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_fog[0x68]; // 0x9C8 fogparams_t
};

struct CInfoTeleportDestination {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPointBroadcastClientCommand {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CCSPlayer_PingServices {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_flPlayerPingTokens[0x14]; // 0x48 GameTime_t[5]
    std::uint8_t m_hPlayerPing[0x4]; // 0x5C CHandle<CPlayerPing>
};

struct CHEGrenade {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x12C0]; // 0x0
};

struct CPhysicsSpring {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pSpringJoint[0x8]; // 0x4A8 IPhysicsJoint*
    std::uint8_t m_flFrequency[0x4]; // 0x4B0 float32
    std::uint8_t m_flDampingRatio[0x4]; // 0x4B4 float32
    std::uint8_t m_flRestLength[0x8]; // 0x4B8 float32
    std::uint8_t m_nameAttachStart[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_nameAttachEnd[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_start[0xC]; // 0x4D0 VectorWS
    std::uint8_t m_end[0xC]; // 0x4DC VectorWS
    std::uint8_t m_teleportTick[0x8]; // 0x4E8 uint32
};

struct CEnvMuzzleFlash {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flScale[0x8]; // 0x4A8 float32
    std::uint8_t m_iszParentAttachment[0x8]; // 0x4B0 CUtlSymbolLarge
};

struct CEconItemAttribute {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_iAttributeDefinitionIndex[0x4]; // 0x30 uint16
    std::uint8_t m_flValue[0x4]; // 0x34 float32
    std::uint8_t m_flInitialValue[0x4]; // 0x38 float32
    std::uint8_t m_nRefundableCurrency[0x4]; // 0x3C int32
    std::uint8_t m_bSetBonus[0x8]; // 0x40 bool
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_OnFinished[0x48]; // 0xF0 CPulse_ResumePoint
};

struct CWeaponRevolver {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CFuncTrainControls {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CBtActionCombatPositioning {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t m_szSensorInputKey[0x18]; // 0x68 CUtlString
    std::uint8_t m_szIsAttackingKey[0x8]; // 0x80 CUtlString
    std::uint8_t m_ActionTimer[0x18]; // 0x88 CountdownTimer
    std::uint8_t m_bCrouching[0x10]; // 0xA0 bool
};

struct CFuncRetakeBarrier {
    static constexpr std::size_t size = 0xCB0;
    std::uint8_t pad_0[0xCB0]; // 0x0
};

struct CTriggerBuoyancy {
    static constexpr std::size_t size = 0xAE8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_BuoyancyHelper[0x118]; // 0x9C8 CBuoyancyHelper
    std::uint8_t m_flFluidDensity[0x8]; // 0xAE0 float32
};

struct CTonemapController2Alias_env_tonemap_controller2 {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4C0]; // 0x0
};

struct CPathTrack {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pnext[0x4]; // 0x4A8 CHandle<CPathTrack>
    std::uint8_t m_pprevious[0x4]; // 0x4AC CHandle<CPathTrack>
    std::uint8_t m_paltpath[0x4]; // 0x4B0 CHandle<CPathTrack>
    std::uint8_t m_flSpeed[0x4]; // 0x4B4 float32
    std::uint8_t m_flRadius[0x4]; // 0x4B8 float32
    std::uint8_t m_length[0x4]; // 0x4BC float32
    std::uint8_t m_altName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_nIterVal[0x4]; // 0x4C8 int32
    std::uint8_t m_eOrientationType[0x4]; // 0x4CC TrackOrientationType_t
    std::uint8_t m_OnPass[0x18]; // 0x4D0 CEntityIOOutput
};

struct CCSGO_EndOfMatchLineupEndpoint {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nEditorNodeID[0x40]; // 0x8 PulseDocNodeID_t
};

struct CTriggerProximity {
    static constexpr std::size_t size = 0xA00;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_hMeasureTarget[0x8]; // 0x9C8 CHandle<CBaseEntity>
    std::uint8_t m_iszMeasureTarget[0x8]; // 0x9D0 CUtlSymbolLarge
    std::uint8_t m_fRadius[0x4]; // 0x9D8 float32
    std::uint8_t m_nTouchers[0x4]; // 0x9DC int32
    std::uint8_t m_NearestEntityDistance[0x20]; // 0x9E0 CEntityOutputTemplate<float32>
};

struct CTankTrainAI {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hTrain[0x4]; // 0x4A8 CHandle<CFuncTrackTrain>
    std::uint8_t m_hTargetEntity[0x4]; // 0x4AC CHandle<CBaseEntity>
    std::uint8_t m_soundPlaying[0x18]; // 0x4B0 int32
    std::uint8_t m_startSoundName[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_engineSoundName[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_movementSoundName[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_targetEntityName[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CGameText {
    static constexpr std::size_t size = 0x880;
    std::uint8_t pad_0[0x860]; // 0x0
    std::uint8_t m_iszMessage[0x8]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_textParms[0x18]; // 0x868 hudtextparms_t
};

struct CGameEnd {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x860]; // 0x0
};

struct CInfoDeathmatchSpawn {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4B8]; // 0x0
};

struct CCSPlayerController_InventoryServices {
    static constexpr std::size_t size = 0x1020;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_unMusicID[0x4]; // 0x40 uint16
    std::uint8_t m_rank[0x18]; // 0x44 MedalRank_t[6]
    std::uint8_t m_nPersonaDataPublicLevel[0x4]; // 0x5C int32
    std::uint8_t m_nPersonaDataPublicCommendsLeader[0x4]; // 0x60 int32
    std::uint8_t m_nPersonaDataPublicCommendsTeacher[0x4]; // 0x64 int32
    std::uint8_t m_nPersonaDataPublicCommendsFriendly[0x4]; // 0x68 int32
    std::uint8_t m_nPersonaDataXpTrailLevel[0xF1C]; // 0x6C int32
    std::uint8_t m_unEquippedPlayerSprayIDs[0x8]; // 0xF88 uint32[1]
    std::uint8_t m_unCurrentLoadoutHash[0x8]; // 0xF90 uint64
    std::uint8_t m_vecServerAuthoritativeWeaponSlots[0x88]; // 0xF98 CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
};

struct CCSPlayerModernJump {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nLastActualJumpPressTick[0x4]; // 0x10 GameTick_t
    std::uint8_t m_flLastActualJumpPressFrac[0x4]; // 0x14 float32
    std::uint8_t m_nLastUsableJumpPressTick[0x4]; // 0x18 GameTick_t
    std::uint8_t m_flLastUsableJumpPressFrac[0x4]; // 0x1C float32
    std::uint8_t m_nLastLandedTick[0x4]; // 0x20 GameTick_t
    std::uint8_t m_flLastLandedFrac[0x4]; // 0x24 float32
    std::uint8_t m_flLastLandedVelocityX[0x4]; // 0x28 float32
    std::uint8_t m_flLastLandedVelocityY[0x4]; // 0x2C float32
    std::uint8_t m_flLastLandedVelocityZ[0x8]; // 0x30 float32
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTriggerFan {
    static constexpr std::size_t size = 0xA90;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_vFanOriginOffset[0xC]; // 0x9C8 Vector
    std::uint8_t m_vDirection[0xC]; // 0x9D4 Vector
    std::uint8_t m_bPushTowardsInfoTarget[0x1]; // 0x9E0 bool
    std::uint8_t m_bPushAwayFromInfoTarget[0xF]; // 0x9E1 bool
    std::uint8_t m_qNoiseDelta[0x10]; // 0x9F0 Quaternion
    std::uint8_t m_hInfoFan[0x4]; // 0xA00 CHandle<CInfoFan>
    std::uint8_t m_flForce[0x4]; // 0xA04 float32
    std::uint8_t m_bFalloff[0x8]; // 0xA08 bool
    std::uint8_t m_RampTimer[0x18]; // 0xA10 CountdownTimer
    std::uint8_t m_vFanOriginWS[0xC]; // 0xA28 VectorWS
    std::uint8_t m_vFanOriginLS[0xC]; // 0xA34 Vector
    std::uint8_t m_vFanEndLS[0xC]; // 0xA40 Vector
    std::uint8_t m_vNoiseDirectionTarget[0xC]; // 0xA4C Vector
    std::uint8_t m_iszInfoFan[0x8]; // 0xA58 CUtlSymbolLarge
    std::uint8_t m_flRopeForceScale[0x4]; // 0xA60 float32
    std::uint8_t m_flParticleForceScale[0x4]; // 0xA64 float32
    std::uint8_t m_flPlayerForce[0x4]; // 0xA68 float32
    std::uint8_t m_bPlayerWindblock[0x4]; // 0xA6C bool
    std::uint8_t m_flNPCForce[0x4]; // 0xA70 float32
    std::uint8_t m_flRampTime[0x4]; // 0xA74 float32
    std::uint8_t m_fNoiseDegrees[0x4]; // 0xA78 float32
    std::uint8_t m_fNoiseSpeed[0x4]; // 0xA7C float32
    std::uint8_t m_bPushPlayer[0x1]; // 0xA80 bool
    std::uint8_t m_bRampDown[0x3]; // 0xA81 bool
    std::uint8_t m_nManagerFanIdx[0xC]; // 0xA84 int32
};

struct CPhysHingeAlias_phys_hinge_local {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x678]; // 0x0
};

struct CLogicCase {
    static constexpr std::size_t size = 0x8F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nCase[0x100]; // 0x4A8 CUtlSymbolLarge[32]
    std::uint8_t m_nShuffleCases[0x4]; // 0x5A8 int32
    std::uint8_t m_nLastShuffleCase[0x4]; // 0x5AC int32
    std::uint8_t m_uchShuffleCaseMap[0x20]; // 0x5B0 uint8[32]
    std::uint8_t m_OnCase[0x300]; // 0x5D0 CEntityIOOutput[32]
    std::uint8_t m_OnDefault[0x20]; // 0x8D0 CEntityOutputTemplate<CUtlString>
};

struct CPulseCell_Outflow_PlayVOLine {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_OnFinished[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CInfoGameEventProxy {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszEventName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_flRange[0x8]; // 0x4B0 float32
};

struct CWeaponBizon {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CGamePlayerZone {
    static constexpr std::size_t size = 0x8C8;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_OnPlayerInZone[0x18]; // 0x858 CEntityIOOutput
    std::uint8_t m_OnPlayerOutZone[0x18]; // 0x870 CEntityIOOutput
    std::uint8_t m_PlayersInCount[0x20]; // 0x888 CEntityOutputTemplate<int32>
    std::uint8_t m_PlayersOutCount[0x20]; // 0x8A8 CEntityOutputTemplate<int32>
};

struct CBaseToggle {
    static constexpr std::size_t size = 0x8D0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_toggle_state[0x4]; // 0x850 TOGGLE_STATE
    std::uint8_t m_flMoveDistance[0x4]; // 0x854 float32
    std::uint8_t m_flWait[0x4]; // 0x858 float32
    std::uint8_t m_flLip[0x4]; // 0x85C float32
    std::uint8_t m_bAlwaysFireBlockedOutputs[0x4]; // 0x860 bool
    std::uint8_t m_vecPosition1[0xC]; // 0x864 Vector
    std::uint8_t m_vecPosition2[0xC]; // 0x870 Vector
    std::uint8_t m_vecMoveAng[0xC]; // 0x87C QAngle
    std::uint8_t m_vecAngle1[0xC]; // 0x888 QAngle
    std::uint8_t m_vecAngle2[0xC]; // 0x894 QAngle
    std::uint8_t m_flHeight[0x4]; // 0x8A0 float32
    std::uint8_t m_hActivator[0x4]; // 0x8A4 CHandle<CBaseEntity>
    std::uint8_t m_vecFinalDest[0xC]; // 0x8A8 Vector
    std::uint8_t m_vecFinalAngle[0xC]; // 0x8B4 QAngle
    std::uint8_t m_movementType[0x8]; // 0x8C0 int32
    std::uint8_t m_sMaster[0x8]; // 0x8C8 CUtlSymbolLarge
};

struct CPulseServerCursor {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0xE8]; // 0x0
    std::uint8_t m_hActivator[0x4]; // 0xE8 CHandle<CBaseEntity>
    std::uint8_t m_hCaller[0x4]; // 0xEC CHandle<CBaseEntity>
};

struct CPulseCell_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_SequenceName[0x8]; // 0xD8 CUtlString
    std::uint8_t m_PulseAnimEvents[0x18]; // 0xE0 PulseNodeDynamicOutflows_t
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CInferno {
    static constexpr std::size_t size = 0x14D8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_firePositions[0x300]; // 0x850 VectorWS[64]
    std::uint8_t m_fireParentPositions[0x300]; // 0xB50 VectorWS[64]
    std::uint8_t m_bFireIsBurning[0x40]; // 0xE50 bool[64]
    std::uint8_t m_BurnNormal[0x300]; // 0xE90 Vector[64]
    std::uint8_t m_fireCount[0x4]; // 0x1190 int32
    std::uint8_t m_nInfernoType[0x4]; // 0x1194 int32
    std::uint8_t m_nFireEffectTickBegin[0x4]; // 0x1198 int32
    std::uint8_t m_nFireLifetime[0x4]; // 0x119C float32
    std::uint8_t m_bInPostEffectTime[0x1]; // 0x11A0 bool
    std::uint8_t m_bWasCreatedInSmoke[0x207]; // 0x11A1 bool
    std::uint8_t m_extent[0x18]; // 0x13A8 Extent
    std::uint8_t m_damageTimer[0x18]; // 0x13C0 CountdownTimer
    std::uint8_t m_damageRampTimer[0x18]; // 0x13D8 CountdownTimer
    std::uint8_t m_splashVelocity[0xC]; // 0x13F0 Vector
    std::uint8_t m_InitialSplashVelocity[0xC]; // 0x13FC Vector
    std::uint8_t m_startPos[0xC]; // 0x1408 VectorWS
    std::uint8_t m_vecOriginalSpawnLocation[0xC]; // 0x1414 VectorWS
    std::uint8_t m_activeTimer[0x10]; // 0x1420 IntervalTimer
    std::uint8_t m_fireSpawnOffset[0x4]; // 0x1430 int32
    std::uint8_t m_nMaxFlames[0x4]; // 0x1434 int32
    std::uint8_t m_nSpreadCount[0x8]; // 0x1438 int32
    std::uint8_t m_BookkeepingTimer[0x18]; // 0x1440 CountdownTimer
    std::uint8_t m_NextSpreadTimer[0x18]; // 0x1458 CountdownTimer
    std::uint8_t m_nSourceItemDefIndex[0x68]; // 0x1470 uint16
};

struct CTouchExpansionComponent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CPulseCell_Outflow_PlaySceneBase {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_OnFinished[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_Triggers[0x18]; // 0x120 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_LerpCameraSettings {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t m_flSeconds[0x4]; // 0x120 float32
    std::uint8_t m_Start[0x10]; // 0x124 PointCameraSettings_t
    std::uint8_t m_End[0x14]; // 0x134 PointCameraSettings_t
};

struct CWeaponSCAR20 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CFuncInteractionLayerClip {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x850 bool
    std::uint8_t m_iszInteractsAs[0x8]; // 0x858 CUtlSymbolLarge
    std::uint8_t m_iszInteractsWith[0x8]; // 0x860 CUtlSymbolLarge
};

struct CCSObserver_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSMinimapVolume {
    static constexpr std::size_t size = 0x9E8;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_strMinimapName[0x8]; // 0x9E0 CUtlString
};

struct CTriggerDetectBulletFire {
    static constexpr std::size_t size = 0x9E8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_bPlayerFireOnly[0x8]; // 0x9C8 bool
    std::uint8_t m_OnDetectedBulletFire[0x18]; // 0x9D0 CEntityIOOutput
};

struct CCSPlayer_UseServices {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_hLastKnownUseEntity[0x4]; // 0x48 CHandle<CBaseEntity>
    std::uint8_t m_flLastUseTimeStamp[0x4]; // 0x4C GameTime_t
    std::uint8_t m_flTimeLastUsedWindow[0x8]; // 0x50 GameTime_t
};

struct CWeaponAWP {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nCheckType[0x8]; // 0x48 PulseBestOutflowRules_t
    std::uint8_t m_OutflowList[0x18]; // 0x50 PulseSelectorOutflowList_t
};

struct CInfoFan {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4E8]; // 0x0
    std::uint8_t m_fFanForceMaxRadius[0x4]; // 0x4E8 float32
    std::uint8_t m_fFanForceMinRadius[0x4]; // 0x4EC float32
    std::uint8_t m_flCurveDistRange[0x8]; // 0x4F0 float32
    std::uint8_t m_FanForceCurveString[0x8]; // 0x4F8 CUtlSymbolLarge
};

struct CGameRules {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
    std::uint8_t m_szQuestName[0x80]; // 0x30 char[128]
    std::uint8_t m_nQuestPhase[0x4]; // 0xB0 int32
    std::uint8_t m_nLastMatchTime[0x4]; // 0xB4 uint32
    std::uint8_t m_nLastMatchTime_MatchID64[0x8]; // 0xB8 uint64
    std::uint8_t m_nTotalPausedTicks[0x4]; // 0xC0 int32
    std::uint8_t m_nPauseStartTick[0x4]; // 0xC4 int32
    std::uint8_t m_bGamePaused[0x8]; // 0xC8 bool
};

struct CPulseCell_ApplyDynamicAttributeEHandle {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CFish {
    static constexpr std::size_t size = 0xB50;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_pool[0x4]; // 0xA40 CHandle<CFishPool>
    std::uint8_t m_id[0x4]; // 0xA44 uint32
    std::uint8_t m_x[0x4]; // 0xA48 float32
    std::uint8_t m_y[0x4]; // 0xA4C float32
    std::uint8_t m_z[0x4]; // 0xA50 float32
    std::uint8_t m_angle[0x4]; // 0xA54 float32
    std::uint8_t m_angleChange[0x4]; // 0xA58 float32
    std::uint8_t m_forward[0xC]; // 0xA5C Vector
    std::uint8_t m_perp[0xC]; // 0xA68 Vector
    std::uint8_t m_poolOrigin[0xC]; // 0xA74 VectorWS
    std::uint8_t m_waterLevel[0x4]; // 0xA80 float32
    std::uint8_t m_speed[0x4]; // 0xA84 float32
    std::uint8_t m_desiredSpeed[0x4]; // 0xA88 float32
    std::uint8_t m_calmSpeed[0x4]; // 0xA8C float32
    std::uint8_t m_panicSpeed[0x4]; // 0xA90 float32
    std::uint8_t m_avoidRange[0x4]; // 0xA94 float32
    std::uint8_t m_turnTimer[0x18]; // 0xA98 CountdownTimer
    std::uint8_t m_turnClockwise[0x8]; // 0xAB0 bool
    std::uint8_t m_goTimer[0x18]; // 0xAB8 CountdownTimer
    std::uint8_t m_moveTimer[0x18]; // 0xAD0 CountdownTimer
    std::uint8_t m_panicTimer[0x18]; // 0xAE8 CountdownTimer
    std::uint8_t m_disperseTimer[0x18]; // 0xB00 CountdownTimer
    std::uint8_t m_proximityTimer[0x18]; // 0xB18 CountdownTimer
    std::uint8_t m_visible[0x20]; // 0xB30 CUtlVector<CFish*>
};

struct CCSBot {
    static constexpr std::size_t size = 0x5E38;
    std::uint8_t pad_0[0x108]; // 0x0
    std::uint8_t m_eyePosition[0xC]; // 0x108 VectorWS
    std::uint8_t m_name[0x40]; // 0x114 char[64]
    std::uint8_t m_combatRange[0x4]; // 0x154 float32
    std::uint8_t m_isRogue[0x8]; // 0x158 bool
    std::uint8_t m_rogueTimer[0x1C]; // 0x160 CountdownTimer
    std::uint8_t m_diedLastRound[0x4]; // 0x17C bool
    std::uint8_t m_safeTime[0x4]; // 0x180 float32
    std::uint8_t m_wasSafe[0x8]; // 0x184 bool
    std::uint8_t m_blindFire[0x4]; // 0x18C bool
    std::uint8_t m_surpriseTimer[0x18]; // 0x190 CountdownTimer
    std::uint8_t m_bAllowActive[0x1]; // 0x1A8 bool
    std::uint8_t m_isFollowing[0x3]; // 0x1A9 bool
    std::uint8_t m_leader[0x4]; // 0x1AC CHandle<CCSPlayerPawn>
    std::uint8_t m_followTimestamp[0x4]; // 0x1B0 float32
    std::uint8_t m_allowAutoFollowTime[0x4]; // 0x1B4 float32
    std::uint8_t m_hurryTimer[0x18]; // 0x1B8 CountdownTimer
    std::uint8_t m_alertTimer[0x18]; // 0x1D0 CountdownTimer
    std::uint8_t m_sneakTimer[0x18]; // 0x1E8 CountdownTimer
    std::uint8_t m_panicTimer[0x3C8]; // 0x200 CountdownTimer
    std::uint8_t m_stateTimestamp[0x4]; // 0x5C8 float32
    std::uint8_t m_isAttacking[0x1]; // 0x5CC bool
    std::uint8_t m_isOpeningDoor[0x7]; // 0x5CD bool
    std::uint8_t m_taskEntity[0x10]; // 0x5D4 CHandle<CBaseEntity>
    std::uint8_t m_goalPosition[0xC]; // 0x5E4 VectorWS
    std::uint8_t m_goalEntity[0x4]; // 0x5F0 CHandle<CBaseEntity>
    std::uint8_t m_avoid[0x4]; // 0x5F4 CHandle<CBaseEntity>
    std::uint8_t m_avoidTimestamp[0x4]; // 0x5F8 float32
    std::uint8_t m_isStopping[0x1]; // 0x5FC bool
    std::uint8_t m_hasVisitedEnemySpawn[0x3]; // 0x5FD bool
    std::uint8_t m_stillTimer[0x10]; // 0x600 IntervalTimer
    std::uint8_t m_bEyeAnglesUnderPathFinderControl[0x48F0]; // 0x610 bool
    std::uint8_t m_pathIndex[0x4]; // 0x4F00 int32
    std::uint8_t m_areaEnteredTimestamp[0x4]; // 0x4F04 GameTime_t
    std::uint8_t m_repathTimer[0x18]; // 0x4F08 CountdownTimer
    std::uint8_t m_avoidFriendTimer[0x18]; // 0x4F20 CountdownTimer
    std::uint8_t m_isFriendInTheWay[0x8]; // 0x4F38 bool
    std::uint8_t m_politeTimer[0x18]; // 0x4F40 CountdownTimer
    std::uint8_t m_isWaitingBehindFriend[0x2C]; // 0x4F58 bool
    std::uint8_t m_pathLadderEnd[0x4C]; // 0x4F84 float32
    std::uint8_t m_mustRunTimer[0x18]; // 0x4FD0 CountdownTimer
    std::uint8_t m_waitTimer[0x18]; // 0x4FE8 CountdownTimer
    std::uint8_t m_updateTravelDistanceTimer[0x18]; // 0x5000 CountdownTimer
    std::uint8_t m_playerTravelDistance[0x100]; // 0x5018 float32[64]
    std::uint8_t m_travelDistancePhase[0x198]; // 0x5118 uint8
    std::uint8_t m_hostageEscortCount[0x4]; // 0x52B0 uint8
    std::uint8_t m_hostageEscortCountTimestamp[0x4]; // 0x52B4 float32
    std::uint8_t m_desiredTeam[0x4]; // 0x52B8 int32
    std::uint8_t m_hasJoined[0x1]; // 0x52BC bool
    std::uint8_t m_isWaitingForHostage[0x3]; // 0x52BD bool
    std::uint8_t m_inhibitWaitingForHostageTimer[0x18]; // 0x52C0 CountdownTimer
    std::uint8_t m_waitForHostageTimer[0x18]; // 0x52D8 CountdownTimer
    std::uint8_t m_noisePosition[0xC]; // 0x52F0 VectorWS
    std::uint8_t m_noiseTravelDistance[0x4]; // 0x52FC float32
    std::uint8_t m_noiseTimestamp[0x8]; // 0x5300 float32
    std::uint8_t m_noiseSource[0x18]; // 0x5308 CCSPlayerPawn*
    std::uint8_t m_noiseBendTimer[0x18]; // 0x5320 CountdownTimer
    std::uint8_t m_bentNoisePosition[0xC]; // 0x5338 VectorWS
    std::uint8_t m_bendNoisePositionValid[0x4]; // 0x5344 bool
    std::uint8_t m_lookAroundStateTimestamp[0x4]; // 0x5348 float32
    std::uint8_t m_lookAheadAngle[0x4]; // 0x534C float32
    std::uint8_t m_lookUpAngle[0x4]; // 0x5350 float32
    std::uint8_t m_forwardAngle[0x4]; // 0x5354 float32
    std::uint8_t m_inhibitLookAroundTimestamp[0x8]; // 0x5358 float32
    std::uint8_t m_lookAtSpot[0x10]; // 0x5360 VectorWS
    std::uint8_t m_lookAtSpotDuration[0x4]; // 0x5370 float32
    std::uint8_t m_lookAtSpotTimestamp[0x4]; // 0x5374 float32
    std::uint8_t m_lookAtSpotAngleTolerance[0x4]; // 0x5378 float32
    std::uint8_t m_lookAtSpotClearIfClose[0x1]; // 0x537C bool
    std::uint8_t m_lookAtSpotAttack[0x3]; // 0x537D bool
    std::uint8_t m_lookAtDesc[0x8]; // 0x5380 char*
    std::uint8_t m_peripheralTimestamp[0x188]; // 0x5388 float32
    std::uint8_t m_approachPointCount[0x4]; // 0x5510 uint8
    std::uint8_t m_approachPointViewPosition[0xC]; // 0x5514 VectorWS
    std::uint8_t m_viewSteadyTimer[0x18]; // 0x5520 IntervalTimer
    std::uint8_t m_tossGrenadeTimer[0x20]; // 0x5538 CountdownTimer
    std::uint8_t m_isAvoidingGrenade[0x20]; // 0x5558 CountdownTimer
    std::uint8_t m_spotCheckTimestamp[0x408]; // 0x5578 float32
    std::uint8_t m_checkedHidingSpotCount[0x4]; // 0x5980 int32
    std::uint8_t m_lookPitch[0x4]; // 0x5984 float32
    std::uint8_t m_lookPitchVel[0x4]; // 0x5988 float32
    std::uint8_t m_lookYaw[0x4]; // 0x598C float32
    std::uint8_t m_lookYawVel[0x4]; // 0x5990 float32
    std::uint8_t m_targetSpot[0xC]; // 0x5994 VectorWS
    std::uint8_t m_targetSpotVelocity[0xC]; // 0x59A0 Vector
    std::uint8_t m_targetSpotPredicted[0xC]; // 0x59AC VectorWS
    std::uint8_t m_aimError[0xC]; // 0x59B8 QAngle
    std::uint8_t m_aimGoal[0xC]; // 0x59C4 QAngle
    std::uint8_t m_targetSpotTime[0x4]; // 0x59D0 GameTime_t
    std::uint8_t m_aimFocus[0x4]; // 0x59D4 float32
    std::uint8_t m_aimFocusInterval[0x4]; // 0x59D8 float32
    std::uint8_t m_aimFocusNextUpdate[0xC]; // 0x59DC GameTime_t
    std::uint8_t m_ignoreEnemiesTimer[0x18]; // 0x59E8 CountdownTimer
    std::uint8_t m_enemy[0x4]; // 0x5A00 CHandle<CCSPlayerPawn>
    std::uint8_t m_isEnemyVisible[0x1]; // 0x5A04 bool
    std::uint8_t m_visibleEnemyParts[0x3]; // 0x5A05 uint8
    std::uint8_t m_lastEnemyPosition[0xC]; // 0x5A08 VectorWS
    std::uint8_t m_lastSawEnemyTimestamp[0x4]; // 0x5A14 float32
    std::uint8_t m_firstSawEnemyTimestamp[0x4]; // 0x5A18 float32
    std::uint8_t m_currentEnemyAcquireTimestamp[0x4]; // 0x5A1C float32
    std::uint8_t m_enemyDeathTimestamp[0x4]; // 0x5A20 float32
    std::uint8_t m_friendDeathTimestamp[0x4]; // 0x5A24 float32
    std::uint8_t m_isLastEnemyDead[0x4]; // 0x5A28 bool
    std::uint8_t m_nearbyEnemyCount[0x20C]; // 0x5A2C int32
    std::uint8_t m_bomber[0x4]; // 0x5C38 CHandle<CCSPlayerPawn>
    std::uint8_t m_nearbyFriendCount[0x4]; // 0x5C3C int32
    std::uint8_t m_closestVisibleFriend[0x4]; // 0x5C40 CHandle<CCSPlayerPawn>
    std::uint8_t m_closestVisibleHumanFriend[0x4]; // 0x5C44 CHandle<CCSPlayerPawn>
    std::uint8_t m_attentionInterval[0x10]; // 0x5C48 IntervalTimer
    std::uint8_t m_attacker[0x4]; // 0x5C58 CHandle<CCSPlayerPawn>
    std::uint8_t m_attackedTimestamp[0x4]; // 0x5C5C float32
    std::uint8_t m_burnedByFlamesTimer[0x10]; // 0x5C60 IntervalTimer
    std::uint8_t m_lastVictimID[0x4]; // 0x5C70 int32
    std::uint8_t m_isAimingAtEnemy[0x1]; // 0x5C74 bool
    std::uint8_t m_isRapidFiring[0x3]; // 0x5C75 bool
    std::uint8_t m_equipTimer[0x10]; // 0x5C78 IntervalTimer
    std::uint8_t m_zoomTimer[0x18]; // 0x5C88 CountdownTimer
    std::uint8_t m_fireWeaponTimestamp[0x8]; // 0x5CA0 GameTime_t
    std::uint8_t m_lookForWeaponsOnGroundTimer[0x18]; // 0x5CA8 CountdownTimer
    std::uint8_t m_bIsSleeping[0x1]; // 0x5CC0 bool
    std::uint8_t m_isEnemySniperVisible[0x7]; // 0x5CC1 bool
    std::uint8_t m_sawEnemySniperTimer[0xB8]; // 0x5CC8 CountdownTimer
    std::uint8_t m_enemyQueueIndex[0x1]; // 0x5D80 uint8
    std::uint8_t m_enemyQueueCount[0x1]; // 0x5D81 uint8
    std::uint8_t m_enemyQueueAttendIndex[0x1]; // 0x5D82 uint8
    std::uint8_t m_isStuck[0x1]; // 0x5D83 bool
    std::uint8_t m_stuckTimestamp[0x4]; // 0x5D84 GameTime_t
    std::uint8_t m_stuckSpot[0x10]; // 0x5D88 VectorWS
    std::uint8_t m_wiggleTimer[0x18]; // 0x5D98 CountdownTimer
    std::uint8_t m_stuckJumpTimer[0x18]; // 0x5DB0 CountdownTimer
    std::uint8_t m_nextCleanupCheckTimestamp[0x4]; // 0x5DC8 GameTime_t
    std::uint8_t m_avgVel[0x28]; // 0x5DCC float32[10]
    std::uint8_t m_avgVelIndex[0x4]; // 0x5DF4 int32
    std::uint8_t m_avgVelCount[0x4]; // 0x5DF8 int32
    std::uint8_t m_lastOrigin[0x10]; // 0x5DFC VectorWS
    std::uint8_t m_lastRadioRecievedTimestamp[0x4]; // 0x5E0C float32
    std::uint8_t m_lastRadioSentTimestamp[0x4]; // 0x5E10 float32
    std::uint8_t m_radioSubject[0x4]; // 0x5E14 CHandle<CCSPlayerPawn>
    std::uint8_t m_radioPosition[0xC]; // 0x5E18 VectorWS
    std::uint8_t m_voiceEndTimestamp[0xC]; // 0x5E24 float32
    std::uint8_t m_lastValidReactionQueueFrame[0x8]; // 0x5E30 int32
};

struct CHandleTest {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_Handle[0x4]; // 0x4A8 CHandle<CBaseEntity>
    std::uint8_t m_bSendHandle[0x4]; // 0x4AC bool
};

struct CLogicNPCCounter {
    static constexpr std::size_t size = 0x728;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnMinCountAll[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnMaxCountAll[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_OnFactorAll[0x20]; // 0x4D8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinPlayerDistAll[0x20]; // 0x4F8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinCount_1[0x18]; // 0x518 CEntityIOOutput
    std::uint8_t m_OnMaxCount_1[0x18]; // 0x530 CEntityIOOutput
    std::uint8_t m_OnFactor_1[0x20]; // 0x548 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinPlayerDist_1[0x20]; // 0x568 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinCount_2[0x18]; // 0x588 CEntityIOOutput
    std::uint8_t m_OnMaxCount_2[0x18]; // 0x5A0 CEntityIOOutput
    std::uint8_t m_OnFactor_2[0x20]; // 0x5B8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinPlayerDist_2[0x20]; // 0x5D8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinCount_3[0x18]; // 0x5F8 CEntityIOOutput
    std::uint8_t m_OnMaxCount_3[0x18]; // 0x610 CEntityIOOutput
    std::uint8_t m_OnFactor_3[0x20]; // 0x628 CEntityOutputTemplate<float32>
    std::uint8_t m_OnMinPlayerDist_3[0x20]; // 0x648 CEntityOutputTemplate<float32>
    std::uint8_t m_hSource[0x8]; // 0x668 CEntityHandle
    std::uint8_t m_iszSourceEntityName[0x8]; // 0x670 CUtlSymbolLarge
    std::uint8_t m_flDistanceMax[0x4]; // 0x678 float32
    std::uint8_t m_bDisabled[0x4]; // 0x67C bool
    std::uint8_t m_nMinCountAll[0x4]; // 0x680 int32
    std::uint8_t m_nMaxCountAll[0x4]; // 0x684 int32
    std::uint8_t m_nMinFactorAll[0x4]; // 0x688 int32
    std::uint8_t m_nMaxFactorAll[0xC]; // 0x68C int32
    std::uint8_t m_iszNPCClassname_1[0x8]; // 0x698 CUtlSymbolLarge
    std::uint8_t m_nNPCState_1[0x4]; // 0x6A0 int32
    std::uint8_t m_bInvertState_1[0x4]; // 0x6A4 bool
    std::uint8_t m_nMinCount_1[0x4]; // 0x6A8 int32
    std::uint8_t m_nMaxCount_1[0x4]; // 0x6AC int32
    std::uint8_t m_nMinFactor_1[0x4]; // 0x6B0 int32
    std::uint8_t m_nMaxFactor_1[0x8]; // 0x6B4 int32
    std::uint8_t m_flDefaultDist_1[0x4]; // 0x6BC float32
    std::uint8_t m_iszNPCClassname_2[0x8]; // 0x6C0 CUtlSymbolLarge
    std::uint8_t m_nNPCState_2[0x4]; // 0x6C8 int32
    std::uint8_t m_bInvertState_2[0x4]; // 0x6CC bool
    std::uint8_t m_nMinCount_2[0x4]; // 0x6D0 int32
    std::uint8_t m_nMaxCount_2[0x4]; // 0x6D4 int32
    std::uint8_t m_nMinFactor_2[0x4]; // 0x6D8 int32
    std::uint8_t m_nMaxFactor_2[0x8]; // 0x6DC int32
    std::uint8_t m_flDefaultDist_2[0x4]; // 0x6E4 float32
    std::uint8_t m_iszNPCClassname_3[0x8]; // 0x6E8 CUtlSymbolLarge
    std::uint8_t m_nNPCState_3[0x4]; // 0x6F0 int32
    std::uint8_t m_bInvertState_3[0x4]; // 0x6F4 bool
    std::uint8_t m_nMinCount_3[0x4]; // 0x6F8 int32
    std::uint8_t m_nMaxCount_3[0x4]; // 0x6FC int32
    std::uint8_t m_nMinFactor_3[0x4]; // 0x700 int32
    std::uint8_t m_nMaxFactor_3[0x8]; // 0x704 int32
    std::uint8_t m_flDefaultDist_3[0x1C]; // 0x70C float32
};

struct CCSPlayer_RadioServices {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_flGotHostageTalkTimer[0x4]; // 0x48 GameTime_t
    std::uint8_t m_flDefusingTalkTimer[0x4]; // 0x4C GameTime_t
    std::uint8_t m_flC4PlantTalkTimer[0x4]; // 0x50 GameTime_t
    std::uint8_t m_flRadioTokenSlots[0xC]; // 0x54 GameTime_t[3]
    std::uint8_t m_bIgnoreRadio[0x8]; // 0x60 bool
};

struct CWeaponSG556 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CRagdollConstraint {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_xmin[0x4]; // 0x508 float32
    std::uint8_t m_xmax[0x4]; // 0x50C float32
    std::uint8_t m_ymin[0x4]; // 0x510 float32
    std::uint8_t m_ymax[0x4]; // 0x514 float32
    std::uint8_t m_zmin[0x4]; // 0x518 float32
    std::uint8_t m_zmax[0x4]; // 0x51C float32
    std::uint8_t m_xfriction[0x4]; // 0x520 float32
    std::uint8_t m_yfriction[0x4]; // 0x524 float32
    std::uint8_t m_zfriction[0x8]; // 0x528 float32
};

struct CFuncVehicleClip {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CDEagle {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CWeaponFamas {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CEnvSplash {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flScale[0x8]; // 0x4A8 float32
};

struct CPointCameraVFOV {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_flVerticalFOV[0x8]; // 0x508 float32
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
    std::uint8_t pad_0[0x8D0]; // 0x0
    std::uint8_t m_authoredPosition[0x4]; // 0x8D0 MoveLinearAuthoredPos_t
    std::uint8_t m_angMoveEntitySpace[0xC]; // 0x8D4 QAngle
    std::uint8_t m_vecMoveDirParentSpace[0x10]; // 0x8E0 Vector
    std::uint8_t m_soundStart[0x8]; // 0x8F0 CGameSoundEventName
    std::uint8_t m_soundStop[0x8]; // 0x8F8 CGameSoundEventName
    std::uint8_t m_currentSound[0x8]; // 0x900 CUtlSymbolLarge
    std::uint8_t m_flBlockDamage[0x4]; // 0x908 float32
    std::uint8_t m_flStartPosition[0xC]; // 0x90C float32
    std::uint8_t m_OnFullyOpen[0x18]; // 0x918 CEntityIOOutput
    std::uint8_t m_OnFullyClosed[0x18]; // 0x930 CEntityIOOutput
    std::uint8_t m_flSpeed[0x4]; // 0x948 float32
    std::uint8_t m_bCreateMovableNavMesh[0x1]; // 0x94C bool
    std::uint8_t m_bAllowMovableNavMeshDockingOnEntireEntity[0x1]; // 0x94D bool
    std::uint8_t m_bCreateNavObstacle[0xA]; // 0x94E bool
};

struct CPrecipitationVData {
    static constexpr std::size_t size = 0x2F0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_szParticlePrecipitationEffect[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szParticlePrecipitationPuddleEffect[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szParticlePrecipitationPostEffect[0xE0]; // 0x1E8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_flInnerDistance[0x4]; // 0x2C8 float32
    std::uint8_t m_nAttachType[0x4]; // 0x2CC ParticleAttachment_t
    std::uint8_t m_bBatchSameVolumeType[0x4]; // 0x2D0 bool
    std::uint8_t m_nRTEnvCP[0x4]; // 0x2D4 int32
    std::uint8_t m_nRTEnvCPComponent[0x8]; // 0x2D8 int32
    std::uint8_t m_szModifier[0x8]; // 0x2E0 CUtlString
    std::uint8_t m_nUseSnapshotFromSurfaceGraph[0x4]; // 0x2E8 int32
    std::uint8_t m_snapshotFilter[0x4]; // 0x2EC PrecipitationFilter_t
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_OnTrue[0x48]; // 0x168 CPulse_ResumePoint
};

struct CScriptItem {
    static constexpr std::size_t size = 0xAF0;
    std::uint8_t pad_0[0xAE0]; // 0x0
    std::uint8_t m_MoveTypeOverride[0x10]; // 0xAE0 MoveType_t
};

struct CDynamicPropAlias_prop_dynamic_override {
    static constexpr std::size_t size = 0xC90;
    std::uint8_t pad_0[0xC90]; // 0x0
};

struct CBaseTrigger {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x8D0]; // 0x0
    std::uint8_t m_OnStartTouch[0x18]; // 0x8D0 CEntityIOOutput
    std::uint8_t m_OnStartTouchAll[0x18]; // 0x8E8 CEntityIOOutput
    std::uint8_t m_OnEndTouch[0x18]; // 0x900 CEntityIOOutput
    std::uint8_t m_OnEndTouchAll[0x18]; // 0x918 CEntityIOOutput
    std::uint8_t m_OnTouching[0x18]; // 0x930 CEntityIOOutput
    std::uint8_t m_OnTouchingEachEntity[0x18]; // 0x948 CEntityIOOutput
    std::uint8_t m_OnNotTouching[0x18]; // 0x960 CEntityIOOutput
    std::uint8_t m_OnTouchingChanged[0x18]; // 0x978 CEntityIOOutput
    std::uint8_t m_hTouchingEntities[0x18]; // 0x990 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_iFilterName[0x8]; // 0x9A8 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x4]; // 0x9B0 CHandle<CBaseFilter>
    std::uint8_t m_bDisabled[0xC]; // 0x9B4 bool
    std::uint8_t m_bUseAsyncQueries[0x8]; // 0x9C0 bool
};

struct CPointPush {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bEnabled[0x4]; // 0x4A8 bool
    std::uint8_t m_flMagnitude[0x4]; // 0x4AC float32
    std::uint8_t m_flRadius[0x4]; // 0x4B0 float32
    std::uint8_t m_flInnerRadius[0x4]; // 0x4B4 float32
    std::uint8_t m_flConeOfInfluence[0x8]; // 0x4B8 float32
    std::uint8_t m_iszFilterName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x8]; // 0x4C8 CHandle<CBaseFilter>
};

struct CPulseCell_Step_EntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Input[0x8]; // 0x48 CUtlString
};

struct CCSObserver_ObserverServices {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CPlayerPing {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_hPlayer[0x4]; // 0x4B0 CHandle<CCSPlayerPawn>
    std::uint8_t m_hPingedEntity[0x4]; // 0x4B4 CHandle<CBaseEntity>
    std::uint8_t m_iType[0x4]; // 0x4B8 int32
    std::uint8_t m_bUrgent[0x1]; // 0x4BC bool
    std::uint8_t m_szPlaceName[0x13]; // 0x4BD char[18]
};

struct CHitboxComponent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_flBoundsExpandRadius[0x4]; // 0x14 float32
};

struct CRopeKeyframe {
    static constexpr std::size_t size = 0x8A8;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_RopeFlags[0x8]; // 0x858 uint16
    std::uint8_t m_iNextLinkName[0x8]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_Slack[0x4]; // 0x868 int16
    std::uint8_t m_Width[0x4]; // 0x86C float32
    std::uint8_t m_TextureScale[0x4]; // 0x870 float32
    std::uint8_t m_nSegments[0x1]; // 0x874 uint8
    std::uint8_t m_bConstrainBetweenEndpoints[0x3]; // 0x875 bool
    std::uint8_t m_strRopeMaterialModel[0x8]; // 0x878 CUtlSymbolLarge
    std::uint8_t m_iRopeMaterialModelIndex[0x8]; // 0x880 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_Subdiv[0x1]; // 0x888 uint8
    std::uint8_t m_nChangeCount[0x1]; // 0x889 uint8
    std::uint8_t m_RopeLength[0x2]; // 0x88A int16
    std::uint8_t m_fLockedPoints[0x1]; // 0x88C uint8
    std::uint8_t m_bCreatedFromMapFile[0x3]; // 0x88D bool
    std::uint8_t m_flScrollSpeed[0x4]; // 0x890 float32
    std::uint8_t m_bStartPointValid[0x1]; // 0x894 bool
    std::uint8_t m_bEndPointValid[0x3]; // 0x895 bool
    std::uint8_t m_hStartPoint[0x4]; // 0x898 CHandle<CBaseEntity>
    std::uint8_t m_hEndPoint[0x4]; // 0x89C CHandle<CBaseEntity>
    std::uint8_t m_iStartAttachment[0x1]; // 0x8A0 AttachmentHandle_t
    std::uint8_t m_iEndAttachment[0x7]; // 0x8A1 AttachmentHandle_t
};

struct CSmokeGrenade {
    static constexpr std::size_t size = 0x12D0;
    std::uint8_t pad_0[0x12D0]; // 0x0
};

struct CBaseCombatCharacter {
    static constexpr std::size_t size = 0xB10;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_bForceServerRagdoll[0x8]; // 0xA40 bool
    std::uint8_t m_hMyWearables[0x18]; // 0xA48 CNetworkUtlVectorBase<CHandle<CEconWearable>>
    std::uint8_t m_impactEnergyScale[0x4]; // 0xA60 float32
    std::uint8_t m_bApplyStressDamage[0x1]; // 0xA64 bool
    std::uint8_t m_bDeathEventsDispatched[0x43]; // 0xA65 bool
    std::uint8_t m_vecRelationships[0x18]; // 0xAA8 CUtlVector<RelationshipOverride_t>
    std::uint8_t m_strRelationships[0x8]; // 0xAC0 CUtlSymbolLarge
    std::uint8_t m_eHull[0x4]; // 0xAC8 Hull_t
    std::uint8_t m_nNavHullIdx[0x4]; // 0xACC uint32
    std::uint8_t m_movementStats[0x40]; // 0xAD0 CMovementStatsProperty
};

struct CLogicGameStateReport {
    static constexpr std::size_t size = 0x570;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0xC8]; // 0x4A8 bool
};

struct ServerAuthoritativeWeaponSlot_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t unClass[0x2]; // 0x30 uint16
    std::uint8_t unSlot[0x2]; // 0x32 uint16
    std::uint8_t unItemDefIdx[0x4]; // 0x34 uint16
};

struct CPathQueryComponent {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0xA0]; // 0x0
};

struct CLogicRelay {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnSpawn[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnTrigger[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_bDisabled[0x1]; // 0x4D8 bool
    std::uint8_t m_bWaitForRefire[0x1]; // 0x4D9 bool
    std::uint8_t m_bTriggerOnce[0x1]; // 0x4DA bool
    std::uint8_t m_bFastRetrigger[0x1]; // 0x4DB bool
    std::uint8_t m_bPassthoughCaller[0x4]; // 0x4DC bool
};

struct SequenceHistory_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_hSequence[0x4]; // 0x0 HSequence
    std::uint8_t m_flSeqStartTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_flSeqFixedCycle[0x4]; // 0x8 float32
    std::uint8_t m_nSeqLoopMode[0x4]; // 0xC AnimLoopMode_t
    std::uint8_t m_flPlaybackRate[0x4]; // 0x10 float32
    std::uint8_t m_flCyclesPerSecond[0x4]; // 0x14 float32
};

struct CPlayer_ItemServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_SourceOutflowName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nDestChunk[0x4]; // 0x10 PulseRuntimeChunkIndex_t
    std::uint8_t m_nInstruction[0x4]; // 0x14 int32
    std::uint8_t m_OutflowRegisterMap[0x30]; // 0x18 PulseRegisterMap_t
};

struct CTestPulseIO {
    static constexpr std::size_t size = 0x7A0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnVariantVoid[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnVariantBool[0x20]; // 0x4C0 CEntityOutputTemplate<bool>
    std::uint8_t m_OnVariantInt[0x20]; // 0x4E0 CEntityOutputTemplate<int32>
    std::uint8_t m_OnVariantFloat[0x20]; // 0x500 CEntityOutputTemplate<float32>
    std::uint8_t m_OnVariantString[0x20]; // 0x520 CEntityOutputTemplate<CUtlSymbolLarge>
    std::uint8_t m_OnVariantColor[0x20]; // 0x540 CEntityOutputTemplate<Color>
    std::uint8_t m_OnVariantVector[0x28]; // 0x560 CEntityOutputTemplate<Vector>
    std::uint8_t m_bAllowEmptyInputs[0x8]; // 0x588 bool
    std::uint8_t m_TestComponent[0x30]; // 0x590 CTestPulseIOComponent_Derived
    std::uint8_t m_OnInternalTestVoid[0x18]; // 0x5C0 CEntityIOOutput
    std::uint8_t m_OnInternalTestBool[0x20]; // 0x5D8 CEntityOutputTemplate<bool>
    std::uint8_t m_OnInternalTestInt[0x20]; // 0x5F8 CEntityOutputTemplate<int32>
    std::uint8_t m_OnInternalTestFloat[0x20]; // 0x618 CEntityOutputTemplate<float32>
    std::uint8_t m_OnInternalTestString[0x20]; // 0x638 CEntityOutputTemplate<CUtlSymbolLarge>
    std::uint8_t m_OnInternalTestColor[0x20]; // 0x658 CEntityOutputTemplate<Color>
    std::uint8_t m_OnInternalTestVector[0x28]; // 0x678 CEntityOutputTemplate<Vector>
    std::uint8_t m_OnInternalTestEntityName[0x20]; // 0x6A0 CEntityOutputTemplate<CEntityNameString>
    std::uint8_t m_OnInternalTestEntityHandle[0x20]; // 0x6C0 CEntityOutputTemplate<CHandle<CBaseEntity>>
    std::uint8_t m_OnInternalTestSchemaEnum[0x20]; // 0x6E0 CEntityOutputTemplate<TestInputOutputCombinationsEnum_t>
    std::uint8_t m_OnInternalTestFloatString[0x28]; // 0x700 CEntityOutputTemplate<CTestPulseIO::FloatStringArgs_t>
    std::uint8_t m_OnInternalTestEntityNameString[0x28]; // 0x728 CEntityOutputTemplate<CTestPulseIO::EntityNameStringArgs_t>
    std::uint8_t m_OnInternalTestEntityHandleInt[0x20]; // 0x750 CEntityOutputTemplate<CTestPulseIO::EntityHandleIntArgs_t>
    std::uint8_t m_OnInternalTestStringStringString[0x30]; // 0x770 CEntityOutputTemplate<CTestPulseIO::ThreeStringArgs_t>
};

struct CWeaponUMP45 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CGamePlayerEquip {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x878]; // 0x0
};

struct CPointEntityFinder {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hEntity[0x8]; // 0x4A8 CHandle<CBaseEntity>
    std::uint8_t m_iFilterName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x8]; // 0x4B8 CHandle<CBaseFilter>
    std::uint8_t m_iRefName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_hReference[0x4]; // 0x4C8 CHandle<CBaseEntity>
    std::uint8_t m_FindMethod[0x4]; // 0x4CC EntFinderMethod_t
    std::uint8_t m_OnFoundEntity[0x18]; // 0x4D0 CEntityIOOutput
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1C0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_DomainIdentifier[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_DomainSubType[0x18]; // 0x18 CPulseValueFullType
    std::uint8_t m_ParentMapName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_ParentXmlName[0x10]; // 0x40 PulseSymbol_t
    std::uint8_t m_Chunks[0x18]; // 0x50 CUtlVector<CPulse_Chunk*>
    std::uint8_t m_Cells[0x18]; // 0x68 CUtlVector<CPulseCell_Base*>
    std::uint8_t m_Vars[0x18]; // 0x80 CUtlVector<CPulse_Variable>
    std::uint8_t m_TempVarBanks[0x18]; // 0x98 CUtlVector<CPulse_TempVarBankDefinition*>
    std::uint8_t m_PublicOutputs[0x18]; // 0xB0 CUtlVector<CPulse_PublicOutput>
    std::uint8_t m_InvokeBindings[0x18]; // 0xC8 CUtlVector<CPulse_InvokeBinding*>
    std::uint8_t m_CallInfos[0x18]; // 0xE0 CUtlVector<CPulse_CallInfo*>
    std::uint8_t m_Constants[0x18]; // 0xF8 CUtlVector<CPulse_Constant>
    std::uint8_t m_DomainValues[0x18]; // 0x110 CUtlVector<CPulse_DomainValue>
    std::uint8_t m_BlackboardReferences[0x18]; // 0x128 CUtlVector<CPulse_BlackboardReference>
    std::uint8_t m_OutputConnections[0x80]; // 0x140 CUtlVector<CPulse_OutputConnection*>
};

struct CKnife {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t m_bFirstAttack[0x10]; // 0x1280 bool
};

struct CCSGO_TeamIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CHostageRescueZoneShim {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
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
    std::uint8_t m_hCarriedHostage[0x4]; // 0x48 CHandle<CBaseEntity>
    std::uint8_t m_hCarriedHostageProp[0x4]; // 0x4C CHandle<CBaseEntity>
};

struct CRenderComponent {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t __m_pChainEntity[0x40]; // 0x10 CNetworkVarChainer
    std::uint8_t m_bIsRenderingWithViewModels[0x4]; // 0x50 bool
    std::uint8_t m_nSplitscreenFlags[0x4]; // 0x54 uint32
    std::uint8_t m_bEnableRendering[0x50]; // 0x58 bool
    std::uint8_t m_bInterpolationReadyToDraw[0x8]; // 0xA8 bool
};

struct CWaterBullet {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0xA40]; // 0x0
};

struct CTriggerSoundscape {
    static constexpr std::size_t size = 0x9F0;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_hSoundscape[0x8]; // 0x9C8 CHandle<CEnvSoundscapeTriggerable>
    std::uint8_t m_SoundscapeName[0x8]; // 0x9D0 CUtlSymbolLarge
    std::uint8_t m_spectators[0x18]; // 0x9D8 CUtlVector<CHandle<CBasePlayerPawn>>
};

struct CPulseCell_Outflow_PlayVOLine__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_sceneInstance[0x4]; // 0x0 CHandle<CBaseEntity>
};

struct CHostageExpresserShim {
    static constexpr std::size_t size = 0xB20;
    std::uint8_t pad_0[0xB10]; // 0x0
    std::uint8_t m_pExpresser[0x10]; // 0xB10 CAI_Expresser*
};

struct CPointChildModifier {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bOrphanInsteadOfDeletingChildrenOnRemove[0x8]; // 0x4A8 bool
};

struct CCSPlayerLegacyJump {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bOldJumpPressed[0x4]; // 0x10 bool
    std::uint8_t m_flJumpPressedTime[0x4]; // 0x14 float32
};

struct CWeaponHKP2000 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CShatterGlassShardPhysics {
    static constexpr std::size_t size = 0x8E0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_hParentShard[0x8]; // 0x850 uint32
    std::uint8_t m_ShardDesc[0x80]; // 0x858 shard_model_desc_t
    std::uint8_t m_nPoolState[0x4]; // 0x8D8 ShatterGlassEntityPoolState_t
    std::uint8_t m_bTouchedByPlayer[0x4]; // 0x8DC bool
};

struct CPathParticleRope {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_bStartActive[0x4]; // 0x4B0 bool
    std::uint8_t m_flMaxSimulationTime[0x4]; // 0x4B4 float32
    std::uint8_t m_iszEffectName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_PathNodes_Name[0x18]; // 0x4C0 CUtlVector<CUtlSymbolLarge>
    std::uint8_t m_flParticleSpacing[0x4]; // 0x4D8 float32
    std::uint8_t m_flSlack[0x4]; // 0x4DC float32
    std::uint8_t m_flRadius[0x4]; // 0x4E0 float32
    std::uint8_t m_ColorTint[0x4]; // 0x4E4 Color
    std::uint8_t m_nEffectState[0x8]; // 0x4E8 int32
    std::uint8_t m_iEffectIndex[0x8]; // 0x4F0 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_PathNodes_Position[0x18]; // 0x4F8 CNetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_TangentIn[0x18]; // 0x510 CNetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_TangentOut[0x18]; // 0x528 CNetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_Color[0x18]; // 0x540 CNetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_PinEnabled[0x18]; // 0x558 CNetworkUtlVectorBase<bool>
    std::uint8_t m_PathNodes_RadiusScale[0x20]; // 0x570 CNetworkUtlVectorBase<float32>
};

struct CCredits {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnCreditsDone[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_bRolledOutroCredits[0x4]; // 0x4C0 bool
    std::uint8_t m_flLogoLength[0x4]; // 0x4C4 float32
};

struct CWeaponFiveSeven {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CFishPool {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4B8]; // 0x0
    std::uint8_t m_fishCount[0x4]; // 0x4B8 int32
    std::uint8_t m_maxRange[0x4]; // 0x4BC float32
    std::uint8_t m_swimDepth[0x4]; // 0x4C0 float32
    std::uint8_t m_waterLevel[0x4]; // 0x4C4 float32
    std::uint8_t m_isDormant[0x8]; // 0x4C8 bool
    std::uint8_t m_fishes[0x18]; // 0x4D0 CUtlVector<CHandle<CFish>>
    std::uint8_t m_visTimer[0x18]; // 0x4E8 CountdownTimer
};

struct CPlayer_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nImpulse[0x8]; // 0x48 int32
    std::uint8_t m_nButtons[0x20]; // 0x50 CInButtonState
    std::uint8_t m_nQueuedButtonDownMask[0x8]; // 0x70 uint64
    std::uint8_t m_nQueuedButtonChangeMask[0x8]; // 0x78 uint64
    std::uint8_t m_nButtonDoublePressed[0x8]; // 0x80 uint64
    std::uint8_t m_pButtonPressedCmdNumber[0x100]; // 0x88 uint32[64]
    std::uint8_t m_nLastCommandNumberProcessed[0x8]; // 0x188 uint32
    std::uint8_t m_nToggleButtonDownMask[0x10]; // 0x190 uint64
    std::uint8_t m_flCmdForwardMove[0x4]; // 0x1A0 float32
    std::uint8_t m_flCmdLeftMove[0x4]; // 0x1A4 float32
    std::uint8_t m_flCmdUpMove[0x4]; // 0x1A8 float32
    std::uint8_t m_flMaxspeed[0x4]; // 0x1AC float32
    std::uint8_t m_arrForceSubtickMoveWhen[0x10]; // 0x1B0 float32[4]
    std::uint8_t m_flForwardMove[0x4]; // 0x1C0 float32
    std::uint8_t m_flLeftMove[0x4]; // 0x1C4 float32
    std::uint8_t m_flUpMove[0x4]; // 0x1C8 float32
    std::uint8_t m_vecLastMovementImpulses[0x74]; // 0x1CC Vector
    std::uint8_t m_vecOldViewAngles[0x18]; // 0x240 QAngle
};

struct CRagdollPropAlias_physics_prop_ragdoll {
    static constexpr std::size_t size = 0xC00;
    std::uint8_t pad_0[0xC00]; // 0x0
};

struct CBreakableProp {
    static constexpr std::size_t size = 0xBD0;
    std::uint8_t pad_0[0xA78]; // 0x0
    std::uint8_t m_CPropDataComponent[0x40]; // 0xA78 CPropDataComponent
    std::uint8_t m_OnStartDeath[0x18]; // 0xAB8 CEntityIOOutput
    std::uint8_t m_OnBreak[0x18]; // 0xAD0 CEntityIOOutput
    std::uint8_t m_OnHealthChanged[0x20]; // 0xAE8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnTakeDamage[0x18]; // 0xB08 CEntityIOOutput
    std::uint8_t m_impactEnergyScale[0x4]; // 0xB20 float32
    std::uint8_t m_iMinHealthDmg[0x4]; // 0xB24 int32
    std::uint8_t m_preferredCarryAngles[0xC]; // 0xB28 QAngle
    std::uint8_t m_flPressureDelay[0x4]; // 0xB34 float32
    std::uint8_t m_flDefBurstScale[0x4]; // 0xB38 float32
    std::uint8_t m_vDefBurstOffset[0xC]; // 0xB3C Vector
    std::uint8_t m_hBreaker[0x4]; // 0xB48 CHandle<CBaseEntity>
    std::uint8_t m_PerformanceMode[0x4]; // 0xB4C PerformanceMode_t
    std::uint8_t m_flPreventDamageBeforeTime[0x4]; // 0xB50 GameTime_t
    std::uint8_t m_BreakableContentsType[0x4]; // 0xB54 BreakableContentsType_t
    std::uint8_t m_strBreakableContentsPropGroupOverride[0x8]; // 0xB58 CUtlString
    std::uint8_t m_strBreakableContentsParticleOverride[0x8]; // 0xB60 CUtlString
    std::uint8_t m_bHasBreakPiecesOrCommands[0x4]; // 0xB68 bool
    std::uint8_t m_explodeDamage[0x4]; // 0xB6C float32
    std::uint8_t m_explodeRadius[0x8]; // 0xB70 float32
    std::uint8_t m_sExplosionType[0x8]; // 0xB78 CGlobalSymbol
    std::uint8_t m_explosionDelay[0x8]; // 0xB80 float32
    std::uint8_t m_explosionBuildupSound[0x8]; // 0xB88 CUtlSymbolLarge
    std::uint8_t m_explosionCustomEffect[0x8]; // 0xB90 CUtlSymbolLarge
    std::uint8_t m_explosionCustomSound[0x8]; // 0xB98 CUtlSymbolLarge
    std::uint8_t m_explosionModifier[0x8]; // 0xBA0 CUtlSymbolLarge
    std::uint8_t m_hPhysicsAttacker[0x4]; // 0xBA8 CHandle<CBasePlayerPawn>
    std::uint8_t m_flLastPhysicsInfluenceTime[0x4]; // 0xBAC GameTime_t
    std::uint8_t m_flDefaultFadeScale[0x4]; // 0xBB0 float32
    std::uint8_t m_hLastAttacker[0x4]; // 0xBB4 CHandle<CBaseEntity>
    std::uint8_t m_iszPuntSound[0x8]; // 0xBB8 CUtlSymbolLarge
    std::uint8_t m_bUsePuntSound[0x1]; // 0xBC0 bool
    std::uint8_t m_bOriginalBlockLOS[0xF]; // 0xBC1 bool
};

struct CLightEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_CLightComponent[0x8]; // 0x850 CLightComponent*
};

struct CInfoDynamicShadowHintBox {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_vBoxMins[0xC]; // 0x4C0 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x4CC Vector
};

struct CBaseAnimGraphController {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nAnimationAlgorithm[0x4]; // 0x18 AnimationAlgorithm_t
    std::uint8_t m_nNextExternalGraphHandle[0x4]; // 0x1C ExternalAnimGraphHandle_t
    std::uint8_t m_vecSecondarySkeletonSlotIDs[0x18]; // 0x20 CNetworkUtlVectorBase<CGlobalSymbol>
    std::uint8_t m_vecSecondarySkeletons[0x18]; // 0x38 CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
    std::uint8_t m_nSecondarySkeletonMasterCount[0x4]; // 0x50 int32
    std::uint8_t m_flSoundSyncTime[0x4]; // 0x54 float32
    std::uint8_t m_nActiveIKChainMask[0x4]; // 0x58 uint32
    std::uint8_t m_hSequence[0x4]; // 0x5C HSequence
    std::uint8_t m_flSeqStartTime[0x4]; // 0x60 GameTime_t
    std::uint8_t m_flSeqFixedCycle[0x4]; // 0x64 float32
    std::uint8_t m_nAnimLoopMode[0x4]; // 0x68 AnimLoopMode_t
    std::uint8_t m_flPlaybackRate[0xC]; // 0x6C CNetworkedQuantizedFloat
    std::uint8_t m_nNotifyState[0x1]; // 0x78 SequenceFinishNotifyState_t
    std::uint8_t m_bNetworkedAnimationInputsChanged[0x1]; // 0x79 bool
    std::uint8_t m_bNetworkedSequenceChanged[0x1]; // 0x7A bool
    std::uint8_t m_bLastUpdateSkipped[0x1]; // 0x7B bool
    std::uint8_t m_bSequenceFinished[0x4]; // 0x7C bool
    std::uint8_t m_nPrevAnimUpdateTick[0x2A0]; // 0x80 GameTick_t
    std::uint8_t m_hGraphDefinitionAG2[0x8]; // 0x320 CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
    std::uint8_t m_SerializePoseRecipeAG2Slots[0x68]; // 0x328 CUtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
    std::uint8_t m_SerializePoseRecipeAG2Dynamic[0x18]; // 0x390 CNetworkUtlVectorBase<uint8>
    std::uint8_t m_nSerializePoseRecipeAG2ActiveSlot[0x4]; // 0x3A8 uint32
    std::uint8_t m_nSerializePoseRecipeVersionAG2[0x14]; // 0x3AC int32
    std::uint8_t m_nServerGraphInstanceIteration[0x4]; // 0x3C0 int32
    std::uint8_t m_nServerSerializationContextIteration[0x4]; // 0x3C4 int32
    std::uint8_t m_primaryGraphId[0x8]; // 0x3C8 ResourceId_t
    std::uint8_t m_vecExternalGraphIds[0x18]; // 0x3D0 CNetworkUtlVectorBase<ResourceId_t>
    std::uint8_t m_vecExternalClipIds[0x18]; // 0x3E8 CNetworkUtlVectorBase<ResourceId_t>
    std::uint8_t m_sAnimGraph2Identifier[0x8]; // 0x400 CGlobalSymbol
    std::uint8_t m_pGraphInstanceAG2[0x220]; // 0x408 CAnimGraph2InstancePtr
    std::uint8_t m_vecExternalGraphs[0x28]; // 0x628 CExternalAnimGraphList
};

struct AnimGraph2SerializedPoseRecipeSlot_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_topology[0x10]; // 0x30 CUtlBinaryBlock
};

struct CBuoyancyHelper {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pController[0x10]; // 0x8 IPhysicsMotionController*
    std::uint8_t m_nFluidType[0x4]; // 0x18 CUtlStringToken
    std::uint8_t m_flFluidDensity[0x4]; // 0x1C float32
    std::uint8_t m_flNeutrallyBuoyantGravity[0x4]; // 0x20 float32
    std::uint8_t m_flNeutrallyBuoyantLinearDamping[0x4]; // 0x24 float32
    std::uint8_t m_flNeutrallyBuoyantAngularDamping[0x4]; // 0x28 float32
    std::uint8_t m_bNeutrallyBuoyant[0x4]; // 0x2C bool
    std::uint8_t m_vecFractionOfWheelSubmergedForWheelFriction[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_vecWheelFrictionScales[0x18]; // 0x48 CUtlVector<float32>
    std::uint8_t m_vecFractionOfWheelSubmergedForWheelDrag[0x18]; // 0x60 CUtlVector<float32>
    std::uint8_t m_vecWheelDrag[0xA0]; // 0x78 CUtlVector<float32>
};

struct COrnamentProp {
    static constexpr std::size_t size = 0xCA0;
    std::uint8_t pad_0[0xC90]; // 0x0
    std::uint8_t m_initialOwner[0x10]; // 0xC90 CUtlSymbolLarge
};

struct CCSPlayer_CameraServices {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0x1B0]; // 0x0
};

struct CModelPointEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CRectLight {
    static constexpr std::size_t size = 0xB40;
    std::uint8_t pad_0[0xB38]; // 0x0
    std::uint8_t m_bShowLight[0x8]; // 0xB38 bool
};

struct CFilterMultiple {
    static constexpr std::size_t size = 0x560;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_nFilterType[0x8]; // 0x4E0 filter_t
    std::uint8_t m_iFilterName[0x50]; // 0x4E8 CUtlSymbolLarge[10]
    std::uint8_t m_hFilter[0x28]; // 0x538 CHandle<CBaseEntity>[10]
};

struct CCSPlayerResource {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bHostageAlive[0xC]; // 0x4A8 bool[12]
    std::uint8_t m_isHostageFollowingSomeone[0xC]; // 0x4B4 bool[12]
    std::uint8_t m_iHostageEntityIDs[0x30]; // 0x4C0 CEntityIndex[12]
    std::uint8_t m_bombsiteCenterA[0xC]; // 0x4F0 VectorWS
    std::uint8_t m_bombsiteCenterB[0xC]; // 0x4FC VectorWS
    std::uint8_t m_hostageRescueX[0x10]; // 0x508 int32[4]
    std::uint8_t m_hostageRescueY[0x10]; // 0x518 int32[4]
    std::uint8_t m_hostageRescueZ[0x10]; // 0x528 int32[4]
    std::uint8_t m_bEndMatchNextMapAllVoted[0x1]; // 0x538 bool
    std::uint8_t m_foundGoalPositions[0x7]; // 0x539 bool
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CFuncNavBlocker {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x858 bool
    std::uint8_t m_nBlockedTeamNumber[0xC]; // 0x85C int32
};

struct CMoverPathNode {
    static constexpr std::size_t size = 0x5A0;
    std::uint8_t pad_0[0x500]; // 0x0
    std::uint8_t m_OnStartFromOrInSegment[0x20]; // 0x500 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_OnStoppedAtOrInSegment[0x20]; // 0x520 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_OnPassThrough[0x20]; // 0x540 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_OnPassThroughForward[0x20]; // 0x560 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_OnPassThroughReverse[0x20]; // 0x580 CEntityOutputTemplate<CUtlString>
};

struct CEnvSoundscape {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnPlay[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_flRadius[0x8]; // 0x4C0 float32
    std::uint8_t m_soundEventName[0x8]; // 0x4C8 CGameSoundEventName
    std::uint8_t m_bOverrideWithEvent[0x4]; // 0x4D0 bool
    std::uint8_t m_soundscapeIndex[0x4]; // 0x4D4 int32
    std::uint8_t m_soundscapeEntityListId[0x8]; // 0x4D8 int32
    std::uint8_t m_positionNames[0x40]; // 0x4E0 CUtlSymbolLarge[8]
    std::uint8_t m_hProxySoundscape[0x4]; // 0x520 CHandle<CEnvSoundscape>
    std::uint8_t m_bDisabled[0x4]; // 0x524 bool
    std::uint8_t m_soundscapeName[0x8]; // 0x528 CUtlSymbolLarge
    std::uint8_t m_soundEventHash[0x8]; // 0x530 uint32
};

struct CFuncBrush {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_iSolidity[0x4]; // 0x850 BrushSolidities_e
    std::uint8_t m_iDisabled[0x4]; // 0x854 int32
    std::uint8_t m_bSolidBsp[0x8]; // 0x858 bool
    std::uint8_t m_iszExcludedClass[0x8]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_bInvertExclusion[0x1]; // 0x868 bool
    std::uint8_t m_bScriptedMovement[0x7]; // 0x869 bool
};

struct CBodyComponentPoint {
    static constexpr std::size_t size = 0x190;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_sceneNode[0x110]; // 0x80 CGameSceneNode
};

struct CPhysBox {
    static constexpr std::size_t size = 0xA08;
    std::uint8_t pad_0[0x928]; // 0x0
    std::uint8_t m_damageType[0x4]; // 0x928 int32
    std::uint8_t m_damageToEnableMotion[0x4]; // 0x92C int32
    std::uint8_t m_flForceToEnableMotion[0x4]; // 0x930 float32
    std::uint8_t m_vHoverPosePosition[0xC]; // 0x934 Vector
    std::uint8_t m_angHoverPoseAngles[0xC]; // 0x940 QAngle
    std::uint8_t m_bNotSolidToWorld[0x1]; // 0x94C bool
    std::uint8_t m_bEnableUseOutput[0x1]; // 0x94D bool
    std::uint8_t m_nHoverPoseFlags[0x2]; // 0x94E HoverPoseFlags_t
    std::uint8_t m_flTouchOutputPerEntityDelay[0x8]; // 0x950 float32
    std::uint8_t m_iszCollisionGroup[0x8]; // 0x958 CUtlSymbolLarge
    std::uint8_t m_iszInteractsAs[0x8]; // 0x960 CUtlSymbolLarge
    std::uint8_t m_iszInteractsWith[0x8]; // 0x968 CUtlSymbolLarge
    std::uint8_t m_iszInteractsExclude[0x8]; // 0x970 CUtlSymbolLarge
    std::uint8_t m_OnDamaged[0x18]; // 0x978 CEntityIOOutput
    std::uint8_t m_OnAwakened[0x18]; // 0x990 CEntityIOOutput
    std::uint8_t m_OnMotionEnabled[0x18]; // 0x9A8 CEntityIOOutput
    std::uint8_t m_OnPlayerUse[0x18]; // 0x9C0 CEntityIOOutput
    std::uint8_t m_OnStartTouch[0x30]; // 0x9D8 CEntityIOOutput
};

struct CSoundEventAABBEntity {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x568 Vector
    std::uint8_t m_vMaxs[0xC]; // 0x574 Vector
};

struct CItemSoda {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0xA40]; // 0x0
};

struct CPulseCell_ApplyDynamicAttributeBase {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_flTimeFromPrevious[0x8]; // 0x0 float32
    std::uint8_t m_EventOutflow[0x48]; // 0x8 CPulse_OutflowConnection
};

struct COmniLight {
    static constexpr std::size_t size = 0xB48;
    std::uint8_t pad_0[0xB38]; // 0x0
    std::uint8_t m_flInnerAngle[0x4]; // 0xB38 float32
    std::uint8_t m_flOuterAngle[0x4]; // 0xB3C float32
    std::uint8_t m_bShowLight[0x8]; // 0xB40 bool
};

struct CTriggerVolume {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_iFilterName[0x8]; // 0x850 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x8]; // 0x858 CHandle<CBaseFilter>
};

struct CBtNodeCondition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_bNegated[0x8]; // 0x58 bool
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_flWaitInterval[0x4]; // 0x8 float32
    std::uint8_t m_flWaitIntervalHigh[0x4]; // 0xC float32
    std::uint8_t m_bCompleteOnNextWake[0x4]; // 0x10 bool
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CEnvExplosion {
    static constexpr std::size_t size = 0x8A8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_iMagnitude[0x4]; // 0x850 int32
    std::uint8_t m_flPlayerDamage[0x4]; // 0x854 float32
    std::uint8_t m_iRadiusOverride[0x4]; // 0x858 int32
    std::uint8_t m_flInnerRadius[0x4]; // 0x85C float32
    std::uint8_t m_flDamageForce[0x4]; // 0x860 float32
    std::uint8_t m_hInflictor[0x4]; // 0x864 CHandle<CBaseEntity>
    std::uint8_t m_iCustomDamageType[0x4]; // 0x868 DamageTypes_t
    std::uint8_t m_bHasCustomDamageType[0x1]; // 0x86C bool
    std::uint8_t m_bCreateDebris[0xB]; // 0x86D bool
    std::uint8_t m_iszCustomEffectName[0x8]; // 0x878 CUtlSymbolLarge
    std::uint8_t m_iszCustomSoundName[0x8]; // 0x880 CUtlSymbolLarge
    std::uint8_t m_bSuppressParticleImpulse[0x4]; // 0x888 bool
    std::uint8_t m_iClassIgnore[0x4]; // 0x88C Class_T
    std::uint8_t m_iClassIgnore2[0x8]; // 0x890 Class_T
    std::uint8_t m_iszEntityIgnoreName[0x8]; // 0x898 CUtlSymbolLarge
    std::uint8_t m_hEntityIgnore[0x8]; // 0x8A0 CHandle<CBaseEntity>
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_Connection[0x48]; // 0x0 CPulse_OutflowConnection
    std::uint8_t m_DestinationFlowNodeID[0x8]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_RequirementNodeIDs[0x18]; // 0x50 CUtlVector<PulseDocNodeID_t>
    std::uint8_t m_nCursorStateBlockIndex[0x18]; // 0x68 CUtlVector<int32>
};

struct CTestPulseIO__ThreeStringArgs_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t strArg1[0x8]; // 0x0 CUtlString
    std::uint8_t strArg2[0x8]; // 0x8 CUtlString
    std::uint8_t strArg3[0x8]; // 0x10 CUtlString
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CFootstepControl {
    static constexpr std::size_t size = 0x9D8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_source[0x8]; // 0x9C8 CUtlSymbolLarge
    std::uint8_t m_destination[0x8]; // 0x9D0 CUtlSymbolLarge
};

struct CCSPlayer_ItemServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_bHasDefuser[0x1]; // 0x48 bool
    std::uint8_t m_bHasHelmet[0x7]; // 0x49 bool
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Gradient[0x18]; // 0x48 CColorGradient
};

struct CParticleSystem {
    static constexpr std::size_t size = 0xDD8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_szSnapshotFileName[0x200]; // 0x850 char[512]
    std::uint8_t m_bActive[0x1]; // 0xA50 bool
    std::uint8_t m_bFrozen[0x3]; // 0xA51 bool
    std::uint8_t m_flFreezeTransitionDuration[0x4]; // 0xA54 float32
    std::uint8_t m_nStopType[0x4]; // 0xA58 int32
    std::uint8_t m_bAnimateDuringGameplayPause[0x4]; // 0xA5C bool
    std::uint8_t m_iEffectIndex[0x8]; // 0xA60 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_flStartTime[0x4]; // 0xA68 GameTime_t
    std::uint8_t m_flPreSimTime[0x4]; // 0xA6C float32
    std::uint8_t m_vServerControlPoints[0x30]; // 0xA70 Vector[4]
    std::uint8_t m_iServerControlPointAssignments[0x4]; // 0xAA0 uint8[4]
    std::uint8_t m_hControlPointEnts[0x100]; // 0xAA4 CHandle<CBaseEntity>[64]
    std::uint8_t m_bDataStringLocalized[0x4]; // 0xBA4 bool
    std::uint8_t m_strDataString[0x8]; // 0xBA8 CUtlString
    std::uint8_t m_bNoSave[0x1]; // 0xBB0 bool
    std::uint8_t m_bNoFreeze[0x1]; // 0xBB1 bool
    std::uint8_t m_bNoRamp[0x1]; // 0xBB2 bool
    std::uint8_t m_bStartActive[0x5]; // 0xBB3 bool
    std::uint8_t m_iszEffectName[0x8]; // 0xBB8 CUtlSymbolLarge
    std::uint8_t m_iszControlPointNames[0x200]; // 0xBC0 CUtlSymbolLarge[64]
    std::uint8_t m_nDataCP[0x4]; // 0xDC0 int32
    std::uint8_t m_vecDataCPValue[0xC]; // 0xDC4 Vector
    std::uint8_t m_nTintCP[0x4]; // 0xDD0 int32
    std::uint8_t m_clrTint[0x4]; // 0xDD4 Color
};

struct CTriggerBrush {
    static constexpr std::size_t size = 0x8A0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_OnStartTouch[0x18]; // 0x850 CEntityIOOutput
    std::uint8_t m_OnEndTouch[0x18]; // 0x868 CEntityIOOutput
    std::uint8_t m_OnUse[0x18]; // 0x880 CEntityIOOutput
    std::uint8_t m_iInputFilter[0x4]; // 0x898 int32
    std::uint8_t m_iDontMessageParent[0x4]; // 0x89C int32
};

struct IntervalTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_timestamp[0x4]; // 0x8 GameTime_t
    std::uint8_t m_nWorldGroupId[0x4]; // 0xC WorldGroupId_t
};

struct audioparams_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t localSound[0x60]; // 0x8 VectorWS[8]
    std::uint8_t soundscapeIndex[0x4]; // 0x68 int32
    std::uint8_t localBits[0x4]; // 0x6C uint8
    std::uint8_t soundscapeEntityListIndex[0x4]; // 0x70 int32
    std::uint8_t soundEventHash[0x4]; // 0x74 uint32
};

struct CSoundEventMultiPointEntity {
    static constexpr std::size_t size = 0x5A0;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t m_iCountMax[0x4]; // 0x568 int32
    std::uint8_t m_flDistanceMax[0x4]; // 0x56C float32
    std::uint8_t m_flDistMaxSqr[0x4]; // 0x570 float32
    std::uint8_t m_flDotProductMax[0x4]; // 0x574 float32
    std::uint8_t m_bPlaying[0x28]; // 0x578 bool
};

struct CSoundAreaEntityBase {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x4A8 bool
    std::uint8_t m_iszSoundAreaType[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_vPos[0x10]; // 0x4B8 Vector
};

struct CWeaponM4A1Silencer {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CTimeline {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flValues[0x100]; // 0x10 float32[64]
    std::uint8_t m_nValueCounts[0x100]; // 0x110 int32[64]
    std::uint8_t m_nBucketCount[0x4]; // 0x210 int32
    std::uint8_t m_flInterval[0x4]; // 0x214 float32
    std::uint8_t m_flFinalValue[0x4]; // 0x218 float32
    std::uint8_t m_nCompressionType[0x4]; // 0x21C TimelineCompression_t
    std::uint8_t m_bStopped[0x8]; // 0x220 bool
};

struct CTestPulseIO__FloatStringArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t flOutFloat[0x8]; // 0x0 float32
    std::uint8_t strOutString[0x8]; // 0x8 CUtlSymbolLarge
};

struct CountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_duration[0x4]; // 0x8 float32
    std::uint8_t m_timestamp[0x4]; // 0xC GameTime_t
    std::uint8_t m_timescale[0x4]; // 0x10 float32
    std::uint8_t m_nWorldGroupId[0x4]; // 0x14 WorldGroupId_t
};

struct CNoiseStreamData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_Stream[0x50]; // 0x0 NoiseStreamDef_t
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_OutflowID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_Connection[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CItemAssaultSuit {
    static constexpr std::size_t size = 0xAE0;
    std::uint8_t pad_0[0xAE0]; // 0x0
};

struct CBeam {
    static constexpr std::size_t size = 0x8F0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_flFrameRate[0x4]; // 0x850 float32
    std::uint8_t m_flHDRColorScale[0x4]; // 0x854 float32
    std::uint8_t m_flFireTime[0x4]; // 0x858 GameTime_t
    std::uint8_t m_flDamage[0x4]; // 0x85C float32
    std::uint8_t m_nNumBeamEnts[0x8]; // 0x860 uint8
    std::uint8_t m_hBaseMaterial[0x8]; // 0x868 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nHaloIndex[0x8]; // 0x870 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nBeamType[0x4]; // 0x878 BeamType_t
    std::uint8_t m_nBeamFlags[0x4]; // 0x87C uint32
    std::uint8_t m_hAttachEntity[0x28]; // 0x880 CHandle<CBaseEntity>[10]
    std::uint8_t m_nAttachIndex[0xC]; // 0x8A8 AttachmentHandle_t[10]
    std::uint8_t m_fWidth[0x4]; // 0x8B4 float32
    std::uint8_t m_fEndWidth[0x4]; // 0x8B8 float32
    std::uint8_t m_fFadeLength[0x4]; // 0x8BC float32
    std::uint8_t m_fHaloScale[0x4]; // 0x8C0 float32
    std::uint8_t m_fAmplitude[0x4]; // 0x8C4 float32
    std::uint8_t m_fStartFrame[0x4]; // 0x8C8 float32
    std::uint8_t m_fSpeed[0x4]; // 0x8CC float32
    std::uint8_t m_flFrame[0x4]; // 0x8D0 float32
    std::uint8_t m_bTurnedOff[0x4]; // 0x8D4 bool
    std::uint8_t m_vecEndPos[0xC]; // 0x8D8 VectorWS
    std::uint8_t m_hEndEntity[0x4]; // 0x8E4 CHandle<CBaseEntity>
    std::uint8_t m_nDissolveType[0x8]; // 0x8E8 int32
};

struct CLogicEventListener {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4B8]; // 0x0
    std::uint8_t m_strEventName[0x8]; // 0x4B8 CUtlString
    std::uint8_t m_bIsEnabled[0x4]; // 0x4C0 bool
    std::uint8_t m_nTeam[0x4]; // 0x4C4 int32
    std::uint8_t m_OnEventFired[0x20]; // 0x4C8 CEntityOutputTemplate<CUtlString>
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
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CWeaponElite {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CBasePlayerPawn {
    static constexpr std::size_t size = 0xCD0;
    std::uint8_t pad_0[0xB10]; // 0x0
    std::uint8_t m_pWeaponServices[0x8]; // 0xB10 CPlayer_WeaponServices*
    std::uint8_t m_pItemServices[0x8]; // 0xB18 CPlayer_ItemServices*
    std::uint8_t m_pAutoaimServices[0x8]; // 0xB20 CPlayer_AutoaimServices*
    std::uint8_t m_pObserverServices[0x8]; // 0xB28 CPlayer_ObserverServices*
    std::uint8_t m_pWaterServices[0x8]; // 0xB30 CPlayer_WaterServices*
    std::uint8_t m_pUseServices[0x8]; // 0xB38 CPlayer_UseServices*
    std::uint8_t m_pFlashlightServices[0x8]; // 0xB40 CPlayer_FlashlightServices*
    std::uint8_t m_pCameraServices[0x8]; // 0xB48 CPlayer_CameraServices*
    std::uint8_t m_pMovementServices[0x10]; // 0xB50 CPlayer_MovementServices*
    std::uint8_t m_ServerViewAngleChanges[0x68]; // 0xB60 CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    std::uint8_t v_angle[0xC]; // 0xBC8 QAngle
    std::uint8_t v_anglePrevious[0xC]; // 0xBD4 QAngle
    std::uint8_t m_iHideHUD[0x8]; // 0xBE0 uint32
    std::uint8_t m_skybox3d[0x90]; // 0xBE8 sky3dparams_t
    std::uint8_t m_fTimeLastHurt[0x4]; // 0xC78 GameTime_t
    std::uint8_t m_flDeathTime[0x4]; // 0xC7C GameTime_t
    std::uint8_t m_fNextSuicideTime[0x8]; // 0xC80 GameTime_t
    std::uint8_t m_fInitHUD[0x8]; // 0xC88 bool
    std::uint8_t m_pExpresser[0x8]; // 0xC90 CAI_Expresser*
    std::uint8_t m_hController[0x4]; // 0xC98 CHandle<CBasePlayerController>
    std::uint8_t m_hDefaultController[0x8]; // 0xC9C CHandle<CBasePlayerController>
    std::uint8_t m_fHltvReplayDelay[0x4]; // 0xCA4 float32
    std::uint8_t m_fHltvReplayEnd[0x4]; // 0xCA8 float32
    std::uint8_t m_iHltvReplayEntity[0x4]; // 0xCAC CEntityIndex
    std::uint8_t m_sndOpvarLatchData[0x20]; // 0xCB0 CUtlVector<sndopvarlatchdata_t>
};

struct WeaponPurchaseCount_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nItemDefIndex[0x2]; // 0x30 uint16
    std::uint8_t m_nCount[0x6]; // 0x32 uint16
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct FilterHealth {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_bAdrenalineActive[0x4]; // 0x4E0 bool
    std::uint8_t m_iHealthMin[0x4]; // 0x4E4 int32
    std::uint8_t m_iHealthMax[0x8]; // 0x4E8 int32
};

struct CCSSprite {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x8C0]; // 0x0
};

struct CMathColorBlend {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flInMin[0x4]; // 0x4A8 float32
    std::uint8_t m_flInMax[0x4]; // 0x4AC float32
    std::uint8_t m_OutColor1[0x4]; // 0x4B0 Color
    std::uint8_t m_OutColor2[0x4]; // 0x4B4 Color
    std::uint8_t m_OutValue[0x20]; // 0x4B8 CEntityOutputTemplate<Color>
};

struct CShower {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_flSpeed[0x8]; // 0x850 float32
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_HookName[0x10]; // 0x80 PulseSymbol_t
};

struct CScriptNavBlocker {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t m_vExtent[0x10]; // 0x868 Vector
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
    std::uint8_t m_arDirections[0x18]; // 0x640 CUtlVector<Vector>
    std::uint8_t m_arOpenness[0x18]; // 0x658 CUtlVector<float32>
    std::uint8_t m_arNeighbors[0x18]; // 0x670 CUtlVector<int32>
    std::uint8_t m_nCurrentIndex[0x8]; // 0x688 int32
    std::uint8_t m_arClusterParent[0x18]; // 0x690 CUtlVector<int32>
    std::uint8_t m_arClusterSize[0x18]; // 0x6A8 CUtlVector<int32>
    std::uint8_t m_arClusterWeight[0x18]; // 0x6C0 CUtlVector<float32>
    std::uint8_t m_arClusterDirSum[0x18]; // 0x6D8 CUtlVector<Vector>
    std::uint8_t m_nClusterIndex[0x4]; // 0x6F0 int32
    std::uint8_t m_flClusteredOpenness[0x4]; // 0x6F4 float32
    std::uint8_t m_vClusterDirection[0xC]; // 0x6F8 Vector
    std::uint8_t m_vSmoothedOpenDir[0xC]; // 0x704 Vector
    std::uint8_t m_nDirWarmupThinksRemaining[0x4]; // 0x710 int32
    std::uint8_t m_vLastTraceOrigin[0xC]; // 0x714 VectorWS
    std::uint8_t m_bTraceOriginValid[0x4]; // 0x720 bool
    std::uint8_t m_nCatchUpThinksRemaining[0x4]; // 0x724 int32
    std::uint8_t m_bDiscontinuityPending[0x4]; // 0x728 bool
    std::uint8_t m_flSmoothedOpenness[0x4]; // 0x72C float32
    std::uint8_t m_flLastSmoothTime[0x4]; // 0x730 GameTime_t
    std::uint8_t m_flSize[0x4]; // 0x734 float32
    std::uint8_t m_nTotalDirections[0x4]; // 0x738 int32
    std::uint8_t m_nTracesPerFrame[0x4]; // 0x73C int32
    std::uint8_t m_bDomeMode[0x1]; // 0x740 bool
    std::uint8_t m_bMultiWall[0x3]; // 0x741 bool
    std::uint8_t m_flWallTransmission[0x4]; // 0x744 float32
    std::uint8_t m_nClusterK[0x4]; // 0x748 int32
    std::uint8_t m_flClusterP[0x4]; // 0x74C float32
    std::uint8_t m_flClusterBlend[0x4]; // 0x750 float32
    std::uint8_t m_flOpennessExponent[0x4]; // 0x754 float32
    std::uint8_t m_flShoulderExponent[0x4]; // 0x758 float32
    std::uint8_t m_flSmoothHalfLife[0x4]; // 0x75C float32
};

struct CPulseCell_Outflow_PlayVCDBase {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x138]; // 0x0
};

struct CCSObserverPawn {
    static constexpr std::size_t size = 0xE50;
    std::uint8_t pad_0[0xE50]; // 0x0
};

struct CTriggerActiveWeaponDetect {
    static constexpr std::size_t size = 0x9E8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_OnTouchedActiveWeapon[0x18]; // 0x9C8 CEntityIOOutput
    std::uint8_t m_iszWeaponClassName[0x8]; // 0x9E0 CUtlSymbolLarge
};

struct CFuncLadderAlias_func_useableladder {
    static constexpr std::size_t size = 0x8E0;
    std::uint8_t pad_0[0x8E0]; // 0x0
};

struct CSpriteOriented {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x8C0]; // 0x0
};

struct CPointServerCommand {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct shard_model_desc_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nModelID[0x8]; // 0x8 int32
    std::uint8_t m_hMaterialBase[0x8]; // 0x10 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hMaterialDamageOverlay[0x8]; // 0x18 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_solid[0x4]; // 0x20 ShardSolid_t
    std::uint8_t m_vecPanelSize[0x8]; // 0x24 Vector2D
    std::uint8_t m_vecStressPositionA[0x8]; // 0x2C Vector2D
    std::uint8_t m_vecStressPositionB[0xC]; // 0x34 Vector2D
    std::uint8_t m_vecPanelVertices[0x18]; // 0x40 CNetworkUtlVectorBase<Vector2D>
    std::uint8_t m_vInitialPanelVertices[0x18]; // 0x58 CNetworkUtlVectorBase<Vector4D>
    std::uint8_t m_flGlassHalfThickness[0x4]; // 0x70 float32
    std::uint8_t m_bHasParent[0x1]; // 0x74 bool
    std::uint8_t m_bParentFrozen[0x3]; // 0x75 bool
    std::uint8_t m_SurfacePropStringToken[0x8]; // 0x78 CUtlStringToken
};

struct CPlayerSprayDecal {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_nUniqueID[0x4]; // 0x850 int32
    std::uint8_t m_unAccountID[0x4]; // 0x854 uint32
    std::uint8_t m_unTraceID[0x4]; // 0x858 uint32
    std::uint8_t m_rtGcTime[0x4]; // 0x85C uint32
    std::uint8_t m_vecEndPos[0xC]; // 0x860 VectorWS
    std::uint8_t m_vecStart[0xC]; // 0x86C VectorWS
    std::uint8_t m_vecLeft[0xC]; // 0x878 Vector
    std::uint8_t m_vecNormal[0xC]; // 0x884 Vector
    std::uint8_t m_nPlayer[0x4]; // 0x890 int32
    std::uint8_t m_nEntity[0x4]; // 0x894 int32
    std::uint8_t m_nHitbox[0x4]; // 0x898 int32
    std::uint8_t m_flCreationTime[0x4]; // 0x89C float32
    std::uint8_t m_nTintID[0x4]; // 0x8A0 int32
    std::uint8_t m_nVersion[0x1]; // 0x8A4 uint8
    std::uint8_t m_ubSignature[0x83]; // 0x8A5 uint8[128]
};

struct CFuncWater {
    static constexpr std::size_t size = 0x968;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_BuoyancyHelper[0x118]; // 0x850 CBuoyancyHelper
};

struct CCSGameModeRules {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
};

struct CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_nEventID[0x8]; // 0x0 int32
    std::uint8_t m_Outflow[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CPulseCell_ApplyDynamicAttributeInt {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CEconEntity {
    static constexpr std::size_t size = 0xEB0;
    std::uint8_t pad_0[0xA58]; // 0x0
    std::uint8_t m_AttributeManager[0x438]; // 0xA58 CAttributeContainer
    std::uint8_t m_OriginalOwnerXuidLow[0x4]; // 0xE90 uint32
    std::uint8_t m_OriginalOwnerXuidHigh[0x4]; // 0xE94 uint32
    std::uint8_t m_nFallbackPaintKit[0x4]; // 0xE98 int32
    std::uint8_t m_nFallbackSeed[0x4]; // 0xE9C int32
    std::uint8_t m_flFallbackWear[0x4]; // 0xEA0 float32
    std::uint8_t m_nFallbackStatTrak[0x4]; // 0xEA4 int32
    std::uint8_t m_hOldProvidee[0x4]; // 0xEA8 CHandle<CBaseEntity>
    std::uint8_t m_iOldOwnerClass[0x4]; // 0xEAC int32
};

struct CTankTargetChange {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_newTarget[0x10]; // 0x4A8 CVariantBase<CVariantDefaultAllocator>
    std::uint8_t m_newTargetName[0x8]; // 0x4B8 CUtlSymbolLarge
};

struct CCSPlayer_WaterServices {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_NextDrownDamageTime[0x4]; // 0x48 GameTime_t
    std::uint8_t m_nDrownDmgRate[0x4]; // 0x4C int32
    std::uint8_t m_AirFinishedTime[0x4]; // 0x50 GameTime_t
    std::uint8_t m_flWaterJumpTime[0x4]; // 0x54 float32
    std::uint8_t m_vecWaterJumpVel[0xC]; // 0x58 Vector
    std::uint8_t m_flSwimSoundTime[0x1C]; // 0x64 float32
};

struct CLogicDistanceCheck {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszEntityA[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszEntityB[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_flZone1Distance[0x4]; // 0x4B8 float32
    std::uint8_t m_flZone2Distance[0x4]; // 0x4BC float32
    std::uint8_t m_InZone1[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_InZone2[0x18]; // 0x4D8 CEntityIOOutput
    std::uint8_t m_InZone3[0x18]; // 0x4F0 CEntityIOOutput
};

struct CEnvCombinedLightProbeVolume {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x5C0]; // 0x0
    std::uint8_t m_Entity_Color[0x4]; // 0x5C0 Color
    std::uint8_t m_Entity_flBrightness[0x4]; // 0x5C4 float32
    std::uint8_t m_Entity_hCubemapTexture[0x8]; // 0x5C8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_bCustomCubemapTexture[0x8]; // 0x5D0 bool
    std::uint8_t m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x5D8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SDF[0x8]; // 0x5E0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x5E8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_L1[0x8]; // 0x5F0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x5F8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x600 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x608 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_vBoxMins[0xC]; // 0x610 Vector
    std::uint8_t m_Entity_vBoxMaxs[0xC]; // 0x61C Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x628 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x62C int32
    std::uint8_t m_Entity_nEnvCubeMapArrayIndex[0x4]; // 0x630 int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x634 int32
    std::uint8_t m_Entity_bStartDisabled[0x4]; // 0x638 bool
    std::uint8_t m_Entity_flEdgeFadeDist[0x4]; // 0x63C float32
    std::uint8_t m_Entity_vEdgeFadeDists[0xC]; // 0x640 Vector
    std::uint8_t m_Entity_nLightProbeSizeX[0x4]; // 0x64C int32
    std::uint8_t m_Entity_nLightProbeSizeY[0x4]; // 0x650 int32
    std::uint8_t m_Entity_nLightProbeSizeZ[0x4]; // 0x654 int32
    std::uint8_t m_Entity_nLightProbeAtlasX[0x4]; // 0x658 int32
    std::uint8_t m_Entity_nLightProbeAtlasY[0x4]; // 0x65C int32
    std::uint8_t m_Entity_nLightProbeAtlasZ[0x19]; // 0x660 int32
    std::uint8_t m_Entity_bEnabled[0x7]; // 0x679 bool
};

struct ViewAngleServerChange_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t nType[0x4]; // 0x30 FixAngleSet_t
    std::uint8_t qAngle[0xC]; // 0x34 QAngle
    std::uint8_t nIndex[0x8]; // 0x40 uint32
};

struct CLogicDistanceAutosave {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszTargetEntity[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_flDistanceToPlayer[0x4]; // 0x4B0 float32
    std::uint8_t m_bForceNewLevelUnit[0x1]; // 0x4B4 bool
    std::uint8_t m_bCheckCough[0x1]; // 0x4B5 bool
    std::uint8_t m_bThinkDangerous[0x2]; // 0x4B6 bool
    std::uint8_t m_flDangerousTime[0x8]; // 0x4B8 float32
};

struct CLogicBranch {
    static constexpr std::size_t size = 0x4F8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bInValue[0x8]; // 0x4A8 bool
    std::uint8_t m_Listeners[0x18]; // 0x4B0 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_OnTrue[0x18]; // 0x4C8 CEntityIOOutput
    std::uint8_t m_OnFalse[0x18]; // 0x4E0 CEntityIOOutput
};

struct CPulseCell_Outflow_ScriptedSequence {
    static constexpr std::size_t size = 0x198;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_szSyncGroup[0x8]; // 0xD8 CUtlString
    std::uint8_t m_nExpectedNumSequencesInSyncGroup[0x4]; // 0xE0 int32
    std::uint8_t m_bEnsureOnNavmeshOnFinish[0x1]; // 0xE4 bool
    std::uint8_t m_bDontTeleportAtEnd[0x1]; // 0xE5 bool
    std::uint8_t m_bDisallowInterrupts[0x2]; // 0xE6 bool
    std::uint8_t m_scriptedSequenceDataMain[0x38]; // 0xE8 PulseScriptedSequenceData_t
    std::uint8_t m_vecAdditionalActors[0x18]; // 0x120 CUtlVector<PulseScriptedSequenceData_t>
    std::uint8_t m_OnFinished[0x48]; // 0x138 CPulse_ResumePoint
    std::uint8_t m_Triggers[0x18]; // 0x180 CUtlVector<CPulse_OutflowConnection>
};

struct CFuncTrackChange {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x920]; // 0x0
    std::uint8_t m_trackTop[0x4]; // 0x920 CHandle<CPathTrack>
    std::uint8_t m_trackBottom[0x4]; // 0x924 CHandle<CPathTrack>
    std::uint8_t m_train[0x8]; // 0x928 CHandle<CFuncTrackTrain>
    std::uint8_t m_trackTopName[0x8]; // 0x930 CUtlSymbolLarge
    std::uint8_t m_trackBottomName[0x8]; // 0x938 CUtlSymbolLarge
    std::uint8_t m_trainName[0x8]; // 0x940 CUtlSymbolLarge
    std::uint8_t m_code[0x4]; // 0x948 TRAIN_CODE
    std::uint8_t m_targetState[0x4]; // 0x94C int32
    std::uint8_t m_use[0x8]; // 0x950 int32
};

struct CFuncTrackTrain {
    static constexpr std::size_t size = 0x978;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_ppath[0x4]; // 0x850 CHandle<CPathTrack>
    std::uint8_t m_length[0x4]; // 0x854 float32
    std::uint8_t m_vPosPrev[0xC]; // 0x858 Vector
    std::uint8_t m_angPrev[0xC]; // 0x864 QAngle
    std::uint8_t m_flSpeed[0x4]; // 0x870 float32
    std::uint8_t m_controlMins[0xC]; // 0x874 Vector
    std::uint8_t m_controlMaxs[0xC]; // 0x880 Vector
    std::uint8_t m_lastBlockPos[0xC]; // 0x88C VectorWS
    std::uint8_t m_lastBlockTick[0x4]; // 0x898 int32
    std::uint8_t m_flVolume[0x4]; // 0x89C float32
    std::uint8_t m_flBank[0x4]; // 0x8A0 float32
    std::uint8_t m_oldSpeed[0x4]; // 0x8A4 float32
    std::uint8_t m_flBlockDamage[0x4]; // 0x8A8 float32
    std::uint8_t m_height[0x4]; // 0x8AC float32
    std::uint8_t m_maxSpeed[0x4]; // 0x8B0 float32
    std::uint8_t m_dir[0x4]; // 0x8B4 float32
    std::uint8_t m_iszSoundMove[0x8]; // 0x8B8 CGameSoundEventName
    std::uint8_t m_iszSoundMovePing[0x8]; // 0x8C0 CGameSoundEventName
    std::uint8_t m_iszSoundStart[0x8]; // 0x8C8 CGameSoundEventName
    std::uint8_t m_iszSoundStop[0x8]; // 0x8D0 CGameSoundEventName
    std::uint8_t m_strPathTarget[0x8]; // 0x8D8 CGameSoundEventName
    std::uint8_t m_flMoveSoundMinDuration[0x4]; // 0x8E0 float32
    std::uint8_t m_flMoveSoundMaxDuration[0x4]; // 0x8E4 float32
    std::uint8_t m_flNextMoveSoundTime[0x4]; // 0x8E8 GameTime_t
    std::uint8_t m_flMoveSoundMinPitch[0x4]; // 0x8EC float32
    std::uint8_t m_flMoveSoundMaxPitch[0x4]; // 0x8F0 float32
    std::uint8_t m_eOrientationType[0x4]; // 0x8F4 TrainOrientationType_t
    std::uint8_t m_eVelocityType[0x18]; // 0x8F8 TrainVelocityType_t
    std::uint8_t m_OnStart[0x18]; // 0x910 CEntityIOOutput
    std::uint8_t m_OnNext[0x18]; // 0x928 CEntityIOOutput
    std::uint8_t m_OnArrivedAtDestinationNode[0x18]; // 0x940 CEntityIOOutput
    std::uint8_t m_bManualSpeedChanges[0x4]; // 0x958 bool
    std::uint8_t m_flDesiredSpeed[0x4]; // 0x95C float32
    std::uint8_t m_flSpeedChangeTime[0x4]; // 0x960 GameTime_t
    std::uint8_t m_flAccelSpeed[0x4]; // 0x964 float32
    std::uint8_t m_flDecelSpeed[0x4]; // 0x968 float32
    std::uint8_t m_bAccelToSpeed[0x4]; // 0x96C bool
    std::uint8_t m_flNextMPSoundTime[0x8]; // 0x970 GameTime_t
};

struct CEnvInstructorHint {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszReplace_Key[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszHintTargetEntity[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_iTimeout[0x4]; // 0x4C0 int32
    std::uint8_t m_iDisplayLimit[0x4]; // 0x4C4 int32
    std::uint8_t m_iszIcon_Onscreen[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_iszIcon_Offscreen[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_iszCaption[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_iszActivatorCaption[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_Color[0x4]; // 0x4E8 Color
    std::uint8_t m_fIconOffset[0x4]; // 0x4EC float32
    std::uint8_t m_fRange[0x4]; // 0x4F0 float32
    std::uint8_t m_iPulseOption[0x1]; // 0x4F4 uint8
    std::uint8_t m_iAlphaOption[0x1]; // 0x4F5 uint8
    std::uint8_t m_iShakeOption[0x1]; // 0x4F6 uint8
    std::uint8_t m_bStatic[0x1]; // 0x4F7 bool
    std::uint8_t m_bNoOffscreen[0x1]; // 0x4F8 bool
    std::uint8_t m_bForceCaption[0x3]; // 0x4F9 bool
    std::uint8_t m_iInstanceType[0x4]; // 0x4FC int32
    std::uint8_t m_bSuppressRest[0x8]; // 0x500 bool
    std::uint8_t m_iszBinding[0x8]; // 0x508 CUtlSymbolLarge
    std::uint8_t m_bAllowNoDrawTarget[0x1]; // 0x510 bool
    std::uint8_t m_bAutoStart[0x1]; // 0x511 bool
    std::uint8_t m_bLocalPlayerOnly[0x6]; // 0x512 bool
};

struct CEnvWind {
    static constexpr std::size_t size = 0x5D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_EnvWindShared[0x130]; // 0x4A8 CEnvWindShared
};

struct CSoundEventPathCornerEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x5A0]; // 0x0
    std::uint8_t m_iszPathCorner[0x20]; // 0x5A0 CUtlSymbolLarge
    std::uint8_t m_vecCornerPairsNetworked[0x60]; // 0x5C0 CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
};

struct CCSPlayerBase_CameraServices {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0x178]; // 0x0
    std::uint8_t m_iFOV[0x4]; // 0x178 uint32
    std::uint8_t m_iFOVStart[0x4]; // 0x17C uint32
    std::uint8_t m_flFOVTime[0x4]; // 0x180 GameTime_t
    std::uint8_t m_flFOVRate[0x4]; // 0x184 float32
    std::uint8_t m_hZoomOwner[0x8]; // 0x188 CHandle<CBaseEntity>
    std::uint8_t m_hTriggerFogList[0x18]; // 0x190 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_hLastFogTrigger[0x8]; // 0x1A8 CHandle<CBaseEntity>
};

struct CPulseCell_ApplyAnimGraphParam__CursorState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t hEntity[0x8]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t sParamName[0x8]; // 0x8 CUtlString
    std::uint8_t bApplyToExternalGraphs[0x8]; // 0x10 bool
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_EntryChunk[0x8]; // 0x48 PulseRuntimeChunkIndex_t
    std::uint8_t m_RegisterMap[0x30]; // 0x50 PulseRegisterMap_t
};

struct CDynamicNavConnectionsVolume {
    static constexpr std::size_t size = 0xA18;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_iszConnectionTarget[0x8]; // 0x9E0 CUtlSymbolLarge
    std::uint8_t m_vecConnections[0x18]; // 0x9E8 CUtlVector<DynamicVolumeDef_t>
    std::uint8_t m_sTransitionType[0x8]; // 0xA00 CGlobalSymbol
    std::uint8_t m_bConnectionsEnabled[0x4]; // 0xA08 bool
    std::uint8_t m_flTargetAreaSearchRadius[0x4]; // 0xA0C float32
    std::uint8_t m_flUpdateDistance[0x4]; // 0xA10 float32
    std::uint8_t m_flMaxConnectionDistance[0x4]; // 0xA14 float32
};

struct CConstraintAnchor {
    static constexpr std::size_t size = 0xA50;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_massScale[0x10]; // 0xA40 float32
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_nCursorsAllowedToWait[0x8]; // 0xD8 int32
    std::uint8_t m_WaitComplete[0x48]; // 0xE0 CPulse_ResumePoint
};

struct CCSPlayerPawn {
    static constexpr std::size_t size = 0x15D0;
    std::uint8_t pad_0[0xE30]; // 0x0
    std::uint8_t m_pBulletServices[0x8]; // 0xE30 CCSPlayer_BulletServices*
    std::uint8_t m_pHostageServices[0x8]; // 0xE38 CCSPlayer_HostageServices*
    std::uint8_t m_pBuyServices[0x8]; // 0xE40 CCSPlayer_BuyServices*
    std::uint8_t m_pActionTrackingServices[0x8]; // 0xE48 CCSPlayer_ActionTrackingServices*
    std::uint8_t m_pAimPunchServices[0x8]; // 0xE50 CCSPlayer_AimPunchServices*
    std::uint8_t m_pRadioServices[0x8]; // 0xE58 CCSPlayer_RadioServices*
    std::uint8_t m_pDamageReactServices[0x8]; // 0xE60 CCSPlayer_DamageReactServices*
    std::uint8_t m_nCharacterDefIndex[0x2]; // 0xE68 uint16
    std::uint8_t m_bHasFemaleVoice[0x6]; // 0xE6A bool
    std::uint8_t m_strVOPrefix[0x8]; // 0xE70 CUtlString
    std::uint8_t m_szLastPlaceName[0xF8]; // 0xE78 char[18]
    std::uint8_t m_bInHostageResetZone[0x1]; // 0xF70 bool
    std::uint8_t m_bInBuyZone[0x7]; // 0xF71 bool
    std::uint8_t m_TouchingBuyZones[0x18]; // 0xF78 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_bWasInBuyZone[0x1]; // 0xF90 bool
    std::uint8_t m_bInHostageRescueZone[0x1]; // 0xF91 bool
    std::uint8_t m_bInBombZone[0x1]; // 0xF92 bool
    std::uint8_t m_bWasInHostageRescueZone[0x1]; // 0xF93 bool
    std::uint8_t m_iRetakesOffering[0x4]; // 0xF94 int32
    std::uint8_t m_iRetakesOfferingCard[0x4]; // 0xF98 int32
    std::uint8_t m_bRetakesHasDefuseKit[0x1]; // 0xF9C bool
    std::uint8_t m_bRetakesMVPLastRound[0x3]; // 0xF9D bool
    std::uint8_t m_iRetakesMVPBoostItem[0x4]; // 0xFA0 int32
    std::uint8_t m_RetakesMVPBoostExtraUtility[0x4]; // 0xFA4 loadout_slot_t
    std::uint8_t m_flHealthShotBoostExpirationTime[0x4]; // 0xFA8 GameTime_t
    std::uint8_t m_flLandingTimeSeconds[0x4]; // 0xFAC float32
    std::uint8_t m_bIsBuyMenuOpen[0x38]; // 0xFB0 bool
    std::uint8_t m_lastLandTime[0x4]; // 0xFE8 GameTime_t
    std::uint8_t m_bOnGroundLastTick[0x4]; // 0xFEC bool
    std::uint8_t m_iPlayerLocked[0x8]; // 0xFF0 int32
    std::uint8_t m_flTimeOfLastInjury[0x4]; // 0xFF8 GameTime_t
    std::uint8_t m_flNextSprayDecalTime[0x4]; // 0xFFC GameTime_t
    std::uint8_t m_bNextSprayDecalTimeExpedited[0x4]; // 0x1000 bool
    std::uint8_t m_nRagdollDamageBone[0x4]; // 0x1004 int32
    std::uint8_t m_vRagdollDamageForce[0xC]; // 0x1008 Vector
    std::uint8_t m_szRagdollDamageWeaponName[0x40]; // 0x1014 char[64]
    std::uint8_t m_bRagdollDamageHeadshot[0x4]; // 0x1054 bool
    std::uint8_t m_vRagdollServerOrigin[0x10]; // 0x1058 VectorWS
    std::uint8_t m_EconGloves[0x3E8]; // 0x1068 CEconItemView
    std::uint8_t m_nEconGlovesChanged[0x4]; // 0x1450 uint8
    std::uint8_t m_qDeathEyeAngles[0xC]; // 0x1454 QAngle
    std::uint8_t m_bLeftHanded[0x4]; // 0x1460 bool
    std::uint8_t m_fSwitchedHandednessTime[0x4]; // 0x1464 GameTime_t
    std::uint8_t m_flViewmodelOffsetX[0x4]; // 0x1468 float32
    std::uint8_t m_flViewmodelOffsetY[0x4]; // 0x146C float32
    std::uint8_t m_flViewmodelOffsetZ[0x4]; // 0x1470 float32
    std::uint8_t m_flViewmodelFOV[0x4]; // 0x1474 float32
    std::uint8_t m_bIsWalking[0x4]; // 0x1478 bool
    std::uint8_t m_fLastGivenDefuserTime[0x4]; // 0x147C float32
    std::uint8_t m_fLastGivenBombTime[0x4]; // 0x1480 float32
    std::uint8_t m_flDealtDamageToEnemyMostRecentTimestamp[0x4]; // 0x1484 float32
    std::uint8_t m_iDisplayHistoryBits[0x4]; // 0x1488 uint32
    std::uint8_t m_flLastAttackedTeammate[0x4]; // 0x148C float32
    std::uint8_t m_allowAutoFollowTime[0x4]; // 0x1490 GameTime_t
    std::uint8_t m_bResetArmorNextSpawn[0x4]; // 0x1494 bool
    std::uint8_t m_nLastKillerIndex[0x8]; // 0x1498 CEntityIndex
    std::uint8_t m_entitySpottedState[0x18]; // 0x14A0 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x4]; // 0x14B8 int32
    std::uint8_t m_bIsScoped[0x1]; // 0x14BC bool
    std::uint8_t m_bResumeZoom[0x1]; // 0x14BD bool
    std::uint8_t m_bIsDefusing[0x1]; // 0x14BE bool
    std::uint8_t m_bIsGrabbingHostage[0x1]; // 0x14BF bool
    std::uint8_t m_iBlockingUseActionInProgress[0x4]; // 0x14C0 CSPlayerBlockingUseAction_t
    std::uint8_t m_flEmitSoundTime[0x4]; // 0x14C4 GameTime_t
    std::uint8_t m_bInNoDefuseArea[0x4]; // 0x14C8 bool
    std::uint8_t m_iBombSiteIndex[0x4]; // 0x14CC CEntityIndex
    std::uint8_t m_nWhichBombZone[0x4]; // 0x14D0 int32
    std::uint8_t m_bInBombZoneTrigger[0x1]; // 0x14D4 bool
    std::uint8_t m_bWasInBombZoneTrigger[0x3]; // 0x14D5 bool
    std::uint8_t m_iShotsFired[0x4]; // 0x14D8 int32
    std::uint8_t m_flFlinchStack[0x4]; // 0x14DC float32
    std::uint8_t m_flVelocityModifier[0x4]; // 0x14E0 float32
    std::uint8_t m_vecTotalBulletForce[0xC]; // 0x14E4 Vector
    std::uint8_t m_bWaitForNoAttack[0x4]; // 0x14F0 bool
    std::uint8_t m_ignoreLadderJumpTime[0x4]; // 0x14F4 float32
    std::uint8_t m_bKilledByHeadshot[0x4]; // 0x14F8 bool
    std::uint8_t m_LastHitBox[0x4]; // 0x14FC int32
    std::uint8_t m_pBot[0x8]; // 0x1500 CCSBot*
    std::uint8_t m_bBotAllowActive[0x4]; // 0x1508 bool
    std::uint8_t m_nLastPickupPriority[0x4]; // 0x150C int32
    std::uint8_t m_flLastPickupPriorityTime[0x4]; // 0x1510 float32
    std::uint8_t m_ArmorValue[0x4]; // 0x1514 int32
    std::uint8_t m_unCurrentEquipmentValue[0x2]; // 0x1518 uint16
    std::uint8_t m_unRoundStartEquipmentValue[0x2]; // 0x151A uint16
    std::uint8_t m_unFreezetimeEndEquipmentValue[0x4]; // 0x151C uint16
    std::uint8_t m_iLastWeaponFireUsercmd[0x4]; // 0x1520 int32
    std::uint8_t m_bIsSpawning[0xC]; // 0x1524 bool
    std::uint8_t m_iDeathFlags[0x4]; // 0x1530 int32
    std::uint8_t m_bHasDeathInfo[0x4]; // 0x1534 bool
    std::uint8_t m_flDeathInfoTime[0x4]; // 0x1538 float32
    std::uint8_t m_vecDeathInfoOrigin[0xC]; // 0x153C VectorWS
    std::uint8_t m_vecPlayerPatchEconIndices[0x14]; // 0x1548 uint32[5]
    std::uint8_t m_GunGameImmunityColor[0x4]; // 0x155C Color
    std::uint8_t m_grenadeParameterStashTime[0x4]; // 0x1560 GameTime_t
    std::uint8_t m_bGrenadeParametersStashed[0x4]; // 0x1564 bool
    std::uint8_t m_angStashedShootAngles[0xC]; // 0x1568 QAngle
    std::uint8_t m_vecStashedGrenadeThrowPosition[0xC]; // 0x1574 VectorWS
    std::uint8_t m_vecStashedGrenadeThrowPawnCenter[0xC]; // 0x1580 VectorWS
    std::uint8_t m_vecStashedVelocity[0x14]; // 0x158C Vector
    std::uint8_t m_bCommittingSuicideOnTeamChange[0x1]; // 0x15A0 bool
    std::uint8_t m_wasNotKilledNaturally[0x3]; // 0x15A1 bool
    std::uint8_t m_fImmuneToGunGameDamageTime[0x4]; // 0x15A4 GameTime_t
    std::uint8_t m_bGunGameImmunity[0x4]; // 0x15A8 bool
    std::uint8_t m_flBigHeadScale[0x4]; // 0x15AC float32
    std::uint8_t m_fMolotovDamageTime[0x4]; // 0x15B0 float32
    std::uint8_t m_angEyeAngles[0x1C]; // 0x15B4 QAngle
};

struct CEnvLightProbeVolume {
    static constexpr std::size_t size = 0x5C8;
    std::uint8_t pad_0[0x540]; // 0x0
    std::uint8_t m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x540 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SDF[0x8]; // 0x548 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x550 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_L1[0x8]; // 0x558 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x560 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x568 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x570 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_vBoxMins[0xC]; // 0x578 Vector
    std::uint8_t m_Entity_vBoxMaxs[0xC]; // 0x584 Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x590 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x594 int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x598 int32
    std::uint8_t m_Entity_bStartDisabled[0x4]; // 0x59C bool
    std::uint8_t m_Entity_nLightProbeSizeX[0x4]; // 0x5A0 int32
    std::uint8_t m_Entity_nLightProbeSizeY[0x4]; // 0x5A4 int32
    std::uint8_t m_Entity_nLightProbeSizeZ[0x4]; // 0x5A8 int32
    std::uint8_t m_Entity_nLightProbeAtlasX[0x4]; // 0x5AC int32
    std::uint8_t m_Entity_nLightProbeAtlasY[0x4]; // 0x5B0 int32
    std::uint8_t m_Entity_nLightProbeAtlasZ[0xD]; // 0x5B4 int32
    std::uint8_t m_Entity_bEnabled[0x7]; // 0x5C1 bool
};

struct SpawnPoint {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iPriority[0x4]; // 0x4A8 int32
    std::uint8_t m_bEnabled[0x4]; // 0x4AC bool
    std::uint8_t m_nType[0x8]; // 0x4B0 int32
};

struct CGameSceneNode {
    static constexpr std::size_t size = 0x110;
    std::uint8_t m_bDirtyHierarchy[0x10]; // 0x0 bitfield:1
    std::uint8_t m_nodeToWorld[0x20]; // 0x10 CTransformWS
    std::uint8_t m_pOwner[0x8]; // 0x30 CEntityInstance*
    std::uint8_t m_pParent[0x8]; // 0x38 CGameSceneNode*
    std::uint8_t m_pChild[0x8]; // 0x40 CGameSceneNode*
    std::uint8_t m_pNextSibling[0x28]; // 0x48 CGameSceneNode*
    std::uint8_t m_hParent[0x10]; // 0x70 CGameSceneNodeHandle
    std::uint8_t m_vecOrigin[0x38]; // 0x80 CNetworkOriginCellCoordQuantizedVector
    std::uint8_t m_angRotation[0xC]; // 0xB8 QAngle
    std::uint8_t m_flScale[0x4]; // 0xC4 float32
    std::uint8_t m_vecAbsOrigin[0xC]; // 0xC8 VectorWS
    std::uint8_t m_angAbsRotation[0xC]; // 0xD4 QAngle
    std::uint8_t m_flAbsScale[0x4]; // 0xE0 float32
    std::uint8_t m_nParentAttachmentOrBone[0x2]; // 0xE4 int16
    std::uint8_t m_bDebugAbsOriginChanges[0x1]; // 0xE6 bool
    std::uint8_t m_bDormant[0x1]; // 0xE7 bool
    std::uint8_t m_bForceParentToBeNetworked[0x3]; // 0xE8 bool
    std::uint8_t m_nHierarchicalDepth[0x1]; // 0xEB uint8
    std::uint8_t m_nHierarchyType[0x1]; // 0xEC uint8
    std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount[0x3]; // 0xED uint8
    std::uint8_t m_name[0x14]; // 0xF0 CUtlStringToken
    std::uint8_t m_hierarchyAttachName[0x4]; // 0x104 CUtlStringToken
    std::uint8_t m_flClientLocalScale[0x8]; // 0x108 float32
};

struct CWeaponM249 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CRopeKeyframeAlias_move_rope {
    static constexpr std::size_t size = 0x8A8;
    std::uint8_t pad_0[0x8A8]; // 0x0
};

struct CPlayer_ObserverServices {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_iObserverMode[0x4]; // 0x48 uint8
    std::uint8_t m_hObserverTarget[0x4]; // 0x4C CHandle<CBaseEntity>
    std::uint8_t m_iObserverLastMode[0x4]; // 0x50 ObserverMode_t
    std::uint8_t m_bForcedObserverMode[0x4]; // 0x54 bool
};

struct CCashStack {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_nCashStackValue[0x8]; // 0x850 int32
};

struct CLogicScript {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CAttributeManager__cached_attribute_float_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t flIn[0x8]; // 0x0 float32
    std::uint8_t iAttribHook[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t flOut[0x8]; // 0x10 float32
};

struct CPulseGraphInstance_ServerEntity {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x118]; // 0x0
    std::uint8_t m_hOwner[0x4]; // 0x118 CHandle<CBaseEntity>
    std::uint8_t m_bActivated[0x4]; // 0x11C bool
    std::uint8_t m_sNameFixupStaticPrefix[0x8]; // 0x120 CUtlSymbolLarge
    std::uint8_t m_sNameFixupParent[0x8]; // 0x128 CUtlSymbolLarge
    std::uint8_t m_sNameFixupLocal[0x8]; // 0x130 CUtlSymbolLarge
    std::uint8_t m_sProceduralWorldNameForRelays[0x8]; // 0x138 CUtlSymbolLarge
};

struct CSceneEntityAlias_logic_choreographed_scene {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x800]; // 0x0
};

struct CRagdollManager {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iCurrentMaxRagdollCount[0x4]; // 0x4A8 int8
    std::uint8_t m_iMaxRagdollCount[0x4]; // 0x4AC int32
    std::uint8_t m_bSaveImportant[0x1]; // 0x4B0 bool
    std::uint8_t m_bCanTakeDamage[0x7]; // 0x4B1 bool
};

struct CSoundOpvarSetBoxEntity {
    static constexpr std::size_t size = 0x6A8;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t m_vDistanceInnerMins[0xC]; // 0x640 Vector
    std::uint8_t m_vDistanceInnerMaxs[0xC]; // 0x64C Vector
    std::uint8_t m_vDistanceOuterMins[0xC]; // 0x658 Vector
    std::uint8_t m_vDistanceOuterMaxs[0xC]; // 0x664 Vector
    std::uint8_t m_nBoxDirection[0x4]; // 0x670 int32
    std::uint8_t m_vInnerMins[0xC]; // 0x674 Vector
    std::uint8_t m_vInnerMaxs[0xC]; // 0x680 Vector
    std::uint8_t m_vOuterMins[0xC]; // 0x68C Vector
    std::uint8_t m_vOuterMaxs[0x10]; // 0x698 Vector
};

struct CPostProcessingVolume {
    static constexpr std::size_t size = 0xA08;
    std::uint8_t pad_0[0x9D8]; // 0x0
    std::uint8_t m_hPostSettings[0x8]; // 0x9D8 CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    std::uint8_t m_flFadeDuration[0x4]; // 0x9E0 float32
    std::uint8_t m_flMinLogExposure[0x4]; // 0x9E4 float32
    std::uint8_t m_flMaxLogExposure[0x4]; // 0x9E8 float32
    std::uint8_t m_flMinExposure[0x4]; // 0x9EC float32
    std::uint8_t m_flMaxExposure[0x4]; // 0x9F0 float32
    std::uint8_t m_flExposureCompensation[0x4]; // 0x9F4 float32
    std::uint8_t m_flExposureFadeSpeedUp[0x4]; // 0x9F8 float32
    std::uint8_t m_flExposureFadeSpeedDown[0x4]; // 0x9FC float32
    std::uint8_t m_flTonemapEVSmoothingRange[0x4]; // 0xA00 float32
    std::uint8_t m_bMaster[0x1]; // 0xA04 bool
    std::uint8_t m_bExposureControl[0x3]; // 0xA05 bool
};

struct CPointProximitySensor {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x4A8 bool
    std::uint8_t m_hTargetEntity[0x4]; // 0x4AC CHandle<CBaseEntity>
    std::uint8_t m_Distance[0x20]; // 0x4B0 CEntityOutputTemplate<float32>
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_RegisterMap[0x30]; // 0x0 PulseRegisterMap_t
    std::uint8_t m_FuncName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_nCellIndex[0x4]; // 0x40 PulseRuntimeCellIndex_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x44 PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x68]; // 0x48 int32
};

struct CTriggerLook {
    static constexpr std::size_t size = 0xA48;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_hLookTarget[0x4]; // 0x9E0 CHandle<CBaseEntity>
    std::uint8_t m_flFieldOfView[0x4]; // 0x9E4 float32
    std::uint8_t m_flLookTime[0x4]; // 0x9E8 float32
    std::uint8_t m_flLookTimeTotal[0x4]; // 0x9EC float32
    std::uint8_t m_flLookTimeLast[0x4]; // 0x9F0 GameTime_t
    std::uint8_t m_flTimeoutDuration[0x4]; // 0x9F4 float32
    std::uint8_t m_bTimeoutFired[0x1]; // 0x9F8 bool
    std::uint8_t m_bIsLooking[0x1]; // 0x9F9 bool
    std::uint8_t m_b2DFOV[0x1]; // 0x9FA bool
    std::uint8_t m_bUseVelocity[0x1]; // 0x9FB bool
    std::uint8_t m_bTestOcclusion[0x1]; // 0x9FC bool
    std::uint8_t m_bTestAllVisibleOcclusion[0x3]; // 0x9FD bool
    std::uint8_t m_OnTimeout[0x18]; // 0xA00 CEntityIOOutput
    std::uint8_t m_OnStartLook[0x18]; // 0xA18 CEntityIOOutput
    std::uint8_t m_OnEndLook[0x18]; // 0xA30 CEntityIOOutput
};

struct CPulseCell_Outflow_PlayVCD {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t m_hChoreoScene[0x8]; // 0x138 CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
    std::uint8_t m_OnPaused[0x48]; // 0x140 CPulse_OutflowConnection
    std::uint8_t m_OnResumed[0x48]; // 0x188 CPulse_OutflowConnection
    std::uint8_t m_OutRequirements[0x18]; // 0x1D0 CUtlVector<CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t>
};

struct CMultiplayRules {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0xD0]; // 0x0
};

struct CMolotovGrenade {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x12C0]; // 0x0
};

struct CPhysTorque {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_axis[0x10]; // 0x508 Vector
};

struct CMultiSource {
    static constexpr std::size_t size = 0x5D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_rgEntities[0x80]; // 0x4A8 CHandle<CBaseEntity>[32]
    std::uint8_t m_rgTriggered[0x80]; // 0x528 int32[32]
    std::uint8_t m_OnTrigger[0x18]; // 0x5A8 CEntityIOOutput
    std::uint8_t m_iTotal[0x8]; // 0x5C0 int32
    std::uint8_t m_globalstate[0x8]; // 0x5C8 CUtlSymbolLarge
};

struct CBaseCSGrenade {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t m_bRedraw[0x1]; // 0x1280 bool
    std::uint8_t m_bIsHeldByPlayer[0x1]; // 0x1281 bool
    std::uint8_t m_bPinPulled[0x1]; // 0x1282 bool
    std::uint8_t m_bJumpThrow[0x1]; // 0x1283 bool
    std::uint8_t m_bThrowAnimating[0x4]; // 0x1284 bool
    std::uint8_t m_fThrowTime[0x4]; // 0x1288 GameTime_t
    std::uint8_t m_flThrowStrength[0x4]; // 0x128C float32
    std::uint8_t m_fDropTime[0x4]; // 0x1290 GameTime_t
    std::uint8_t m_fPinPullTime[0x4]; // 0x1294 GameTime_t
    std::uint8_t m_bJustPulledPin[0x4]; // 0x1298 bool
    std::uint8_t m_nNextHoldTick[0x4]; // 0x129C GameTick_t
    std::uint8_t m_flNextHoldFrac[0x4]; // 0x12A0 float32
    std::uint8_t m_hSwitchToWeaponAfterThrow[0x1C]; // 0x12A4 CHandle<CCSWeaponBase>
};

struct CLogicAuto {
    static constexpr std::size_t size = 0x5A0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnMapSpawn[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnDemoMapSpawn[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_OnNewGame[0x18]; // 0x4D8 CEntityIOOutput
    std::uint8_t m_OnLoadGame[0x18]; // 0x4F0 CEntityIOOutput
    std::uint8_t m_OnMapTransition[0x18]; // 0x508 CEntityIOOutput
    std::uint8_t m_OnBackgroundMap[0x18]; // 0x520 CEntityIOOutput
    std::uint8_t m_OnMultiNewMap[0x18]; // 0x538 CEntityIOOutput
    std::uint8_t m_OnMultiNewRound[0x18]; // 0x550 CEntityIOOutput
    std::uint8_t m_OnVREnabled[0x18]; // 0x568 CEntityIOOutput
    std::uint8_t m_OnVRNotEnabled[0x18]; // 0x580 CEntityIOOutput
    std::uint8_t m_globalstate[0x8]; // 0x598 CUtlSymbolLarge
};

struct CPhysicsWire {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nDensity[0x8]; // 0x4A8 int32
};

struct CFuncIllusionary {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CInfoDynamicShadowHint {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x4A8 bool
    std::uint8_t m_flRange[0x4]; // 0x4AC float32
    std::uint8_t m_nImportance[0x4]; // 0x4B0 int32
    std::uint8_t m_nLightChoice[0x4]; // 0x4B4 int32
    std::uint8_t m_hLight[0x8]; // 0x4B8 CHandle<CBaseEntity>
};

struct CMarkupVolume {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x850 bool
};

struct CGenericLogicPlayerProxy {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x518]; // 0x0
};

struct CPathNode {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vInTangentLocal[0xC]; // 0x4A8 Vector
    std::uint8_t m_vOutTangentLocal[0xC]; // 0x4B4 Vector
    std::uint8_t m_strParentPathUniqueID[0x8]; // 0x4C0 CUtlString
    std::uint8_t m_strPathNodeParameter[0x8]; // 0x4C8 CUtlString
    std::uint8_t m_xWSPrevParent[0x20]; // 0x4D0 CTransformWS
    std::uint8_t m_hPath[0x10]; // 0x4F0 CHandle<CPathWithDynamicNodes>
};

struct CCSGO_TeamSelectCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CTriggerRemove {
    static constexpr std::size_t size = 0x9E0;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_OnRemove[0x18]; // 0x9C8 CEntityIOOutput
};

struct CLogicGameEventListener {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4B8]; // 0x0
    std::uint8_t m_OnEventFired[0x18]; // 0x4B8 CEntityIOOutput
    std::uint8_t m_iszGameEventName[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_iszGameEventItem[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_bEnabled[0x1]; // 0x4E0 bool
    std::uint8_t m_bStartDisabled[0x7]; // 0x4E1 bool
};

struct CServerOnlyModelEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Completed[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_OnInterval[0x48]; // 0x120 SignatureOutflow_Continue
};

struct CMarkupVolumeTagged_Nav {
    static constexpr std::size_t size = 0x898;
    std::uint8_t pad_0[0x890]; // 0x0
    std::uint8_t m_nScopes[0x8]; // 0x890 NavScopeFlags_t
};

struct CInfoPlayerTerrorist {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4B8]; // 0x0
};

struct CLogicAutosave {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bForceNewLevelUnit[0x4]; // 0x4A8 bool
    std::uint8_t m_minHitPoints[0x4]; // 0x4AC int32
    std::uint8_t m_minHitPointsToCommit[0x8]; // 0x4B0 int32
};

struct CCSGO_TeamIntroTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CSingleplayRules {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_bSinglePlayerGameEnding[0x8]; // 0xD0 bool
};

struct CEnvWindShared {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flStartTime[0x4]; // 0x8 GameTime_t
    std::uint8_t m_iWindSeed[0x4]; // 0xC uint32
    std::uint8_t m_iMinWind[0x2]; // 0x10 uint16
    std::uint8_t m_iMaxWind[0x2]; // 0x12 uint16
    std::uint8_t m_windRadius[0x4]; // 0x14 int32
    std::uint8_t m_iMinGust[0x2]; // 0x18 uint16
    std::uint8_t m_iMaxGust[0x2]; // 0x1A uint16
    std::uint8_t m_flMinGustDelay[0x4]; // 0x1C float32
    std::uint8_t m_flMaxGustDelay[0x4]; // 0x20 float32
    std::uint8_t m_flGustDuration[0x4]; // 0x24 float32
    std::uint8_t m_iGustDirChange[0x2]; // 0x28 uint16
    std::uint8_t m_iInitialWindDir[0x2]; // 0x2A uint16
    std::uint8_t m_flInitialWindSpeed[0x4]; // 0x2C float32
    std::uint8_t m_location[0x10]; // 0x30 VectorWS
    std::uint8_t m_OnGustStart[0x18]; // 0x40 CEntityIOOutput
    std::uint8_t m_OnGustEnd[0x18]; // 0x58 CEntityIOOutput
    std::uint8_t m_hEntOwner[0xC0]; // 0x70 CHandle<CBaseEntity>
};

struct CPointPrefab {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_targetMapName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_forceWorldGroupID[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_associatedRelayTargetName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_fixupNames[0x1]; // 0x4C0 bool
    std::uint8_t m_bLoadDynamic[0x3]; // 0x4C1 bool
    std::uint8_t m_associatedRelayEntity[0x4]; // 0x4C4 CHandle<CPointPrefab>
    std::uint8_t m_ProceduralRelaySources[0x68]; // 0x4C8 CUtlVector<CHandle<CBaseEntity>>
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CEnvInstructorVRHint {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszHintTargetEntity[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iTimeout[0x8]; // 0x4B8 int32
    std::uint8_t m_iszCaption[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_iszStartSound[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_iLayoutFileType[0x8]; // 0x4D0 int32
    std::uint8_t m_iszCustomLayoutFile[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_iAttachType[0x4]; // 0x4E0 int32
    std::uint8_t m_flHeightOffset[0x4]; // 0x4E4 float32
};

struct CCSGameRulesProxy {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pGameRules[0x8]; // 0x4A8 CCSGameRules*
};

struct CPrecipitation {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
};

struct CCommentaryViewPosition {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x8C0]; // 0x0
};

struct CEnvGlobal {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_outCounter[0x20]; // 0x4A8 CEntityOutputTemplate<int32>
    std::uint8_t m_globalstate[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_triggermode[0x4]; // 0x4D0 int32
    std::uint8_t m_initialstate[0x4]; // 0x4D4 int32
    std::uint8_t m_counter[0x8]; // 0x4D8 int32
};

struct CLogicNPCCounterOBB {
    static constexpr std::size_t size = 0x758;
    std::uint8_t pad_0[0x758]; // 0x0
};

struct CPlatTrigger {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_pPlatform[0x8]; // 0x850 CHandle<CFuncPlat>
};

struct CSceneEntity {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_iszSceneFile[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszTarget1[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_iszTarget2[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_iszTarget3[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_iszTarget4[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_iszTarget5[0x8]; // 0x4D8 CUtlSymbolLarge
    std::uint8_t m_iszTarget6[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_iszTarget7[0x8]; // 0x4E8 CUtlSymbolLarge
    std::uint8_t m_iszTarget8[0x8]; // 0x4F0 CUtlSymbolLarge
    std::uint8_t m_hTarget1[0x4]; // 0x4F8 CHandle<CBaseEntity>
    std::uint8_t m_hTarget2[0x4]; // 0x4FC CHandle<CBaseEntity>
    std::uint8_t m_hTarget3[0x4]; // 0x500 CHandle<CBaseEntity>
    std::uint8_t m_hTarget4[0x4]; // 0x504 CHandle<CBaseEntity>
    std::uint8_t m_hTarget5[0x4]; // 0x508 CHandle<CBaseEntity>
    std::uint8_t m_hTarget6[0x4]; // 0x50C CHandle<CBaseEntity>
    std::uint8_t m_hTarget7[0x4]; // 0x510 CHandle<CBaseEntity>
    std::uint8_t m_hTarget8[0x4]; // 0x514 CHandle<CBaseEntity>
    std::uint8_t m_hLocatorOrigin[0x8]; // 0x518 CHandle<CBaseEntity>
    std::uint8_t m_sTargetAttachment[0x8]; // 0x520 CUtlSymbolLarge
    std::uint8_t m_bIsPlayingBack[0x1]; // 0x528 bool
    std::uint8_t m_bPaused[0x1]; // 0x529 bool
    std::uint8_t m_bMultiplayer[0x1]; // 0x52A bool
    std::uint8_t m_bAutogenerated[0x1]; // 0x52B bool
    std::uint8_t m_flForceClientTime[0x4]; // 0x52C float32
    std::uint8_t m_flCurrentTime[0x4]; // 0x530 float32
    std::uint8_t m_flFrameTime[0x4]; // 0x534 float32
    std::uint8_t m_bCancelAtNextInterrupt[0x1]; // 0x538 bool
    std::uint8_t m_bRemoveOnCompletion[0x3]; // 0x539 bool
    std::uint8_t m_fPitch[0x4]; // 0x53C float32
    std::uint8_t m_bAutomated[0x4]; // 0x540 bool
    std::uint8_t m_nAutomatedAction[0x4]; // 0x544 int32
    std::uint8_t m_flAutomationDelay[0x4]; // 0x548 float32
    std::uint8_t m_flAutomationTime[0x4]; // 0x54C float32
    std::uint8_t m_nSpeechPriority[0x4]; // 0x550 int32
    std::uint8_t m_bPausedViaInput[0x1]; // 0x554 bool
    std::uint8_t m_bPauseAtNextInterrupt[0x1]; // 0x555 bool
    std::uint8_t m_bWaitingForActor[0x1]; // 0x556 bool
    std::uint8_t m_bWaitingForInterrupt[0x1]; // 0x557 bool
    std::uint8_t m_bInterruptedActorsScenes[0x1]; // 0x558 bool
    std::uint8_t m_bBreakOnNonIdle[0x1]; // 0x559 bool
    std::uint8_t m_bSceneFinished[0x6]; // 0x55A bool
    std::uint8_t m_hActorList[0x18]; // 0x560 CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    std::uint8_t m_hRemoveActorList[0x48]; // 0x578 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_nSceneStringIndex[0x8]; // 0x5C0 uint16
    std::uint8_t m_OnStart[0x18]; // 0x5C8 CEntityIOOutput
    std::uint8_t m_OnCompletion[0x18]; // 0x5E0 CEntityIOOutput
    std::uint8_t m_OnCanceled[0x18]; // 0x5F8 CEntityIOOutput
    std::uint8_t m_OnPaused[0x18]; // 0x610 CEntityIOOutput
    std::uint8_t m_OnResumed[0x18]; // 0x628 CEntityIOOutput
    std::uint8_t m_OnPulseRequirement[0x90]; // 0x640 CEntityIOOutput
    std::uint8_t m_TargetNameMap[0x28]; // 0x6D0 CUtlDict<CUtlSymbolLarge>
    std::uint8_t m_AnchorNameMap[0x28]; // 0x6F8 CUtlDict<CUtlSymbolLarge>
    std::uint8_t m_ActorGraphMap[0x28]; // 0x720 CUtlDict<CUtlSymbolLarge>
    std::uint8_t m_ActorClipMap[0x28]; // 0x748 CUtlDict<ActorClipEntry_t>
    std::uint8_t m_ActorMap[0x18]; // 0x770 CUtlVector<ActorMapping_t>
    std::uint8_t m_hInterruptScene[0x4]; // 0x788 CHandle<CSceneEntity>
    std::uint8_t m_nInterruptCount[0x4]; // 0x78C int32
    std::uint8_t m_responseConcept[0x8]; // 0x790 CUtlString
    std::uint8_t m_responseCriteria[0x8]; // 0x798 CUtlString
    std::uint8_t m_bSceneMissing[0x1]; // 0x7A0 bool
    std::uint8_t m_bInterrupted[0x1]; // 0x7A1 bool
    std::uint8_t m_bCompletedEarly[0x1]; // 0x7A2 bool
    std::uint8_t m_bInterruptSceneFinished[0x1]; // 0x7A3 bool
    std::uint8_t m_bRestoring[0x4]; // 0x7A4 bool
    std::uint8_t m_hNotifySceneCompletion[0x18]; // 0x7A8 CUtlVector<CHandle<CSceneEntity>>
    std::uint8_t m_hListManagers[0x18]; // 0x7C0 CUtlVector<CHandle<CSceneListManager>>
    std::uint8_t m_iszSoundName[0x8]; // 0x7D8 CUtlSymbolLarge
    std::uint8_t m_iszSequenceName[0x8]; // 0x7E0 CUtlSymbolLarge
    std::uint8_t m_hActor[0x4]; // 0x7E8 CHandle<CBaseModelEntity>
    std::uint8_t m_hActivator[0x4]; // 0x7EC CHandle<CBaseEntity>
    std::uint8_t m_BusyActor[0x4]; // 0x7F0 int32
    std::uint8_t m_iPlayerDeathBehavior[0xC]; // 0x7F4 SceneOnPlayerDeath_t
};

struct CChoreoInfoTarget {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CTonemapController2 {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flAutoExposureMin[0x4]; // 0x4A8 float32
    std::uint8_t m_flAutoExposureMax[0x4]; // 0x4AC float32
    std::uint8_t m_flExposureAdaptationSpeedUp[0x4]; // 0x4B0 float32
    std::uint8_t m_flExposureAdaptationSpeedDown[0x4]; // 0x4B4 float32
    std::uint8_t m_flTonemapEVSmoothingRange[0x8]; // 0x4B8 float32
};

struct CMapSharedEnvironment {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_targetMapName[0x10]; // 0x4A8 CUtlSymbolLarge
};

struct CNetworkedSequenceOperation {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hSequence[0x4]; // 0x8 HSequence
    std::uint8_t m_flPrevCycle[0x4]; // 0xC float32
    std::uint8_t m_flCycle[0x4]; // 0x10 float32
    std::uint8_t m_flWeight[0x8]; // 0x14 CNetworkedQuantizedFloat
    std::uint8_t m_bSequenceChangeNetworked[0x1]; // 0x1C bool
    std::uint8_t m_bDiscontinuity[0x3]; // 0x1D bool
    std::uint8_t m_flPrevCycleFromDiscontinuity[0x4]; // 0x20 float32
    std::uint8_t m_flPrevCycleForAnimEventDetection[0x4]; // 0x24 float32
};

struct CPhysMagnet {
    static constexpr std::size_t size = 0xAB0;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_OnMagnetAttach[0x18]; // 0xA40 CEntityIOOutput
    std::uint8_t m_OnMagnetDetach[0x18]; // 0xA58 CEntityIOOutput
    std::uint8_t m_massScale[0x4]; // 0xA70 float32
    std::uint8_t m_forceLimit[0x4]; // 0xA74 float32
    std::uint8_t m_torqueLimit[0x8]; // 0xA78 float32
    std::uint8_t m_MagnettedEntities[0x18]; // 0xA80 CUtlVector<magnetted_objects_t>
    std::uint8_t m_bActive[0x1]; // 0xA98 bool
    std::uint8_t m_bHasHitSomething[0x3]; // 0xA99 bool
    std::uint8_t m_flTotalMass[0x4]; // 0xA9C float32
    std::uint8_t m_flRadius[0x4]; // 0xAA0 float32
    std::uint8_t m_flNextSuckTime[0x4]; // 0xAA4 GameTime_t
    std::uint8_t m_iMaxObjectsAttached[0x8]; // 0xAA8 int32
};

struct CCSCustomHudLayout {
    static constexpr std::size_t size = 0x818;
    std::uint8_t pad_0[0x4B8]; // 0x0
    std::uint8_t m_strLayout[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_bObservable[0x8]; // 0x4C0 bool
    std::uint8_t m_vecPlayerLayoutStates[0x68]; // 0x4C8 CUtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
    std::uint8_t m_globalLayoutState[0x198]; // 0x530 CCSCustomHudLayoutState
    std::uint8_t m_vecPanelIds[0x18]; // 0x6C8 CNetworkUtlVectorBase<CUtlString>
    std::uint8_t m_vecClassNames[0x18]; // 0x6E0 CNetworkUtlVectorBase<CUtlString>
    std::uint8_t m_vecDialogVariableNames[0x120]; // 0x6F8 CNetworkUtlVectorBase<CUtlString>
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_iszPrivateVScripts[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_pEntity[0x18]; // 0x10 CEntityIdentity*
    std::uint8_t m_CScriptComponent[0x8]; // 0x28 CScriptComponent*
};

struct CGameGibManager {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_bAllowNewGibs[0x4]; // 0x4C0 bool
    std::uint8_t m_iCurrentMaxPieces[0x4]; // 0x4C4 int32
    std::uint8_t m_iMaxPieces[0x4]; // 0x4C8 int32
    std::uint8_t m_iLastFrame[0x4]; // 0x4CC int32
};

struct CHandleDummy {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CFuncWallToggle {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CCSPlayer_BulletServices {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_totalHitsOnServer[0x28]; // 0x48 int32
};

struct CSkyCamera {
    static constexpr std::size_t size = 0x548;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_skyboxData[0x90]; // 0x4A8 sky3dparams_t
    std::uint8_t m_skyboxSlotToken[0x4]; // 0x538 CUtlStringToken
    std::uint8_t m_bUseAngles[0x4]; // 0x53C bool
    std::uint8_t m_pNext[0x8]; // 0x540 CSkyCamera*
};

struct CCSGO_EndOfMatchLineupEnd {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPlayer_AutoaimServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CItemDefuserAlias_item_defuser {
    static constexpr std::size_t size = 0xB00;
    std::uint8_t pad_0[0xB00]; // 0x0
};

struct CPathCornerCrash {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4E0]; // 0x0
};

struct CPhysPulley {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_position2[0xC]; // 0x508 VectorWS
    std::uint8_t m_offset[0x18]; // 0x514 Vector[2]
    std::uint8_t m_addLength[0x4]; // 0x52C float32
    std::uint8_t m_gearRatio[0x8]; // 0x530 float32
};

struct CCSPetPlacement {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CWeaponMP5SD {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CWeaponBaseItem {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t m_bSequenceInProgress[0x1]; // 0x1280 bool
    std::uint8_t m_bRedraw[0xF]; // 0x1281 bool
};

struct CCommentaryAuto {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnCommentaryNewGame[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnCommentaryMidGame[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_OnCommentaryMultiplayerSpawn[0x18]; // 0x4D8 CEntityIOOutput
};

struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_entity[0x4]; // 0x0 CHandle<CBaseEntity>
};

struct ActiveModelConfig_t {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_Handle[0x8]; // 0x30 ModelConfigHandle_t
    std::uint8_t m_Name[0x8]; // 0x38 CUtlSymbolLarge
    std::uint8_t m_AssociatedEntities[0x18]; // 0x40 CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    std::uint8_t m_AssociatedEntityNames[0x18]; // 0x58 CNetworkUtlVectorBase<CUtlSymbolLarge>
    std::uint8_t m_vecAssociatedEntityCollidesWithHierarchy[0x10]; // 0x70 CUtlLeanVector<bool>
    std::uint8_t m_vecAssociatedEntityCollidesOutsideHierarchy[0x20]; // 0x80 CUtlLeanVector<bool>
};

struct CWeaponUSPSilencer {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CSoundStackSave {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszStackName[0x8]; // 0x4A8 CUtlSymbolLarge
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Curve[0x40]; // 0x48 CPiecewiseCurve
};

struct CWeaponMag7 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CLogicMeasureMovement {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_strMeasureTarget[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_strMeasureReference[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_strTargetReference[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_hMeasureTarget[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_hMeasureReference[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_hTarget[0x4]; // 0x4C8 CHandle<CBaseEntity>
    std::uint8_t m_hTargetReference[0x4]; // 0x4CC CHandle<CBaseEntity>
    std::uint8_t m_flScale[0x4]; // 0x4D0 float32
    std::uint8_t m_nMeasureType[0x4]; // 0x4D4 int32
};

struct CLogicActivityEvent {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nEventType[0x4]; // 0x4A8 int32
    std::uint8_t m_flDuration[0x4]; // 0x4AC float32
    std::uint8_t m_iszSourceEntityName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_hSource[0x8]; // 0x4B8 CEntityHandle
};

struct CC4 {
    static constexpr std::size_t size = 0x1300;
    std::uint8_t pad_0[0x12B0]; // 0x0
    std::uint8_t m_vecLastValidPlayerHeldPosition[0xC]; // 0x12B0 VectorWS
    std::uint8_t m_vecLastValidDroppedPosition[0xC]; // 0x12BC VectorWS
    std::uint8_t m_bDoValidDroppedPositionCheck[0x1]; // 0x12C8 bool
    std::uint8_t m_bStartedArming[0x3]; // 0x12C9 bool
    std::uint8_t m_fArmedTime[0x4]; // 0x12CC GameTime_t
    std::uint8_t m_bBombPlacedAnimation[0x1]; // 0x12D0 bool
    std::uint8_t m_bIsPlantingViaUse[0x7]; // 0x12D1 bool
    std::uint8_t m_entitySpottedState[0x18]; // 0x12D8 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x4]; // 0x12F0 int32
    std::uint8_t m_bPlayedArmingBeeps[0x7]; // 0x12F4 bool[7]
    std::uint8_t m_bBombPlanted[0x5]; // 0x12FB bool
};

struct CHostageCarriableProp {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0xA40]; // 0x0
};

struct CDynamicPropAlias_cable_dynamic {
    static constexpr std::size_t size = 0xC90;
    std::uint8_t pad_0[0xC90]; // 0x0
};

struct CCSObserver_CameraServices {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0x1B0]; // 0x0
};

struct CEnvDetailController {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flFadeStartDist[0x4]; // 0x4A8 float32
    std::uint8_t m_flFadeEndDist[0x4]; // 0x4AC float32
};

struct CCSPlayerPawnBase {
    static constexpr std::size_t size = 0xE20;
    std::uint8_t pad_0[0xCE0]; // 0x0
    std::uint8_t m_CTouchExpansionComponent[0x50]; // 0xCE0 CTouchExpansionComponent
    std::uint8_t m_pPingServices[0x8]; // 0xD30 CCSPlayer_PingServices*
    std::uint8_t m_blindUntilTime[0x4]; // 0xD38 GameTime_t
    std::uint8_t m_blindStartTime[0x4]; // 0xD3C GameTime_t
    std::uint8_t m_iPlayerState[0xB0]; // 0xD40 CSPlayerState
    std::uint8_t m_bRespawning[0x1]; // 0xDF0 bool
    std::uint8_t m_bHasMovedSinceSpawn[0x3]; // 0xDF1 bool
    std::uint8_t m_iNumSpawns[0x8]; // 0xDF4 int32
    std::uint8_t m_flIdleTimeSinceLastAction[0x4]; // 0xDFC float32
    std::uint8_t m_fNextRadarUpdateTime[0x4]; // 0xE00 float32
    std::uint8_t m_flFlashDuration[0x4]; // 0xE04 float32
    std::uint8_t m_flFlashMaxAlpha[0x4]; // 0xE08 float32
    std::uint8_t m_flProgressBarStartTime[0x4]; // 0xE0C float32
    std::uint8_t m_iProgressBarDuration[0x4]; // 0xE10 int32
    std::uint8_t m_hOriginalController[0xC]; // 0xE14 CHandle<CCSPlayerController>
};

struct CEnvSoundscapeProxy {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x538]; // 0x0
    std::uint8_t m_MainSoundscapeName[0x8]; // 0x538 CUtlSymbolLarge
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_EventName[0x10]; // 0x80 PulseSymbol_t
};

struct CCSPointScriptEntity {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x668]; // 0x0
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CBombTarget {
    static constexpr std::size_t size = 0xA28;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_OnBombExplode[0x18]; // 0x9C8 CEntityIOOutput
    std::uint8_t m_OnBombPlanted[0x18]; // 0x9E0 CEntityIOOutput
    std::uint8_t m_OnBombDefused[0x18]; // 0x9F8 CEntityIOOutput
    std::uint8_t m_bIsBombSiteB[0x1]; // 0xA10 bool
    std::uint8_t m_bIsHeistBombTarget[0x1]; // 0xA11 bool
    std::uint8_t m_bBombPlantedHere[0x6]; // 0xA12 bool
    std::uint8_t m_szMountTarget[0x8]; // 0xA18 CUtlSymbolLarge
    std::uint8_t m_hInstructorHint[0x4]; // 0xA20 CHandle<CBaseEntity>
    std::uint8_t m_nBombSiteDesignation[0x4]; // 0xA24 int32
};

struct CRuleEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_iszMaster[0x8]; // 0x850 CUtlSymbolLarge
};

struct CPhysThruster {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_localOrigin[0x10]; // 0x508 Vector
};

struct CInfoPlayerStart {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x4A8 bool
    std::uint8_t m_bIsMaster[0x7]; // 0x4A9 bool
    std::uint8_t m_pPawnSubclass[0x8]; // 0x4B0 CGlobalSymbol
};

struct CEntityFlame {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hEntAttached[0x4]; // 0x4A8 CHandle<CBaseEntity>
    std::uint8_t m_bCheapEffect[0x4]; // 0x4AC bool
    std::uint8_t m_flSize[0x4]; // 0x4B0 float32
    std::uint8_t m_bUseHitboxes[0x4]; // 0x4B4 bool
    std::uint8_t m_iNumHitboxFires[0x4]; // 0x4B8 int32
    std::uint8_t m_flHitboxFireScale[0x4]; // 0x4BC float32
    std::uint8_t m_flLifetime[0x4]; // 0x4C0 GameTime_t
    std::uint8_t m_hAttacker[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_flDirectDamagePerSecond[0x4]; // 0x4C8 float32
    std::uint8_t m_iCustomDamageType[0x1C]; // 0x4CC int32
};

struct CSkeletonInstance {
    static constexpr std::size_t size = 0x460;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t m_modelState[0x290]; // 0x120 CModelState
    std::uint8_t m_bUseParentRenderBounds[0x1]; // 0x3B0 bool
    std::uint8_t m_bDisableSolidCollisionsForHierarchy[0x1]; // 0x3B1 bool
    std::uint8_t m_bDirtyMotionType[0x1]; // 0x3B2 bool
    std::uint8_t m_bIsGeneratingLatchedParentSpaceState[0x5]; // 0x3B3 bool
    std::uint8_t m_materialGroup[0x4]; // 0x3B8 CUtlStringToken
    std::uint8_t m_nHitboxSet[0x60]; // 0x3BC uint8
    std::uint8_t m_bForceServerConstraintsEnabled[0x44]; // 0x41C bool
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CBasePlatTrain {
    static constexpr std::size_t size = 0x8F8;
    std::uint8_t pad_0[0x8D0]; // 0x0
    std::uint8_t m_NoiseMoving[0x8]; // 0x8D0 CGameSoundEventName
    std::uint8_t m_NoiseArrived[0x10]; // 0x8D8 CGameSoundEventName
    std::uint8_t m_volume[0x4]; // 0x8E8 float32
    std::uint8_t m_flTWidth[0x4]; // 0x8EC float32
    std::uint8_t m_flTLength[0x8]; // 0x8F0 float32
};

struct CPointTeleport {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vSaveOrigin[0xC]; // 0x4A8 VectorWS
    std::uint8_t m_vSaveAngles[0xC]; // 0x4B4 QAngle
    std::uint8_t m_bTeleportParentedEntities[0x1]; // 0x4C0 bool
    std::uint8_t m_bTeleportUseCurrentAngle[0x7]; // 0x4C1 bool
};

struct CTriggerGameEvent {
    static constexpr std::size_t size = 0x9E0;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_strStartTouchEventName[0x8]; // 0x9C8 CUtlString
    std::uint8_t m_strEndTouchEventName[0x8]; // 0x9D0 CUtlString
    std::uint8_t m_strTriggerID[0x8]; // 0x9D8 CUtlString
};

struct CMessageEntity {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_radius[0x8]; // 0x4A8 int32
    std::uint8_t m_messageText[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_drawText[0x1]; // 0x4B8 bool
    std::uint8_t m_bDeveloperOnly[0x1]; // 0x4B9 bool
    std::uint8_t m_bEnabled[0x6]; // 0x4BA bool
};

struct CEnvEntityIgniter {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flLifetime[0x8]; // 0x4A8 float32
};

struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_Shuffle[0x20]; // 0x0 CUtlVectorFixedGrowable<uint8,8>
    std::uint8_t m_nNextShuffle[0x8]; // 0x20 int32
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
};

struct CMarkupVolumeTagged_NavGame {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x8B8]; // 0x0
    std::uint8_t m_nScopes[0x1]; // 0x8B8 NavScopeFlags_t
    std::uint8_t m_bFloodFillAttribute[0x1]; // 0x8B9 bool
    std::uint8_t m_bSplitNavSpace[0x6]; // 0x8BA bool
};

struct CMultiLightProxy {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszLightNameFilter[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszLightClassFilter[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_flLightRadiusFilter[0x4]; // 0x4B8 float32
    std::uint8_t m_flBrightnessDelta[0x4]; // 0x4BC float32
    std::uint8_t m_bPerformScreenFade[0x4]; // 0x4C0 bool
    std::uint8_t m_flTargetBrightnessMultiplier[0x4]; // 0x4C4 float32
    std::uint8_t m_flCurrentBrightnessMultiplier[0x8]; // 0x4C8 float32
    std::uint8_t m_vecLights[0x18]; // 0x4D0 CUtlVector<CHandle<CLightEntity>>
};

struct CWeaponM4A1 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CTriggerHostageReset {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
};

struct CEconWearable {
    static constexpr std::size_t size = 0xEC0;
    std::uint8_t pad_0[0xEB0]; // 0x0
    std::uint8_t m_nForceSkin[0x4]; // 0xEB0 int32
    std::uint8_t m_bAlwaysAllow[0xC]; // 0xEB4 bool
};

struct CWeaponMAC10 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CFuncLadder {
    static constexpr std::size_t size = 0x8E0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_vecLadderDir[0x10]; // 0x850 Vector
    std::uint8_t m_Dismounts[0x18]; // 0x860 CUtlVector<CHandle<CInfoLadderDismount>>
    std::uint8_t m_vecLocalTop[0xC]; // 0x878 Vector
    std::uint8_t m_vecPlayerMountPositionTop[0xC]; // 0x884 VectorWS
    std::uint8_t m_vecPlayerMountPositionBottom[0xC]; // 0x890 VectorWS
    std::uint8_t m_flAutoRideSpeed[0x4]; // 0x89C float32
    std::uint8_t m_bDisabled[0x1]; // 0x8A0 bool
    std::uint8_t m_bFakeLadder[0x1]; // 0x8A1 bool
    std::uint8_t m_bHasSlack[0x6]; // 0x8A2 bool
    std::uint8_t m_surfacePropName[0x8]; // 0x8A8 CUtlSymbolLarge
    std::uint8_t m_OnPlayerGotOnLadder[0x18]; // 0x8B0 CEntityIOOutput
    std::uint8_t m_OnPlayerGotOffLadder[0x18]; // 0x8C8 CEntityIOOutput
};

struct CFogController {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_fog[0x68]; // 0x4A8 fogparams_t
    std::uint8_t m_bUseAngles[0x4]; // 0x510 bool
    std::uint8_t m_iChangedVariables[0x4]; // 0x514 int32
};

struct CItem {
    static constexpr std::size_t size = 0xAE0;
    std::uint8_t pad_0[0xA48]; // 0x0
    std::uint8_t m_OnPlayerTouch[0x18]; // 0xA48 CEntityIOOutput
    std::uint8_t m_OnPlayerPickup[0x18]; // 0xA60 CEntityIOOutput
    std::uint8_t m_bActivateWhenAtRest[0x8]; // 0xA78 bool
    std::uint8_t m_OnCacheInteraction[0x18]; // 0xA80 CEntityIOOutput
    std::uint8_t m_OnGlovePulled[0x18]; // 0xA98 CEntityIOOutput
    std::uint8_t m_vOriginalSpawnOrigin[0xC]; // 0xAB0 VectorWS
    std::uint8_t m_vOriginalSpawnAngles[0xC]; // 0xABC QAngle
    std::uint8_t m_bPhysStartAsleep[0x18]; // 0xAC8 bool
};

struct CTriggerPush {
    static constexpr std::size_t size = 0xA00;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_angPushEntitySpace[0xC]; // 0x9C8 QAngle
    std::uint8_t m_vecPushDirEntitySpace[0xC]; // 0x9D4 Vector
    std::uint8_t m_bTriggerOnStartTouch[0x1]; // 0x9E0 bool
    std::uint8_t m_bUsePathSimple[0x7]; // 0x9E1 bool
    std::uint8_t m_iszPathSimpleName[0x8]; // 0x9E8 CUtlSymbolLarge
    std::uint8_t m_PathSimple[0x4]; // 0x9F0 CHandle<CPathSimple>
    std::uint8_t m_splinePushType[0x4]; // 0x9F4 uint32
    std::uint8_t m_flSpeed[0x8]; // 0x9F8 float32
};

struct CBaseProp {
    static constexpr std::size_t size = 0xA70;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_bModelOverrodeBlockLOS[0x4]; // 0xA40 bool
    std::uint8_t m_iShapeType[0x4]; // 0xA44 int32
    std::uint8_t m_bConformToCollisionBounds[0x8]; // 0xA48 bool
    std::uint8_t m_mPreferredCatchTransform[0x20]; // 0xA50 CTransform
};

struct CInfoOffscreenPanoramaTexture {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x4A8 bool
    std::uint8_t m_bEnableMipGen[0x3]; // 0x4A9 bool
    std::uint8_t m_nResolutionX[0x4]; // 0x4AC int32
    std::uint8_t m_nResolutionY[0x8]; // 0x4B0 int32
    std::uint8_t m_szPanelType[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_szLayoutFileName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_RenderAttrName[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_TargetEntities[0x18]; // 0x4D0 CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    std::uint8_t m_nTargetChangeCount[0x8]; // 0x4E8 int32
    std::uint8_t m_vecCSSClasses[0x18]; // 0x4F0 CNetworkUtlVectorBase<CUtlSymbolLarge>
    std::uint8_t m_szTargetsName[0x8]; // 0x508 CUtlSymbolLarge
    std::uint8_t m_AdditionalTargetEntities[0x18]; // 0x510 CUtlVector<CHandle<CBaseModelEntity>>
};

struct CPointAngularVelocitySensor {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hTargetEntity[0x4]; // 0x4A8 CHandle<CBaseEntity>
    std::uint8_t m_flThreshold[0x4]; // 0x4AC float32
    std::uint8_t m_nLastCompareResult[0x4]; // 0x4B0 int32
    std::uint8_t m_nLastFireResult[0x4]; // 0x4B4 int32
    std::uint8_t m_flFireTime[0x4]; // 0x4B8 GameTime_t
    std::uint8_t m_flFireInterval[0x4]; // 0x4BC float32
    std::uint8_t m_flLastAngVelocity[0x4]; // 0x4C0 float32
    std::uint8_t m_lastOrientation[0xC]; // 0x4C4 QAngle
    std::uint8_t m_vecAxis[0xC]; // 0x4D0 VectorWS
    std::uint8_t m_bUseHelper[0x4]; // 0x4DC bool
    std::uint8_t m_AngularVelocity[0x20]; // 0x4E0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnLessThan[0x18]; // 0x500 CEntityIOOutput
    std::uint8_t m_OnLessThanOrEqualTo[0x18]; // 0x518 CEntityIOOutput
    std::uint8_t m_OnGreaterThan[0x18]; // 0x530 CEntityIOOutput
    std::uint8_t m_OnGreaterThanOrEqualTo[0x18]; // 0x548 CEntityIOOutput
    std::uint8_t m_OnEqualTo[0x18]; // 0x560 CEntityIOOutput
};

struct CPlayerVisibility {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flVisibilityStrength[0x4]; // 0x4A8 float32
    std::uint8_t m_flFogDistanceMultiplier[0x4]; // 0x4AC float32
    std::uint8_t m_flFogMaxDensityMultiplier[0x4]; // 0x4B0 float32
    std::uint8_t m_flFadeTime[0x4]; // 0x4B4 float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x4B8 bool
    std::uint8_t m_bIsEnabled[0x7]; // 0x4B9 bool
};

struct CPulseCell_Step_FollowEntity {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_ParamBoneOrAttachName[0x8]; // 0x48 CUtlString
    std::uint8_t m_ParamBoneOrAttachNameChild[0x8]; // 0x50 CUtlString
};

struct CFlashbang {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x12C0]; // 0x0
};

struct CBasePlayerWeapon {
    static constexpr std::size_t size = 0xEF0;
    std::uint8_t pad_0[0xEB0]; // 0x0
    std::uint8_t m_nNextPrimaryAttackTick[0x4]; // 0xEB0 GameTick_t
    std::uint8_t m_flNextPrimaryAttackTickRatio[0x4]; // 0xEB4 float32
    std::uint8_t m_nNextSecondaryAttackTick[0x4]; // 0xEB8 GameTick_t
    std::uint8_t m_flNextSecondaryAttackTickRatio[0x4]; // 0xEBC float32
    std::uint8_t m_iClip1[0x4]; // 0xEC0 int32
    std::uint8_t m_iClip2[0x4]; // 0xEC4 int32
    std::uint8_t m_pReserveAmmo[0x8]; // 0xEC8 int32[2]
    std::uint8_t m_OnPlayerUse[0x20]; // 0xED0 CEntityIOOutput
};

struct CPhysForce {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pController[0x8]; // 0x4A8 IPhysicsMotionController*
    std::uint8_t m_nameAttach[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_force[0x4]; // 0x4B8 float32
    std::uint8_t m_forceTime[0x4]; // 0x4BC float32
    std::uint8_t m_attachedObject[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_wasRestored[0x4]; // 0x4C4 bool
    std::uint8_t m_integrator[0x40]; // 0x4C8 CConstantForceController
};

struct CCSWeaponBaseVData {
    static constexpr std::size_t size = 0x8A0;
    std::uint8_t pad_0[0x520]; // 0x0
    std::uint8_t m_WeaponType[0x4]; // 0x520 CSWeaponType
    std::uint8_t m_WeaponCategory[0x4]; // 0x524 CSWeaponCategory
    std::uint8_t m_szAnimSkeleton[0xE0]; // 0x528 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
    std::uint8_t m_vecMuzzlePos0[0xC]; // 0x608 Vector
    std::uint8_t m_vecMuzzlePos1[0xC]; // 0x614 Vector
    std::uint8_t m_szTracerParticle[0xE0]; // 0x620 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_GearSlot[0x4]; // 0x700 gear_slot_t
    std::uint8_t m_GearSlotPosition[0x4]; // 0x704 int32
    std::uint8_t m_DefaultLoadoutSlot[0x4]; // 0x708 loadout_slot_t
    std::uint8_t m_nPrice[0x4]; // 0x70C int32
    std::uint8_t m_nKillAward[0x4]; // 0x710 int32
    std::uint8_t m_nPrimaryReserveAmmoMax[0x4]; // 0x714 int32
    std::uint8_t m_nSecondaryReserveAmmoMax[0x4]; // 0x718 int32
    std::uint8_t m_bMeleeWeapon[0x1]; // 0x71C bool
    std::uint8_t m_bHasBurstMode[0x1]; // 0x71D bool
    std::uint8_t m_bIsRevolver[0x1]; // 0x71E bool
    std::uint8_t m_bCannotShootUnderwater[0x1]; // 0x71F bool
    std::uint8_t m_szName[0x8]; // 0x720 CGlobalSymbol
    std::uint8_t m_eSilencerType[0x4]; // 0x728 CSWeaponSilencerType
    std::uint8_t m_bShowCrosshair[0x1]; // 0x72C bool
    std::uint8_t m_bIsFullAuto[0x3]; // 0x72D bool
    std::uint8_t m_nNumBullets[0x4]; // 0x730 int32
    std::uint8_t m_bReloadsSingleShells[0x4]; // 0x734 bool
    std::uint8_t m_flCycleTime[0x8]; // 0x738 CFiringModeFloat
    std::uint8_t m_flCycleTimeWhenInBurstMode[0x4]; // 0x740 float32
    std::uint8_t m_flTimeBetweenBurstShots[0x4]; // 0x744 float32
    std::uint8_t m_flMaxSpeed[0x8]; // 0x748 CFiringModeFloat
    std::uint8_t m_flSpread[0x8]; // 0x750 CFiringModeFloat
    std::uint8_t m_flInaccuracyCrouch[0x8]; // 0x758 CFiringModeFloat
    std::uint8_t m_flInaccuracyStand[0x8]; // 0x760 CFiringModeFloat
    std::uint8_t m_flInaccuracyJump[0x8]; // 0x768 CFiringModeFloat
    std::uint8_t m_flInaccuracyLand[0x8]; // 0x770 CFiringModeFloat
    std::uint8_t m_flInaccuracyLadder[0x8]; // 0x778 CFiringModeFloat
    std::uint8_t m_flInaccuracyFire[0x8]; // 0x780 CFiringModeFloat
    std::uint8_t m_flInaccuracyMove[0x8]; // 0x788 CFiringModeFloat
    std::uint8_t m_flRecoilAngle[0x8]; // 0x790 CFiringModeFloat
    std::uint8_t m_flRecoilAngleVariance[0x8]; // 0x798 CFiringModeFloat
    std::uint8_t m_flRecoilMagnitude[0x8]; // 0x7A0 CFiringModeFloat
    std::uint8_t m_flRecoilMagnitudeVariance[0x8]; // 0x7A8 CFiringModeFloat
    std::uint8_t m_nTracerFrequency[0x8]; // 0x7B0 CFiringModeInt
    std::uint8_t m_flInaccuracyJumpInitial[0x4]; // 0x7B8 float32
    std::uint8_t m_flInaccuracyJumpApex[0x4]; // 0x7BC float32
    std::uint8_t m_flInaccuracyReload[0x4]; // 0x7C0 float32
    std::uint8_t m_flDeployDuration[0x4]; // 0x7C4 float32
    std::uint8_t m_flDisallowAttackAfterReloadStartDuration[0x4]; // 0x7C8 float32
    std::uint8_t m_nBurstShotCount[0x4]; // 0x7CC int32
    std::uint8_t m_bAllowBurstHolster[0x4]; // 0x7D0 bool
    std::uint8_t m_nRecoilSeed[0x4]; // 0x7D4 int32
    std::uint8_t m_nSpreadSeed[0x4]; // 0x7D8 int32
    std::uint8_t m_flAttackMovespeedFactor[0x4]; // 0x7DC float32
    std::uint8_t m_flInaccuracyPitchShift[0x4]; // 0x7E0 float32
    std::uint8_t m_flInaccuracyAltSoundThreshold[0x4]; // 0x7E4 float32
    std::uint8_t m_szUseRadioSubtitle[0x8]; // 0x7E8 CUtlString
    std::uint8_t m_bUnzoomsAfterShot[0x1]; // 0x7F0 bool
    std::uint8_t m_bHideViewModelWhenZoomed[0x3]; // 0x7F1 bool
    std::uint8_t m_nZoomLevels[0x4]; // 0x7F4 int32
    std::uint8_t m_nZoomFOV1[0x4]; // 0x7F8 int32
    std::uint8_t m_nZoomFOV2[0x4]; // 0x7FC int32
    std::uint8_t m_flZoomTime0[0x4]; // 0x800 float32
    std::uint8_t m_flZoomTime1[0x4]; // 0x804 float32
    std::uint8_t m_flZoomTime2[0x4]; // 0x808 float32
    std::uint8_t m_flIronSightPullUpSpeed[0x4]; // 0x80C float32
    std::uint8_t m_flIronSightPutDownSpeed[0x4]; // 0x810 float32
    std::uint8_t m_flIronSightFOV[0x4]; // 0x814 float32
    std::uint8_t m_flIronSightPivotForward[0x4]; // 0x818 float32
    std::uint8_t m_flIronSightLooseness[0x4]; // 0x81C float32
    std::uint8_t m_nDamage[0x4]; // 0x820 int32
    std::uint8_t m_flHeadshotMultiplier[0x4]; // 0x824 float32
    std::uint8_t m_flArmorRatio[0x4]; // 0x828 float32
    std::uint8_t m_flPenetration[0x4]; // 0x82C float32
    std::uint8_t m_flRange[0x4]; // 0x830 float32
    std::uint8_t m_flRangeModifier[0x4]; // 0x834 float32
    std::uint8_t m_flFlinchVelocityModifierLarge[0x4]; // 0x838 float32
    std::uint8_t m_flFlinchVelocityModifierSmall[0x4]; // 0x83C float32
    std::uint8_t m_flRecoveryTimeCrouch[0x4]; // 0x840 float32
    std::uint8_t m_flRecoveryTimeStand[0x4]; // 0x844 float32
    std::uint8_t m_flRecoveryTimeCrouchFinal[0x4]; // 0x848 float32
    std::uint8_t m_flRecoveryTimeStandFinal[0x4]; // 0x84C float32
    std::uint8_t m_nRecoveryTransitionStartBullet[0x4]; // 0x850 int32
    std::uint8_t m_nRecoveryTransitionEndBullet[0x4]; // 0x854 int32
    std::uint8_t m_flThrowVelocity[0x4]; // 0x858 float32
    std::uint8_t m_vSmokeColor[0xC]; // 0x85C Vector
    std::uint8_t m_szAnimClass[0x38]; // 0x868 CGlobalSymbol
};

struct CAttributeManager {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Providers[0x18]; // 0x8 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_iReapplyProvisionParity[0x4]; // 0x20 int32
    std::uint8_t m_hOuter[0x4]; // 0x24 CHandle<CBaseEntity>
    std::uint8_t m_bPreventLoopback[0x4]; // 0x28 bool
    std::uint8_t m_ProviderType[0x4]; // 0x2C attributeprovidertypes_t
    std::uint8_t m_CachedResults[0x20]; // 0x30 CUtlVector<CAttributeManager::cached_attribute_float_t>
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CInfoTarget {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPlayer_CameraServices {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_vecCsViewPunchAngle[0xC]; // 0x48 QAngle
    std::uint8_t m_nCsViewPunchAngleTick[0x4]; // 0x54 GameTick_t
    std::uint8_t m_flCsViewPunchAngleTickRatio[0x8]; // 0x58 float32
    std::uint8_t m_PlayerFog[0x40]; // 0x60 fogplayerparams_t
    std::uint8_t m_hColorCorrectionCtrl[0x4]; // 0xA0 CHandle<CColorCorrection>
    std::uint8_t m_hViewEntity[0x4]; // 0xA4 CHandle<CBaseEntity>
    std::uint8_t m_hTonemapController[0x8]; // 0xA8 CHandle<CTonemapController2>
    std::uint8_t m_audio[0x78]; // 0xB0 audioparams_t
    std::uint8_t m_PostProcessingVolumes[0x18]; // 0x128 CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
    std::uint8_t m_flOldPlayerZ[0x4]; // 0x140 float32
    std::uint8_t m_flOldPlayerViewOffsetZ[0x1C]; // 0x144 float32
    std::uint8_t m_hTriggerSoundscapeList[0x18]; // 0x160 CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_TimelineEvents[0x18]; // 0xD8 CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_SourceEntity[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_SourceOutput[0x10]; // 0x90 PulseSymbol_t
    std::uint8_t m_ExpectedParamType[0x18]; // 0xA0 CPulseValueFullType
};

struct CFilterAttributeInt {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_sAttributeName[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CKeepUpright {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_worldGoalAxis[0xC]; // 0x4B0 Vector
    std::uint8_t m_localTestAxis[0xC]; // 0x4BC Vector
    std::uint8_t m_pController[0x8]; // 0x4C8 IPhysicsMotionController*
    std::uint8_t m_nameAttach[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_attachedObject[0x4]; // 0x4D8 CHandle<CBaseEntity>
    std::uint8_t m_angularLimit[0x4]; // 0x4DC float32
    std::uint8_t m_bActive[0x1]; // 0x4E0 bool
    std::uint8_t m_bDampAllRotation[0x7]; // 0x4E1 bool
};

struct CPointTemplate {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszWorldName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszSource2EntityLumpName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszEntityFilterName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_flTimeoutInterval[0x4]; // 0x4C0 float32
    std::uint8_t m_bAsynchronouslySpawnEntities[0x4]; // 0x4C4 bool
    std::uint8_t m_clientOnlyEntityBehavior[0x4]; // 0x4C8 PointTemplateClientOnlyEntityBehavior_t
    std::uint8_t m_ownerSpawnGroupType[0x4]; // 0x4CC PointTemplateOwnerSpawnGroupType_t
    std::uint8_t m_createdSpawnGroupHandles[0x18]; // 0x4D0 CUtlVector<uint32>
    std::uint8_t m_SpawnedEntityHandles[0x18]; // 0x4E8 CUtlVector<CEntityHandle>
    std::uint8_t m_ScriptSpawnCallback[0x8]; // 0x500 HSCRIPT
    std::uint8_t m_ScriptCallbackScope[0x8]; // 0x508 HSCRIPT
    std::uint8_t m_OnEntitySpawned[0x30]; // 0x510 CEntityOutputTemplate<CUtlVector<CEntityHandle>>
};

struct CEnvVolumetricFogController {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flScattering[0x4]; // 0x4A8 float32
    std::uint8_t m_TintColor[0x4]; // 0x4AC Color
    std::uint8_t m_flAnisotropy[0x4]; // 0x4B0 float32
    std::uint8_t m_flFadeSpeed[0x4]; // 0x4B4 float32
    std::uint8_t m_flDrawDistance[0x4]; // 0x4B8 float32
    std::uint8_t m_flFadeInStart[0x4]; // 0x4BC float32
    std::uint8_t m_flFadeInEnd[0x4]; // 0x4C0 float32
    std::uint8_t m_flIndirectStrength[0x4]; // 0x4C4 float32
    std::uint8_t m_nVolumeDepth[0x4]; // 0x4C8 int32
    std::uint8_t m_fFirstVolumeSliceThickness[0x4]; // 0x4CC float32
    std::uint8_t m_nIndirectTextureDimX[0x4]; // 0x4D0 int32
    std::uint8_t m_nIndirectTextureDimY[0x4]; // 0x4D4 int32
    std::uint8_t m_nIndirectTextureDimZ[0x4]; // 0x4D8 int32
    std::uint8_t m_vBoxMins[0xC]; // 0x4DC Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x4E8 Vector
    std::uint8_t m_bActive[0x4]; // 0x4F4 bool
    std::uint8_t m_flStartAnisoTime[0x4]; // 0x4F8 GameTime_t
    std::uint8_t m_flStartScatterTime[0x4]; // 0x4FC GameTime_t
    std::uint8_t m_flStartDrawDistanceTime[0x4]; // 0x500 GameTime_t
    std::uint8_t m_flStartAnisotropy[0x4]; // 0x504 float32
    std::uint8_t m_flStartScattering[0x4]; // 0x508 float32
    std::uint8_t m_flStartDrawDistance[0x4]; // 0x50C float32
    std::uint8_t m_flDefaultAnisotropy[0x4]; // 0x510 float32
    std::uint8_t m_flDefaultScattering[0x4]; // 0x514 float32
    std::uint8_t m_flDefaultDrawDistance[0x4]; // 0x518 float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x51C bool
    std::uint8_t m_bEnableIndirect[0x1]; // 0x51D bool
    std::uint8_t m_bIsMaster[0x2]; // 0x51E bool
    std::uint8_t m_hFogIndirectTexture[0x8]; // 0x520 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_nForceRefreshCount[0x4]; // 0x528 int32
    std::uint8_t m_fNoiseSpeed[0x4]; // 0x52C float32
    std::uint8_t m_fNoiseStrength[0x4]; // 0x530 float32
    std::uint8_t m_vNoiseScale[0xC]; // 0x534 Vector
    std::uint8_t m_fWindSpeed[0x4]; // 0x540 float32
    std::uint8_t m_vWindDirection[0xC]; // 0x544 Vector
    std::uint8_t m_bFirstTime[0x8]; // 0x550 bool
};

struct CBot {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_pController[0x8]; // 0x10 CCSPlayerController*
    std::uint8_t m_pPlayer[0x8]; // 0x18 CCSPlayerPawn*
    std::uint8_t m_bHasSpawned[0x4]; // 0x20 bool
    std::uint8_t m_id[0x9C]; // 0x24 uint32
    std::uint8_t m_isRunning[0x1]; // 0xC0 bool
    std::uint8_t m_isCrouching[0x3]; // 0xC1 bool
    std::uint8_t m_forwardSpeed[0x4]; // 0xC4 float32
    std::uint8_t m_leftSpeed[0x4]; // 0xC8 float32
    std::uint8_t m_verticalSpeed[0x4]; // 0xCC float32
    std::uint8_t m_buttonFlags[0x8]; // 0xD0 uint64
    std::uint8_t m_jumpTimestamp[0x4]; // 0xD8 float32
    std::uint8_t m_viewForward[0x1C]; // 0xDC Vector
    std::uint8_t m_postureStackIndex[0x8]; // 0xF8 int32
};

struct CPulseCell_Step_SetAnimGraphParam {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_ParamName[0x8]; // 0x48 CUtlString
};

struct CPlayer_FlashlightServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSPlayerController {
    static constexpr std::size_t size = 0xAB8;
    std::uint8_t pad_0[0x7E8]; // 0x0
    std::uint8_t m_pInGameMoneyServices[0x8]; // 0x7E8 CCSPlayerController_InGameMoneyServices*
    std::uint8_t m_pInventoryServices[0x8]; // 0x7F0 CCSPlayerController_InventoryServices*
    std::uint8_t m_pActionTrackingServices[0x8]; // 0x7F8 CCSPlayerController_ActionTrackingServices*
    std::uint8_t m_pDamageServices[0x8]; // 0x800 CCSPlayerController_DamageServices*
    std::uint8_t m_iPing[0x4]; // 0x808 uint32
    std::uint8_t m_bHasCommunicationAbuseMute[0x4]; // 0x80C bool
    std::uint8_t m_uiCommunicationMuteFlags[0x8]; // 0x810 uint32
    std::uint8_t m_szCrosshairCodes[0x8]; // 0x818 CUtlSymbolLarge
    std::uint8_t m_iPendingTeamNum[0x4]; // 0x820 uint8
    std::uint8_t m_flForceTeamTime[0x4]; // 0x824 GameTime_t
    std::uint8_t m_iCompTeammateColor[0x4]; // 0x828 int32
    std::uint8_t m_bEverPlayedOnTeam[0x1]; // 0x82C bool
    std::uint8_t m_bAttemptedToGetColor[0x3]; // 0x82D bool
    std::uint8_t m_iTeammatePreferredColor[0x4]; // 0x830 int32
    std::uint8_t m_bTeamChanged[0x1]; // 0x834 bool
    std::uint8_t m_bInSwitchTeam[0x1]; // 0x835 bool
    std::uint8_t m_bHasSeenJoinGame[0x1]; // 0x836 bool
    std::uint8_t m_bJustBecameSpectator[0x1]; // 0x837 bool
    std::uint8_t m_bSwitchTeamsOnNextRoundReset[0x1]; // 0x838 bool
    std::uint8_t m_bRemoveAllItemsOnNextRoundReset[0x3]; // 0x839 bool
    std::uint8_t m_flLastJoinTeamTime[0x4]; // 0x83C GameTime_t
    std::uint8_t m_szClan[0x8]; // 0x840 CUtlSymbolLarge
    std::uint8_t m_unClanId32bit[0x4]; // 0x848 uint32
    std::uint8_t m_iCoachingTeam[0x4]; // 0x84C int32
    std::uint8_t m_nPlayerDominated[0x8]; // 0x850 uint64
    std::uint8_t m_nPlayerDominatingMe[0x8]; // 0x858 uint64
    std::uint8_t m_iCompetitiveRanking[0x4]; // 0x860 int32
    std::uint8_t m_iCompetitiveWins[0x4]; // 0x864 int32
    std::uint8_t m_iCompetitiveRankType[0x4]; // 0x868 int8
    std::uint8_t m_iCompetitiveRankingPredicted_Win[0x4]; // 0x86C int32
    std::uint8_t m_iCompetitiveRankingPredicted_Loss[0x4]; // 0x870 int32
    std::uint8_t m_iCompetitiveRankingPredicted_Tie[0x4]; // 0x874 int32
    std::uint8_t m_nEndMatchNextMapVote[0x4]; // 0x878 int32
    std::uint8_t m_unActiveQuestId[0x4]; // 0x87C uint16
    std::uint8_t m_rtActiveMissionPeriod[0x4]; // 0x880 uint32
    std::uint8_t m_nQuestProgressReason[0x4]; // 0x884 QuestProgress::Reason
    std::uint8_t m_unPlayerTvControlFlags[0x30]; // 0x888 uint32
    std::uint8_t m_iDraftIndex[0x4]; // 0x8B8 int32
    std::uint8_t m_msQueuedModeDisconnectionTimestamp[0x4]; // 0x8BC uint32
    std::uint8_t m_uiAbandonRecordedReason[0x4]; // 0x8C0 uint32
    std::uint8_t m_eNetworkDisconnectionReason[0x4]; // 0x8C4 uint32
    std::uint8_t m_bCannotBeKicked[0x1]; // 0x8C8 bool
    std::uint8_t m_bEverFullyConnected[0x1]; // 0x8C9 bool
    std::uint8_t m_bAbandonAllowsSurrender[0x1]; // 0x8CA bool
    std::uint8_t m_bAbandonOffersInstantSurrender[0x1]; // 0x8CB bool
    std::uint8_t m_bDisconnection1MinWarningPrinted[0x1]; // 0x8CC bool
    std::uint8_t m_bScoreReported[0x3]; // 0x8CD bool
    std::uint8_t m_nDisconnectionTick[0x10]; // 0x8D0 int32
    std::uint8_t m_bControllingBot[0x1]; // 0x8E0 bool
    std::uint8_t m_bHasControlledBotThisRound[0x1]; // 0x8E1 bool
    std::uint8_t m_bHasBeenControlledByPlayerThisRound[0x2]; // 0x8E2 bool
    std::uint8_t m_nBotsControlledThisRound[0x4]; // 0x8E4 int32
    std::uint8_t m_bCanControlObservedBot[0x4]; // 0x8E8 bool
    std::uint8_t m_hPlayerPawn[0x4]; // 0x8EC CHandle<CCSPlayerPawn>
    std::uint8_t m_hObserverPawn[0x4]; // 0x8F0 CHandle<CCSObserverPawn>
    std::uint8_t m_DesiredObserverMode[0x4]; // 0x8F4 int32
    std::uint8_t m_hDesiredObserverTarget[0x4]; // 0x8F8 CEntityHandle
    std::uint8_t m_bPawnIsAlive[0x4]; // 0x8FC bool
    std::uint8_t m_iPawnHealth[0x4]; // 0x900 uint32
    std::uint8_t m_iPawnArmor[0x4]; // 0x904 int32
    std::uint8_t m_bPawnHasDefuser[0x1]; // 0x908 bool
    std::uint8_t m_bPawnHasHelmet[0x1]; // 0x909 bool
    std::uint8_t m_nPawnCharacterDefIndex[0x2]; // 0x90A uint16
    std::uint8_t m_iPawnLifetimeStart[0x4]; // 0x90C int32
    std::uint8_t m_iPawnLifetimeEnd[0x4]; // 0x910 int32
    std::uint8_t m_iPawnBotDifficulty[0x4]; // 0x914 int32
    std::uint8_t m_hOriginalControllerOfCurrentPawn[0x4]; // 0x918 CHandle<CCSPlayerController>
    std::uint8_t m_iScore[0x4]; // 0x91C int32
    std::uint8_t m_iRoundScore[0x4]; // 0x920 int32
    std::uint8_t m_iRoundsWon[0x4]; // 0x924 int32
    std::uint8_t m_recentKillQueue[0x8]; // 0x928 uint8[8]
    std::uint8_t m_nFirstKill[0x1]; // 0x930 uint8
    std::uint8_t m_nKillCount[0x1]; // 0x931 uint8
    std::uint8_t m_bMvpNoMusic[0x2]; // 0x932 bool
    std::uint8_t m_eMvpReason[0x4]; // 0x934 int32
    std::uint8_t m_iMusicKitID[0x4]; // 0x938 int32
    std::uint8_t m_iMusicKitMVPs[0x4]; // 0x93C int32
    std::uint8_t m_iMVPs[0x4]; // 0x940 int32
    std::uint8_t m_nUpdateCounter[0x4]; // 0x944 int32
    std::uint8_t m_flSmoothedPing[0x8]; // 0x948 float32
    std::uint8_t m_lastHeldVoteTimer[0x18]; // 0x950 IntervalTimer
    std::uint8_t m_bShowHints[0x4]; // 0x968 bool
    std::uint8_t m_iNextTimeCheck[0x4]; // 0x96C int32
    std::uint8_t m_bJustDidTeamKill[0x1]; // 0x970 bool
    std::uint8_t m_bPunishForTeamKill[0x1]; // 0x971 bool
    std::uint8_t m_bGaveTeamDamageWarning[0x1]; // 0x972 bool
    std::uint8_t m_bGaveTeamDamageWarningThisRound[0x5]; // 0x973 bool
    std::uint8_t m_dblLastReceivedPacketPlatFloatTime[0x8]; // 0x978 float64
    std::uint8_t m_LastTeamDamageWarningTime[0x4]; // 0x980 GameTime_t
    std::uint8_t m_LastTimePlayerWasDisconnectedForPawnsRemove[0x4]; // 0x984 GameTime_t
    std::uint8_t m_nSuspiciousHitCount[0x4]; // 0x988 uint32
    std::uint8_t m_nNonSuspiciousHitStreak[0xAD]; // 0x98C uint32
    std::uint8_t m_bFireBulletsSeedSynchronized[0x7F]; // 0xA39 bool
};

struct CPhysLength {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_offset[0x18]; // 0x508 Vector[2]
    std::uint8_t m_vecAttach[0xC]; // 0x520 VectorWS
    std::uint8_t m_addLength[0x4]; // 0x52C float32
    std::uint8_t m_minLength[0x4]; // 0x530 float32
    std::uint8_t m_totalLength[0x4]; // 0x534 float32
};

struct CTeam {
    static constexpr std::size_t size = 0x560;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_aPlayerControllers[0x18]; // 0x4A8 CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    std::uint8_t m_aPlayers[0x18]; // 0x4C0 CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    std::uint8_t m_iScore[0x4]; // 0x4D8 int32
    std::uint8_t m_szTeamname[0x84]; // 0x4DC char[129]
};

struct CLogicNPCCounterAABB {
    static constexpr std::size_t size = 0x758;
    std::uint8_t pad_0[0x728]; // 0x0
    std::uint8_t m_vDistanceOuterMins[0xC]; // 0x728 Vector
    std::uint8_t m_vDistanceOuterMaxs[0xC]; // 0x734 Vector
    std::uint8_t m_vOuterMins[0xC]; // 0x740 VectorWS
    std::uint8_t m_vOuterMaxs[0xC]; // 0x74C VectorWS
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNextIndex[0x4]; // 0x0 int32
};

struct CChicken {
    static constexpr std::size_t size = 0x32F0;
    std::uint8_t pad_0[0xCB0]; // 0x0
    std::uint8_t m_AttributeManager[0x438]; // 0xCB0 CAttributeContainer
    std::uint8_t m_updateTimer[0x18]; // 0x10E8 CountdownTimer
    std::uint8_t m_stuckAnchor[0x10]; // 0x1100 VectorWS
    std::uint8_t m_collisionStuckTimer[0x18]; // 0x1110 CountdownTimer
    std::uint8_t m_isOnGround[0x4]; // 0x1128 bool
    std::uint8_t m_vFallVelocity[0xC]; // 0x112C Vector
    std::uint8_t m_desiredActivity[0x4]; // 0x1138 EChickenActivity
    std::uint8_t m_currentActivity[0x4]; // 0x113C EChickenActivity
    std::uint8_t m_activityTimer[0x18]; // 0x1140 CountdownTimer
    std::uint8_t m_turnRate[0x4]; // 0x1158 float32
    std::uint8_t m_fleeFrom[0x4]; // 0x115C CHandle<CBaseEntity>
    std::uint8_t m_moveRateThrottleTimer[0x18]; // 0x1160 CountdownTimer
    std::uint8_t m_startleTimer[0x18]; // 0x1178 CountdownTimer
    std::uint8_t m_vocalizeTimer[0x18]; // 0x1190 CountdownTimer
    std::uint8_t m_leader[0x4]; // 0x11A8 CHandle<CCSPlayerPawn>
    std::uint8_t m_owner[0x14]; // 0x11AC CHandle<CCSPlayerController>
    std::uint8_t m_reuseTimer[0x18]; // 0x11C0 CountdownTimer
    std::uint8_t m_jumpTimer[0x18]; // 0x11D8 CountdownTimer
    std::uint8_t m_flLastJumpTime[0x2010]; // 0x11F0 float32
    std::uint8_t m_repathTimer[0x98]; // 0x3200 CountdownTimer
    std::uint8_t m_vecPathGoal[0xC]; // 0x3298 VectorWS
    std::uint8_t m_flActiveFollowStartTime[0x4]; // 0x32A4 GameTime_t
    std::uint8_t m_followMinuteTimer[0x20]; // 0x32A8 CountdownTimer
    std::uint8_t m_BlockDirectionTimer[0x1A]; // 0x32C8 CountdownTimer
    std::uint8_t m_bSpawnDyingParticles[0xE]; // 0x32E2 bool
};

struct CPhysicsPropRespawnable {
    static constexpr std::size_t size = 0xD50;
    std::uint8_t pad_0[0xD10]; // 0x0
    std::uint8_t m_vOriginalSpawnOrigin[0xC]; // 0xD10 VectorWS
    std::uint8_t m_vOriginalSpawnAngles[0xC]; // 0xD1C QAngle
    std::uint8_t m_vOriginalMins[0xC]; // 0xD28 Vector
    std::uint8_t m_vOriginalMaxs[0xC]; // 0xD34 Vector
    std::uint8_t m_flRespawnDuration[0x10]; // 0xD40 float32
};

struct CEnvBeam {
    static constexpr std::size_t size = 0x988;
    std::uint8_t pad_0[0x8F0]; // 0x0
    std::uint8_t m_active[0x8]; // 0x8F0 int32
    std::uint8_t m_spriteTexture[0x8]; // 0x8F8 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_iszStartEntity[0x8]; // 0x900 CUtlSymbolLarge
    std::uint8_t m_iszEndEntity[0x8]; // 0x908 CUtlSymbolLarge
    std::uint8_t m_life[0x4]; // 0x910 float32
    std::uint8_t m_boltWidth[0x4]; // 0x914 float32
    std::uint8_t m_noiseAmplitude[0x4]; // 0x918 float32
    std::uint8_t m_speed[0x4]; // 0x91C int32
    std::uint8_t m_restrike[0x8]; // 0x920 float32
    std::uint8_t m_iszSpriteName[0x8]; // 0x928 CUtlSymbolLarge
    std::uint8_t m_frameStart[0x4]; // 0x930 int32
    std::uint8_t m_vEndPointWorld[0xC]; // 0x934 VectorWS
    std::uint8_t m_vEndPointRelative[0xC]; // 0x940 Vector
    std::uint8_t m_radius[0x4]; // 0x94C float32
    std::uint8_t m_TouchType[0x8]; // 0x950 Touch_t
    std::uint8_t m_iFilterName[0x8]; // 0x958 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x8]; // 0x960 CHandle<CBaseEntity>
    std::uint8_t m_iszDecal[0x8]; // 0x968 CUtlSymbolLarge
    std::uint8_t m_OnTouchedByEntity[0x18]; // 0x970 CEntityIOOutput
};

struct CLightSpotEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CCSObservableElement {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_iszObservableModelEntity[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_hObservableModelEntity[0x4]; // 0x4C8 CHandle<CBaseEntity>
    std::uint8_t m_hObservableModelEntity2[0x4]; // 0x4CC CHandle<CBaseEntity>
    std::uint8_t m_nTeamFilter[0x8]; // 0x4D0 uint32
};

struct CWeaponSawedoff {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0x1280]; // 0x0
};

struct CTonemapTrigger {
    static constexpr std::size_t size = 0x9D8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_tonemapControllerName[0x8]; // 0x9C8 CUtlSymbolLarge
    std::uint8_t m_hTonemapController[0x8]; // 0x9D0 CEntityHandle
};

struct CEnvShake {
    static constexpr std::size_t size = 0x4F8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_limitToEntity[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_Amplitude[0x4]; // 0x4B0 float32
    std::uint8_t m_Frequency[0x4]; // 0x4B4 float32
    std::uint8_t m_Duration[0x4]; // 0x4B8 float32
    std::uint8_t m_Radius[0x4]; // 0x4BC float32
    std::uint8_t m_stopTime[0x4]; // 0x4C0 GameTime_t
    std::uint8_t m_nextShake[0x4]; // 0x4C4 GameTime_t
    std::uint8_t m_currentAmp[0x4]; // 0x4C8 float32
    std::uint8_t m_maxForce[0xC]; // 0x4CC Vector
    std::uint8_t m_pShakeController[0x8]; // 0x4D8 IPhysicsMotionController*
    std::uint8_t m_shakeCallback[0x18]; // 0x4E0 CPhysicsShake
};

struct CCSPlayer_MovementServices {
    static constexpr std::size_t size = 0xFE0;
    std::uint8_t pad_0[0x310]; // 0x0
    std::uint8_t m_AnimationState[0xE0]; // 0x310 CCSPlayerAnimationState
    std::uint8_t m_bUsingGroundTopologyOffset[0x4]; // 0x3F0 bool
    std::uint8_t m_flUsingGroundTopologyOffsetTransitionSmoothing[0x4]; // 0x3F4 float32
    std::uint8_t m_vecLadderNormal[0xC]; // 0x3F8 Vector
    std::uint8_t m_nLadderSurfacePropIndex[0x4]; // 0x404 int32
    std::uint8_t m_bDucked[0x4]; // 0x408 bool
    std::uint8_t m_flDuckAmount[0x4]; // 0x40C float32
    std::uint8_t m_flDuckSpeed[0x4]; // 0x410 float32
    std::uint8_t m_bDuckOverride[0x1]; // 0x414 bool
    std::uint8_t m_bDesiresDuck[0x1]; // 0x415 bool
    std::uint8_t m_bDucking[0x2]; // 0x416 bool
    std::uint8_t m_flDuckRootOffset[0x4]; // 0x418 float32
    std::uint8_t m_flDuckViewOffset[0x4]; // 0x41C float32
    std::uint8_t m_flLastDuckTime[0x4]; // 0x420 float32
    std::uint8_t m_flBombPlantViewOffset[0xC]; // 0x424 float32
    std::uint8_t m_vecLastPositionAtFullCrouchSpeed[0x8]; // 0x430 Vector2D
    std::uint8_t m_duckUntilOnGround[0x1]; // 0x438 bool
    std::uint8_t m_bHasWalkMovedSinceLastJump[0x1]; // 0x439 bool
    std::uint8_t m_bInStuckTest[0x20E]; // 0x43A bool
    std::uint8_t m_nTraceCount[0x4]; // 0x648 int32
    std::uint8_t m_StuckLast[0x4]; // 0x64C int32
    std::uint8_t m_bSpeedCropped[0x4]; // 0x650 bool
    std::uint8_t m_nOldWaterLevel[0x4]; // 0x654 int32
    std::uint8_t m_flWaterEntryTime[0x4]; // 0x658 float32
    std::uint8_t m_vecForward[0xC]; // 0x65C Vector
    std::uint8_t m_vecLeft[0xC]; // 0x668 Vector
    std::uint8_t m_vecUp[0xC]; // 0x674 Vector
    std::uint8_t m_nGameCodeHasMovedPlayerAfterCommand[0x4]; // 0x680 int32
    std::uint8_t m_bMadeFootstepNoise[0x4]; // 0x684 bool
    std::uint8_t m_iFootsteps[0x4]; // 0x688 int32
    std::uint8_t m_fStashGrenadeParameterWhen[0x4]; // 0x68C GameTime_t
    std::uint8_t m_bUseFrictionStashedSpeed[0x4]; // 0x690 bool
    std::uint8_t m_flUseFrictionStashedSpeedUntilFrac[0x4]; // 0x694 float32
    std::uint8_t m_flFrictionStashedSpeed[0x4]; // 0x698 float32
    std::uint8_t m_flStamina[0x4]; // 0x69C float32
    std::uint8_t m_flHeightAtJumpStart[0x4]; // 0x6A0 float32
    std::uint8_t m_flMaxJumpHeightThisJump[0x4]; // 0x6A4 float32
    std::uint8_t m_flMaxJumpHeightLastJump[0x4]; // 0x6A8 float32
    std::uint8_t m_flStaminaAtJumpStart[0x4]; // 0x6AC float32
    std::uint8_t m_flVelMulAtJumpStart[0x4]; // 0x6B0 float32
    std::uint8_t m_flAccumulatedJumpError[0x4]; // 0x6B4 float32
    std::uint8_t m_LegacyJump[0x18]; // 0x6B8 CCSPlayerLegacyJump
    std::uint8_t m_ModernJump[0x38]; // 0x6D0 CCSPlayerModernJump
    std::uint8_t m_nLastJumpTick[0x4]; // 0x708 GameTick_t
    std::uint8_t m_flLastJumpFrac[0x4]; // 0x70C float32
    std::uint8_t m_flLastJumpVelocityZ[0x4]; // 0x710 float32
    std::uint8_t m_bJumpApexPending[0x4]; // 0x714 bool
    std::uint8_t m_flTicksSinceLastSurfingDetected[0x90]; // 0x718 float32
    std::uint8_t m_vecWalkWishVel[0x828]; // 0x7A8 Vector2D
    std::uint8_t m_bHasEverProcessedCommand[0x10]; // 0xFD0 bool
};

struct SellbackPurchaseEntry_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_unDefIdx[0x4]; // 0x30 uint16
    std::uint8_t m_nCost[0x4]; // 0x34 int32
    std::uint8_t m_nPrevArmor[0x4]; // 0x38 int32
    std::uint8_t m_bPrevHelmet[0x4]; // 0x3C bool
    std::uint8_t m_hItem[0x8]; // 0x40 CEntityHandle
};

struct CTestPulseIO__EntityNameStringArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nameA[0x8]; // 0x0 CEntityNameString
    std::uint8_t strValueB[0x8]; // 0x8 CUtlSymbolLarge
};

struct CFuncMoverRouter {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nMoverIndex[0x4]; // 0x4A8 int32
    std::uint8_t m_bRouteToAllMovers[0x4]; // 0x4AC bool
    std::uint8_t m_hPathMover[0x8]; // 0x4B0 CHandle<CPathMover>
    std::uint8_t m_iszPathMoverName[0x8]; // 0x4B8 CUtlSymbolLarge
};

struct CTriggerCallback {
    static constexpr std::size_t size = 0x9D0;
    std::uint8_t pad_0[0x9D0]; // 0x0
};

struct CSoundOpvarSetAutoRoomEntity {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t m_traceResults[0x18]; // 0x640 CUtlVector<SoundOpvarTraceResult_t>
    std::uint8_t m_doorwayPairs[0x18]; // 0x658 CUtlVector<AutoRoomDoorwayPairs_t>
    std::uint8_t m_flSize[0x4]; // 0x670 float32
    std::uint8_t m_flHeightTolerance[0x4]; // 0x674 float32
    std::uint8_t m_flSizeSqr[0x8]; // 0x678 float32
};

struct CPulseCell_Outflow_ListenForEntityOutput {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_OnFired[0x48]; // 0xD8 SignatureOutflow_Resume
    std::uint8_t m_strEntityOutput[0x8]; // 0x120 CGlobalSymbol
    std::uint8_t m_bListenUntilCanceled[0x8]; // 0x128 bool
};

struct CPushable {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x928]; // 0x0
};

struct CRotatorTarget {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPhysicsEntitySolver {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_hMovingEntity[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_hPhysicsBlocker[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_separationDuration[0x4]; // 0x4C8 float32
    std::uint8_t m_cancelTime[0x4]; // 0x4CC GameTime_t
};

struct CLogicCollisionPair {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nameAttach1[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_nameAttach2[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_includeHierarchy[0x1]; // 0x4B8 bool
    std::uint8_t m_supportMultipleEntitiesWithSameName[0x1]; // 0x4B9 bool
    std::uint8_t m_disabled[0x1]; // 0x4BA bool
    std::uint8_t m_succeeded[0x1]; // 0x4BB bool
    std::uint8_t m_allowMissing[0x4]; // 0x4BC bool
};

struct CTestEffect {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iLoop[0x4]; // 0x4A8 int32
    std::uint8_t m_iBeam[0x4]; // 0x4AC int32
    std::uint8_t m_pBeam[0x60]; // 0x4B0 CHandle<CBeam>[24]
    std::uint8_t m_flBeamTime[0x60]; // 0x510 GameTime_t[24]
    std::uint8_t m_flStartTime[0x8]; // 0x570 GameTime_t
};

struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_scriptedSequence[0x4]; // 0x0 CHandle<CBaseEntity>
};

struct CPropDoorRotating {
    static constexpr std::size_t size = 0xF30;
    std::uint8_t pad_0[0xE90]; // 0x0
    std::uint8_t m_vecAxis[0xC]; // 0xE90 Vector
    std::uint8_t m_flDistance[0x4]; // 0xE9C float32
    std::uint8_t m_eSpawnPosition[0x4]; // 0xEA0 PropDoorRotatingSpawnPos_t
    std::uint8_t m_eOpenDirection[0x4]; // 0xEA4 PropDoorRotatingOpenDirection_e
    std::uint8_t m_eCurrentOpenDirection[0x4]; // 0xEA8 PropDoorRotatingOpenDirection_e
    std::uint8_t m_eDefaultCheckDirection[0x4]; // 0xEAC doorCheck_e
    std::uint8_t m_flAjarAngle[0x4]; // 0xEB0 float32
    std::uint8_t m_angRotationAjarDeprecated[0xC]; // 0xEB4 QAngle
    std::uint8_t m_angRotationClosed[0xC]; // 0xEC0 QAngle
    std::uint8_t m_angRotationOpenForward[0xC]; // 0xECC QAngle
    std::uint8_t m_angRotationOpenBack[0xC]; // 0xED8 QAngle
    std::uint8_t m_angGoal[0xC]; // 0xEE4 QAngle
    std::uint8_t m_vecForwardBoundsMin[0xC]; // 0xEF0 Vector
    std::uint8_t m_vecForwardBoundsMax[0xC]; // 0xEFC Vector
    std::uint8_t m_vecBackBoundsMin[0xC]; // 0xF08 Vector
    std::uint8_t m_vecBackBoundsMax[0xC]; // 0xF14 Vector
    std::uint8_t m_bAjarDoorShouldntAlwaysOpen[0x4]; // 0xF20 bool
    std::uint8_t m_hEntityBlocker[0xC]; // 0xF24 CHandle<CEntityBlocker>
};

struct CEnvParticleGlow {
    static constexpr std::size_t size = 0xDF0;
    std::uint8_t pad_0[0xDD8]; // 0x0
    std::uint8_t m_flAlphaScale[0x4]; // 0xDD8 float32
    std::uint8_t m_flRadiusScale[0x4]; // 0xDDC float32
    std::uint8_t m_flSelfIllumScale[0x4]; // 0xDE0 float32
    std::uint8_t m_ColorTint[0x4]; // 0xDE4 Color
    std::uint8_t m_hTextureOverride[0x8]; // 0xDE8 CStrongHandle<InfoForResourceTypeCTextureBase>
};

struct CMathRemap {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flInMin[0x4]; // 0x4A8 float32
    std::uint8_t m_flInMax[0x4]; // 0x4AC float32
    std::uint8_t m_flOut1[0x4]; // 0x4B0 float32
    std::uint8_t m_flOut2[0x4]; // 0x4B4 float32
    std::uint8_t m_flOldInValue[0x4]; // 0x4B8 float32
    std::uint8_t m_bEnabled[0x4]; // 0x4BC bool
    std::uint8_t m_OutValue[0x20]; // 0x4C0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnRoseAboveMin[0x18]; // 0x4E0 CEntityIOOutput
    std::uint8_t m_OnRoseAboveMax[0x18]; // 0x4F8 CEntityIOOutput
    std::uint8_t m_OnFellBelowMin[0x18]; // 0x510 CEntityIOOutput
    std::uint8_t m_OnFellBelowMax[0x18]; // 0x528 CEntityIOOutput
};

struct CSkyCameraVolumeTarget {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nSkyboxScale[0x8]; // 0x4A8 int16
    std::uint8_t m_hSkyMaterial[0x8]; // 0x4B0 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct CSoundOpvarSetOBBWindEntity {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x550]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x550 Vector
    std::uint8_t m_vMaxs[0xC]; // 0x55C Vector
    std::uint8_t m_vDistanceMins[0xC]; // 0x568 Vector
    std::uint8_t m_vDistanceMaxs[0xC]; // 0x574 Vector
    std::uint8_t m_flWindMin[0x4]; // 0x580 float32
    std::uint8_t m_flWindMax[0x4]; // 0x584 float32
    std::uint8_t m_flWindMapMin[0x4]; // 0x588 float32
    std::uint8_t m_flWindMapMax[0x4]; // 0x58C float32
};

struct PhysicsRagdollPose_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_RelativeTransforms[0x18]; // 0x8 CNetworkUtlVectorBase<CTransform>
    std::uint8_t m_hOwner[0x4]; // 0x20 CHandle<CBaseEntity>
    std::uint8_t m_bSetFromDebugHistory[0x4]; // 0x24 bool
};

struct CPulseCell_ApplyDynamicAttributeBase__CursorState_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_hEntity[0x8]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_szAttributeKey[0x8]; // 0x8 CUtlString
};

struct CPropDataComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flDmgModBullet[0x4]; // 0x10 float32
    std::uint8_t m_flDmgModClub[0x4]; // 0x14 float32
    std::uint8_t m_flDmgModExplosive[0x4]; // 0x18 float32
    std::uint8_t m_flDmgModFire[0x4]; // 0x1C float32
    std::uint8_t m_iszPhysicsDamageTableName[0x8]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_iszBasePropData[0x8]; // 0x28 CUtlSymbolLarge
    std::uint8_t m_nInteractions[0x4]; // 0x30 int32
    std::uint8_t m_bSpawnMotionDisabled[0x4]; // 0x34 bool
    std::uint8_t m_nDisableTakePhysicsDamageSpawnFlag[0x4]; // 0x38 int32
    std::uint8_t m_nMotionDisabledSpawnFlag[0x4]; // 0x3C int32
};

struct CScriptTriggerOnce {
    static constexpr std::size_t size = 0x9F0;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_vExtent[0x10]; // 0x9E0 Vector
};

struct CLightOrthoEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CInfoInstructorHintHostageRescueZone {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nCurrentCount[0x4]; // 0x0 int32
};

struct CTriggerTeleport {
    static constexpr std::size_t size = 0x9D8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_iLandmark[0x8]; // 0x9C8 CUtlSymbolLarge
    std::uint8_t m_bUseLandmarkAngles[0x1]; // 0x9D0 bool
    std::uint8_t m_bMirrorPlayer[0x1]; // 0x9D1 bool
    std::uint8_t m_bCheckDestIfClearForPlayer[0x6]; // 0x9D2 bool
};

struct CFuncWall {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_nState[0x8]; // 0x850 int32
};

struct CBtActionAim {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t m_szSensorInputKey[0x18]; // 0x68 CUtlString
    std::uint8_t m_szAimReadyKey[0x8]; // 0x80 CUtlString
    std::uint8_t m_flZoomCooldownTimestamp[0x4]; // 0x88 float32
    std::uint8_t m_bDoneAiming[0x4]; // 0x8C bool
    std::uint8_t m_flLerpStartTime[0x4]; // 0x90 float32
    std::uint8_t m_flNextLookTargetLerpTime[0x4]; // 0x94 float32
    std::uint8_t m_flPenaltyReductionRatio[0x4]; // 0x98 float32
    std::uint8_t m_NextLookTarget[0xC]; // 0x9C QAngle
    std::uint8_t m_AimTimer[0x18]; // 0xA8 CountdownTimer
    std::uint8_t m_SniperHoldTimer[0x18]; // 0xC0 CountdownTimer
    std::uint8_t m_FocusIntervalTimer[0x18]; // 0xD8 CountdownTimer
    std::uint8_t m_bAcquired[0x8]; // 0xF0 bool
};

struct CCSGO_TeamPreviewCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nVariant[0x4]; // 0x4A8 int32
    std::uint8_t m_nRandom[0x4]; // 0x4AC int32
    std::uint8_t m_nOrdinal[0x8]; // 0x4B0 int32
    std::uint8_t m_sWeaponName[0x8]; // 0x4B8 CUtlString
    std::uint8_t m_xuid[0x8]; // 0x4C0 uint64
    std::uint8_t m_agentItem[0x3E8]; // 0x4C8 CEconItemView
    std::uint8_t m_glovesItem[0x3E8]; // 0x8B0 CEconItemView
    std::uint8_t m_weaponItem[0x3E8]; // 0xC98 CEconItemView
    std::uint8_t m_petItem[0x3E8]; // 0x1080 CEconItemView
};

struct CGameRulesProxy {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CInfoLadderDismount {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CMessage {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszMessage[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_MessageVolume[0x4]; // 0x4B0 float32
    std::uint8_t m_MessageAttenuation[0x4]; // 0x4B4 int32
    std::uint8_t m_Radius[0x8]; // 0x4B8 float32
    std::uint8_t m_sNoise[0x8]; // 0x4C0 CGameSoundEventName
    std::uint8_t m_OnShowMessage[0x18]; // 0x4C8 CEntityIOOutput
};

struct CPointVelocitySensor {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hTargetEntity[0x4]; // 0x4A8 CHandle<CBaseEntity>
    std::uint8_t m_vecAxis[0xC]; // 0x4AC Vector
    std::uint8_t m_bEnabled[0x4]; // 0x4B8 bool
    std::uint8_t m_fPrevVelocity[0x4]; // 0x4BC float32
    std::uint8_t m_flAvgInterval[0x8]; // 0x4C0 float32
    std::uint8_t m_Velocity[0x20]; // 0x4C8 CEntityOutputTemplate<float32>
};

struct CCS2PawnGraphController {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x5C0]; // 0x0
    std::uint8_t m_bIsDefusing[0x18]; // 0x5C0 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_moveType[0x18]; // 0x5D8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_moveDirectionID[0x18]; // 0x5F0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flMoveSpeedX[0x18]; // 0x608 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flMoveSpeedY[0x18]; // 0x620 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flMoveSpeedHorizontal[0x18]; // 0x638 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flPreviousMoveSpeedHorizontal[0x18]; // 0x650 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flCrouchAmount[0x18]; // 0x668 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bIsWalking[0x18]; // 0x680 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponDropAmount[0x18]; // 0x698 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_groundAction[0x18]; // 0x6B0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_groundActionDirectionID[0x18]; // 0x6C8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flGroundTurnAngleOrVelocity[0x18]; // 0x6E0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderCycle[0x18]; // 0x6F8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderYaw[0x18]; // 0x710 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderYawBackwards[0x18]; // 0x728 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_airAction[0x18]; // 0x740 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flAirHeightAboveGround[0x18]; // 0x758 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_leftFootTarget[0x18]; // 0x770 CAnimGraph2ParamOptionalRef<CNmTarget>
    std::uint8_t m_rightFootTarget[0x18]; // 0x788 CAnimGraph2ParamOptionalRef<CNmTarget>
    std::uint8_t m_flFlashedAmount[0x18]; // 0x7A0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAimPitchAngle[0x18]; // 0x7B8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAimYawAngle[0x18]; // 0x7D0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flinchHead[0x18]; // 0x7E8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flinchHeadRestart[0x18]; // 0x800 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flinchBody[0x18]; // 0x818 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flinchBodyRestart[0x18]; // 0x830 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flinchIsOnFire[0x18]; // 0x848 CAnimGraph2ParamOptionalRef<bool>
};

struct EngineCountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_duration[0x4]; // 0x8 float32
    std::uint8_t m_timestamp[0x4]; // 0xC float32
    std::uint8_t m_timescale[0x8]; // 0x10 float32
};

struct CScriptTriggerMultiple {
    static constexpr std::size_t size = 0x9F0;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_vExtent[0x10]; // 0x9E0 Vector
};

struct CHostage {
    static constexpr std::size_t size = 0x2DA0;
    std::uint8_t pad_0[0xB38]; // 0x0
    std::uint8_t m_OnHostageBeginGrab[0x18]; // 0xB38 CEntityIOOutput
    std::uint8_t m_OnFirstPickedUp[0x18]; // 0xB50 CEntityIOOutput
    std::uint8_t m_OnDroppedNotRescued[0x18]; // 0xB68 CEntityIOOutput
    std::uint8_t m_OnRescued[0x18]; // 0xB80 CEntityIOOutput
    std::uint8_t m_entitySpottedState[0x18]; // 0xB98 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x4]; // 0xBB0 int32
    std::uint8_t m_uiHostageSpawnExclusionGroupMask[0x4]; // 0xBB4 uint32
    std::uint8_t m_nHostageSpawnRandomFactor[0x4]; // 0xBB8 uint32
    std::uint8_t m_bRemove[0x4]; // 0xBBC bool
    std::uint8_t m_vel[0xC]; // 0xBC0 Vector
    std::uint8_t m_isRescued[0x1]; // 0xBCC bool
    std::uint8_t m_jumpedThisFrame[0x3]; // 0xBCD bool
    std::uint8_t m_nHostageState[0x4]; // 0xBD0 int32
    std::uint8_t m_leader[0x4]; // 0xBD4 CHandle<CBaseEntity>
    std::uint8_t m_lastLeader[0x8]; // 0xBD8 CHandle<CCSPlayerPawnBase>
    std::uint8_t m_reuseTimer[0x18]; // 0xBE0 CountdownTimer
    std::uint8_t m_hasBeenUsed[0x4]; // 0xBF8 bool
    std::uint8_t m_accel[0xC]; // 0xBFC Vector
    std::uint8_t m_isRunning[0x1]; // 0xC08 bool
    std::uint8_t m_isCrouching[0x7]; // 0xC09 bool
    std::uint8_t m_jumpTimer[0x18]; // 0xC10 CountdownTimer
    std::uint8_t m_isWaitingForLeader[0x2010]; // 0xC28 bool
    std::uint8_t m_repathTimer[0x18]; // 0x2C38 CountdownTimer
    std::uint8_t m_inhibitDoorTimer[0x90]; // 0x2C50 CountdownTimer
    std::uint8_t m_inhibitObstacleAvoidanceTimer[0x20]; // 0x2CE0 CountdownTimer
    std::uint8_t m_wiggleTimer[0x1C]; // 0x2D00 CountdownTimer
    std::uint8_t m_isAdjusted[0x1]; // 0x2D1C bool
    std::uint8_t m_bHandsHaveBeenCut[0x3]; // 0x2D1D bool
    std::uint8_t m_hHostageGrabber[0x4]; // 0x2D20 CHandle<CCSPlayerPawn>
    std::uint8_t m_fLastGrabTime[0x4]; // 0x2D24 GameTime_t
    std::uint8_t m_flGrabStartTime[0x4]; // 0x2D28 GameTime_t
    std::uint8_t m_vecPositionWhenStartedDroppingToGround[0xC]; // 0x2D2C VectorWS
    std::uint8_t m_vecGrabbedPos[0xC]; // 0x2D38 VectorWS
    std::uint8_t m_flRescueStartTime[0x4]; // 0x2D44 GameTime_t
    std::uint8_t m_flGrabSuccessTime[0x4]; // 0x2D48 GameTime_t
    std::uint8_t m_flDropStartTime[0x4]; // 0x2D4C GameTime_t
    std::uint8_t m_nApproachRewardPayouts[0x4]; // 0x2D50 int32
    std::uint8_t m_nPickupEventCount[0x4]; // 0x2D54 int32
    std::uint8_t m_vecSpawnGroundPos[0x38]; // 0x2D58 VectorWS
    std::uint8_t m_vecHostageResetPosition[0x10]; // 0x2D90 VectorWS
};

struct CEnvSpark {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flDelay[0x4]; // 0x4A8 float32
    std::uint8_t m_nMagnitude[0x4]; // 0x4AC int32
    std::uint8_t m_nTrailLength[0x4]; // 0x4B0 int32
    std::uint8_t m_nType[0x4]; // 0x4B4 int32
    std::uint8_t m_OnSpark[0x18]; // 0x4B8 CEntityIOOutput
};

struct CCSPlayerController_DamageServices {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_nSendUpdate[0x8]; // 0x40 int32
    std::uint8_t m_DamageList[0x88]; // 0x48 CUtlVectorEmbeddedNetworkVar<CDamageRecord>
};

struct CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x680]; // 0x0
};

struct CBaseModelEntity__OnDamageLevelChangedArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nHitGroup[0x4]; // 0x0 HitGroup_t
    std::uint8_t nDamageLevel[0x4]; // 0x4 int32
    std::uint8_t nDamageLevelsRemaining[0x4]; // 0x8 int32
    std::uint8_t nPrevDamageLevel[0x4]; // 0xC int32
};

struct CFilterLOS {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4E0]; // 0x0
};

struct CPointOrient {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszSpawnTargetName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_hTarget[0x4]; // 0x4B0 CHandle<CBaseEntity>
    std::uint8_t m_bActive[0x4]; // 0x4B4 bool
    std::uint8_t m_nGoalDirection[0x4]; // 0x4B8 PointOrientGoalDirectionType_t
    std::uint8_t m_nConstraint[0x4]; // 0x4BC PointOrientConstraint_t
    std::uint8_t m_flMaxTurnRate[0x4]; // 0x4C0 float32
    std::uint8_t m_flLastGameTime[0x4]; // 0x4C4 GameTime_t
};

struct sky3dparams_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t scale[0x4]; // 0x8 int16
    std::uint8_t origin[0xC]; // 0xC VectorWS
    std::uint8_t bClip3DSkyBoxNearToWorldFar[0x4]; // 0x18 bool
    std::uint8_t flClip3DSkyBoxNearToWorldFarOffset[0x4]; // 0x1C float32
    std::uint8_t fog[0x68]; // 0x20 fogparams_t
    std::uint8_t m_nWorldGroupID[0x8]; // 0x88 WorldGroupId_t
};

struct CWeaponP250 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CDestructiblePartsComponent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t __m_pChainEntity[0x48]; // 0x0 CNetworkVarChainer
    std::uint8_t m_vecDamageTakenByHitGroup[0x18]; // 0x48 CUtlVector<uint16>
    std::uint8_t m_hOwner[0x8]; // 0x60 CHandle<CBaseModelEntity>
    std::uint8_t m_pAnimGraphDestructibleGraphController[0x8]; // 0x68 CAnimGraphControllerPtr
};

struct CChangeLevel {
    static constexpr std::size_t size = 0x9F8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_sMapName[0x8]; // 0x9C8 CUtlString
    std::uint8_t m_sLandmarkName[0x8]; // 0x9D0 CUtlString
    std::uint8_t m_OnChangeLevel[0x18]; // 0x9D8 CEntityIOOutput
    std::uint8_t m_bTouched[0x1]; // 0x9F0 bool
    std::uint8_t m_bNoTouch[0x1]; // 0x9F1 bool
    std::uint8_t m_bNewChapter[0x1]; // 0x9F2 bool
    std::uint8_t m_bOnChangeLevelFired[0x5]; // 0x9F3 bool
};

struct CBaseButton {
    static constexpr std::size_t size = 0x9D0;
    std::uint8_t pad_0[0x8D0]; // 0x0
    std::uint8_t m_angMoveEntitySpace[0xC]; // 0x8D0 QAngle
    std::uint8_t m_fStayPushed[0x1]; // 0x8DC bool
    std::uint8_t m_fRotating[0x3]; // 0x8DD bool
    std::uint8_t m_ls[0x20]; // 0x8E0 locksound_t
    std::uint8_t m_sUseSound[0x8]; // 0x900 CGameSoundEventName
    std::uint8_t m_sLockedSound[0x8]; // 0x908 CGameSoundEventName
    std::uint8_t m_sUnlockedSound[0x8]; // 0x910 CGameSoundEventName
    std::uint8_t m_sOverrideAnticipationName[0x8]; // 0x918 CUtlSymbolLarge
    std::uint8_t m_bLocked[0x1]; // 0x920 bool
    std::uint8_t m_bDisabled[0x3]; // 0x921 bool
    std::uint8_t m_flSpeed[0x4]; // 0x924 float32
    std::uint8_t m_flUseLockedTime[0x4]; // 0x928 GameTime_t
    std::uint8_t m_bSolidBsp[0x4]; // 0x92C bool
    std::uint8_t m_OnDamaged[0x18]; // 0x930 CEntityIOOutput
    std::uint8_t m_OnPressed[0x18]; // 0x948 CEntityIOOutput
    std::uint8_t m_OnUseLocked[0x18]; // 0x960 CEntityIOOutput
    std::uint8_t m_OnIn[0x18]; // 0x978 CEntityIOOutput
    std::uint8_t m_OnOut[0x18]; // 0x990 CEntityIOOutput
    std::uint8_t m_nState[0x4]; // 0x9A8 int32
    std::uint8_t m_hConstraint[0x4]; // 0x9AC CEntityHandle
    std::uint8_t m_hConstraintParent[0x4]; // 0x9B0 CEntityHandle
    std::uint8_t m_bForceNpcExclude[0x4]; // 0x9B4 bool
    std::uint8_t m_sGlowEntity[0x8]; // 0x9B8 CUtlSymbolLarge
    std::uint8_t m_glowEntity[0x4]; // 0x9C0 CHandle<CBaseModelEntity>
    std::uint8_t m_usable[0x4]; // 0x9C4 bool
    std::uint8_t m_szDisplayText[0x8]; // 0x9C8 CUtlSymbolLarge
};

struct CPulseCell_SoundEventStart {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Type[0x8]; // 0x48 SoundEventStartType_t
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
    static constexpr std::size_t size = 0xAD0;
    std::uint8_t pad_0[0xA48]; // 0x0
    std::uint8_t m_bDamageDetonating[0x8]; // 0xA48 bool
    std::uint8_t m_OnPlayerPickup[0x18]; // 0xA50 CEntityIOOutput
    std::uint8_t m_OnExplode[0x18]; // 0xA68 CEntityIOOutput
    std::uint8_t m_bHasWarnedAI[0x1]; // 0xA80 bool
    std::uint8_t m_bIsSmokeGrenade[0x1]; // 0xA81 bool
    std::uint8_t m_bIsLive[0x2]; // 0xA82 bool
    std::uint8_t m_DmgRadius[0x4]; // 0xA84 float32
    std::uint8_t m_flDetonateTime[0x4]; // 0xA88 GameTime_t
    std::uint8_t m_flWarnAITime[0x4]; // 0xA8C float32
    std::uint8_t m_flDamage[0x8]; // 0xA90 float32
    std::uint8_t m_iszBounceSound[0x8]; // 0xA98 CUtlSymbolLarge
    std::uint8_t m_ExplosionSound[0x8]; // 0xAA0 CUtlString
    std::uint8_t m_hThrower[0x18]; // 0xAA8 CHandle<CCSPlayerPawn>
    std::uint8_t m_flNextAttack[0x4]; // 0xAC0 GameTime_t
    std::uint8_t m_hOriginalThrower[0xC]; // 0xAC4 CHandle<CCSPlayerPawn>
};

struct CColorCorrectionVolume {
    static constexpr std::size_t size = 0xBE8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_MaxWeight[0x4]; // 0x9C8 float32
    std::uint8_t m_FadeDuration[0x4]; // 0x9CC float32
    std::uint8_t m_Weight[0x4]; // 0x9D0 float32
    std::uint8_t m_lookupFilename[0x200]; // 0x9D4 char[512]
    std::uint8_t m_LastEnterWeight[0x4]; // 0xBD4 float32
    std::uint8_t m_LastEnterTime[0x4]; // 0xBD8 GameTime_t
    std::uint8_t m_LastExitWeight[0x4]; // 0xBDC float32
    std::uint8_t m_LastExitTime[0x8]; // 0xBE0 GameTime_t
};

struct CCSPlayerController_ActionTrackingServices {
    static constexpr std::size_t size = 0x460;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_perRoundStats[0x88]; // 0x40 CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    std::uint8_t m_matchStats[0xC0]; // 0xC8 CSMatchStats_t
    std::uint8_t m_iNumRoundKills[0x4]; // 0x188 int32
    std::uint8_t m_iNumRoundKillsHeadshots[0x4]; // 0x18C int32
    std::uint8_t m_flTotalRoundDamageDealt[0x2D0]; // 0x190 float32
};

struct CBodyComponentBaseAnimGraph {
    static constexpr std::size_t size = 0xB30;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_animationController[0x650]; // 0x4E0 CBaseAnimGraphController
};

struct CPulseCell_BaseYieldingInflow {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_BaseFlow_OnAfterCancel[0x48]; // 0x48 CPulse_ResumePoint
    std::uint8_t m_BaseFlow_WhileActive[0x48]; // 0x90 CPulse_ResumePoint
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
};

struct CFogVolume {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_fogName[0x8]; // 0x850 CUtlSymbolLarge
    std::uint8_t m_postProcessName[0x8]; // 0x858 CUtlSymbolLarge
    std::uint8_t m_colorCorrectionName[0x10]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_bDisabled[0x1]; // 0x870 bool
    std::uint8_t m_bInFogVolumesList[0x7]; // 0x871 bool
};

struct CFuncRotating {
    static constexpr std::size_t size = 0x918;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_OnStopped[0x18]; // 0x850 CEntityIOOutput
    std::uint8_t m_OnStarted[0x18]; // 0x868 CEntityIOOutput
    std::uint8_t m_OnReachedStart[0x18]; // 0x880 CEntityIOOutput
    std::uint8_t m_localRotationVector[0xC]; // 0x898 RotationVector
    std::uint8_t m_flSpeed[0x4]; // 0x8A4 float32
    std::uint8_t m_flFanFriction[0x4]; // 0x8A8 float32
    std::uint8_t m_flAttenuation[0x4]; // 0x8AC float32
    std::uint8_t m_flVolume[0x4]; // 0x8B0 float32
    std::uint8_t m_flTargetSpeed[0x4]; // 0x8B4 float32
    std::uint8_t m_flMaxSpeed[0x4]; // 0x8B8 float32
    std::uint8_t m_flBlockDamage[0x4]; // 0x8BC float32
    std::uint8_t m_NoiseRunning[0x8]; // 0x8C0 CGameSoundEventName
    std::uint8_t m_bReversed[0x1]; // 0x8C8 bool
    std::uint8_t m_bAccelDecel[0x17]; // 0x8C9 bool
    std::uint8_t m_prevLocalAngles[0xC]; // 0x8E0 QAngle
    std::uint8_t m_angStart[0xC]; // 0x8EC QAngle
    std::uint8_t m_bStopAtStartPos[0x4]; // 0x8F8 bool
    std::uint8_t m_vecClientOrigin[0xC]; // 0x8FC Vector
    std::uint8_t m_vecClientAngles[0x10]; // 0x908 QAngle
};

struct CTimerEntity {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnTimer[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnTimerHigh[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_OnTimerLow[0x18]; // 0x4D8 CEntityIOOutput
    std::uint8_t m_iDisabled[0x4]; // 0x4F0 int32
    std::uint8_t m_flInitialDelay[0x4]; // 0x4F4 float32
    std::uint8_t m_flRefireTime[0x4]; // 0x4F8 float32
    std::uint8_t m_bUpDownState[0x4]; // 0x4FC bool
    std::uint8_t m_iUseRandomTime[0x4]; // 0x500 int32
    std::uint8_t m_bPauseAfterFiring[0x4]; // 0x504 bool
    std::uint8_t m_flLowerRandomBound[0x4]; // 0x508 float32
    std::uint8_t m_flUpperRandomBound[0x4]; // 0x50C float32
    std::uint8_t m_flRemainingTime[0x4]; // 0x510 float32
    std::uint8_t m_bPaused[0x4]; // 0x514 bool
};

struct CBtActionMoveTo {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_szDestinationInputKey[0x8]; // 0x60 CUtlString
    std::uint8_t m_szHidingSpotInputKey[0x8]; // 0x68 CUtlString
    std::uint8_t m_szThreatInputKey[0x8]; // 0x70 CUtlString
    std::uint8_t m_vecDestination[0xC]; // 0x78 VectorWS
    std::uint8_t m_bAutoLookAdjust[0x1]; // 0x84 bool
    std::uint8_t m_bComputePath[0x3]; // 0x85 bool
    std::uint8_t m_flDamagingAreasPenaltyCost[0x8]; // 0x88 float32
    std::uint8_t m_CheckApproximateCornersTimer[0x18]; // 0x90 CountdownTimer
    std::uint8_t m_CheckHighPriorityItem[0x18]; // 0xA8 CountdownTimer
    std::uint8_t m_RepathTimer[0x18]; // 0xC0 CountdownTimer
    std::uint8_t m_flArrivalEpsilon[0x4]; // 0xD8 float32
    std::uint8_t m_flAdditionalArrivalEpsilon2D[0x4]; // 0xDC float32
    std::uint8_t m_flHidingSpotCheckDistanceThreshold[0x4]; // 0xE0 float32
    std::uint8_t m_flNearestAreaDistanceThreshold[0x4]; // 0xE4 float32
};

struct CPlayer_MovementServices_Humanoid {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x258]; // 0x0
    std::uint8_t m_flStepSoundTime[0x4]; // 0x258 float32
    std::uint8_t m_flFallVelocity[0x4]; // 0x25C float32
    std::uint8_t m_groundNormal[0xC]; // 0x260 Vector
    std::uint8_t m_flSurfaceFriction[0x4]; // 0x26C float32
    std::uint8_t m_surfaceProps[0x10]; // 0x270 CUtlStringToken
    std::uint8_t m_nStepside[0x4]; // 0x280 int32
    std::uint8_t m_vecSmoothedVelocity[0xC]; // 0x284 Vector
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bIsValid[0x1]; // 0x0 bool
};

struct CWeaponG3SG1 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CTriggerOnce {
    static constexpr std::size_t size = 0x9E0;
    std::uint8_t pad_0[0x9E0]; // 0x0
};

struct CSMatchStats_t {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t m_iEnemy5Ks[0x4]; // 0x68 int32
    std::uint8_t m_iEnemy4Ks[0x4]; // 0x6C int32
    std::uint8_t m_iEnemy3Ks[0x4]; // 0x70 int32
    std::uint8_t m_iEnemyKnifeKills[0x4]; // 0x74 int32
    std::uint8_t m_iEnemyTaserKills[0x4]; // 0x78 int32
    std::uint8_t m_iEnemy2Ks[0x4]; // 0x7C int32
    std::uint8_t m_iUtility_Count[0x4]; // 0x80 int32
    std::uint8_t m_iUtility_Successes[0x4]; // 0x84 int32
    std::uint8_t m_iUtility_Enemies[0x4]; // 0x88 int32
    std::uint8_t m_iFlash_Count[0x4]; // 0x8C int32
    std::uint8_t m_iFlash_Successes[0x4]; // 0x90 int32
    std::uint8_t m_flHealthPointsRemovedTotal[0x4]; // 0x94 float32
    std::uint8_t m_flHealthPointsDealtTotal[0x4]; // 0x98 float32
    std::uint8_t m_nShotsFiredTotal[0x4]; // 0x9C int32
    std::uint8_t m_nShotsOnTargetTotal[0x4]; // 0xA0 int32
    std::uint8_t m_i1v1Count[0x4]; // 0xA4 int32
    std::uint8_t m_i1v1Wins[0x4]; // 0xA8 int32
    std::uint8_t m_i1v2Count[0x4]; // 0xAC int32
    std::uint8_t m_i1v2Wins[0x4]; // 0xB0 int32
    std::uint8_t m_iEntryCount[0x4]; // 0xB4 int32
    std::uint8_t m_iEntryWins[0x8]; // 0xB8 int32
};

struct EntityRenderAttribute_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_ID[0x4]; // 0x30 CUtlStringToken
    std::uint8_t m_Values[0x14]; // 0x34 Vector4D
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_nBlackboardReference[0x2]; // 0x80 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_bSelfReference[0x6]; // 0x82 bool
};

struct CFuncMonitor {
    static constexpr std::size_t size = 0x890;
    std::uint8_t pad_0[0x870]; // 0x0
    std::uint8_t m_targetCamera[0x8]; // 0x870 CUtlString
    std::uint8_t m_nResolutionEnum[0x4]; // 0x878 int32
    std::uint8_t m_bRenderShadows[0x1]; // 0x87C bool
    std::uint8_t m_bUseUniqueColorTarget[0x3]; // 0x87D bool
    std::uint8_t m_brushModelName[0x8]; // 0x880 CUtlString
    std::uint8_t m_hTargetCamera[0x4]; // 0x888 CHandle<CBaseEntity>
    std::uint8_t m_bEnabled[0x1]; // 0x88C bool
    std::uint8_t m_bDraw3DSkybox[0x1]; // 0x88D bool
    std::uint8_t m_bStartEnabled[0x2]; // 0x88E bool
};

struct CInfoVisibilityBox {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4AC]; // 0x0
    std::uint8_t m_nMode[0x4]; // 0x4AC int32
    std::uint8_t m_vBoxSize[0xC]; // 0x4B0 Vector
    std::uint8_t m_bEnabled[0x4]; // 0x4BC bool
};

struct CGunTarget {
    static constexpr std::size_t size = 0x8F8;
    std::uint8_t pad_0[0x8D0]; // 0x0
    std::uint8_t m_flSpeed[0x4]; // 0x8D0 float32
    std::uint8_t m_on[0x4]; // 0x8D4 bool
    std::uint8_t m_hTargetEnt[0x8]; // 0x8D8 CHandle<CBaseEntity>
    std::uint8_t m_OnDeath[0x18]; // 0x8E0 CEntityIOOutput
};

struct CSoundEventConeEntity {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t m_flEmitterAngle[0x4]; // 0x568 float32
    std::uint8_t m_flSweetSpotAngle[0x4]; // 0x56C float32
    std::uint8_t m_flAttenMin[0x4]; // 0x570 float32
    std::uint8_t m_flAttenMax[0x4]; // 0x574 float32
    std::uint8_t m_iszParameterName[0x8]; // 0x578 CUtlSymbolLarge
};

struct CSoundOpvarSetOBBEntity {
    static constexpr std::size_t size = 0x6A8;
    std::uint8_t pad_0[0x6A8]; // 0x0
};

struct CDecoyProjectile {
    static constexpr std::size_t size = 0xB80;
    std::uint8_t pad_0[0xB58]; // 0x0
    std::uint8_t m_nDecoyShotTick[0x4]; // 0xB58 int32
    std::uint8_t m_shotsRemaining[0x4]; // 0xB5C int32
    std::uint8_t m_fExpireTime[0x10]; // 0xB60 GameTime_t
    std::uint8_t m_decoyWeaponDefIndex[0x10]; // 0xB70 uint16
};

struct CPrecipitationBlocker {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CSoundOpvarSetPathCornerEntity {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x658]; // 0x0
    std::uint8_t m_bUseParentedPath[0x4]; // 0x658 bool
    std::uint8_t m_flDistMinSqr[0x4]; // 0x65C float32
    std::uint8_t m_flDistMaxSqr[0x8]; // 0x660 float32
    std::uint8_t m_iszPathCornerEntityName[0x8]; // 0x668 CUtlSymbolLarge
};

struct CPointClientCommand {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CCSGO_RushIntroTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_ApplyParent__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_hParentEntity[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_hChildEntity[0x4]; // 0x4 CHandle<CBaseEntity>
};

struct CHostageRescueZone {
    static constexpr std::size_t size = 0x9E8;
    std::uint8_t pad_0[0x9E8]; // 0x0
};

struct CWorld {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CPathMoverEntitySpawner {
    static constexpr std::size_t size = 0x5B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_eTemplateChoiceStrategy[0x8]; // 0x4A8 CPathMoverEntitySpawner::TemplateChoiceStrategy_t
    std::uint8_t m_szSpawnTemplates[0x20]; // 0x4B0 CUtlSymbolLarge[4]
    std::uint8_t m_szSpawnTemplateParams[0x10]; // 0x4D0 int32[4]
    std::uint8_t m_szSpawnTemplateCount[0x10]; // 0x4E0 int32[4]
    std::uint8_t m_nSpawnIndex[0x4]; // 0x4F0 int32
    std::uint8_t m_hPathMover[0x4]; // 0x4F4 CHandle<CPathMover>
    std::uint8_t m_flSpawnFrequencySeconds[0x4]; // 0x4F8 float32
    std::uint8_t m_flSpawnFrequencyDistToNearestMover[0x4]; // 0x4FC float32
    std::uint8_t m_mapSpawnedMoverTemplates[0x20]; // 0x500 CUtlHashtable<CHandle<CFuncMover>,PathMoverEntitySpawn>
    std::uint8_t m_nMaxActive[0x4]; // 0x520 int32
    std::uint8_t m_nSpawnNum[0x4]; // 0x524 int32
    std::uint8_t m_flLastSpawnTime[0x4]; // 0x528 GameTime_t
    std::uint8_t m_bEnabled[0x1]; // 0x52C bool
    std::uint8_t m_bDestroyMoverOnArrivedAtEnd[0x3]; // 0x52D bool
    std::uint8_t m_vecQueuedRemovals[0x18]; // 0x530 CUtlVector<CHandle<CFuncMover>>
    std::uint8_t m_OnTemplateSpawned[0x18]; // 0x548 CEntityIOOutput
    std::uint8_t m_OnTemplateGroupSpawned[0x18]; // 0x560 CEntityIOOutput
    std::uint8_t m_iszPathMoverName[0x8]; // 0x578 CUtlSymbolLarge
    std::uint8_t m_bPrepopulateOnSpawn[0x8]; // 0x580 bool
    std::uint8_t m_iszPathNodeStartName[0x14]; // 0x588 CUtlSymbolLarge
    std::uint8_t m_vMoverSpawnPos[0xC]; // 0x59C VectorWS
    std::uint8_t m_bRunningDebugThink[0x8]; // 0x5A8 bool
};

struct CModelState {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0xA0]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0xA0 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_ModelName[0x38]; // 0xA8 CUtlSymbolLarge
    std::uint8_t m_pVPhysicsAggregate[0x8]; // 0xE0 IPhysAggregateInstance*
    std::uint8_t m_flRootBoneOffset_x[0x4]; // 0xE8 float32
    std::uint8_t m_flRootBoneOffset_y[0x4]; // 0xEC float32
    std::uint8_t m_flRootBoneOffset_z[0x4]; // 0xF0 float32
    std::uint8_t m_nRootBoneOffsetResetSerialNumber[0x1]; // 0xF4 uint8
    std::uint8_t m_bClientClothCreationSuppressed[0xEB]; // 0xF5 bool
    std::uint8_t m_nAnimStateNoInterpSerialNumber[0x8]; // 0x1E0 uint8
    std::uint8_t m_MeshGroupMask[0x50]; // 0x1E8 uint64
    std::uint8_t m_nBodyGroupChoices[0x4A]; // 0x238 CNetworkUtlVectorBase<int32>
    std::uint8_t m_nIdealMotionType[0x1]; // 0x282 int8
    std::uint8_t m_nForceLOD[0x1]; // 0x283 int8
    std::uint8_t m_nClothUpdateFlags[0xC]; // 0x284 int8
};

struct CBaseModelEntity__BodyGroupRequest_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_uRequestID[0x4]; // 0x0 uint32
    std::uint8_t m_nGroupName[0x4]; // 0x4 CUtlStringToken
    std::uint8_t m_sChoiceName[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_nGroup[0x4]; // 0x10 int32
    std::uint8_t m_uChoice[0x2]; // 0x14 uint16
    std::uint8_t m_uRefCount[0x2]; // 0x16 uint16
};

struct CPulseCell_LerpCameraSettings__CursorState_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hCamera[0x4]; // 0x8 CHandle<CPointCamera>
    std::uint8_t m_OverlaidStart[0x10]; // 0xC PointCameraSettings_t
    std::uint8_t m_OverlaidEnd[0x10]; // 0x1C PointCameraSettings_t
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CWeaponGlock {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CHEGrenadeProjectile {
    static constexpr std::size_t size = 0xB40;
    std::uint8_t pad_0[0xB40]; // 0x0
};

struct CTriggerGravity {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
};

struct CCollisionProperty {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_collisionAttribute[0x30]; // 0x10 VPhysicsCollisionAttribute_t
    std::uint8_t m_vecMins[0xC]; // 0x40 Vector
    std::uint8_t m_vecMaxs[0xE]; // 0x4C Vector
    std::uint8_t m_usSolidFlags[0x1]; // 0x5A uint8
    std::uint8_t m_nSolidType[0x1]; // 0x5B SolidType_t
    std::uint8_t m_triggerBloat[0x1]; // 0x5C uint8
    std::uint8_t m_nSurroundType[0x1]; // 0x5D SurroundingBoundsType_t
    std::uint8_t m_CollisionGroup[0x1]; // 0x5E uint8
    std::uint8_t m_nEnablePhysics[0x1]; // 0x5F uint8
    std::uint8_t m_flBoundingRadius[0x4]; // 0x60 float32
    std::uint8_t m_vecSpecifiedSurroundingMins[0xC]; // 0x64 Vector
    std::uint8_t m_vecSpecifiedSurroundingMaxs[0xC]; // 0x70 Vector
    std::uint8_t m_vecSurroundingMaxs[0xC]; // 0x7C Vector
    std::uint8_t m_vecSurroundingMins[0xC]; // 0x88 Vector
    std::uint8_t m_vCapsuleCenter1[0xC]; // 0x94 Vector
    std::uint8_t m_vCapsuleCenter2[0xC]; // 0xA0 Vector
    std::uint8_t m_flCapsuleRadius[0xC]; // 0xAC float32
};

struct CWeaponGalilAR {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CFilterMassGreater {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_fFilterMass[0x8]; // 0x4E0 float32
};

struct CWeaponMP7 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CCSWeaponBaseGun {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t m_zoomLevel[0x4]; // 0x1280 int32
    std::uint8_t m_iBurstShotsRemaining[0xC]; // 0x1284 int32
    std::uint8_t m_silencedModelIndex[0x4]; // 0x1290 int32
    std::uint8_t m_inPrecache[0x1]; // 0x1294 bool
    std::uint8_t m_bNeedsBoltAction[0x3]; // 0x1295 bool
    std::uint8_t m_nRevolverCylinderIdx[0x4]; // 0x1298 int32
    std::uint8_t m_bSkillReloadAvailable[0x1]; // 0x129C bool
    std::uint8_t m_bSkillReloadLiftedReloadKey[0x1]; // 0x129D bool
    std::uint8_t m_bSkillBoltInterruptAvailable[0x1]; // 0x129E bool
    std::uint8_t m_bSkillBoltLiftedFireKey[0x1]; // 0x129F bool
};

struct CEnableMotionFixup {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CLogicActiveAutosave {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4B8]; // 0x0
    std::uint8_t m_TriggerHitPoints[0x4]; // 0x4B8 int32
    std::uint8_t m_flTimeToTrigger[0x4]; // 0x4BC float32
    std::uint8_t m_flStartTime[0x4]; // 0x4C0 GameTime_t
    std::uint8_t m_flDangerousTime[0x4]; // 0x4C4 float32
};

struct CMathCounter {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flMin[0x4]; // 0x4A8 float32
    std::uint8_t m_flMax[0x4]; // 0x4AC float32
    std::uint8_t m_bHitMin[0x1]; // 0x4B0 bool
    std::uint8_t m_bHitMax[0x1]; // 0x4B1 bool
    std::uint8_t m_bDisabled[0x6]; // 0x4B2 bool
    std::uint8_t m_OutValue[0x20]; // 0x4B8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnGetValue[0x20]; // 0x4D8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnHitMin[0x18]; // 0x4F8 CEntityIOOutput
    std::uint8_t m_OnHitMax[0x18]; // 0x510 CEntityIOOutput
    std::uint8_t m_OnChangedFromMin[0x18]; // 0x528 CEntityIOOutput
    std::uint8_t m_OnChangedFromMax[0x18]; // 0x540 CEntityIOOutput
};

struct CCSCustomPlayerCamera {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hPawn[0x4]; // 0x4A8 CHandle<CCSPlayerPawnBase>
    std::uint8_t m_nCameraMode[0x4]; // 0x4AC CustomCameraMode_t
    std::uint8_t m_hFollowEntity[0x4]; // 0x4B0 CHandle<CBaseEntity>
    std::uint8_t m_bFollowEyes[0x4]; // 0x4B4 bool
    std::uint8_t m_vecFollowOffset[0xC]; // 0x4B8 Vector
    std::uint8_t m_vecCameraOffset[0xC]; // 0x4C4 Vector
    std::uint8_t m_bClipCameraOffset[0x4]; // 0x4D0 bool
    std::uint8_t m_flCameraOffsetReturnStrength[0xC]; // 0x4D4 float32
};

struct CCSGameModeRules_ArmsRace {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_WeaponSequence[0x58]; // 0x30 CNetworkUtlVectorBase<CUtlString>
};

struct CLogicPlayerProxyBase {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_PlayerHasAmmo[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_PlayerHasNoAmmo[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_PlayerDied[0x18]; // 0x4D8 CEntityIOOutput
    std::uint8_t m_RequestedPlayerHealth[0x20]; // 0x4F0 CEntityOutputTemplate<int32>
    std::uint8_t m_hPlayer[0x8]; // 0x510 CHandle<CBaseEntity>
};

struct CAttributeContainer {
    static constexpr std::size_t size = 0x438;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_Item[0x3E8]; // 0x50 CEconItemView
};

struct CCSPlace {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t m_name[0x8]; // 0x868 CUtlSymbolLarge
};

struct CPulseCell_ApplyParent {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<OutflowWithRequirements_t>
};

struct CFilterContext {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iFilterContext[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CLightEnvironmentEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CEnvDecal {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_hDecalMaterial[0x8]; // 0x850 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_flWidth[0x4]; // 0x858 float32
    std::uint8_t m_flHeight[0x4]; // 0x85C float32
    std::uint8_t m_flDepth[0x4]; // 0x860 float32
    std::uint8_t m_nRenderOrder[0x4]; // 0x864 uint32
    std::uint8_t m_bProjectOnWorld[0x1]; // 0x868 bool
    std::uint8_t m_bProjectOnCharacters[0x1]; // 0x869 bool
    std::uint8_t m_bProjectOnWater[0x2]; // 0x86A bool
    std::uint8_t m_flDepthSortBias[0x4]; // 0x86C float32
};

struct CEnvVolumetricFogVolume {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bActive[0x4]; // 0x4A8 bool
    std::uint8_t m_vBoxMins[0xC]; // 0x4AC Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x4B8 Vector
    std::uint8_t m_bStartDisabled[0x1]; // 0x4C4 bool
    std::uint8_t m_bIndirectUseLPVs[0x3]; // 0x4C5 bool
    std::uint8_t m_flStrength[0x4]; // 0x4C8 float32
    std::uint8_t m_nFalloffShape[0x4]; // 0x4CC int32
    std::uint8_t m_flFalloffExponent[0x4]; // 0x4D0 float32
    std::uint8_t m_flHeightFogDepth[0x4]; // 0x4D4 float32
    std::uint8_t m_fHeightFogEdgeWidth[0x4]; // 0x4D8 float32
    std::uint8_t m_fIndirectLightStrength[0x4]; // 0x4DC float32
    std::uint8_t m_fSunLightStrength[0x4]; // 0x4E0 float32
    std::uint8_t m_fNoiseStrength[0x4]; // 0x4E4 float32
    std::uint8_t m_TintColor[0x4]; // 0x4E8 Color
    std::uint8_t m_bOverrideTintColor[0x1]; // 0x4EC bool
    std::uint8_t m_bOverrideIndirectLightStrength[0x1]; // 0x4ED bool
    std::uint8_t m_bOverrideSunLightStrength[0x1]; // 0x4EE bool
    std::uint8_t m_bOverrideNoiseStrength[0x1]; // 0x4EF bool
};

struct CServerOnlyEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPulseCell_PlaySequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_hTarget[0x4]; // 0x0 CHandle<CBaseAnimGraph>
};

struct CBodyComponentSkeletonInstance {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_skeletonInstance[0x460]; // 0x80 CSkeletonInstance
};

struct CItemGeneric {
    static constexpr std::size_t size = 0xC10;
    std::uint8_t pad_0[0xAF4]; // 0x0
    std::uint8_t m_bHasTriggerRadius[0x1]; // 0xAF4 bool
    std::uint8_t m_bHasPickupRadius[0x3]; // 0xAF5 bool
    std::uint8_t m_flPickupRadiusSqr[0x4]; // 0xAF8 float32
    std::uint8_t m_flTriggerRadiusSqr[0x4]; // 0xAFC float32
    std::uint8_t m_flLastPickupCheck[0x4]; // 0xB00 GameTime_t
    std::uint8_t m_bPlayerCounterListenerAdded[0x1]; // 0xB04 bool
    std::uint8_t m_bPlayerInTriggerRadius[0x3]; // 0xB05 bool
    std::uint8_t m_hSpawnParticleEffect[0x8]; // 0xB08 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_pAmbientSoundEffect[0x8]; // 0xB10 CUtlSymbolLarge
    std::uint8_t m_bAutoStartAmbientSound[0x8]; // 0xB18 bool
    std::uint8_t m_pSpawnScriptFunction[0x8]; // 0xB20 CUtlSymbolLarge
    std::uint8_t m_hPickupParticleEffect[0x8]; // 0xB28 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_pPickupSoundEffect[0x8]; // 0xB30 CUtlSymbolLarge
    std::uint8_t m_pPickupScriptFunction[0x8]; // 0xB38 CUtlSymbolLarge
    std::uint8_t m_hTimeoutParticleEffect[0x8]; // 0xB40 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_pTimeoutSoundEffect[0x8]; // 0xB48 CUtlSymbolLarge
    std::uint8_t m_pTimeoutScriptFunction[0x8]; // 0xB50 CUtlSymbolLarge
    std::uint8_t m_pPickupFilterName[0x8]; // 0xB58 CUtlSymbolLarge
    std::uint8_t m_hPickupFilter[0x8]; // 0xB60 CHandle<CBaseFilter>
    std::uint8_t m_OnPickup[0x18]; // 0xB68 CEntityIOOutput
    std::uint8_t m_OnTimeout[0x18]; // 0xB80 CEntityIOOutput
    std::uint8_t m_OnTriggerStartTouch[0x18]; // 0xB98 CEntityIOOutput
    std::uint8_t m_OnTriggerTouch[0x18]; // 0xBB0 CEntityIOOutput
    std::uint8_t m_OnTriggerEndTouch[0x18]; // 0xBC8 CEntityIOOutput
    std::uint8_t m_pAllowPickupScriptFunction[0x8]; // 0xBE0 CUtlSymbolLarge
    std::uint8_t m_flPickupRadius[0x4]; // 0xBE8 float32
    std::uint8_t m_flTriggerRadius[0x4]; // 0xBEC float32
    std::uint8_t m_pTriggerSoundEffect[0x8]; // 0xBF0 CUtlSymbolLarge
    std::uint8_t m_bGlowWhenInTrigger[0x4]; // 0xBF8 bool
    std::uint8_t m_glowColor[0x4]; // 0xBFC Color
    std::uint8_t m_bUseable[0x4]; // 0xC00 bool
    std::uint8_t m_hTriggerHelper[0xC]; // 0xC04 CHandle<CItemGenericTriggerHelper>
};

struct CPointValueRemapper {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x4A8 bool
    std::uint8_t m_bUpdateOnClient[0x3]; // 0x4A9 bool
    std::uint8_t m_nInputType[0x4]; // 0x4AC ValueRemapperInputType_t
    std::uint8_t m_iszRemapLineStartName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszRemapLineEndName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_hRemapLineStart[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_hRemapLineEnd[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_flMaximumChangePerSecond[0x4]; // 0x4C8 float32
    std::uint8_t m_flDisengageDistance[0x4]; // 0x4CC float32
    std::uint8_t m_flEngageDistance[0x4]; // 0x4D0 float32
    std::uint8_t m_bRequiresUseKey[0x4]; // 0x4D4 bool
    std::uint8_t m_nOutputType[0x8]; // 0x4D8 ValueRemapperOutputType_t
    std::uint8_t m_iszOutputEntityName[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_iszOutputEntity2Name[0x8]; // 0x4E8 CUtlSymbolLarge
    std::uint8_t m_iszOutputEntity3Name[0x8]; // 0x4F0 CUtlSymbolLarge
    std::uint8_t m_iszOutputEntity4Name[0x8]; // 0x4F8 CUtlSymbolLarge
    std::uint8_t m_hOutputEntities[0x18]; // 0x500 CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    std::uint8_t m_nHapticsType[0x4]; // 0x518 ValueRemapperHapticsType_t
    std::uint8_t m_nMomentumType[0x4]; // 0x51C ValueRemapperMomentumType_t
    std::uint8_t m_flMomentumModifier[0x4]; // 0x520 float32
    std::uint8_t m_flSnapValue[0x4]; // 0x524 float32
    std::uint8_t m_flCurrentMomentum[0x4]; // 0x528 float32
    std::uint8_t m_nRatchetType[0x4]; // 0x52C ValueRemapperRatchetType_t
    std::uint8_t m_flRatchetOffset[0x4]; // 0x530 float32
    std::uint8_t m_flInputOffset[0x4]; // 0x534 float32
    std::uint8_t m_bEngaged[0x1]; // 0x538 bool
    std::uint8_t m_bFirstUpdate[0x3]; // 0x539 bool
    std::uint8_t m_flPreviousValue[0x4]; // 0x53C float32
    std::uint8_t m_flPreviousUpdateTickTime[0x4]; // 0x540 GameTime_t
    std::uint8_t m_vecPreviousTestPoint[0xC]; // 0x544 VectorWS
    std::uint8_t m_hUsingPlayer[0x4]; // 0x550 CHandle<CBasePlayerPawn>
    std::uint8_t m_flCustomOutputValue[0x4]; // 0x554 float32
    std::uint8_t m_iszSoundEngage[0x8]; // 0x558 CUtlSymbolLarge
    std::uint8_t m_iszSoundDisengage[0x8]; // 0x560 CUtlSymbolLarge
    std::uint8_t m_iszSoundReachedValueZero[0x8]; // 0x568 CUtlSymbolLarge
    std::uint8_t m_iszSoundReachedValueOne[0x8]; // 0x570 CUtlSymbolLarge
    std::uint8_t m_iszSoundMovingLoop[0x20]; // 0x578 CUtlSymbolLarge
    std::uint8_t m_Position[0x20]; // 0x598 CEntityOutputTemplate<float32>
    std::uint8_t m_PositionDelta[0x20]; // 0x5B8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnReachedValueZero[0x18]; // 0x5D8 CEntityIOOutput
    std::uint8_t m_OnReachedValueOne[0x18]; // 0x5F0 CEntityIOOutput
    std::uint8_t m_OnReachedValueCustom[0x18]; // 0x608 CEntityIOOutput
    std::uint8_t m_OnEngage[0x18]; // 0x620 CEntityIOOutput
    std::uint8_t m_OnDisengage[0x18]; // 0x638 CEntityIOOutput
};

struct CBtNodeConditionInactive {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_flRoundStartThresholdSeconds[0x4]; // 0x78 float32
    std::uint8_t m_flSensorInactivityThresholdSeconds[0x4]; // 0x7C float32
    std::uint8_t m_SensorInactivityTimer[0x18]; // 0x80 CountdownTimer
};

struct CCSGO_TeamIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CRagdollProp {
    static constexpr std::size_t size = 0xC00;
    std::uint8_t pad_0[0xA50]; // 0x0
    std::uint8_t m_CPropDataComponent[0x40]; // 0xA50 CPropDataComponent
    std::uint8_t m_ragdoll[0x50]; // 0xA90 ragdoll_t
    std::uint8_t m_bStartDisabled[0x4]; // 0xAE0 bool
    std::uint8_t m_massScale[0x4]; // 0xAE4 float32
    std::uint8_t m_buoyancyScale[0x8]; // 0xAE8 float32
    std::uint8_t m_ragEnabled[0x18]; // 0xAF0 CNetworkUtlVectorBase<bool>
    std::uint8_t m_ragPos[0x18]; // 0xB08 CNetworkUtlVectorBase<Vector>
    std::uint8_t m_ragAngles[0x18]; // 0xB20 CNetworkUtlVectorBase<QAngle>
    std::uint8_t m_lastUpdateTickCount[0x4]; // 0xB38 uint32
    std::uint8_t m_allAsleep[0x1]; // 0xB3C bool
    std::uint8_t m_bFirstCollisionAfterLaunch[0x3]; // 0xB3D bool
    std::uint8_t m_nNavObstacleType[0x4]; // 0xB40 INavObstacle::NavObstacleType_t
    std::uint8_t m_bUpdateNavWhenMoving[0x1]; // 0xB44 bool
    std::uint8_t m_bForceNavObstacleCut[0x1]; // 0xB45 bool
    std::uint8_t m_bAttachedToReferenceFrame[0x2]; // 0xB46 bool
    std::uint8_t m_hDamageEntity[0x4]; // 0xB48 CHandle<CBaseEntity>
    std::uint8_t m_hKiller[0x4]; // 0xB4C CHandle<CBaseEntity>
    std::uint8_t m_hPhysicsAttacker[0x4]; // 0xB50 CHandle<CBasePlayerPawn>
    std::uint8_t m_flLastPhysicsInfluenceTime[0x4]; // 0xB54 GameTime_t
    std::uint8_t m_flFadeOutStartTime[0x4]; // 0xB58 GameTime_t
    std::uint8_t m_flFadeTime[0x4]; // 0xB5C float32
    std::uint8_t m_vecLastOrigin[0xC]; // 0xB60 VectorWS
    std::uint8_t m_flAwakeTime[0x4]; // 0xB6C GameTime_t
    std::uint8_t m_flLastOriginChangeTime[0x8]; // 0xB70 GameTime_t
    std::uint8_t m_strOriginClassName[0x8]; // 0xB78 CUtlSymbolLarge
    std::uint8_t m_strSourceClassName[0x8]; // 0xB80 CUtlSymbolLarge
    std::uint8_t m_bHasBeenPhysgunned[0x1]; // 0xB88 bool
    std::uint8_t m_bAllowStretch[0x3]; // 0xB89 bool
    std::uint8_t m_flBlendWeight[0x4]; // 0xB8C float32
    std::uint8_t m_flDefaultFadeScale[0x8]; // 0xB90 float32
    std::uint8_t m_ragdollMins[0x18]; // 0xB98 CUtlVector<Vector>
    std::uint8_t m_ragdollMaxs[0x18]; // 0xBB0 CUtlVector<Vector>
    std::uint8_t m_bShouldDeleteActivationRecord[0x18]; // 0xBC8 bool
    std::uint8_t m_vecNavObstacles[0x20]; // 0xBE0 CUtlVector<INavObstacle*>
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_scriptClassName[0x8]; // 0x30 CUtlSymbolLarge
};

struct CFuncTrain {
    static constexpr std::size_t size = 0x920;
    std::uint8_t pad_0[0x8F8]; // 0x0
    std::uint8_t m_hCurrentTarget[0x4]; // 0x8F8 CHandle<CBaseEntity>
    std::uint8_t m_activated[0x4]; // 0x8FC bool
    std::uint8_t m_hEnemy[0x4]; // 0x900 CHandle<CBaseEntity>
    std::uint8_t m_flBlockDamage[0x4]; // 0x904 float32
    std::uint8_t m_flNextBlockTime[0x8]; // 0x908 GameTime_t
    std::uint8_t m_iszLastTarget[0x8]; // 0x910 CUtlSymbolLarge
    std::uint8_t m_flSpeed[0x8]; // 0x918 float32
};

struct CAI_ChangeHintGroup {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iSearchType[0x8]; // 0x4A8 int32
    std::uint8_t m_strSearchName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_strNewHintGroup[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_flRadius[0x8]; // 0x4C0 float32
};

struct CCSPlayer_BuyServices {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_vecSellbackPurchaseEntries[0x88]; // 0xD0 CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
};

struct CWeaponAug {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CPhysHinge {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t m_soundInfo[0x98]; // 0x510 ConstraintSoundInfo
    std::uint8_t m_NotifyMinLimitReached[0x18]; // 0x5A8 CEntityIOOutput
    std::uint8_t m_NotifyMaxLimitReached[0x18]; // 0x5C0 CEntityIOOutput
    std::uint8_t m_bAtMinLimit[0x1]; // 0x5D8 bool
    std::uint8_t m_bAtMaxLimit[0x3]; // 0x5D9 bool
    std::uint8_t m_hinge[0x40]; // 0x5DC constraint_hingeparams_t
    std::uint8_t m_hingeFriction[0x4]; // 0x61C float32
    std::uint8_t m_systemLoadScale[0x4]; // 0x620 float32
    std::uint8_t m_bIsAxisLocal[0x4]; // 0x624 bool
    std::uint8_t m_flMinRotation[0x4]; // 0x628 float32
    std::uint8_t m_flMaxRotation[0x4]; // 0x62C float32
    std::uint8_t m_flInitialRotation[0x4]; // 0x630 float32
    std::uint8_t m_flMotorFrequency[0x4]; // 0x634 float32
    std::uint8_t m_flMotorDampingRatio[0x4]; // 0x638 float32
    std::uint8_t m_flAngleSpeed[0x4]; // 0x63C float32
    std::uint8_t m_flAngleSpeedThreshold[0x4]; // 0x640 float32
    std::uint8_t m_flLimitsDebugVisRotation[0x4]; // 0x644 float32
    std::uint8_t m_OnStartMoving[0x18]; // 0x648 CEntityIOOutput
    std::uint8_t m_OnStopMoving[0x18]; // 0x660 CEntityIOOutput
};

struct CBuyZone {
    static constexpr std::size_t size = 0x9D0;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_LegacyTeamNum[0x8]; // 0x9C8 int32
};

struct CInfoChoreoAnchor {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vecTargetEntries[0x18]; // 0x4A8 CUtlVector<CInfoChoreoAnchorPosition>
    std::uint8_t m_vecTargetWarps[0x18]; // 0x4C0 CUtlVector<CInfoChoreoAnchorPosition>
};

struct CWeaponSSG08 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CInfoWorldLayer {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pOutputOnEntitiesSpawned[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_worldName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_layerName[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_bWorldLayerVisible[0x1]; // 0x4D0 bool
    std::uint8_t m_bEntitiesSpawned[0x1]; // 0x4D1 bool
    std::uint8_t m_bCreateAsChildSpawnGroup[0x2]; // 0x4D2 bool
    std::uint8_t m_hLayerSpawnGroup[0x4]; // 0x4D4 uint32
};

struct CBodyComponentBaseModelEntity {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4E0]; // 0x0
};

struct CLogicProximity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPointGiveAmmo {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_pActivator[0x8]; // 0x4A8 CHandle<CBaseEntity>
};

struct CCSGO_EndOfMatchLineupStart {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct FilterDamageType {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iDamageType[0x8]; // 0x4E0 int32
};

struct CPointCamera {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_FOV[0x4]; // 0x4A8 float32
    std::uint8_t m_Resolution[0x4]; // 0x4AC float32
    std::uint8_t m_bFogEnable[0x4]; // 0x4B0 bool
    std::uint8_t m_FogColor[0x4]; // 0x4B4 Color
    std::uint8_t m_flFogStart[0x4]; // 0x4B8 float32
    std::uint8_t m_flFogEnd[0x4]; // 0x4BC float32
    std::uint8_t m_flFogMaxDensity[0x4]; // 0x4C0 float32
    std::uint8_t m_bActive[0x1]; // 0x4C4 bool
    std::uint8_t m_bUseScreenAspectRatio[0x3]; // 0x4C5 bool
    std::uint8_t m_flAspectRatio[0x4]; // 0x4C8 float32
    std::uint8_t m_bNoSky[0x4]; // 0x4CC bool
    std::uint8_t m_fBrightness[0x4]; // 0x4D0 float32
    std::uint8_t m_flZFar[0x4]; // 0x4D4 float32
    std::uint8_t m_flZNear[0x4]; // 0x4D8 float32
    std::uint8_t m_bCanHLTVUse[0x1]; // 0x4DC bool
    std::uint8_t m_bAlignWithParent[0x1]; // 0x4DD bool
    std::uint8_t m_bDofEnabled[0x2]; // 0x4DE bool
    std::uint8_t m_flDofNearBlurry[0x4]; // 0x4E0 float32
    std::uint8_t m_flDofNearCrisp[0x4]; // 0x4E4 float32
    std::uint8_t m_flDofFarCrisp[0x4]; // 0x4E8 float32
    std::uint8_t m_flDofFarBlurry[0x4]; // 0x4EC float32
    std::uint8_t m_flDofTiltToGround[0x4]; // 0x4F0 float32
    std::uint8_t m_TargetFOV[0x4]; // 0x4F4 float32
    std::uint8_t m_DegreesPerSecond[0x4]; // 0x4F8 float32
    std::uint8_t m_bIsOn[0x4]; // 0x4FC bool
    std::uint8_t m_pNext[0x8]; // 0x500 CPointCamera*
};

struct CAttributeList {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Attributes[0x68]; // 0x8 CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    std::uint8_t m_pManager[0x8]; // 0x70 CAttributeManager*
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CFilterProximity {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x4E0 float32
};

struct CCS2WeaponGraphController {
    static constexpr std::size_t size = 0x5C0;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_action[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_bActionReset[0x18]; // 0xD8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponActionSpeedScale[0x18]; // 0xF0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_weaponCategory[0x18]; // 0x108 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponType[0x18]; // 0x120 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponExtraInfo[0x18]; // 0x138 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flWeaponAmmo[0x18]; // 0x150 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flWeaponAmmoMax[0x18]; // 0x168 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flWeaponAmmoReserve[0x18]; // 0x180 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bWeaponIsSilenced[0x18]; // 0x198 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponIronsightAmount[0x18]; // 0x1B0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bIsUsingLegacyModel[0x18]; // 0x1C8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_idleVariation[0x18]; // 0x1E0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_deployVariation[0x18]; // 0x1F8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_attackType[0x18]; // 0x210 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_attackThrowStrength[0x18]; // 0x228 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAttackVariation[0x18]; // 0x240 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_inspectVariation[0x18]; // 0x258 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_inspectExtraInfo[0x18]; // 0x270 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_reloadStage[0x338]; // 0x288 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
};

struct CEffectData {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vOrigin[0xC]; // 0x8 VectorWS
    std::uint8_t m_vStart[0xC]; // 0x14 VectorWS
    std::uint8_t m_vNormal[0xC]; // 0x20 Vector
    std::uint8_t m_vAngles[0xC]; // 0x2C QAngle
    std::uint8_t m_hEntity[0x4]; // 0x38 CEntityHandle
    std::uint8_t m_hOtherEntity[0x4]; // 0x3C CEntityHandle
    std::uint8_t m_flScale[0x4]; // 0x40 float32
    std::uint8_t m_flMagnitude[0x4]; // 0x44 float32
    std::uint8_t m_flRadius[0x4]; // 0x48 float32
    std::uint8_t m_nSurfaceProp[0x4]; // 0x4C CUtlStringToken
    std::uint8_t m_nEffectIndex[0x8]; // 0x50 CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nDamageType[0x4]; // 0x58 uint32
    std::uint8_t m_nPenetrate[0x2]; // 0x5C uint8
    std::uint8_t m_nMaterial[0x2]; // 0x5E uint16
    std::uint8_t m_nHitBox[0x2]; // 0x60 int16
    std::uint8_t m_nColor[0x1]; // 0x62 uint8
    std::uint8_t m_fFlags[0x1]; // 0x63 uint8
    std::uint8_t m_nAttachmentIndex[0x4]; // 0x64 AttachmentHandle_t
    std::uint8_t m_nAttachmentName[0x4]; // 0x68 CUtlStringToken
    std::uint8_t m_iEffectName[0x4]; // 0x6C uint16
};

struct CEntityDissolve {
    static constexpr std::size_t size = 0x880;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_flFadeInStart[0x4]; // 0x850 float32
    std::uint8_t m_flFadeInLength[0x4]; // 0x854 float32
    std::uint8_t m_flFadeOutModelStart[0x4]; // 0x858 float32
    std::uint8_t m_flFadeOutModelLength[0x4]; // 0x85C float32
    std::uint8_t m_flFadeOutStart[0x4]; // 0x860 float32
    std::uint8_t m_flFadeOutLength[0x4]; // 0x864 float32
    std::uint8_t m_flStartTime[0x4]; // 0x868 GameTime_t
    std::uint8_t m_nDissolveType[0x4]; // 0x86C EntityDissolveType_t
    std::uint8_t m_vDissolverOrigin[0xC]; // 0x870 VectorWS
    std::uint8_t m_nMagnitude[0x4]; // 0x87C uint32
};

struct CCSGameRules {
    static constexpr std::size_t size = 0x11450;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_bFreezePeriod[0x1]; // 0xD8 bool
    std::uint8_t m_bWarmupPeriod[0x3]; // 0xD9 bool
    std::uint8_t m_fWarmupPeriodEnd[0x4]; // 0xDC GameTime_t
    std::uint8_t m_fWarmupPeriodStart[0x4]; // 0xE0 GameTime_t
    std::uint8_t m_bTerroristTimeOutActive[0x1]; // 0xE4 bool
    std::uint8_t m_bCTTimeOutActive[0x3]; // 0xE5 bool
    std::uint8_t m_flTerroristTimeOutRemaining[0x4]; // 0xE8 float32
    std::uint8_t m_flCTTimeOutRemaining[0x4]; // 0xEC float32
    std::uint8_t m_nTerroristTimeOuts[0x4]; // 0xF0 int32
    std::uint8_t m_nCTTimeOuts[0x4]; // 0xF4 int32
    std::uint8_t m_bTechnicalTimeOut[0x1]; // 0xF8 bool
    std::uint8_t m_bMatchWaitingForResume[0x3]; // 0xF9 bool
    std::uint8_t m_iFreezeTime[0x4]; // 0xFC int32
    std::uint8_t m_iRoundTime[0x4]; // 0x100 int32
    std::uint8_t m_fMatchStartTime[0x4]; // 0x104 float32
    std::uint8_t m_fRoundStartTime[0x4]; // 0x108 GameTime_t
    std::uint8_t m_flRestartRoundTime[0x4]; // 0x10C GameTime_t
    std::uint8_t m_bGameRestart[0x4]; // 0x110 bool
    std::uint8_t m_flGameStartTime[0x4]; // 0x114 float32
    std::uint8_t m_timeUntilNextPhaseStarts[0x4]; // 0x118 float32
    std::uint8_t m_gamePhase[0x4]; // 0x11C int32
    std::uint8_t m_totalRoundsPlayed[0x4]; // 0x120 int32
    std::uint8_t m_nRoundsPlayedThisPhase[0x4]; // 0x124 int32
    std::uint8_t m_nOvertimePlaying[0x4]; // 0x128 int32
    std::uint8_t m_iHostagesRemaining[0x4]; // 0x12C int32
    std::uint8_t m_bAnyHostageReached[0x1]; // 0x130 bool
    std::uint8_t m_bMapHasBombTarget[0x1]; // 0x131 bool
    std::uint8_t m_bMapHasRescueZone[0x1]; // 0x132 bool
    std::uint8_t m_bMapHasBuyZone[0x1]; // 0x133 bool
    std::uint8_t m_bIsQueuedMatchmaking[0x4]; // 0x134 bool
    std::uint8_t m_nQueuedMatchmakingMode[0x4]; // 0x138 int32
    std::uint8_t m_bIsValveDS[0x1]; // 0x13C bool
    std::uint8_t m_bLogoMap[0x1]; // 0x13D bool
    std::uint8_t m_bPlayAllStepSoundsOnServer[0x2]; // 0x13E bool
    std::uint8_t m_iSpectatorSlotCount[0x4]; // 0x140 int32
    std::uint8_t m_MatchDevice[0x4]; // 0x144 int32
    std::uint8_t m_bHasMatchStarted[0x4]; // 0x148 bool
    std::uint8_t m_nNextMapInMapgroup[0x4]; // 0x14C int32
    std::uint8_t m_szTournamentEventName[0x200]; // 0x150 char[512]
    std::uint8_t m_szTournamentEventStage[0x200]; // 0x350 char[512]
    std::uint8_t m_szMatchStatTxt[0x200]; // 0x550 char[512]
    std::uint8_t m_szTournamentPredictionsTxt[0x200]; // 0x750 char[512]
    std::uint8_t m_nTournamentPredictionsPct[0x4]; // 0x950 int32
    std::uint8_t m_flCMMItemDropRevealStartTime[0x4]; // 0x954 GameTime_t
    std::uint8_t m_flCMMItemDropRevealEndTime[0x4]; // 0x958 GameTime_t
    std::uint8_t m_bIsDroppingItems[0x1]; // 0x95C bool
    std::uint8_t m_bIsQuestEligible[0x1]; // 0x95D bool
    std::uint8_t m_bIsHltvActive[0x1]; // 0x95E bool
    std::uint8_t m_bBombPlanted[0x1]; // 0x95F bool
    std::uint8_t m_arrProhibitedItemIndices[0xC8]; // 0x960 uint16[100]
    std::uint8_t m_arrTournamentActiveCasterAccounts[0x10]; // 0xA28 uint32[4]
    std::uint8_t m_numBestOfMaps[0x4]; // 0xA38 int32
    std::uint8_t m_nHalloweenMaskListSeed[0x4]; // 0xA3C int32
    std::uint8_t m_bBombDropped[0x4]; // 0xA40 bool
    std::uint8_t m_iRoundWinStatus[0x4]; // 0xA44 int32
    std::uint8_t m_eRoundWinReason[0x4]; // 0xA48 int32
    std::uint8_t m_bTCantBuy[0x1]; // 0xA4C bool
    std::uint8_t m_bCTCantBuy[0x3]; // 0xA4D bool
    std::uint8_t m_iMatchStats_RoundResults[0x78]; // 0xA50 int32[30]
    std::uint8_t m_iMatchStats_PlayersAlive_CT[0x78]; // 0xAC8 int32[30]
    std::uint8_t m_iMatchStats_PlayersAlive_T[0x78]; // 0xB40 int32[30]
    std::uint8_t m_TeamRespawnWaveTimes[0x80]; // 0xBB8 float32[32]
    std::uint8_t m_nActiveMutators[0x4]; // 0xC38 int32
    std::uint8_t m_flNextRespawnWave[0x80]; // 0xC3C GameTime_t[32]
    std::uint8_t m_vMinimapMins[0xC]; // 0xCBC VectorWS
    std::uint8_t m_vMinimapMaxs[0xC]; // 0xCC8 VectorWS
    std::uint8_t m_MinimapVerticalSectionHeights[0x24]; // 0xCD4 float32[8]
    std::uint8_t m_ullLocalMatchID[0x8]; // 0xCF8 uint64
    std::uint8_t m_nEndMatchMapGroupVoteTypes[0x28]; // 0xD00 int32[10]
    std::uint8_t m_nEndMatchMapGroupVoteOptions[0x28]; // 0xD28 int32[10]
    std::uint8_t m_nEndMatchMapVoteWinner[0x4]; // 0xD50 int32
    std::uint8_t m_iNumConsecutiveCTLoses[0x4]; // 0xD54 int32
    std::uint8_t m_iNumConsecutiveTerroristLoses[0x20]; // 0xD58 int32
    std::uint8_t m_bHasHostageBeenTouched[0x4]; // 0xD78 bool
    std::uint8_t m_flIntermissionStartTime[0x4]; // 0xD7C GameTime_t
    std::uint8_t m_flIntermissionEndTime[0x4]; // 0xD80 GameTime_t
    std::uint8_t m_bLevelInitialized[0x4]; // 0xD84 bool
    std::uint8_t m_iTotalRoundsPlayed[0x4]; // 0xD88 int32
    std::uint8_t m_iUnBalancedRounds[0x4]; // 0xD8C int32
    std::uint8_t m_endMatchOnRoundReset[0x1]; // 0xD90 bool
    std::uint8_t m_endMatchOnThink[0x3]; // 0xD91 bool
    std::uint8_t m_iNumTerrorist[0x4]; // 0xD94 int32
    std::uint8_t m_iNumCT[0x4]; // 0xD98 int32
    std::uint8_t m_iNumSpawnableTerrorist[0x4]; // 0xD9C int32
    std::uint8_t m_iNumSpawnableCT[0x8]; // 0xDA0 int32
    std::uint8_t m_arrSelectedHostageSpawnIndices[0x18]; // 0xDA8 CUtlVector<int32>
    std::uint8_t m_nSpawnPointsRandomSeed[0x4]; // 0xDC0 int32
    std::uint8_t m_bFirstConnected[0x1]; // 0xDC4 bool
    std::uint8_t m_bCompleteReset[0x1]; // 0xDC5 bool
    std::uint8_t m_bPickNewTeamsOnReset[0x1]; // 0xDC6 bool
    std::uint8_t m_bScrambleTeamsOnRestart[0x1]; // 0xDC7 bool
    std::uint8_t m_bSwapTeamsOnRestart[0x8]; // 0xDC8 bool
    std::uint8_t m_nEndMatchTiedVotes[0x1C]; // 0xDD0 CUtlVector<int32>
    std::uint8_t m_bNeedToAskPlayersForContinueVote[0x4]; // 0xDEC bool
    std::uint8_t m_numQueuedMatchmakingAccounts[0x4]; // 0xDF0 uint32
    std::uint8_t m_fAvgPlayerRank[0x4]; // 0xDF4 float32
    std::uint8_t m_pQueuedMatchmakingReservationString[0x8]; // 0xDF8 char*
    std::uint8_t m_numTotalTournamentDrops[0x4]; // 0xE00 uint32
    std::uint8_t m_numSpectatorsCountMax[0x4]; // 0xE04 uint32
    std::uint8_t m_numSpectatorsCountMaxTV[0x4]; // 0xE08 uint32
    std::uint8_t m_numSpectatorsCountMaxLnk[0xC]; // 0xE0C uint32
    std::uint8_t m_bQueuedMatchmakingReportedRoundStatsPendingSend[0x4]; // 0xE18 bool
    std::uint8_t m_nCTsAliveAtFreezetimeEnd[0x4]; // 0xE1C int32
    std::uint8_t m_nTerroristsAliveAtFreezetimeEnd[0x4]; // 0xE20 int32
    std::uint8_t m_bForceTeamChangeSilent[0x1]; // 0xE24 bool
    std::uint8_t m_bLoadingRoundBackupData[0x33]; // 0xE25 bool
    std::uint8_t m_nMatchInfoShowType[0x4]; // 0xE58 int32
    std::uint8_t m_flMatchInfoDecidedTime[0x1C]; // 0xE5C float32
    std::uint8_t mTeamDMLastWinningTeamNumber[0x4]; // 0xE78 int32
    std::uint8_t mTeamDMLastThinkTime[0x4]; // 0xE7C float32
    std::uint8_t m_flTeamDMLastAnnouncementTime[0x4]; // 0xE80 float32
    std::uint8_t m_iAccountTerrorist[0x4]; // 0xE84 int32
    std::uint8_t m_iAccountCT[0x4]; // 0xE88 int32
    std::uint8_t m_iSpawnPointCount_Terrorist[0x4]; // 0xE8C int32
    std::uint8_t m_iSpawnPointCount_CT[0x4]; // 0xE90 int32
    std::uint8_t m_iMaxNumTerrorists[0x4]; // 0xE94 int32
    std::uint8_t m_iMaxNumCTs[0x4]; // 0xE98 int32
    std::uint8_t m_iLoserBonusMostRecentTeam[0x4]; // 0xE9C int32
    std::uint8_t m_tmNextPeriodicThink[0x4]; // 0xEA0 float32
    std::uint8_t m_bVoiceWonMatchBragFired[0x4]; // 0xEA4 bool
    std::uint8_t m_fWarmupNextChatNoticeTime[0x8]; // 0xEA8 float32
    std::uint8_t m_iHostagesRescued[0x4]; // 0xEB0 int32
    std::uint8_t m_iHostagesTouched[0x4]; // 0xEB4 int32
    std::uint8_t m_flNextHostageAnnouncement[0x4]; // 0xEB8 float32
    std::uint8_t m_bNoTerroristsKilled[0x1]; // 0xEBC bool
    std::uint8_t m_bNoCTsKilled[0x1]; // 0xEBD bool
    std::uint8_t m_bNoEnemiesKilled[0x1]; // 0xEBE bool
    std::uint8_t m_bCanDonateWeapons[0x5]; // 0xEBF bool
    std::uint8_t m_firstKillTime[0x8]; // 0xEC4 float32
    std::uint8_t m_firstBloodTime[0x1C]; // 0xECC float32
    std::uint8_t m_hostageWasInjured[0x1]; // 0xEE8 bool
    std::uint8_t m_hostageWasKilled[0xF]; // 0xEE9 bool
    std::uint8_t m_bVoteCalled[0x1]; // 0xEF8 bool
    std::uint8_t m_bServerVoteOnReset[0x3]; // 0xEF9 bool
    std::uint8_t m_flVoteCheckThrottle[0x4]; // 0xEFC float32
    std::uint8_t m_bBuyTimeEnded[0x4]; // 0xF00 bool
    std::uint8_t m_nLastFreezeEndBeep[0x4]; // 0xF04 int32
    std::uint8_t m_bTargetBombed[0x1]; // 0xF08 bool
    std::uint8_t m_bBombDefused[0x1]; // 0xF09 bool
    std::uint8_t m_bMapHasBombZone[0x4E]; // 0xF0A bool
    std::uint8_t m_vecMainCTSpawnPos[0x10]; // 0xF58 VectorWS
    std::uint8_t m_CTSpawnPointsMasterList[0x18]; // 0xF68 CUtlVector<CHandle<SpawnPoint>>
    std::uint8_t m_TerroristSpawnPointsMasterList[0x18]; // 0xF80 CUtlVector<CHandle<SpawnPoint>>
    std::uint8_t m_bRespawningAllRespawnablePlayers[0x4]; // 0xF98 bool
    std::uint8_t m_iNextCTSpawnPoint[0x4]; // 0xF9C int32
    std::uint8_t m_flCTSpawnPointUsedTime[0x4]; // 0xFA0 float32
    std::uint8_t m_iNextTerroristSpawnPoint[0x4]; // 0xFA4 int32
    std::uint8_t m_flTerroristSpawnPointUsedTime[0x8]; // 0xFA8 float32
    std::uint8_t m_CTSpawnPoints[0x18]; // 0xFB0 CUtlVector<CHandle<SpawnPoint>>
    std::uint8_t m_TerroristSpawnPoints[0x18]; // 0xFC8 CUtlVector<CHandle<SpawnPoint>>
    std::uint8_t m_bIsUnreservedGameServer[0x4]; // 0xFE0 bool
    std::uint8_t m_fAutobalanceDisplayTime[0x3C]; // 0xFE4 float32
    std::uint8_t m_bAllowWeaponSwitch[0x1]; // 0x1020 bool
    std::uint8_t m_bRoundTimeWarningTriggered[0x3]; // 0x1021 bool
    std::uint8_t m_phaseChangeAnnouncementTime[0x4]; // 0x1024 GameTime_t
    std::uint8_t m_fNextUpdateTeamClanNamesTime[0x4]; // 0x1028 float32
    std::uint8_t m_flLastThinkTime[0x4]; // 0x102C GameTime_t
    std::uint8_t m_fAccumulatedRoundOffDamage[0x4]; // 0x1030 float32
    std::uint8_t m_nShorthandedBonusLastEvalRound[0x4C]; // 0x1034 int32
    std::uint8_t m_nMatchAbortedEarlyReason[0x4]; // 0x1080 int32
    std::uint8_t m_bHasTriggeredRoundStartMusic[0x1]; // 0x1084 bool
    std::uint8_t m_bSwitchingTeamsAtRoundReset[0x1B]; // 0x1085 bool
    std::uint8_t m_pGameModeRules[0x8]; // 0x10A0 CCSGameModeRules*
    std::uint8_t m_BtGlobalBlackboard[0x98]; // 0x10A8 KeyValues3
    std::uint8_t m_hPlayerResource[0x8]; // 0x1140 CHandle<CBaseEntity>
    std::uint8_t m_RetakeRules[0x1F0]; // 0x1148 CRetakeGameRules
    std::uint8_t m_arrTeamUniqueKillWeaponsMatch[0x60]; // 0x1338 CUtlVector<int32>[4]
    std::uint8_t m_bTeamLastKillUsedUniqueWeaponMatch[0x28]; // 0x1398 bool[4]
    std::uint8_t m_nMatchEndCount[0x4]; // 0x13C0 uint8
    std::uint8_t m_nTTeamIntroVariant[0x4]; // 0x13C4 int32
    std::uint8_t m_nCTTeamIntroVariant[0x4]; // 0x13C8 int32
    std::uint8_t m_bTeamIntroPeriod[0x4]; // 0x13CC bool
    std::uint8_t m_fTeamIntroPeriodEnd[0x4]; // 0x13D0 GameTime_t
    std::uint8_t m_bPlayedTeamIntroVO[0x4]; // 0x13D4 bool
    std::uint8_t m_iRoundEndWinnerTeam[0x4]; // 0x13D8 int32
    std::uint8_t m_eRoundEndReason[0x4]; // 0x13DC int32
    std::uint8_t m_bRoundEndShowTimerDefend[0x4]; // 0x13E0 bool
    std::uint8_t m_iRoundEndTimerTime[0x4]; // 0x13E4 int32
    std::uint8_t m_sRoundEndFunFactToken[0x8]; // 0x13E8 CUtlString
    std::uint8_t m_iRoundEndFunFactPlayerSlot[0x4]; // 0x13F0 CPlayerSlot
    std::uint8_t m_iRoundEndFunFactData1[0x4]; // 0x13F4 int32
    std::uint8_t m_iRoundEndFunFactData2[0x4]; // 0x13F8 int32
    std::uint8_t m_iRoundEndFunFactData3[0x4]; // 0x13FC int32
    std::uint8_t m_sRoundEndMessage[0x8]; // 0x1400 CUtlString
    std::uint8_t m_iRoundEndPlayerCount[0x4]; // 0x1408 int32
    std::uint8_t m_bRoundEndNoMusic[0x4]; // 0x140C bool
    std::uint8_t m_iRoundEndLegacy[0x4]; // 0x1410 int32
    std::uint8_t m_nRoundEndCount[0x4]; // 0x1414 uint8
    std::uint8_t m_iRoundStartRoundNumber[0x4]; // 0x1418 int32
    std::uint8_t m_nRoundStartCount[0x400C]; // 0x141C uint8
    std::uint8_t m_flLastPerfSampleTime[0xC028]; // 0x5428 float64
};

struct CPulseCell_ApplyEntityFlags__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_hEntity[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_uFlags[0x4]; // 0x4 uint32
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CBaseCSGrenadeProjectile {
    static constexpr std::size_t size = 0xB40;
    std::uint8_t pad_0[0xAD0]; // 0x0
    std::uint8_t m_vInitialPosition[0xC]; // 0xAD0 VectorWS
    std::uint8_t m_vInitialVelocity[0xC]; // 0xADC Vector
    std::uint8_t m_nBounces[0x8]; // 0xAE8 int32
    std::uint8_t m_nExplodeEffectIndex[0x8]; // 0xAF0 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nExplodeEffectTickBegin[0x4]; // 0xAF8 int32
    std::uint8_t m_vecExplodeEffectOrigin[0xC]; // 0xAFC VectorWS
    std::uint8_t m_flSpawnTime[0x4]; // 0xB08 GameTime_t
    std::uint8_t m_unOGSExtraFlags[0x1]; // 0xB0C uint8
    std::uint8_t m_bDetonationRecorded[0x1]; // 0xB0D bool
    std::uint8_t m_nItemIndex[0x2]; // 0xB0E uint16
    std::uint8_t m_vecOriginalSpawnLocation[0xC]; // 0xB10 VectorWS
    std::uint8_t m_flLastBounceSoundTime[0x4]; // 0xB1C GameTime_t
    std::uint8_t m_vecGrenadeSpin[0xC]; // 0xB20 RotationVector
    std::uint8_t m_vecLastHitSurfaceNormal[0xC]; // 0xB2C Vector
    std::uint8_t m_nTicksAtZeroVelocity[0x4]; // 0xB38 int32
    std::uint8_t m_bHasEverHitEnemy[0x4]; // 0xB3C bool
};

struct CPhysConstraint {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hJoint[0x8]; // 0x4A8 IPhysicsJoint*
    std::uint8_t m_nameAttach1[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_nameAttach2[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_hAttach1[0x4]; // 0x4C0 CHandle<CBaseEntity>
    std::uint8_t m_hAttach2[0x4]; // 0x4C4 CHandle<CBaseEntity>
    std::uint8_t m_nameAttachment1[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_nameAttachment2[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_breakSound[0x8]; // 0x4D8 CGameSoundEventName
    std::uint8_t m_forceLimit[0x4]; // 0x4E0 float32
    std::uint8_t m_torqueLimit[0x4]; // 0x4E4 float32
    std::uint8_t m_minTeleportDistance[0x4]; // 0x4E8 float32
    std::uint8_t m_bSnapObjectPositions[0x1]; // 0x4EC bool
    std::uint8_t m_bTreatEntity1AsInfiniteMass[0x3]; // 0x4ED bool
    std::uint8_t m_OnBreak[0x18]; // 0x4F0 CEntityIOOutput
};

struct CLogicAchievement {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x4A8 bool
    std::uint8_t m_iszAchievementEventID[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_OnFired[0x18]; // 0x4B8 CEntityIOOutput
};

struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pItem[0x8]; // 0x0 CEconItemView*
    std::uint8_t team[0x2]; // 0x8 uint16
    std::uint8_t slot[0x6]; // 0xA uint16
};

struct CLightComponent {
    static constexpr std::size_t size = 0x1C0;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t __m_pChainEntity[0x40]; // 0x38 CNetworkVarChainer
    std::uint8_t m_Color[0x4]; // 0x78 Color
    std::uint8_t m_SecondaryColor[0x4]; // 0x7C Color
    std::uint8_t m_flBrightness[0x4]; // 0x80 float32
    std::uint8_t m_flBrightnessScale[0x4]; // 0x84 float32
    std::uint8_t m_flBrightnessMult[0x4]; // 0x88 float32
    std::uint8_t m_flRange[0x4]; // 0x8C float32
    std::uint8_t m_flFalloff[0x4]; // 0x90 float32
    std::uint8_t m_flAttenuation0[0x4]; // 0x94 float32
    std::uint8_t m_flAttenuation1[0x4]; // 0x98 float32
    std::uint8_t m_flAttenuation2[0x4]; // 0x9C float32
    std::uint8_t m_flTheta[0x4]; // 0xA0 float32
    std::uint8_t m_flPhi[0x4]; // 0xA4 float32
    std::uint8_t m_hLightCookie[0x8]; // 0xA8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_nCascades[0x4]; // 0xB0 int32
    std::uint8_t m_nCastShadows[0x4]; // 0xB4 int32
    std::uint8_t m_nShadowWidth[0x4]; // 0xB8 int32
    std::uint8_t m_nShadowHeight[0x4]; // 0xBC int32
    std::uint8_t m_bRenderDiffuse[0x4]; // 0xC0 bool
    std::uint8_t m_nRenderSpecular[0x4]; // 0xC4 int32
    std::uint8_t m_bRenderTransmissive[0x4]; // 0xC8 bool
    std::uint8_t m_flOrthoLightWidth[0x4]; // 0xCC float32
    std::uint8_t m_flOrthoLightHeight[0x4]; // 0xD0 float32
    std::uint8_t m_nStyle[0x4]; // 0xD4 int32
    std::uint8_t m_Pattern[0x8]; // 0xD8 CUtlString
    std::uint8_t m_nCascadeRenderStaticObjects[0x4]; // 0xE0 int32
    std::uint8_t m_flShadowCascadeCrossFade[0x4]; // 0xE4 float32
    std::uint8_t m_flShadowCascadeDistanceFade[0x4]; // 0xE8 float32
    std::uint8_t m_flShadowCascadeDistance0[0x4]; // 0xEC float32
    std::uint8_t m_flShadowCascadeDistance1[0x4]; // 0xF0 float32
    std::uint8_t m_flShadowCascadeDistance2[0x4]; // 0xF4 float32
    std::uint8_t m_flShadowCascadeDistance3[0x4]; // 0xF8 float32
    std::uint8_t m_nShadowCascadeResolution0[0x4]; // 0xFC int32
    std::uint8_t m_nShadowCascadeResolution1[0x4]; // 0x100 int32
    std::uint8_t m_nShadowCascadeResolution2[0x4]; // 0x104 int32
    std::uint8_t m_nShadowCascadeResolution3[0x4]; // 0x108 int32
    std::uint8_t m_bUsesBakedShadowing[0x4]; // 0x10C bool
    std::uint8_t m_nShadowPriority[0x4]; // 0x110 int32
    std::uint8_t m_nBakedShadowIndex[0x4]; // 0x114 int32
    std::uint8_t m_nLightPathUniqueId[0x4]; // 0x118 int32
    std::uint8_t m_nLightMapUniqueId[0x4]; // 0x11C int32
    std::uint8_t m_bRenderToCubemaps[0x1]; // 0x120 bool
    std::uint8_t m_bAllowSSTGeneration[0x3]; // 0x121 bool
    std::uint8_t m_nDirectLight[0x4]; // 0x124 int32
    std::uint8_t m_nBounceLight[0x4]; // 0x128 int32
    std::uint8_t m_flBounceScale[0x4]; // 0x12C float32
    std::uint8_t m_flFadeMinDist[0x4]; // 0x130 float32
    std::uint8_t m_flFadeMaxDist[0x4]; // 0x134 float32
    std::uint8_t m_flShadowFadeMinDist[0x4]; // 0x138 float32
    std::uint8_t m_flShadowFadeMaxDist[0x4]; // 0x13C float32
    std::uint8_t m_bEnabled[0x1]; // 0x140 bool
    std::uint8_t m_bFlicker[0x1]; // 0x141 bool
    std::uint8_t m_bPrecomputedFieldsValid[0x2]; // 0x142 bool
    std::uint8_t m_vPrecomputedBoundsMins[0xC]; // 0x144 Vector
    std::uint8_t m_vPrecomputedBoundsMaxs[0xC]; // 0x150 Vector
    std::uint8_t m_vPrecomputedOBBOrigin[0xC]; // 0x15C Vector
    std::uint8_t m_vPrecomputedOBBAngles[0xC]; // 0x168 QAngle
    std::uint8_t m_vPrecomputedOBBExtent[0xC]; // 0x174 Vector
    std::uint8_t m_flPrecomputedMaxRange[0x4]; // 0x180 float32
    std::uint8_t m_nFogLightingMode[0x4]; // 0x184 int32
    std::uint8_t m_flFogContributionStength[0x4]; // 0x188 float32
    std::uint8_t m_flNearClipPlane[0x4]; // 0x18C float32
    std::uint8_t m_SkyColor[0x4]; // 0x190 Color
    std::uint8_t m_flSkyIntensity[0x4]; // 0x194 float32
    std::uint8_t m_SkyAmbientBounce[0x4]; // 0x198 Color
    std::uint8_t m_bUseSecondaryColor[0x1]; // 0x19C bool
    std::uint8_t m_bMixedShadows[0x3]; // 0x19D bool
    std::uint8_t m_flLightStyleStartTime[0x4]; // 0x1A0 GameTime_t
    std::uint8_t m_flCapsuleLength[0x4]; // 0x1A4 float32
    std::uint8_t m_flMinRoughness[0x10]; // 0x1A8 float32
    std::uint8_t m_bPvsModifyEntity[0x8]; // 0x1B8 bool
};

struct CCSWeaponBase {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0xEF8]; // 0x0
    std::uint8_t m_bRemoveable[0x1]; // 0xEF8 bool
    std::uint8_t m_bPlayerAmmoStockOnPickup[0x1]; // 0xEF9 bool
    std::uint8_t m_bRequireUseToTouch[0x2]; // 0xEFA bool
    std::uint8_t m_iWeaponGameplayAnimState[0x4]; // 0xEFC WeaponGameplayAnimState
    std::uint8_t m_flWeaponGameplayAnimStateTimestamp[0x4]; // 0xF00 GameTime_t
    std::uint8_t m_flInspectCancelCompleteTime[0x4]; // 0xF04 GameTime_t
    std::uint8_t m_bInspectPending[0x1]; // 0xF08 bool
    std::uint8_t m_bInspectShouldLoop[0x2B]; // 0xF09 bool
    std::uint8_t m_nLastEmptySoundCmdNum[0x1C]; // 0xF34 int32
    std::uint8_t m_bFireOnEmpty[0x8]; // 0xF50 bool
    std::uint8_t m_OnPlayerPickup[0x18]; // 0xF58 CEntityIOOutput
    std::uint8_t m_weaponMode[0x4]; // 0xF70 CSWeaponMode
    std::uint8_t m_flTurningInaccuracyDelta[0x4]; // 0xF74 float32
    std::uint8_t m_vecTurningInaccuracyEyeDirLast[0xC]; // 0xF78 Vector
    std::uint8_t m_flTurningInaccuracy[0x4]; // 0xF84 float32
    std::uint8_t m_fAccuracyPenalty[0x4]; // 0xF88 float32
    std::uint8_t m_flLastAccuracyUpdateTime[0x4]; // 0xF8C GameTime_t
    std::uint8_t m_fAccuracySmoothedForZoom[0x4]; // 0xF90 float32
    std::uint8_t m_iRecoilIndex[0x4]; // 0xF94 int32
    std::uint8_t m_flRecoilIndex[0x4]; // 0xF98 float32
    std::uint8_t m_bBurstMode[0x4]; // 0xF9C bool
    std::uint8_t m_nPostponeFireReadyTicks[0x4]; // 0xFA0 GameTick_t
    std::uint8_t m_flPostponeFireReadyFrac[0x4]; // 0xFA4 float32
    std::uint8_t m_bInReload[0x4]; // 0xFA8 bool
    std::uint8_t m_nDeployTick[0x4]; // 0xFAC GameTick_t
    std::uint8_t m_flAttackHoldStartTime[0x4]; // 0xFB0 GameTime_t
    std::uint8_t m_flDroppedAtTime[0x8]; // 0xFB4 GameTime_t
    std::uint8_t m_bIsHauledBack[0x1]; // 0xFBC bool
    std::uint8_t m_bSilencerOn[0x3]; // 0xFBD bool
    std::uint8_t m_flTimeSilencerSwitchComplete[0x4]; // 0xFC0 GameTime_t
    std::uint8_t m_bIsInStealthReload[0x1]; // 0xFC4 bool
    std::uint8_t m_bInSilentReloadSection[0x1]; // 0xFC5 bool
    std::uint8_t m_bSilentReloadStatPending[0x2]; // 0xFC6 bool
    std::uint8_t m_flStealthReloadHoldStartTime[0x4]; // 0xFC8 GameTime_t
    std::uint8_t m_bReloadHeldSinceStart[0x4]; // 0xFCC bool
    std::uint8_t m_flWeaponActionPlaybackRate[0x4]; // 0xFD0 float32
    std::uint8_t m_iOriginalTeamNumber[0x4]; // 0xFD4 int32
    std::uint8_t m_iMostRecentTeamNumber[0x4]; // 0xFD8 int32
    std::uint8_t m_bDroppedNearBuyZone[0x4]; // 0xFDC bool
    std::uint8_t m_flNextAttackRenderTimeOffset[0x18]; // 0xFE0 float32
    std::uint8_t m_bCanBePickedUp[0x1]; // 0xFF8 bool
    std::uint8_t m_bUseCanOverrideNextOwnerTouchTime[0x3]; // 0xFF9 bool
    std::uint8_t m_nextOwnerTouchTime[0x4]; // 0xFFC GameTime_t
    std::uint8_t m_nextPrevOwnerTouchTime[0x8]; // 0x1000 GameTime_t
    std::uint8_t m_nextPrevOwnerUseTime[0x4]; // 0x1008 GameTime_t
    std::uint8_t m_hPrevOwner[0x4]; // 0x100C CHandle<CCSPlayerPawn>
    std::uint8_t m_nDropTick[0x4]; // 0x1010 GameTick_t
    std::uint8_t m_bWasActiveWeaponWhenDropped[0x20]; // 0x1014 bool
    std::uint8_t m_donated[0x4]; // 0x1034 bool
    std::uint8_t m_fLastShotTime[0x4]; // 0x1038 GameTime_t
    std::uint8_t m_bWasOwnedByCT[0x1]; // 0x103C bool
    std::uint8_t m_bWasOwnedByTerrorist[0x3]; // 0x103D bool
    std::uint8_t m_numRemoveUnownedWeaponThink[0x60]; // 0x1040 int32
    std::uint8_t m_IronSightController[0x18]; // 0x10A0 CIronSightController
    std::uint8_t m_iIronSightMode[0x4]; // 0x10B8 int32
    std::uint8_t m_flLastLOSTraceFailureTime[0x4]; // 0x10BC GameTime_t
    std::uint8_t m_flWatTickOffset[0x10]; // 0x10C0 float32
    std::uint8_t m_flLastShakeTime[0x1B0]; // 0x10D0 GameTime_t
};

struct CPointClientUIDialog {
    static constexpr std::size_t size = 0x9B8;
    std::uint8_t pad_0[0x9B0]; // 0x0
    std::uint8_t m_hActivator[0x4]; // 0x9B0 CHandle<CBaseEntity>
    std::uint8_t m_bStartEnabled[0x4]; // 0x9B4 bool
};

struct CLogicLineToEntity {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_Line[0x28]; // 0x4A8 CEntityOutputTemplate<Vector>
    std::uint8_t m_SourceName[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_StartEntity[0x4]; // 0x4D8 CHandle<CBaseEntity>
    std::uint8_t m_EndEntity[0x4]; // 0x4DC CHandle<CBaseEntity>
};

struct CSoundAreaEntitySphere {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4C8]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x4C8 float32
};

struct CCSPlayer_ActionTrackingServices {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1F8]; // 0x0
    std::uint8_t m_hLastWeaponBeforeC4AutoSwitch[0x2C]; // 0x1F8 CHandle<CBasePlayerWeapon>
    std::uint8_t m_bIsRescuing[0x4]; // 0x224 bool
    std::uint8_t m_weaponPurchasesThisMatch[0x70]; // 0x228 WeaponPurchaseTracker_t
    std::uint8_t m_weaponPurchasesThisRound[0x70]; // 0x298 WeaponPurchaseTracker_t
    std::uint8_t m_weaponCarryOverIntoThisRound[0x78]; // 0x308 WeaponPurchaseTracker_t
};

struct CBrokenGlassTrap {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x870]; // 0x0
};

struct CPhysicalButton {
    static constexpr std::size_t size = 0x9D0;
    std::uint8_t pad_0[0x9D0]; // 0x0
};

struct CInfoSpawnGroupLoadUnload {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_OnSpawnGroupLoadStarted[0x18]; // 0x4A8 CEntityIOOutput
    std::uint8_t m_OnSpawnGroupLoadFinished[0x18]; // 0x4C0 CEntityIOOutput
    std::uint8_t m_OnSpawnGroupUnloadStarted[0x18]; // 0x4D8 CEntityIOOutput
    std::uint8_t m_OnSpawnGroupUnloadFinished[0x18]; // 0x4F0 CEntityIOOutput
    std::uint8_t m_iszSpawnGroupName[0x8]; // 0x508 CUtlSymbolLarge
    std::uint8_t m_iszSpawnGroupFilterName[0x8]; // 0x510 CUtlSymbolLarge
    std::uint8_t m_iszLandmarkName[0x8]; // 0x518 CUtlSymbolLarge
    std::uint8_t m_sFixedSpawnGroupName[0x8]; // 0x520 CUtlString
    std::uint8_t m_flTimeoutInterval[0x4]; // 0x528 float32
    std::uint8_t m_bAutoActivate[0x1]; // 0x52C bool
    std::uint8_t m_bUnloadingStarted[0x1]; // 0x52D bool
    std::uint8_t m_bQueueActiveSpawnGroupChange[0x1]; // 0x52E bool
    std::uint8_t m_bQueueFinishLoading[0x51]; // 0x52F bool
};

struct CSoundAreaEntityOrientedBox {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4C8]; // 0x0
    std::uint8_t m_vMin[0xC]; // 0x4C8 Vector
    std::uint8_t m_vMax[0xC]; // 0x4D4 Vector
};

struct CCSObserver_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x258]; // 0x0
};

struct CPulseCell_Outflow_ListenForAnimgraphTag {
    static constexpr std::size_t size = 0x170;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_OnStart[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_OnEnd[0x48]; // 0x120 CPulse_ResumePoint
    std::uint8_t m_TagName[0x8]; // 0x168 CGlobalSymbol
};

struct CBodyComponent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pSceneNode[0x40]; // 0x8 CGameSceneNode*
    std::uint8_t __m_pChainEntity[0x30]; // 0x48 CNetworkVarChainer
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_Description[0x8]; // 0x90 CUtlString
    std::uint8_t m_bIsPublic[0x8]; // 0x98 bool
    std::uint8_t m_Args[0x10]; // 0xA0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_ReturnValues[0x10]; // 0xB0 CUtlLeanVector<CPulseRuntimeMethodArg>
};

struct CDecoyGrenade {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x12C0]; // 0x0
};

struct CEconItemView {
    static constexpr std::size_t size = 0x3E8;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_iItemDefinitionIndex[0x4]; // 0x38 uint16
    std::uint8_t m_iEntityQuality[0x4]; // 0x3C int32
    std::uint8_t m_iEntityLevel[0x8]; // 0x40 uint32
    std::uint8_t m_iItemID[0x8]; // 0x48 uint64
    std::uint8_t m_iItemIDHigh[0x4]; // 0x50 uint32
    std::uint8_t m_iItemIDLow[0x4]; // 0x54 uint32
    std::uint8_t m_iAccountID[0x4]; // 0x58 uint32
    std::uint8_t m_iInventoryPosition[0xC]; // 0x5C uint32
    std::uint8_t m_bInitialized[0x8]; // 0x68 bool
    std::uint8_t m_AttributeList[0x78]; // 0x70 CAttributeList
    std::uint8_t m_NetworkedDynamicAttributes[0x78]; // 0xE8 CAttributeList
    std::uint8_t m_szCustomName[0xA1]; // 0x160 char[161]
    std::uint8_t m_szCustomNameOverride[0xA1]; // 0x201 char[161]
    std::uint8_t m_szCustomNameOverride2[0xA1]; // 0x2A2 char[161]
    std::uint8_t m_szCustomNameOverride3[0xA5]; // 0x343 char[161]
};

struct CIncendiaryGrenade {
    static constexpr std::size_t size = 0x12C0;
    std::uint8_t pad_0[0x12C0]; // 0x0
};

struct CBaseDMStart {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_Master[0x8]; // 0x4A8 CUtlSymbolLarge
};

struct CBaseModelEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_CRenderComponent[0x8]; // 0x4A8 CRenderComponent*
    std::uint8_t m_CHitboxComponent[0x18]; // 0x4B0 CHitboxComponent
    std::uint8_t m_pChoreoComponent[0x8]; // 0x4C8 CChoreoComponent*
    std::uint8_t m_nDestructiblePartInitialStateDestructed0[0x4]; // 0x4D0 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed1[0x4]; // 0x4D4 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed2[0x4]; // 0x4D8 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed3[0x4]; // 0x4DC HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed4[0x4]; // 0x4E0 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed0_PartIndex[0x4]; // 0x4E4 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed1_PartIndex[0x4]; // 0x4E8 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed2_PartIndex[0x4]; // 0x4EC int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed3_PartIndex[0x4]; // 0x4F0 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed4_PartIndex[0x4]; // 0x4F4 int32
    std::uint8_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces[0x1]; // 0x4F8 bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces[0x1]; // 0x4F9 bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces[0x1]; // 0x4FA bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces[0x1]; // 0x4FB bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces[0x4]; // 0x4FC bool
    std::uint8_t m_pDestructiblePartsSystemComponent[0x8]; // 0x500 CDestructiblePartsComponent*
    std::uint8_t m_OnDestructibleHitGroupDamageLevelChanged[0x28]; // 0x508 CEntityOutputTemplate<CBaseModelEntity::OnDamageLevelChangedArgs_t>
    std::uint8_t m_flDissolveStartTime[0x8]; // 0x530 GameTime_t
    std::uint8_t m_OnIgnite[0x18]; // 0x538 CEntityIOOutput
    std::uint8_t m_nRenderMode[0x1]; // 0x550 RenderMode_t
    std::uint8_t m_nRenderFX[0x1]; // 0x551 RenderFx_t
    std::uint8_t m_bAllowFadeInView[0x1E]; // 0x552 bool
    std::uint8_t m_clrRender[0x8]; // 0x570 Color
    std::uint8_t m_vecRenderAttributes[0x68]; // 0x578 CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    std::uint8_t m_bRenderToCubemaps[0x1]; // 0x5E0 bool
    std::uint8_t m_bExpandRenderBoundsToIncludeCloth[0x1]; // 0x5E1 bool
    std::uint8_t m_bNoInterpolate[0x6]; // 0x5E2 bool
    std::uint8_t m_Collision[0xB8]; // 0x5E8 CCollisionProperty
    std::uint8_t m_Glow[0x58]; // 0x6A0 CGlowProperty
    std::uint8_t m_flGlowBackfaceMult[0x4]; // 0x6F8 float32
    std::uint8_t m_fadeMinDist[0x4]; // 0x6FC float32
    std::uint8_t m_fadeMaxDist[0x4]; // 0x700 float32
    std::uint8_t m_flFadeScale[0x4]; // 0x704 float32
    std::uint8_t m_flShadowStrength[0x4]; // 0x708 float32
    std::uint8_t m_nObjectCulling[0x4]; // 0x70C uint8
    std::uint8_t m_bodyGroupTotalRequestCount[0x8]; // 0x710 uint32
    std::uint8_t m_bodyGroupRequests[0xD8]; // 0x718 CUtlVectorFixedGrowable<CBaseModelEntity::BodyGroupRequest_t,8>
    std::uint8_t m_bodyGroupChoices[0x28]; // 0x7F0 CUtlOrderedMap<CGlobalSymbol,int32>
    std::uint8_t m_vecViewOffset[0x30]; // 0x818 CNetworkViewOffsetVector
    std::uint8_t m_bvDisabledHitGroups[0x8]; // 0x848 uint32[1]
};

struct fogplayerparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hCtrl[0x4]; // 0x8 CHandle<CFogController>
    std::uint8_t m_flTransitionTime[0x4]; // 0xC float32
    std::uint8_t m_OldColor[0x4]; // 0x10 Color
    std::uint8_t m_flOldStart[0x4]; // 0x14 float32
    std::uint8_t m_flOldEnd[0x4]; // 0x18 float32
    std::uint8_t m_flOldMaxDensity[0x4]; // 0x1C float32
    std::uint8_t m_flOldHDRColorScale[0x4]; // 0x20 float32
    std::uint8_t m_flOldFarZ[0x4]; // 0x24 float32
    std::uint8_t m_NewColor[0x4]; // 0x28 Color
    std::uint8_t m_flNewStart[0x4]; // 0x2C float32
    std::uint8_t m_flNewEnd[0x4]; // 0x30 float32
    std::uint8_t m_flNewMaxDensity[0x4]; // 0x34 float32
    std::uint8_t m_flNewHDRColorScale[0x4]; // 0x38 float32
    std::uint8_t m_flNewFarZ[0x4]; // 0x3C float32
};

struct CGlowProperty {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_fGlowColor[0x28]; // 0x8 Vector
    std::uint8_t m_iGlowType[0x4]; // 0x30 int32
    std::uint8_t m_iGlowTeam[0x4]; // 0x34 int32
    std::uint8_t m_nGlowRange[0x4]; // 0x38 int32
    std::uint8_t m_nGlowRangeMin[0x4]; // 0x3C int32
    std::uint8_t m_glowColorOverride[0x4]; // 0x40 Color
    std::uint8_t m_bFlashing[0x4]; // 0x44 bool
    std::uint8_t m_flGlowTime[0x4]; // 0x48 float32
    std::uint8_t m_flGlowStartTime[0x4]; // 0x4C float32
    std::uint8_t m_bEligibleForScreenHighlight[0x1]; // 0x50 bool
    std::uint8_t m_bGlowing[0x7]; // 0x51 bool
};

struct CInstancedSceneEntity {
    static constexpr std::size_t size = 0x818;
    std::uint8_t pad_0[0x800]; // 0x0
    std::uint8_t m_hOwner[0x4]; // 0x800 CHandle<CBaseEntity>
    std::uint8_t m_bHadOwner[0x4]; // 0x804 bool
    std::uint8_t m_flPostSpeakDelay[0x4]; // 0x808 float32
    std::uint8_t m_flPreDelay[0x4]; // 0x80C float32
    std::uint8_t m_bIsBackground[0x4]; // 0x810 bool
    std::uint8_t m_hTarget[0x4]; // 0x814 CHandle<CBaseEntity>
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCitadelSoundOpvarSetOBB {
    static constexpr std::size_t size = 0x4F8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszStackName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszOperatorName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_iszOpvarName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_vDistanceInnerMins[0xC]; // 0x4C0 Vector
    std::uint8_t m_vDistanceInnerMaxs[0xC]; // 0x4CC Vector
    std::uint8_t m_vDistanceOuterMins[0xC]; // 0x4D8 Vector
    std::uint8_t m_vDistanceOuterMaxs[0xC]; // 0x4E4 Vector
    std::uint8_t m_nAABBDirection[0x8]; // 0x4F0 int32
};

struct CSoundEventParameter {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_iszParamName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_flFloatValue[0x8]; // 0x4C8 float32
};

struct CPlayer_WaterServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_WhenTrue[0x48]; // 0x168 CPulse_OutflowConnection
    std::uint8_t m_WhenFalse[0x48]; // 0x1B0 CPulse_OutflowConnection
};

struct CRotButton {
    static constexpr std::size_t size = 0x9D0;
    std::uint8_t pad_0[0x9D0]; // 0x0
};

struct CEnvViewPunch {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flRadius[0x4]; // 0x4A8 float32
    std::uint8_t m_angViewPunch[0xC]; // 0x4AC QAngle
};

struct CDamageRecord {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_PlayerDamager[0x4]; // 0x30 CHandle<CCSPlayerPawn>
    std::uint8_t m_PlayerRecipient[0x4]; // 0x34 CHandle<CCSPlayerPawn>
    std::uint8_t m_hPlayerControllerDamager[0x4]; // 0x38 CHandle<CCSPlayerController>
    std::uint8_t m_hPlayerControllerRecipient[0x4]; // 0x3C CHandle<CCSPlayerController>
    std::uint8_t m_szPlayerDamagerName[0x8]; // 0x40 CUtlString
    std::uint8_t m_szPlayerRecipientName[0x8]; // 0x48 CUtlString
    std::uint8_t m_DamagerXuid[0x8]; // 0x50 uint64
    std::uint8_t m_RecipientXuid[0x8]; // 0x58 uint64
    std::uint8_t m_flBulletsDamage[0x4]; // 0x60 float32
    std::uint8_t m_flDamage[0x4]; // 0x64 float32
    std::uint8_t m_flActualHealthRemoved[0x4]; // 0x68 float32
    std::uint8_t m_iNumHits[0x4]; // 0x6C int32
    std::uint8_t m_iLastBulletUpdate[0x4]; // 0x70 int32
    std::uint8_t m_bIsOtherEnemy[0x1]; // 0x74 bool
    std::uint8_t m_killType[0x3]; // 0x75 EKillTypes_t
};

struct VPhysicsCollisionAttribute_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nInteractsAs[0x8]; // 0x8 uint64
    std::uint8_t m_nInteractsWith[0x8]; // 0x10 uint64
    std::uint8_t m_nInteractsExclude[0x8]; // 0x18 uint64
    std::uint8_t m_nEntityId[0x4]; // 0x20 uint32
    std::uint8_t m_nOwnerId[0x4]; // 0x24 uint32
    std::uint8_t m_nHierarchyId[0x2]; // 0x28 uint16
    std::uint8_t m_nDetailLayerMask[0x2]; // 0x2A uint16
    std::uint8_t m_nDetailLayerMaskType[0x1]; // 0x2C uint8
    std::uint8_t m_nTargetDetailLayer[0x1]; // 0x2D uint8
    std::uint8_t m_nCollisionGroup[0x1]; // 0x2E uint8
    std::uint8_t m_nCollisionFunctionMask[0x1]; // 0x2F uint8
};

struct CItemKevlar {
    static constexpr std::size_t size = 0xAE0;
    std::uint8_t pad_0[0xAE0]; // 0x0
};

struct CFuncShatterglass {
    static constexpr std::size_t size = 0x980;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_matPanelTransform[0x30]; // 0x850 matrix3x4_t
    std::uint8_t m_matPanelTransformWsTemp[0x30]; // 0x880 matrix3x4_t
    std::uint8_t m_vecShatterGlassShards[0x18]; // 0x8B0 CUtlVector<uint32>
    std::uint8_t m_PanelSize[0x8]; // 0x8C8 Vector2D
    std::uint8_t m_flLastShatterSoundEmitTime[0x4]; // 0x8D0 GameTime_t
    std::uint8_t m_flLastCleanupTime[0x4]; // 0x8D4 GameTime_t
    std::uint8_t m_flInitAtTime[0x4]; // 0x8D8 GameTime_t
    std::uint8_t m_flGlassThickness[0x4]; // 0x8DC float32
    std::uint8_t m_flSpawnInvulnerability[0x4]; // 0x8E0 float32
    std::uint8_t m_bBreakSilent[0x1]; // 0x8E4 bool
    std::uint8_t m_bBreakShardless[0x1]; // 0x8E5 bool
    std::uint8_t m_bBroken[0x1]; // 0x8E6 bool
    std::uint8_t m_bGlassNavIgnore[0x1]; // 0x8E7 bool
    std::uint8_t m_bGlassInFrame[0x1]; // 0x8E8 bool
    std::uint8_t m_bStartBroken[0x1]; // 0x8E9 bool
    std::uint8_t m_iInitialDamageType[0x6]; // 0x8EA uint8
    std::uint8_t m_szDamagePositioningEntityName01[0x8]; // 0x8F0 CUtlSymbolLarge
    std::uint8_t m_szDamagePositioningEntityName02[0x8]; // 0x8F8 CUtlSymbolLarge
    std::uint8_t m_szDamagePositioningEntityName03[0x8]; // 0x900 CUtlSymbolLarge
    std::uint8_t m_szDamagePositioningEntityName04[0x8]; // 0x908 CUtlSymbolLarge
    std::uint8_t m_vInitialDamagePositions[0x18]; // 0x910 CUtlVector<VectorWS>
    std::uint8_t m_vExtraDamagePositions[0x18]; // 0x928 CUtlVector<VectorWS>
    std::uint8_t m_vInitialPanelVertices[0x18]; // 0x940 CUtlVector<Vector4D>
    std::uint8_t m_OnBroken[0x18]; // 0x958 CEntityIOOutput
    std::uint8_t m_iSurfaceType[0x8]; // 0x970 uint8
    std::uint8_t m_hMaterialDamageBase[0x8]; // 0x978 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct CNavWalkable {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPlantedC4 {
    static constexpr std::size_t size = 0xFA0;
    std::uint8_t pad_0[0xA98]; // 0x0
    std::uint8_t m_bBombTicking[0x4]; // 0xA98 bool
    std::uint8_t m_flC4Blow[0x4]; // 0xA9C GameTime_t
    std::uint8_t m_nBombSite[0x4]; // 0xAA0 int32
    std::uint8_t m_nSourceSoundscapeHash[0x4]; // 0xAA4 int32
    std::uint8_t m_bAbortDetonationBecauseWorldIsFrozen[0x8]; // 0xAA8 bool
    std::uint8_t m_AttributeManager[0x438]; // 0xAB0 CAttributeContainer
    std::uint8_t m_OnBombDefused[0x18]; // 0xEE8 CEntityIOOutput
    std::uint8_t m_OnBombBeginDefuse[0x18]; // 0xF00 CEntityIOOutput
    std::uint8_t m_OnBombDefuseAborted[0x18]; // 0xF18 CEntityIOOutput
    std::uint8_t m_bCannotBeDefused[0x8]; // 0xF30 bool
    std::uint8_t m_entitySpottedState[0x18]; // 0xF38 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x4]; // 0xF50 int32
    std::uint8_t m_bHasExploded[0x1]; // 0xF54 bool
    std::uint8_t m_bBombDefused[0x1]; // 0xF55 bool
    std::uint8_t m_bTrainingPlacedByPlayer[0x2]; // 0xF56 bool
    std::uint8_t m_flTimerLength[0x4]; // 0xF58 float32
    std::uint8_t m_bBeingDefused[0x8]; // 0xF5C bool
    std::uint8_t m_fLastDefuseTime[0x8]; // 0xF64 GameTime_t
    std::uint8_t m_flDefuseLength[0x4]; // 0xF6C float32
    std::uint8_t m_flDefuseCountDown[0x4]; // 0xF70 GameTime_t
    std::uint8_t m_hBombDefuser[0x4]; // 0xF74 CHandle<CCSPlayerPawn>
    std::uint8_t m_iProgressBarTime[0x4]; // 0xF78 int32
    std::uint8_t m_bVoiceAlertFired[0x1]; // 0xF7C bool
    std::uint8_t m_bVoiceAlertPlayed[0x7]; // 0xF7D bool[4]
    std::uint8_t m_flNextBotBeepTime[0x8]; // 0xF84 GameTime_t
    std::uint8_t m_angCatchUpToPlayerEye[0xC]; // 0xF8C QAngle
    std::uint8_t m_flLastSpinDetectionTime[0x8]; // 0xF98 GameTime_t
};

struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x540]; // 0x0
};

struct CVoteController {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iActiveIssueIndex[0x4]; // 0x4A8 int32
    std::uint8_t m_iOnlyTeamToVote[0x4]; // 0x4AC int32
    std::uint8_t m_nVoteOptionCount[0x14]; // 0x4B0 int32[5]
    std::uint8_t m_nPotentialVotes[0x4]; // 0x4C4 int32
    std::uint8_t m_bIsYesNoVote[0x8]; // 0x4C8 bool
    std::uint8_t m_acceptingVotesTimer[0x18]; // 0x4D0 CountdownTimer
    std::uint8_t m_executeCommandTimer[0x18]; // 0x4E8 CountdownTimer
    std::uint8_t m_resetVoteTimer[0x18]; // 0x500 CountdownTimer
    std::uint8_t m_nVotesCast[0x100]; // 0x518 int32[64]
    std::uint8_t m_playerHoldingVote[0x4]; // 0x618 CPlayerSlot
    std::uint8_t m_playerOverrideForVote[0x4]; // 0x61C CPlayerSlot
    std::uint8_t m_nHighestCountIndex[0x8]; // 0x620 int32
    std::uint8_t m_potentialIssues[0x18]; // 0x628 CUtlVector<CBaseIssue*>
    std::uint8_t m_VoteOptions[0x18]; // 0x640 CUtlVector<char*>
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_UnyieldResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPhysImpact {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_damage[0x4]; // 0x4A8 float32
    std::uint8_t m_distance[0x4]; // 0x4AC float32
    std::uint8_t m_directionEntityName[0x8]; // 0x4B0 CUtlSymbolLarge
};

struct CBaseEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_CBodyComponent[0x8]; // 0x30 CBodyComponent*
    std::uint8_t m_NetworkTransmitComponent[0x210]; // 0x38 CNetworkTransmitComponent
    std::uint8_t m_aThinkFunctions[0x18]; // 0x248 CUtlVector<thinkfunc_t>
    std::uint8_t m_iCurrentThinkContext[0x4]; // 0x260 int32
    std::uint8_t m_nLastThinkTick[0x4]; // 0x264 GameTick_t
    std::uint8_t m_bDisabledContextThinks[0x10]; // 0x268 bool
    std::uint8_t m_isSteadyState[0x8]; // 0x278 CTypedBitVec<64>
    std::uint8_t m_lastNetworkChange[0x8]; // 0x280 float32
    std::uint8_t m_think[0x8]; // 0x288 BASEPTR
    std::uint8_t m_ResponseContexts[0x18]; // 0x290 CUtlVector<ResponseContext_t>
    std::uint8_t m_iszResponseContext[0x8]; // 0x2A8 CUtlSymbolLarge
    std::uint8_t m_pfnTouch[0x8]; // 0x2B0 ENTITYFUNCPTR
    std::uint8_t m_pfnUse[0x8]; // 0x2B8 USEPTR
    std::uint8_t m_pfnBlocked[0x8]; // 0x2C0 ENTITYFUNCPTR
    std::uint8_t m_pfnMoveDone[0x8]; // 0x2C8 BASEPTR
    std::uint8_t m_iHealth[0x4]; // 0x2D0 int32
    std::uint8_t m_iMaxHealth[0x4]; // 0x2D4 int32
    std::uint8_t m_lifeState[0x4]; // 0x2D8 uint8
    std::uint8_t m_flDamageAccumulator[0x4]; // 0x2DC float32
    std::uint8_t m_bTakesDamage[0x8]; // 0x2E0 bool
    std::uint8_t m_nTakeDamageFlags[0x8]; // 0x2E8 TakeDamageFlags_t
    std::uint8_t m_nPlatformType[0x2]; // 0x2F0 EntityPlatformTypes_t
    std::uint8_t m_MoveCollide[0x1]; // 0x2F2 MoveCollide_t
    std::uint8_t m_MoveType[0x1]; // 0x2F3 MoveType_t
    std::uint8_t m_nPreviouslySetMoveType[0x1]; // 0x2F4 MoveType_t
    std::uint8_t m_nActualMoveType[0x1]; // 0x2F5 MoveType_t
    std::uint8_t m_nWaterTouch[0x1]; // 0x2F6 uint8
    std::uint8_t m_nSlimeTouch[0x1]; // 0x2F7 uint8
    std::uint8_t m_bRestoreInHierarchy[0x8]; // 0x2F8 bool
    std::uint8_t m_target[0x8]; // 0x300 CUtlSymbolLarge
    std::uint8_t m_hDamageFilter[0x8]; // 0x308 CHandle<CBaseFilter>
    std::uint8_t m_iszDamageFilterName[0x8]; // 0x310 CUtlSymbolLarge
    std::uint8_t m_flMoveDoneTime[0x4]; // 0x318 float32
    std::uint8_t m_nSubclassID[0xC]; // 0x31C CUtlStringToken
    std::uint8_t m_flAnimTime[0x4]; // 0x328 float32
    std::uint8_t m_flSimulationTime[0x4]; // 0x32C float32
    std::uint8_t m_flCreateTime[0x4]; // 0x330 GameTime_t
    std::uint8_t m_bClientSideRagdoll[0x1]; // 0x334 bool
    std::uint8_t m_ubInterpolationFrame[0x3]; // 0x335 uint8
    std::uint8_t m_vPrevVPhysicsUpdatePos[0xC]; // 0x338 VectorWS
    std::uint8_t m_iTeamNum[0x4]; // 0x344 uint8
    std::uint8_t m_iGlobalname[0x8]; // 0x348 CUtlSymbolLarge
    std::uint8_t m_iSentToClients[0x8]; // 0x350 int32
    std::uint8_t m_sUniqueHammerID[0x8]; // 0x358 CUtlString
    std::uint8_t m_spawnflags[0x4]; // 0x360 uint32
    std::uint8_t m_nNextThinkTick[0x4]; // 0x364 GameTick_t
    std::uint8_t m_nSimulationTick[0x8]; // 0x368 int32
    std::uint8_t m_OnKilled[0x18]; // 0x370 CEntityIOOutput
    std::uint8_t m_fFlags[0x4]; // 0x388 uint32
    std::uint8_t m_vecAbsVelocity[0xC]; // 0x38C Vector
    std::uint8_t m_vecVelocity[0x30]; // 0x398 CNetworkVelocityVector
    std::uint8_t m_vecBaseVelocity[0xC]; // 0x3C8 Vector
    std::uint8_t m_nPushEnumCount[0x4]; // 0x3D4 int32
    std::uint8_t m_pCollision[0x8]; // 0x3D8 CCollisionProperty*
    std::uint8_t m_hEffectEntity[0x4]; // 0x3E0 CHandle<CBaseEntity>
    std::uint8_t m_hOwnerEntity[0x4]; // 0x3E4 CHandle<CBaseEntity>
    std::uint8_t m_fEffects[0x4]; // 0x3E8 uint32
    std::uint8_t m_hGroundEntity[0x4]; // 0x3EC CHandle<CBaseEntity>
    std::uint8_t m_nGroundBodyIndex[0x4]; // 0x3F0 int32
    std::uint8_t m_flFriction[0x4]; // 0x3F4 float32
    std::uint8_t m_flElasticity[0x4]; // 0x3F8 float32
    std::uint8_t m_flGravityScale[0x4]; // 0x3FC float32
    std::uint8_t m_flTimeScale[0x4]; // 0x400 float32
    std::uint8_t m_flWaterLevel[0x4]; // 0x404 float32
    std::uint8_t m_bGravityDisabled[0x1]; // 0x408 bool
    std::uint8_t m_bAnimatedEveryTick[0x3]; // 0x409 bool
    std::uint8_t m_flActualGravityScale[0x4]; // 0x40C float32
    std::uint8_t m_bGravityActuallyDisabled[0x1]; // 0x410 bool
    std::uint8_t m_bDisableLowViolence[0x1]; // 0x411 bool
    std::uint8_t m_nWaterType[0x2]; // 0x412 uint8
    std::uint8_t m_iEFlags[0x4]; // 0x414 int32
    std::uint8_t m_OnUser1[0x18]; // 0x418 CEntityIOOutput
    std::uint8_t m_OnUser2[0x18]; // 0x430 CEntityIOOutput
    std::uint8_t m_OnUser3[0x18]; // 0x448 CEntityIOOutput
    std::uint8_t m_OnUser4[0x18]; // 0x460 CEntityIOOutput
    std::uint8_t m_iInitialTeamNum[0x4]; // 0x478 int32
    std::uint8_t m_flNavIgnoreUntilTime[0x4]; // 0x47C GameTime_t
    std::uint8_t m_vecAngVelocity[0xC]; // 0x480 QAngle
    std::uint8_t m_bNetworkQuantizeOriginAndAngles[0x1]; // 0x48C bool
    std::uint8_t m_bLagCompensate[0x3]; // 0x48D bool
    std::uint8_t m_pBlocker[0x4]; // 0x490 CHandle<CBaseEntity>
    std::uint8_t m_flLocalTime[0x4]; // 0x494 float32
    std::uint8_t m_flVPhysicsUpdateLocalTime[0x4]; // 0x498 float32
    std::uint8_t m_nBloodType[0x4]; // 0x49C BloodType
    std::uint8_t m_pPulseGraphInstance[0x8]; // 0x4A0 CPulseGraphInstance_ServerEntity*
};

struct CPulseCell_ApplyAnimGraphParam {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_value[0x90]; // 0xD8 CPulseObservableExpression<CPulseVariant>
};

struct CPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CGameSceneNodeHandle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hOwner[0x4]; // 0x8 CEntityHandle
    std::uint8_t m_name[0x4]; // 0xC CUtlStringToken
};

struct CMarkupVolumeWithRef {
    static constexpr std::size_t size = 0x8B8;
    std::uint8_t pad_0[0x898]; // 0x0
    std::uint8_t m_bUseRef[0x4]; // 0x898 bool
    std::uint8_t m_vRefPosEntitySpace[0xC]; // 0x89C Vector
    std::uint8_t m_vRefPosWorldSpace[0xC]; // 0x8A8 VectorWS
    std::uint8_t m_flRefDot[0x4]; // 0x8B4 float32
};

struct CCSGO_TeamSelectCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_UnknownKeys[0x10]; // 0x48 KeyValues3
};

struct CFuncPlatRot {
    static constexpr std::size_t size = 0x920;
    std::uint8_t pad_0[0x908]; // 0x0
    std::uint8_t m_end[0xC]; // 0x908 QAngle
    std::uint8_t m_start[0xC]; // 0x914 QAngle
};

struct CRagdollMagnet {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x4A8 bool
    std::uint8_t m_radius[0x4]; // 0x4AC float32
    std::uint8_t m_force[0x4]; // 0x4B0 float32
    std::uint8_t m_axis[0xC]; // 0x4B4 VectorWS
};

struct CInfoInstructorHintTarget {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPulseCell_ApplyEntityFlags {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CSpriteAlias_env_glow {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x8C0]; // 0x0
};

struct CFireCrackerBlast {
    static constexpr std::size_t size = 0x14D8;
    std::uint8_t pad_0[0x14D8]; // 0x0
};

struct CSpotlightEnd {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_flLightScale[0x4]; // 0x850 float32
    std::uint8_t m_Radius[0x4]; // 0x854 float32
    std::uint8_t m_vSpotlightDir[0xC]; // 0x858 Vector
    std::uint8_t m_vSpotlightOrg[0xC]; // 0x864 VectorWS
};

struct CEnvSky {
    static constexpr std::size_t size = 0x8B0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_hSkyMaterial[0x8]; // 0x850 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hSkyMaterialLightingOnly[0x8]; // 0x858 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_bStartDisabled[0x4]; // 0x860 bool
    std::uint8_t m_vTintColor[0x4]; // 0x864 Color
    std::uint8_t m_vTintColorLightingOnly[0x4]; // 0x868 Color
    std::uint8_t m_flBrightnessScale[0x4]; // 0x86C float32
    std::uint8_t m_nFogType[0x4]; // 0x870 int32
    std::uint8_t m_flFogMinStart[0x4]; // 0x874 float32
    std::uint8_t m_flFogMinEnd[0x4]; // 0x878 float32
    std::uint8_t m_flFogMaxStart[0x4]; // 0x87C float32
    std::uint8_t m_flFogMaxEnd[0x4]; // 0x880 float32
    std::uint8_t m_bEnabled[0x2C]; // 0x884 bool
};

struct CInfoSpawnGroupLandmark {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPointAngleSensor {
    static constexpr std::size_t size = 0x548;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x4A8 bool
    std::uint8_t m_nLookAtName[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_hTargetEntity[0x4]; // 0x4B8 CHandle<CBaseEntity>
    std::uint8_t m_hLookAtEntity[0x4]; // 0x4BC CHandle<CBaseEntity>
    std::uint8_t m_flDuration[0x4]; // 0x4C0 float32
    std::uint8_t m_flDotTolerance[0x4]; // 0x4C4 float32
    std::uint8_t m_flFacingTime[0x4]; // 0x4C8 GameTime_t
    std::uint8_t m_bFired[0x4]; // 0x4CC bool
    std::uint8_t m_OnFacingLookat[0x18]; // 0x4D0 CEntityIOOutput
    std::uint8_t m_OnNotFacingLookat[0x18]; // 0x4E8 CEntityIOOutput
    std::uint8_t m_TargetDir[0x28]; // 0x500 CEntityOutputTemplate<Vector>
    std::uint8_t m_FacingPercentage[0x20]; // 0x528 CEntityOutputTemplate<float32>
};

struct CSPerRoundStats_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_iKills[0x4]; // 0x30 int32
    std::uint8_t m_iDeaths[0x4]; // 0x34 int32
    std::uint8_t m_iAssists[0x4]; // 0x38 int32
    std::uint8_t m_iDamage[0x4]; // 0x3C int32
    std::uint8_t m_iEquipmentValue[0x4]; // 0x40 int32
    std::uint8_t m_iMoneySaved[0x4]; // 0x44 int32
    std::uint8_t m_iKillReward[0x4]; // 0x48 int32
    std::uint8_t m_iLiveTime[0x4]; // 0x4C int32
    std::uint8_t m_iHeadShotKills[0x4]; // 0x50 int32
    std::uint8_t m_iObjective[0x4]; // 0x54 int32
    std::uint8_t m_iCashEarned[0x4]; // 0x58 int32
    std::uint8_t m_iUtilityDamage[0x4]; // 0x5C int32
    std::uint8_t m_iEnemiesFlashed[0x8]; // 0x60 int32
};

struct CGenericConstraint {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t m_bPlaceAnchorsAtConstraintTransform[0x4]; // 0x510 bool
    std::uint8_t m_nLinearMotionX[0x4]; // 0x514 JointMotion_t
    std::uint8_t m_nLinearMotionY[0x4]; // 0x518 JointMotion_t
    std::uint8_t m_nLinearMotionZ[0x4]; // 0x51C JointMotion_t
    std::uint8_t m_flLinearFrequencyX[0x4]; // 0x520 float32
    std::uint8_t m_flLinearFrequencyY[0x4]; // 0x524 float32
    std::uint8_t m_flLinearFrequencyZ[0x4]; // 0x528 float32
    std::uint8_t m_flLinearDampingRatioX[0x4]; // 0x52C float32
    std::uint8_t m_flLinearDampingRatioY[0x4]; // 0x530 float32
    std::uint8_t m_flLinearDampingRatioZ[0x4]; // 0x534 float32
    std::uint8_t m_flMaxLinearImpulseX[0x4]; // 0x538 float32
    std::uint8_t m_flMaxLinearImpulseY[0x4]; // 0x53C float32
    std::uint8_t m_flMaxLinearImpulseZ[0x4]; // 0x540 float32
    std::uint8_t m_flBreakAfterTimeX[0x4]; // 0x544 float32
    std::uint8_t m_flBreakAfterTimeY[0x4]; // 0x548 float32
    std::uint8_t m_flBreakAfterTimeZ[0x4]; // 0x54C float32
    std::uint8_t m_flBreakAfterTimeStartTimeX[0x4]; // 0x550 GameTime_t
    std::uint8_t m_flBreakAfterTimeStartTimeY[0x4]; // 0x554 GameTime_t
    std::uint8_t m_flBreakAfterTimeStartTimeZ[0x4]; // 0x558 GameTime_t
    std::uint8_t m_flBreakAfterTimeThresholdX[0x4]; // 0x55C float32
    std::uint8_t m_flBreakAfterTimeThresholdY[0x4]; // 0x560 float32
    std::uint8_t m_flBreakAfterTimeThresholdZ[0x4]; // 0x564 float32
    std::uint8_t m_flNotifyForceX[0x4]; // 0x568 float32
    std::uint8_t m_flNotifyForceY[0x4]; // 0x56C float32
    std::uint8_t m_flNotifyForceZ[0x4]; // 0x570 float32
    std::uint8_t m_flNotifyForceMinTimeX[0x4]; // 0x574 float32
    std::uint8_t m_flNotifyForceMinTimeY[0x4]; // 0x578 float32
    std::uint8_t m_flNotifyForceMinTimeZ[0x4]; // 0x57C float32
    std::uint8_t m_flNotifyForceLastTimeX[0x4]; // 0x580 GameTime_t
    std::uint8_t m_flNotifyForceLastTimeY[0x4]; // 0x584 GameTime_t
    std::uint8_t m_flNotifyForceLastTimeZ[0x4]; // 0x588 GameTime_t
    std::uint8_t m_bAxisNotifiedX[0x1]; // 0x58C bool
    std::uint8_t m_bAxisNotifiedY[0x1]; // 0x58D bool
    std::uint8_t m_bAxisNotifiedZ[0x2]; // 0x58E bool
    std::uint8_t m_nAngularMotionX[0x4]; // 0x590 JointMotion_t
    std::uint8_t m_nAngularMotionY[0x4]; // 0x594 JointMotion_t
    std::uint8_t m_nAngularMotionZ[0x4]; // 0x598 JointMotion_t
    std::uint8_t m_flAngularFrequencyX[0x4]; // 0x59C float32
    std::uint8_t m_flAngularFrequencyY[0x4]; // 0x5A0 float32
    std::uint8_t m_flAngularFrequencyZ[0x4]; // 0x5A4 float32
    std::uint8_t m_flAngularDampingRatioX[0x4]; // 0x5A8 float32
    std::uint8_t m_flAngularDampingRatioY[0x4]; // 0x5AC float32
    std::uint8_t m_flAngularDampingRatioZ[0x4]; // 0x5B0 float32
    std::uint8_t m_flMaxAngularImpulseX[0x4]; // 0x5B4 float32
    std::uint8_t m_flMaxAngularImpulseY[0x4]; // 0x5B8 float32
    std::uint8_t m_flMaxAngularImpulseZ[0x4]; // 0x5BC float32
    std::uint8_t m_NotifyForceReachedX[0x18]; // 0x5C0 CEntityIOOutput
    std::uint8_t m_NotifyForceReachedY[0x18]; // 0x5D8 CEntityIOOutput
    std::uint8_t m_NotifyForceReachedZ[0x18]; // 0x5F0 CEntityIOOutput
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_OutputIndex[0x8]; // 0x48 PulseRuntimeOutputIndex_t
};

struct CEnvLaser {
    static constexpr std::size_t size = 0x918;
    std::uint8_t pad_0[0x8F0]; // 0x0
    std::uint8_t m_iszLaserTarget[0x8]; // 0x8F0 CUtlSymbolLarge
    std::uint8_t m_pSprite[0x8]; // 0x8F8 CHandle<CSprite>
    std::uint8_t m_iszSpriteName[0x8]; // 0x900 CUtlSymbolLarge
    std::uint8_t m_firePosition[0xC]; // 0x908 Vector
    std::uint8_t m_flStartFrame[0x4]; // 0x914 float32
};

struct CSoundOpvarSetEntity {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_iszStackName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_iszOperatorName[0x8]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_iszOpvarName[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_nOpvarType[0x4]; // 0x4D8 int32
    std::uint8_t m_nOpvarIndex[0x4]; // 0x4DC int32
    std::uint8_t m_flOpvarValue[0x8]; // 0x4E0 float32
    std::uint8_t m_OpvarValueString[0x8]; // 0x4E8 CUtlSymbolLarge
    std::uint8_t m_bSetOnSpawn[0x10]; // 0x4F0 bool
};

struct CEnvBeverage {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_CanInDispenser[0x4]; // 0x4A8 bool
    std::uint8_t m_nBeverageType[0x4]; // 0x4AC int32
};

struct CPhysMotor {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nameAttach[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_nameAnchor[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_hAttachedObject[0x4]; // 0x4B8 CHandle<CBaseEntity>
    std::uint8_t m_hAnchorObject[0x4]; // 0x4BC CHandle<CBaseEntity>
    std::uint8_t m_spinUp[0x4]; // 0x4C0 float32
    std::uint8_t m_spinDown[0x4]; // 0x4C4 float32
    std::uint8_t m_flMotorFriction[0x4]; // 0x4C8 float32
    std::uint8_t m_additionalAcceleration[0x4]; // 0x4CC float32
    std::uint8_t m_angularAcceleration[0x4]; // 0x4D0 float32
    std::uint8_t m_flTorqueScale[0x4]; // 0x4D4 float32
    std::uint8_t m_flTargetSpeed[0x4]; // 0x4D8 float32
    std::uint8_t m_flSpeedWhenSpinUpOrSpinDownStarted[0x4]; // 0x4DC float32
    std::uint8_t m_pFixedWorldBody[0x8]; // 0x4E0 IPhysicsBody*
    std::uint8_t m_pMotorJoint[0x8]; // 0x4E8 IPhysicsJoint*
    std::uint8_t m_motor[0x20]; // 0x4F0 CMotorController
};

struct CLogicGameEvent {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszEventName[0x8]; // 0x4A8 CUtlSymbolLarge
};

struct CPhysicsPropMultiplayer {
    static constexpr std::size_t size = 0xD10;
    std::uint8_t pad_0[0xD10]; // 0x0
};

struct CPhysExplosion {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bExplodeOnSpawn[0x4]; // 0x4A8 bool
    std::uint8_t m_flMagnitude[0x4]; // 0x4AC float32
    std::uint8_t m_flDamage[0x4]; // 0x4B0 float32
    std::uint8_t m_radius[0x4]; // 0x4B4 float32
    std::uint8_t m_targetEntityName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_ignoreEntityName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_flInnerRadius[0x4]; // 0x4C8 float32
    std::uint8_t m_flPushScale[0x4]; // 0x4CC float32
    std::uint8_t m_bConvertToDebrisWhenPossible[0x1]; // 0x4D0 bool
    std::uint8_t m_bAffectInvulnerableEnts[0x1]; // 0x4D1 bool
    std::uint8_t m_bDisablePushClamp[0x6]; // 0x4D2 bool
    std::uint8_t m_OnPushedPlayer[0x18]; // 0x4D8 CEntityIOOutput
};

struct CSplineConstraint {
    static constexpr std::size_t size = 0x5B8;
    std::uint8_t pad_0[0x558]; // 0x0
    std::uint8_t m_vAnchorOffsetRestore[0xC]; // 0x558 Vector
    std::uint8_t m_hSplineEntity[0x4]; // 0x564 CHandle<CBaseEntity>
    std::uint8_t m_pSplineBody[0x8]; // 0x568 IPhysicsBody*
    std::uint8_t m_bEnableLateralConstraint[0x1]; // 0x570 bool
    std::uint8_t m_bEnableVerticalConstraint[0x1]; // 0x571 bool
    std::uint8_t m_bEnableAngularConstraint[0x1]; // 0x572 bool
    std::uint8_t m_bEnableLimit[0x1]; // 0x573 bool
    std::uint8_t m_bFireEventsOnPath[0x4]; // 0x574 bool
    std::uint8_t m_flLinearFrequency[0x4]; // 0x578 float32
    std::uint8_t m_flLinarDampingRatio[0x4]; // 0x57C float32
    std::uint8_t m_flJointFriction[0x4]; // 0x580 float32
    std::uint8_t m_flTransitionTime[0x14]; // 0x584 float32
    std::uint8_t m_vPreSolveAnchorPos[0xC]; // 0x598 VectorWS
    std::uint8_t m_StartTransitionTime[0x4]; // 0x5A4 GameTime_t
    std::uint8_t m_vTangentSpaceAnchorAtTransitionStart[0x10]; // 0x5A8 Vector
};

struct CLogicCompare {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flInValue[0x4]; // 0x4A8 float32
    std::uint8_t m_flCompareValue[0x4]; // 0x4AC float32
    std::uint8_t m_OnLessThan[0x20]; // 0x4B0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnEqualTo[0x20]; // 0x4D0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnNotEqualTo[0x20]; // 0x4F0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnGreaterThan[0x20]; // 0x510 CEntityOutputTemplate<float32>
};

struct CSoundEventBoxEntity {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x5A0]; // 0x0
    std::uint8_t m_iszBoxEntities[0x98]; // 0x5A0 CUtlSymbolLarge[16]
    std::uint8_t m_vecBoxHelpersNetworked[0x60]; // 0x638 CNetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
};

struct CCSGameModeRules_Noop {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_hBlackboardResource[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIPulseGraphDef>
    std::uint8_t m_BlackboardResource[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_nNodeID[0x8]; // 0x18 PulseDocNodeID_t
    std::uint8_t m_NodeName[0x8]; // 0x20 CGlobalSymbol
};

struct CFuncTankTrain {
    static constexpr std::size_t size = 0x990;
    std::uint8_t pad_0[0x978]; // 0x0
    std::uint8_t m_OnDeath[0x18]; // 0x978 CEntityIOOutput
};

struct CPointClientUIWorldPanel {
    static constexpr std::size_t size = 0xA10;
    std::uint8_t pad_0[0x9B0]; // 0x0
    std::uint8_t m_bIgnoreInput[0x1]; // 0x9B0 bool
    std::uint8_t m_bLit[0x1]; // 0x9B1 bool
    std::uint8_t m_bFollowPlayerAcrossTeleport[0x2]; // 0x9B2 bool
    std::uint8_t m_flWidth[0x4]; // 0x9B4 float32
    std::uint8_t m_flHeight[0x4]; // 0x9B8 float32
    std::uint8_t m_flDPI[0x4]; // 0x9BC float32
    std::uint8_t m_flWindowUIScale[0x4]; // 0x9C0 float32
    std::uint8_t m_flInteractDistance[0x4]; // 0x9C4 float32
    std::uint8_t m_flDepthOffset[0x4]; // 0x9C8 float32
    std::uint8_t m_unOwnerContext[0x4]; // 0x9CC uint32
    std::uint8_t m_unHorizontalAlign[0x4]; // 0x9D0 uint32
    std::uint8_t m_unVerticalAlign[0x4]; // 0x9D4 uint32
    std::uint8_t m_unOrientation[0x4]; // 0x9D8 uint32
    std::uint8_t m_bAllowInteractionFromAllSceneWorlds[0x4]; // 0x9DC bool
    std::uint8_t m_vecCSSClasses[0x18]; // 0x9E0 CNetworkUtlVectorBase<CUtlSymbolLarge>
    std::uint8_t m_bOpaque[0x1]; // 0x9F8 bool
    std::uint8_t m_bNoDepth[0x1]; // 0x9F9 bool
    std::uint8_t m_bVisibleWhenParentNoDraw[0x1]; // 0x9FA bool
    std::uint8_t m_bRenderBackface[0x1]; // 0x9FB bool
    std::uint8_t m_bUseOffScreenIndicator[0x1]; // 0x9FC bool
    std::uint8_t m_bExcludeFromSaveGames[0x1]; // 0x9FD bool
    std::uint8_t m_bGrabbable[0x1]; // 0x9FE bool
    std::uint8_t m_bOnlyRenderToTexture[0x1]; // 0x9FF bool
    std::uint8_t m_bDisableMipGen[0x4]; // 0xA00 bool
    std::uint8_t m_nExplicitImageLayout[0x4]; // 0xA04 int32
    std::uint8_t m_bIgnoreParentOrientation[0x8]; // 0xA08 bool
};

struct CSoundEventBoxHelper {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x4A8 Vector
    std::uint8_t m_vMaxs[0xC]; // 0x4B4 Vector
};

struct CSoundEventSphereEntity {
    static constexpr std::size_t size = 0x570;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x568 float32
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
    std::uint8_t m_bReceivesMoneyNextRound[0x4]; // 0x40 bool
    std::uint8_t m_iMoneyEarnedForNextRound[0x4]; // 0x44 int32
    std::uint8_t m_iAccount[0x4]; // 0x48 int32
    std::uint8_t m_iStartAccount[0x4]; // 0x4C int32
    std::uint8_t m_iTotalCashSpent[0x4]; // 0x50 int32
    std::uint8_t m_iCashSpentThisRound[0x4]; // 0x54 int32
};

struct CCSPlayer_AimPunchServices {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_predictableBaseTick[0x4]; // 0x48 GameTick_t
    std::uint8_t m_predictableBaseTickInterpAmount[0x4]; // 0x4C float32
    std::uint8_t m_predictableBaseAngle[0xC]; // 0x50 QAngle
    std::uint8_t m_predictableBaseAngleVel[0x44]; // 0x5C QAngle
    std::uint8_t m_unpredictableBaseTick[0x4]; // 0xA0 GameTick_t
    std::uint8_t m_unpredictableBaseAngle[0x44]; // 0xA4 QAngle
};

struct CRuleBrushEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CMapVetoPickController {
    static constexpr std::size_t size = 0xEA8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bPlayedIntroVcd[0x1]; // 0x4A8 bool
    std::uint8_t m_bNeedToPlayFiveSecondsRemaining[0x1F]; // 0x4A9 bool
    std::uint8_t m_dblPreMatchDraftSequenceTime[0x8]; // 0x4C8 float64
    std::uint8_t m_bPreMatchDraftStateChanged[0x4]; // 0x4D0 bool
    std::uint8_t m_nDraftType[0x4]; // 0x4D4 int32
    std::uint8_t m_nTeamWinningCoinToss[0x4]; // 0x4D8 int32
    std::uint8_t m_nTeamWithFirstChoice[0x100]; // 0x4DC int32[64]
    std::uint8_t m_nVoteMapIdsList[0x1C]; // 0x5DC int32[7]
    std::uint8_t m_nAccountIDs[0x100]; // 0x5F8 int32[64]
    std::uint8_t m_nMapId0[0x100]; // 0x6F8 int32[64]
    std::uint8_t m_nMapId1[0x100]; // 0x7F8 int32[64]
    std::uint8_t m_nMapId2[0x100]; // 0x8F8 int32[64]
    std::uint8_t m_nMapId3[0x100]; // 0x9F8 int32[64]
    std::uint8_t m_nMapId4[0x100]; // 0xAF8 int32[64]
    std::uint8_t m_nMapId5[0x100]; // 0xBF8 int32[64]
    std::uint8_t m_nStartingSide0[0x100]; // 0xCF8 int32[64]
    std::uint8_t m_nCurrentPhase[0x4]; // 0xDF8 int32
    std::uint8_t m_nPhaseStartTick[0x4]; // 0xDFC int32
    std::uint8_t m_nPhaseDurationTicks[0x8]; // 0xE00 int32
    std::uint8_t m_OnMapVetoed[0x20]; // 0xE08 CEntityOutputTemplate<CUtlSymbolLarge>
    std::uint8_t m_OnMapPicked[0x20]; // 0xE28 CEntityOutputTemplate<CUtlSymbolLarge>
    std::uint8_t m_OnSidesPicked[0x20]; // 0xE48 CEntityOutputTemplate<int32>
    std::uint8_t m_OnNewPhaseStarted[0x20]; // 0xE68 CEntityOutputTemplate<int32>
    std::uint8_t m_OnLevelTransition[0x20]; // 0xE88 CEntityOutputTemplate<int32>
};

struct CFuncPropRespawnZone {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CFilterModel {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iFilterModel[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CWeaponP90 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CNavSpaceInfo {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CPhysSlideConstraint {
    static constexpr std::size_t size = 0x5D0;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t m_axisEnd[0xC]; // 0x510 VectorWS
    std::uint8_t m_slideFriction[0x4]; // 0x51C float32
    std::uint8_t m_systemLoadScale[0x4]; // 0x520 float32
    std::uint8_t m_initialOffset[0x4]; // 0x524 float32
    std::uint8_t m_bEnableLinearConstraint[0x1]; // 0x528 bool
    std::uint8_t m_bEnableAngularConstraint[0x3]; // 0x529 bool
    std::uint8_t m_flMotorFrequency[0x4]; // 0x52C float32
    std::uint8_t m_flMotorDampingRatio[0x4]; // 0x530 float32
    std::uint8_t m_bUseEntityPivot[0x4]; // 0x534 bool
    std::uint8_t m_soundInfo[0x98]; // 0x538 ConstraintSoundInfo
};

struct CPulseGameBlackboard {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_strGraphName[0x8]; // 0x4B0 CUtlString
    std::uint8_t m_strStateBlob[0x8]; // 0x4B8 CUtlString
};

struct CSoundEventEntityAlias_snd_event_point {
    static constexpr std::size_t size = 0x568;
    std::uint8_t pad_0[0x568]; // 0x0
};

struct CChoreoComponent {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
    std::uint8_t m_hOwner[0x4]; // 0x30 CHandle<CBaseModelEntity>
    std::uint8_t m_nExernalChoreoGraphCount[0x4]; // 0x34 int32
    std::uint8_t m_sActiveExternalChoreoGraphSlotID[0x38]; // 0x38 CGlobalSymbol
    std::uint8_t m_nNextSceneEventId[0x4]; // 0x70 SceneEventId_t
    std::uint8_t m_flAllowResponsesEndTime[0xC]; // 0x74 GameTime_t
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPointGamestatsCounter {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_strStatisticName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_bDisabled[0x8]; // 0x4B0 bool
};

struct CTextureBasedAnimatable {
    static constexpr std::size_t size = 0x888;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bLoop[0x4]; // 0x850 bool
    std::uint8_t m_flFPS[0x4]; // 0x854 float32
    std::uint8_t m_hPositionKeys[0x8]; // 0x858 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_hRotationKeys[0x8]; // 0x860 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_vAnimationBoundsMin[0xC]; // 0x868 Vector
    std::uint8_t m_vAnimationBoundsMax[0xC]; // 0x874 Vector
    std::uint8_t m_flStartTime[0x4]; // 0x880 float32
    std::uint8_t m_flStartFrame[0x4]; // 0x884 float32
};

struct CSprite {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_hSpriteMaterial[0x8]; // 0x850 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hAttachedToEntity[0x4]; // 0x858 CHandle<CBaseEntity>
    std::uint8_t m_nAttachment[0x4]; // 0x85C AttachmentHandle_t
    std::uint8_t m_flSpriteFramerate[0x4]; // 0x860 float32
    std::uint8_t m_flFrame[0x4]; // 0x864 float32
    std::uint8_t m_flDieTime[0x10]; // 0x868 GameTime_t
    std::uint8_t m_nBrightness[0x4]; // 0x878 uint32
    std::uint8_t m_flBrightnessDuration[0x4]; // 0x87C float32
    std::uint8_t m_flSpriteScale[0x4]; // 0x880 float32
    std::uint8_t m_flScaleDuration[0x4]; // 0x884 float32
    std::uint8_t m_bWorldSpaceScale[0x4]; // 0x888 bool
    std::uint8_t m_flGlowProxySize[0x4]; // 0x88C float32
    std::uint8_t m_flHDRColorScale[0x4]; // 0x890 float32
    std::uint8_t m_flLastTime[0x4]; // 0x894 GameTime_t
    std::uint8_t m_flMaxFrame[0x4]; // 0x898 float32
    std::uint8_t m_flStartScale[0x4]; // 0x89C float32
    std::uint8_t m_flDestScale[0x4]; // 0x8A0 float32
    std::uint8_t m_flScaleTimeStart[0x4]; // 0x8A4 GameTime_t
    std::uint8_t m_nStartBrightness[0x4]; // 0x8A8 int32
    std::uint8_t m_nDestBrightness[0x4]; // 0x8AC int32
    std::uint8_t m_flBrightnessTimeStart[0x4]; // 0x8B0 GameTime_t
    std::uint8_t m_nSpriteWidth[0x4]; // 0x8B4 int32
    std::uint8_t m_nSpriteHeight[0x4]; // 0x8B8 int32
    std::uint8_t m_flSpeed[0x4]; // 0x8BC float32
};

struct CDynamicLight {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_ActualFlags[0x1]; // 0x850 uint8
    std::uint8_t m_Flags[0x1]; // 0x851 uint8
    std::uint8_t m_LightStyle[0x1]; // 0x852 uint8
    std::uint8_t m_On[0x1]; // 0x853 bool
    std::uint8_t m_Radius[0x4]; // 0x854 float32
    std::uint8_t m_Exponent[0x4]; // 0x858 int32
    std::uint8_t m_InnerAngle[0x4]; // 0x85C float32
    std::uint8_t m_OuterAngle[0x4]; // 0x860 float32
    std::uint8_t m_SpotRadius[0x4]; // 0x864 float32
};

struct CWeaponTaser {
    static constexpr std::size_t size = 0x12B0;
    std::uint8_t pad_0[0x12A0]; // 0x0
    std::uint8_t m_fFireTime[0x4]; // 0x12A0 GameTime_t
    std::uint8_t m_nLastAttackTick[0xC]; // 0x12A4 int32
};

struct CEnvCubemapBox {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x590]; // 0x0
};

struct CRotDoor {
    static constexpr std::size_t size = 0xA60;
    std::uint8_t pad_0[0xA58]; // 0x0
    std::uint8_t m_bSolidBsp[0x8]; // 0xA58 bool
};

struct CPathMover {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_vecMovers[0x18]; // 0x600 CUtlVector<CHandle<CFuncMover>>
    std::uint8_t m_vecSpawners[0x18]; // 0x618 CUtlVector<CHandle<CPathMoverEntitySpawner>>
    std::uint8_t m_iszMoverSpawnerName[0x8]; // 0x630 CUtlSymbolLarge
    std::uint8_t m_hMoverRouter[0x8]; // 0x638 CHandle<CFuncMoverRouter>
    std::uint8_t m_iszMoverRouterName[0x8]; // 0x640 CUtlSymbolLarge
    std::uint8_t m_flSampleSpacing[0x8]; // 0x648 float32
};

struct CFuncVPhysicsClip {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x850 bool
};

struct CCSRadarElement {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_nElementType[0x4]; // 0x4C0 uint32
    std::uint8_t m_nElementColor[0x4]; // 0x4C4 uint32
    std::uint8_t m_nTeamFilter[0x8]; // 0x4C8 uint32
};

struct CPhysFixed {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_flLinearFrequency[0x4]; // 0x508 float32
    std::uint8_t m_flLinearDampingRatio[0x4]; // 0x50C float32
    std::uint8_t m_flAngularFrequency[0x4]; // 0x510 float32
    std::uint8_t m_flAngularDampingRatio[0x4]; // 0x514 float32
    std::uint8_t m_bEnableLinearConstraint[0x1]; // 0x518 bool
    std::uint8_t m_bEnableAngularConstraint[0x7]; // 0x519 bool
    std::uint8_t m_sBoneName1[0x8]; // 0x520 CUtlSymbolLarge
    std::uint8_t m_sBoneName2[0x8]; // 0x528 CUtlSymbolLarge
};

struct CLogicNavigation {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_isOn[0x4]; // 0x4B0 bool
    std::uint8_t m_navProperty[0x4]; // 0x4B4 navproperties_t
};

struct CPathSimple {
    static constexpr std::size_t size = 0x5B0;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_CPathQueryComponent[0xF0]; // 0x4B0 CPathQueryComponent
    std::uint8_t m_pathString[0x8]; // 0x5A0 CUtlString
    std::uint8_t m_bClosedLoop[0x8]; // 0x5A8 bool
};

struct CPathParticleRopeAlias_path_particle_rope_clientside {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x590]; // 0x0
};

struct CFuncElectrifiedVolume {
    static constexpr std::size_t size = 0x8A8;
    std::uint8_t pad_0[0x870]; // 0x0
    std::uint8_t m_EffectName[0x8]; // 0x870 CUtlSymbolLarge
    std::uint8_t m_EffectInterpenetrateName[0x8]; // 0x878 CUtlSymbolLarge
    std::uint8_t m_EffectZapName[0x8]; // 0x880 CUtlSymbolLarge
    std::uint8_t m_iszEffectSource[0x20]; // 0x888 CUtlSymbolLarge
};

struct CCSMinimapBoundary {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct EntitySpottedState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bSpotted[0x4]; // 0x8 bool
    std::uint8_t m_bSpottedByMask[0xC]; // 0xC uint32[2]
};

struct fogparams_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t dirPrimary[0xC]; // 0x8 Vector
    std::uint8_t colorPrimary[0x4]; // 0x14 Color
    std::uint8_t colorSecondary[0x4]; // 0x18 Color
    std::uint8_t colorPrimaryLerpTo[0x4]; // 0x1C Color
    std::uint8_t colorSecondaryLerpTo[0x4]; // 0x20 Color
    std::uint8_t start[0x4]; // 0x24 float32
    std::uint8_t end[0x4]; // 0x28 float32
    std::uint8_t farz[0x4]; // 0x2C float32
    std::uint8_t maxdensity[0x4]; // 0x30 float32
    std::uint8_t exponent[0x4]; // 0x34 float32
    std::uint8_t HDRColorScale[0x4]; // 0x38 float32
    std::uint8_t skyboxFogFactor[0x4]; // 0x3C float32
    std::uint8_t skyboxFogFactorLerpTo[0x4]; // 0x40 float32
    std::uint8_t startLerpTo[0x4]; // 0x44 float32
    std::uint8_t endLerpTo[0x4]; // 0x48 float32
    std::uint8_t maxdensityLerpTo[0x4]; // 0x4C float32
    std::uint8_t lerptime[0x4]; // 0x50 GameTime_t
    std::uint8_t duration[0x4]; // 0x54 float32
    std::uint8_t blendtobackground[0x4]; // 0x58 float32
    std::uint8_t scattering[0x4]; // 0x5C float32
    std::uint8_t locallightscale[0x4]; // 0x60 float32
    std::uint8_t enable[0x1]; // 0x64 bool
    std::uint8_t blend[0x1]; // 0x65 bool
    std::uint8_t m_bPadding2[0x1]; // 0x66 bool
    std::uint8_t m_bPadding[0x1]; // 0x67 bool
};

struct CSoundEventOBBEntity {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x568 Vector
    std::uint8_t m_vMaxs[0x1C]; // 0x574 Vector
};

struct CFlashbangProjectile {
    static constexpr std::size_t size = 0xB50;
    std::uint8_t pad_0[0xB40]; // 0x0
    std::uint8_t m_flTimeToDetonate[0x4]; // 0xB40 float32
    std::uint8_t m_numOpponentsHit[0x1]; // 0xB44 uint8
    std::uint8_t m_numTeammatesHit[0xB]; // 0xB45 uint8
};

struct CTriggerMultiple {
    static constexpr std::size_t size = 0x9E0;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_OnTrigger[0x18]; // 0x9C8 CEntityIOOutput
};

struct CPhysBallSocket {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_flJointFriction[0x4]; // 0x508 float32
    std::uint8_t m_bEnableSwingLimit[0x4]; // 0x50C bool
    std::uint8_t m_flSwingLimit[0x4]; // 0x510 float32
    std::uint8_t m_bEnableTwistLimit[0x4]; // 0x514 bool
    std::uint8_t m_flMinTwistAngle[0x4]; // 0x518 float32
    std::uint8_t m_flMaxTwistAngle[0x4]; // 0x51C float32
};

struct CDebugHistory {
    static constexpr std::size_t size = 0x3E9490;
    std::uint8_t pad_0[0x3E84E8]; // 0x0
    std::uint8_t m_nNpcEvents[0xFA8]; // 0x3E84E8 int32
};

struct CSoundOpvarSetPointBase {
    static constexpr std::size_t size = 0x550;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x4A8 bool
    std::uint8_t m_hSource[0x1C]; // 0x4AC CEntityHandle
    std::uint8_t m_iszSourceEntityName[0x58]; // 0x4C8 CUtlSymbolLarge
    std::uint8_t m_vLastPosition[0xC]; // 0x520 VectorWS
    std::uint8_t m_flRefreshTime[0x4]; // 0x52C float32
    std::uint8_t m_iszStackName[0x8]; // 0x530 CUtlSymbolLarge
    std::uint8_t m_iszOperatorName[0x8]; // 0x538 CUtlSymbolLarge
    std::uint8_t m_iszOpvarName[0x8]; // 0x540 CUtlSymbolLarge
    std::uint8_t m_iOpvarIndex[0x4]; // 0x548 int32
    std::uint8_t m_bUseAutoCompare[0x1]; // 0x54C bool
    std::uint8_t m_bFastRefresh[0x3]; // 0x54D bool
};

struct CExplosionTypeData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_SoundName[0x10]; // 0x0 CSoundEventName
    std::uint8_t m_ParticleEffect[0xE0]; // 0x10 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_bIsIncindiary[0x1]; // 0xF0 bool
    std::uint8_t m_bHasForces[0x7]; // 0xF1 bool
    std::uint8_t m_DecalType[0x8]; // 0xF8 CGlobalSymbol
};

struct CPathKeyFrame {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_Origin[0xC]; // 0x4A8 Vector
    std::uint8_t m_Angles[0xC]; // 0x4B4 QAngle
    std::uint8_t m_qAngle[0x10]; // 0x4C0 Quaternion
    std::uint8_t m_iNextKey[0x8]; // 0x4D0 CUtlSymbolLarge
    std::uint8_t m_flNextTime[0x4]; // 0x4D8 float32
    std::uint8_t m_pNextKey[0x4]; // 0x4DC CHandle<CPathKeyFrame>
    std::uint8_t m_pPrevKey[0x4]; // 0x4E0 CHandle<CPathKeyFrame>
    std::uint8_t m_flMoveSpeed[0xC]; // 0x4E4 float32
};

struct CWeaponCZ75a {
    static constexpr std::size_t size = 0x12B0;
    std::uint8_t pad_0[0x12A0]; // 0x0
    std::uint8_t m_bMagazineRemoved[0x10]; // 0x12A0 bool
};

struct CScriptTriggerPush {
    static constexpr std::size_t size = 0xA10;
    std::uint8_t pad_0[0xA00]; // 0x0
    std::uint8_t m_vExtent[0x10]; // 0xA00 Vector
};

struct CRevertSaved {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_loadTime[0x4]; // 0x850 float32
    std::uint8_t m_Duration[0x4]; // 0x854 float32
    std::uint8_t m_HoldTime[0x8]; // 0x858 float32
};

struct CTriggerBombReset {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
};

struct CTriggerHurt {
    static constexpr std::size_t size = 0xA50;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_flOriginalDamage[0x4]; // 0x9C8 float32
    std::uint8_t m_flDamage[0x4]; // 0x9CC float32
    std::uint8_t m_flDamageCap[0x4]; // 0x9D0 float32
    std::uint8_t m_flLastDmgTime[0x4]; // 0x9D4 GameTime_t
    std::uint8_t m_flForgivenessDelay[0x4]; // 0x9D8 float32
    std::uint8_t m_bitsDamageInflict[0x4]; // 0x9DC DamageTypes_t
    std::uint8_t m_damageModel[0x4]; // 0x9E0 int32
    std::uint8_t m_bNoDmgForce[0x4]; // 0x9E4 bool
    std::uint8_t m_vDamageForce[0xC]; // 0x9E8 Vector
    std::uint8_t m_thinkAlways[0x4]; // 0x9F4 bool
    std::uint8_t m_hurtThinkPeriod[0x8]; // 0x9F8 float32
    std::uint8_t m_OnHurt[0x18]; // 0xA00 CEntityIOOutput
    std::uint8_t m_OnHurtPlayer[0x18]; // 0xA18 CEntityIOOutput
    std::uint8_t m_hurtEntities[0x20]; // 0xA30 CUtlVector<CHandle<CBaseEntity>>
};

struct CCSPlayer_WeaponServices {
    static constexpr std::size_t size = 0x18B8;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_flNextAttack[0x4]; // 0xC0 GameTime_t
    std::uint8_t m_hSavedWeapon[0x4]; // 0xC4 CHandle<CBasePlayerWeapon>
    std::uint8_t m_nTimeToMelee[0x4]; // 0xC8 int32
    std::uint8_t m_nTimeToSecondary[0x4]; // 0xCC int32
    std::uint8_t m_nTimeToPrimary[0x4]; // 0xD0 int32
    std::uint8_t m_nTimeToSniperRifle[0x4]; // 0xD4 int32
    std::uint8_t m_bIsBeingGivenItem[0x1]; // 0xD8 bool
    std::uint8_t m_bIsPickingUpItemWithUse[0x1]; // 0xD9 bool
    std::uint8_t m_bPickedUpWeapon[0x1]; // 0xDA bool
    std::uint8_t m_bDisableAutoDeploy[0x1]; // 0xDB bool
    std::uint8_t m_bIsPickingUpGroundWeapon[0x17BC]; // 0xDC bool
    std::uint8_t m_networkAnimTiming[0x18]; // 0x1898 CNetworkUtlVectorBase<uint8>
    std::uint8_t m_bBlockInspectUntilNextGraphUpdate[0x8]; // 0x18B0 bool
};

struct CSkyCameraVolume {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4C0]; // 0x0
    std::uint8_t m_vBoxMins[0xC]; // 0x4C0 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x4CC Vector
    std::uint8_t m_hTarget[0x4]; // 0x4D8 CHandle<CSkyCameraVolumeTarget>
    std::uint8_t m_nPriority[0x4]; // 0x4DC int32
    std::uint8_t m_bIsEnabled[0x1]; // 0x4E0 bool
    std::uint8_t m_bSkyboxBlurEffect[0x3]; // 0x4E1 bool
    std::uint8_t m_vBlurOrigin[0xC]; // 0x4E4 Vector
    std::uint8_t m_bSkyboxReceivesWorldCsm[0x1]; // 0x4F0 bool
    std::uint8_t m_bWorldReceivesSkyboxCsm[0x1]; // 0x4F1 bool
    std::uint8_t m_bStartDisabled[0x6]; // 0x4F2 bool
    std::uint8_t m_iszTargetName[0x8]; // 0x4F8 CUtlSymbolLarge
};

struct CRetakeGameRules {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t m_nMatchSeed[0x4]; // 0x138 int32
    std::uint8_t m_bBlockersPresent[0x1]; // 0x13C bool
    std::uint8_t m_bRoundInProgress[0x3]; // 0x13D bool
    std::uint8_t m_iFirstSecondHalfRound[0x4]; // 0x140 int32
    std::uint8_t m_iBombSite[0x4]; // 0x144 int32
    std::uint8_t m_hBombPlanter[0xA8]; // 0x148 CHandle<CCSPlayerPawn>
};

struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x538]; // 0x0
};

struct CInfoInstructorHintBombTargetA {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CTeamplayRules {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0xD0]; // 0x0
};

struct CScriptTriggerHurt {
    static constexpr std::size_t size = 0xA60;
    std::uint8_t pad_0[0xA50]; // 0x0
    std::uint8_t m_vExtent[0x10]; // 0xA50 Vector
};

struct CCSCustomHudLayoutState {
    static constexpr std::size_t size = 0x198;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_playerSlot[0x4]; // 0x30 CPlayerSlot
    std::uint8_t m_bInputCaptureEnabled[0x4]; // 0x34 bool
    std::uint8_t m_vecHasClasses[0x60]; // 0x38 CNetworkUtlVectorBase<HUDPanelHasClass_t>
    std::uint8_t m_vecDialogVariableStrings[0x100]; // 0x98 CNetworkUtlVectorBase<HUDPanelDialogVariableString_t>
};

struct CCSGO_WingmanIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CWeaponMP9 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CTriggerDetectExplosion {
    static constexpr std::size_t size = 0xA08;
    std::uint8_t pad_0[0x9F0]; // 0x0
    std::uint8_t m_OnDetectedExplosion[0x18]; // 0x9F0 CEntityIOOutput
};

struct CFilterName {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iFilterName[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CPulseCell_ApplyDynamicAttributeString {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CSmokeGrenadeProjectile {
    static constexpr std::size_t size = 0x2E50;
    std::uint8_t pad_0[0xB68]; // 0x0
    std::uint8_t m_nSmokeEffectTickBegin[0x4]; // 0xB68 int32
    std::uint8_t m_bDidSmokeEffect[0x4]; // 0xB6C bool
    std::uint8_t m_nRandomSeed[0x4]; // 0xB70 int32
    std::uint8_t m_vSmokeColor[0xC]; // 0xB74 Vector
    std::uint8_t m_vSmokeDetonationPos[0x10]; // 0xB80 VectorWS
    std::uint8_t m_VoxelFrameData[0x18]; // 0xB90 CNetworkUtlVectorBase<uint8>
    std::uint8_t m_nVoxelFrameDataSize[0x4]; // 0xBA8 int32
    std::uint8_t m_nVoxelUpdate[0x4]; // 0xBAC int32
    std::uint8_t m_nSmokeLightProbeRegen[0x4]; // 0xBB0 uint8
    std::uint8_t m_flLastBounce[0x4]; // 0xBB4 GameTime_t
    std::uint8_t m_fllastSimulationTime[0x2288]; // 0xBB8 GameTime_t
    std::uint8_t m_bExplodeFromInferno[0x1]; // 0x2E40 bool
    std::uint8_t m_bDidGroundScorch[0xF]; // 0x2E41 bool
};

struct CBlood {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_vecSprayAngles[0xC]; // 0x4A8 QAngle
    std::uint8_t m_vecSprayDir[0xC]; // 0x4B4 Vector
    std::uint8_t m_flAmount[0x4]; // 0x4C0 float32
    std::uint8_t m_Color[0x4]; // 0x4C4 BloodType
};

struct CCSTeam {
    static constexpr std::size_t size = 0x820;
    std::uint8_t pad_0[0x560]; // 0x0
    std::uint8_t m_nLastRecievedShorthandedRoundBonus[0x4]; // 0x560 int32
    std::uint8_t m_nShorthandedRoundBonusStartRound[0x4]; // 0x564 int32
    std::uint8_t m_bSurrendered[0x1]; // 0x568 bool
    std::uint8_t m_szTeamMatchStat[0x203]; // 0x569 char[512]
    std::uint8_t m_numMapVictories[0x4]; // 0x76C int32
    std::uint8_t m_scoreFirstHalf[0x4]; // 0x770 int32
    std::uint8_t m_scoreSecondHalf[0x4]; // 0x774 int32
    std::uint8_t m_scoreOvertime[0x4]; // 0x778 int32
    std::uint8_t m_szClanTeamname[0x84]; // 0x77C char[129]
    std::uint8_t m_iClanID[0x4]; // 0x800 uint32
    std::uint8_t m_szTeamFlagImage[0x8]; // 0x804 char[8]
    std::uint8_t m_szTeamLogoImage[0x8]; // 0x80C char[8]
    std::uint8_t m_flNextResourceTime[0x4]; // 0x814 float32
    std::uint8_t m_iLastUpdateSentAt[0x8]; // 0x818 int32
};

struct CRulePointEntity {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_Score[0x8]; // 0x858 int32
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_PortName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nEditorNodeID[0x8]; // 0x10 PulseDocNodeID_t
    std::uint8_t m_RegisterMap[0x30]; // 0x18 PulseRegisterMap_t
    std::uint8_t m_CallMethodID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x4C PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x4]; // 0x50 int32
    std::uint8_t m_nBreakDestChunk[0x4]; // 0x54 PulseRuntimeChunkIndex_t
    std::uint8_t m_nBreakDestInstruction[0x8]; // 0x58 int32
};

struct CFuncMoveLinearAlias_momentary_door {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x958]; // 0x0
};

struct CBaseAnimGraph {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_graphControllerManager[0x98]; // 0x850 CAnimGraphControllerManager
    std::uint8_t m_pMainGraphController[0x8]; // 0x8E8 CAnimGraphControllerPtr
    std::uint8_t m_bInitiallyPopulateInterpHistory[0x8]; // 0x8F0 bool
    std::uint8_t m_OnLayerCycleUpdated[0x20]; // 0x8F8 CEntityOutputTemplate<float32>
    std::uint8_t m_OnExternalChoreoGraphChanged[0x18]; // 0x918 CEntityIOOutput
    std::uint8_t m_pChoreoServices[0x8]; // 0x930 IChoreoServices*
    std::uint8_t m_bAnimGraphUpdateEnabled[0x1]; // 0x938 bool
    std::uint8_t m_bAnimationUpdateScheduled[0x3]; // 0x939 bool
    std::uint8_t m_vecForce[0xC]; // 0x93C Vector
    std::uint8_t m_nForceBone[0x10]; // 0x948 int32
    std::uint8_t m_pRagdollControl[0x8]; // 0x958 IPhysicsRagdollControl*
    std::uint8_t m_RagdollPose[0x28]; // 0x960 PhysicsRagdollPose_t
    std::uint8_t m_bRagdollEnabled[0x1]; // 0x988 bool
    std::uint8_t m_bRagdollClientSide[0x1]; // 0x989 bool
    std::uint8_t m_bShouldUpdateTransformations[0x6]; // 0x98A bool
    std::uint8_t m_xParentedRagdollRootInEntitySpace[0xB0]; // 0x990 CTransform
};

struct CEnvCubemapFog {
    static constexpr std::size_t size = 0x5A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flEndDistance[0x4]; // 0x4A8 float32
    std::uint8_t m_flStartDistance[0x4]; // 0x4AC float32
    std::uint8_t m_flFogFalloffExponent[0x4]; // 0x4B0 float32
    std::uint8_t m_bHeightFogEnabled[0x4]; // 0x4B4 bool
    std::uint8_t m_flFogHeightWidth[0x4]; // 0x4B8 float32
    std::uint8_t m_flFogHeightEnd[0x4]; // 0x4BC float32
    std::uint8_t m_flFogHeightStart[0x4]; // 0x4C0 float32
    std::uint8_t m_flFogHeightExponent[0x4]; // 0x4C4 float32
    std::uint8_t m_flLODBias[0x4]; // 0x4C8 float32
    std::uint8_t m_bActive[0x1]; // 0x4CC bool
    std::uint8_t m_bStartDisabled[0x3]; // 0x4CD bool
    std::uint8_t m_flFogMaxOpacity[0x4]; // 0x4D0 float32
    std::uint8_t m_nCubemapSourceType[0x4]; // 0x4D4 int32
    std::uint8_t m_hSkyMaterial[0x8]; // 0x4D8 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_iszSkyEntity[0x8]; // 0x4E0 CUtlSymbolLarge
    std::uint8_t m_nHeightFogType[0x4]; // 0x4E8 int32
    std::uint8_t m_nFogHeightBlendMode[0x4]; // 0x4EC int32
    std::uint8_t m_nFogHeightCoordinateSpace[0x4]; // 0x4F0 int32
    std::uint8_t m_nDistanceFogType[0x4]; // 0x4F4 int32
    std::uint8_t m_DistanceFogCurveString[0x8]; // 0x4F8 CUtlSymbolLarge
    std::uint8_t m_HeightFogCurveString[0x98]; // 0x500 CUtlSymbolLarge
    std::uint8_t m_hFogCubemapTexture[0x8]; // 0x598 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_bHasHeightFogEnd[0x1]; // 0x5A0 bool
    std::uint8_t m_bFirstTime[0x7]; // 0x5A1 bool
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nFlowNodeID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_bAnd[0x4]; // 0x4C bool
    std::uint8_t m_PassOutflow[0x18]; // 0x50 PulseSelectorOutflowList_t
    std::uint8_t m_FailOutflow[0x48]; // 0x68 CPulse_OutflowConnection
};

struct CBaseDoor {
    static constexpr std::size_t size = 0xA58;
    std::uint8_t pad_0[0x8E0]; // 0x0
    std::uint8_t m_angMoveEntitySpace[0xC]; // 0x8E0 QAngle
    std::uint8_t m_vecMoveDirParentSpace[0xC]; // 0x8EC Vector
    std::uint8_t m_ls[0x20]; // 0x8F8 locksound_t
    std::uint8_t m_bForceClosed[0x1]; // 0x918 bool
    std::uint8_t m_bDoorGroup[0x1]; // 0x919 bool
    std::uint8_t m_bLocked[0x1]; // 0x91A bool
    std::uint8_t m_bIgnoreDebris[0x1]; // 0x91B bool
    std::uint8_t m_bNoNPCs[0x4]; // 0x91C bool
    std::uint8_t m_eSpawnPosition[0x4]; // 0x920 FuncDoorSpawnPos_t
    std::uint8_t m_flBlockDamage[0x4]; // 0x924 float32
    std::uint8_t m_NoiseMoving[0x8]; // 0x928 CGameSoundEventName
    std::uint8_t m_NoiseArrived[0x8]; // 0x930 CGameSoundEventName
    std::uint8_t m_NoiseMovingClosed[0x8]; // 0x938 CGameSoundEventName
    std::uint8_t m_NoiseArrivedClosed[0x8]; // 0x940 CGameSoundEventName
    std::uint8_t m_ChainTarget[0x8]; // 0x948 CUtlSymbolLarge
    std::uint8_t m_OnBlockedClosing[0x18]; // 0x950 CEntityIOOutput
    std::uint8_t m_OnBlockedOpening[0x18]; // 0x968 CEntityIOOutput
    std::uint8_t m_OnUnblockedClosing[0x18]; // 0x980 CEntityIOOutput
    std::uint8_t m_OnUnblockedOpening[0x18]; // 0x998 CEntityIOOutput
    std::uint8_t m_OnFullyClosed[0x18]; // 0x9B0 CEntityIOOutput
    std::uint8_t m_OnFullyOpen[0x18]; // 0x9C8 CEntityIOOutput
    std::uint8_t m_OnClose[0x18]; // 0x9E0 CEntityIOOutput
    std::uint8_t m_OnOpen[0x18]; // 0x9F8 CEntityIOOutput
    std::uint8_t m_OnLockedUse[0x18]; // 0xA10 CEntityIOOutput
    std::uint8_t m_bLoopMoveSound[0x20]; // 0xA28 bool
    std::uint8_t m_bCreateNavObstacle[0x4]; // 0xA48 bool
    std::uint8_t m_flSpeed[0x4]; // 0xA4C float32
    std::uint8_t m_isChaining[0x1]; // 0xA50 bool
    std::uint8_t m_bIsUsable[0x7]; // 0xA51 bool
};

struct CServerOnlyPointEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CGameMoney {
    static constexpr std::size_t size = 0x8A0;
    std::uint8_t pad_0[0x860]; // 0x0
    std::uint8_t m_OnMoneySpent[0x18]; // 0x860 CEntityIOOutput
    std::uint8_t m_OnMoneySpentFail[0x18]; // 0x878 CEntityIOOutput
    std::uint8_t m_nMoney[0x8]; // 0x890 int32
    std::uint8_t m_strAwardText[0x8]; // 0x898 CUtlString
};

struct CEnvHudHint {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszMessage[0x8]; // 0x4A8 CUtlSymbolLarge
};

struct CNullEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CLogicalEntity {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CItemDefuser {
    static constexpr std::size_t size = 0xB00;
    std::uint8_t pad_0[0xAE0]; // 0x0
    std::uint8_t m_entitySpottedState[0x18]; // 0xAE0 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x8]; // 0xAF8 int32
};

struct CItemGenericTriggerHelper {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_hParentItem[0x8]; // 0x850 CHandle<CItemGeneric>
};

struct CPlayer_WeaponServices {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_hMyWeapons[0x18]; // 0x48 CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    std::uint8_t m_hActiveWeapon[0x4]; // 0x60 CHandle<CBasePlayerWeapon>
    std::uint8_t m_hLastWeapon[0x4]; // 0x64 CHandle<CBasePlayerWeapon>
    std::uint8_t m_iAmmo[0x40]; // 0x68 uint16[32]
    std::uint8_t m_bPreventWeaponPickup[0x8]; // 0xA8 bool
};

struct CRagdollPropAttached {
    static constexpr std::size_t size = 0xC40;
    std::uint8_t pad_0[0xC00]; // 0x0
    std::uint8_t m_boneIndexAttached[0x4]; // 0xC00 uint32
    std::uint8_t m_ragdollAttachedObjectIndex[0x4]; // 0xC04 uint32
    std::uint8_t m_attachmentPointBoneSpace[0xC]; // 0xC08 Vector
    std::uint8_t m_attachmentPointRagdollSpace[0xC]; // 0xC14 Vector
    std::uint8_t m_bShouldDetach[0x10]; // 0xC20 bool
    std::uint8_t m_bShouldDeleteAttachedActivationRecord[0x10]; // 0xC30 bool
};

struct CItemDogtags {
    static constexpr std::size_t size = 0xAF0;
    std::uint8_t pad_0[0xAE0]; // 0x0
    std::uint8_t m_OwningPlayer[0x4]; // 0xAE0 CHandle<CCSPlayerPawn>
    std::uint8_t m_KillingPlayer[0xC]; // 0xAE4 CHandle<CCSPlayerPawn>
};

struct CFuncPlat {
    static constexpr std::size_t size = 0x908;
    std::uint8_t pad_0[0x8F8]; // 0x0
    std::uint8_t m_flSpeed[0x8]; // 0x8F8 float32
    std::uint8_t m_sNoise[0x8]; // 0x900 CUtlSymbolLarge
};

struct CBarnLight {
    static constexpr std::size_t size = 0xB38;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bEnabled[0x4]; // 0x850 bool
    std::uint8_t m_nColorMode[0x4]; // 0x854 int32
    std::uint8_t m_Color[0x4]; // 0x858 Color
    std::uint8_t m_flColorTemperature[0x4]; // 0x85C float32
    std::uint8_t m_flBrightness[0x4]; // 0x860 float32
    std::uint8_t m_flBrightnessScale[0x4]; // 0x864 float32
    std::uint8_t m_nDirectLight[0x4]; // 0x868 int32
    std::uint8_t m_nBakedShadowIndex[0x4]; // 0x86C int32
    std::uint8_t m_nLightPathUniqueId[0x4]; // 0x870 int32
    std::uint8_t m_nLightMapUniqueId[0x4]; // 0x874 int32
    std::uint8_t m_nLuminaireShape[0x4]; // 0x878 int32
    std::uint8_t m_flLuminaireSize[0x4]; // 0x87C float32
    std::uint8_t m_flLuminaireAnisotropy[0x8]; // 0x880 float32
    std::uint8_t m_LightStyleString[0x8]; // 0x888 CUtlString
    std::uint8_t m_flLightStyleStartTime[0x8]; // 0x890 GameTime_t
    std::uint8_t m_QueuedLightStyleStrings[0x18]; // 0x898 CNetworkUtlVectorBase<CUtlString>
    std::uint8_t m_LightStyleEvents[0x18]; // 0x8B0 CNetworkUtlVectorBase<CUtlString>
    std::uint8_t m_LightStyleTargets[0x18]; // 0x8C8 CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    std::uint8_t m_StyleEvent[0x80]; // 0x8E0 CEntityIOOutput[4]
    std::uint8_t m_hLightCookie[0x8]; // 0x960 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_flShape[0x4]; // 0x968 float32
    std::uint8_t m_flSoftX[0x4]; // 0x96C float32
    std::uint8_t m_flSoftY[0x4]; // 0x970 float32
    std::uint8_t m_flSkirt[0x4]; // 0x974 float32
    std::uint8_t m_flSkirtNear[0x4]; // 0x978 float32
    std::uint8_t m_vSizeParams[0xC]; // 0x97C Vector
    std::uint8_t m_flRange[0x4]; // 0x988 float32
    std::uint8_t m_vShear[0xC]; // 0x98C Vector
    std::uint8_t m_nBakeSpecularToCubemaps[0x4]; // 0x998 int32
    std::uint8_t m_vBakeSpecularToCubemapsSize[0xC]; // 0x99C Vector
    std::uint8_t m_flBakeSpecularToCubemapsScale[0x4]; // 0x9A8 float32
    std::uint8_t m_nCastShadows[0x4]; // 0x9AC int32
    std::uint8_t m_nShadowMapSize[0x4]; // 0x9B0 int32
    std::uint8_t m_nShadowPriority[0x4]; // 0x9B4 int32
    std::uint8_t m_bContactShadow[0x1]; // 0x9B8 bool
    std::uint8_t m_bForceShadowsEnabled[0x3]; // 0x9B9 bool
    std::uint8_t m_nBounceLight[0x4]; // 0x9BC int32
    std::uint8_t m_flBounceScale[0x4]; // 0x9C0 float32
    std::uint8_t m_flMinRoughness[0x4]; // 0x9C4 float32
    std::uint8_t m_vAlternateColor[0xC]; // 0x9C8 Vector
    std::uint8_t m_fAlternateColorBrightness[0x4]; // 0x9D4 float32
    std::uint8_t m_nFog[0x4]; // 0x9D8 int32
    std::uint8_t m_flFogStrength[0x4]; // 0x9DC float32
    std::uint8_t m_nFogShadows[0x4]; // 0x9E0 int32
    std::uint8_t m_flFogScale[0x4]; // 0x9E4 float32
    std::uint8_t m_flFadeSizeStart[0x4]; // 0x9E8 float32
    std::uint8_t m_flFadeSizeEnd[0x4]; // 0x9EC float32
    std::uint8_t m_flShadowFadeSizeStart[0x4]; // 0x9F0 float32
    std::uint8_t m_flShadowFadeSizeEnd[0x4]; // 0x9F4 float32
    std::uint8_t m_bPrecomputedFieldsValid[0x4]; // 0x9F8 bool
    std::uint8_t m_vPrecomputedBoundsMins[0xC]; // 0x9FC Vector
    std::uint8_t m_vPrecomputedBoundsMaxs[0xC]; // 0xA08 Vector
    std::uint8_t m_vPrecomputedOBBOrigin[0xC]; // 0xA14 Vector
    std::uint8_t m_vPrecomputedOBBAngles[0xC]; // 0xA20 QAngle
    std::uint8_t m_vPrecomputedOBBExtent[0xC]; // 0xA2C Vector
    std::uint8_t m_nPrecomputedSubFrusta[0x4]; // 0xA38 int32
    std::uint8_t m_vPrecomputedOBBOrigin0[0xC]; // 0xA3C Vector
    std::uint8_t m_vPrecomputedOBBAngles0[0xC]; // 0xA48 QAngle
    std::uint8_t m_vPrecomputedOBBExtent0[0xC]; // 0xA54 Vector
    std::uint8_t m_vPrecomputedOBBOrigin1[0xC]; // 0xA60 Vector
    std::uint8_t m_vPrecomputedOBBAngles1[0xC]; // 0xA6C QAngle
    std::uint8_t m_vPrecomputedOBBExtent1[0xC]; // 0xA78 Vector
    std::uint8_t m_vPrecomputedOBBOrigin2[0xC]; // 0xA84 Vector
    std::uint8_t m_vPrecomputedOBBAngles2[0xC]; // 0xA90 QAngle
    std::uint8_t m_vPrecomputedOBBExtent2[0xC]; // 0xA9C Vector
    std::uint8_t m_vPrecomputedOBBOrigin3[0xC]; // 0xAA8 Vector
    std::uint8_t m_vPrecomputedOBBAngles3[0xC]; // 0xAB4 QAngle
    std::uint8_t m_vPrecomputedOBBExtent3[0xC]; // 0xAC0 Vector
    std::uint8_t m_vPrecomputedOBBOrigin4[0xC]; // 0xACC Vector
    std::uint8_t m_vPrecomputedOBBAngles4[0xC]; // 0xAD8 QAngle
    std::uint8_t m_vPrecomputedOBBExtent4[0xC]; // 0xAE4 Vector
    std::uint8_t m_vPrecomputedOBBOrigin5[0xC]; // 0xAF0 Vector
    std::uint8_t m_vPrecomputedOBBAngles5[0xC]; // 0xAFC QAngle
    std::uint8_t m_vPrecomputedOBBExtent5[0xC]; // 0xB08 Vector
    std::uint8_t m_bPvsModifyEntity[0x1]; // 0xB14 bool
    std::uint8_t m_bTransmitAlways[0x3]; // 0xB15 bool
    std::uint8_t m_VisClusters[0x20]; // 0xB18 CNetworkUtlVectorBase<uint16>
};

struct CInstructorEventEntity {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iszName[0x8]; // 0x4A8 CUtlSymbolLarge
    std::uint8_t m_iszHintTargetEntity[0x8]; // 0x4B0 CUtlSymbolLarge
    std::uint8_t m_hTargetPlayer[0x8]; // 0x4B8 CHandle<CBasePlayerPawn>
};

struct CWeaponTec9 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CPathCorner {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bTriggerLocomotionStop[0x1]; // 0x4A8 bool
    std::uint8_t m_bSmoothArrival[0x1]; // 0x4A9 bool
    std::uint8_t m_bExactPositioning[0x2]; // 0x4AA bool
    std::uint8_t m_flWait[0x4]; // 0x4AC float32
    std::uint8_t m_flRadius[0x4]; // 0x4B0 float32
    std::uint8_t m_flWaypointSuccessRadiusWhenBlocked[0x4]; // 0x4B4 float32
    std::uint8_t m_flWaypointSuccessRadius[0x4]; // 0x4B8 float32
    std::uint8_t m_flPathEndDistanceFromGoal[0x4]; // 0x4BC float32
    std::uint8_t m_flSpeed[0x8]; // 0x4C0 float32
    std::uint8_t m_OnPass[0x18]; // 0x4C8 CEntityIOOutput
};

struct CTriggerSndSosOpvar {
    static constexpr std::size_t size = 0xD28;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_hTouchingPlayers[0x18]; // 0x9C8 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_flPosition[0xC]; // 0x9E0 VectorWS
    std::uint8_t m_flCenterSize[0x4]; // 0x9EC float32
    std::uint8_t m_flMinVal[0x4]; // 0x9F0 float32
    std::uint8_t m_flMaxVal[0x4]; // 0x9F4 float32
    std::uint8_t m_opvarName[0x8]; // 0x9F8 CUtlSymbolLarge
    std::uint8_t m_stackName[0x8]; // 0xA00 CUtlSymbolLarge
    std::uint8_t m_operatorName[0x8]; // 0xA08 CUtlSymbolLarge
    std::uint8_t m_bVolIs2D[0x1]; // 0xA10 bool
    std::uint8_t m_opvarNameChar[0x100]; // 0xA11 char[256]
    std::uint8_t m_stackNameChar[0x100]; // 0xB11 char[256]
    std::uint8_t m_operatorNameChar[0x103]; // 0xC11 char[256]
    std::uint8_t m_VecNormPos[0xC]; // 0xD14 Vector
    std::uint8_t m_flNormCenterSize[0x8]; // 0xD20 float32
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nLimitCount[0x8]; // 0x48 int32
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0xD8 PulseSymbol_t
    std::uint8_t m_nBlackboardIndex[0x8]; // 0xE8 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_ExpectedArgs[0x10]; // 0xF0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_nAsyncCallMode[0x8]; // 0x100 PulseMethodCallMode_t
    std::uint8_t m_OnFinished[0x48]; // 0x108 CPulse_ResumePoint
};

struct CPointCommentaryNode {
    static constexpr std::size_t size = 0xB20;
    std::uint8_t pad_0[0xA40]; // 0x0
    std::uint8_t m_iszPreCommands[0x8]; // 0xA40 CUtlSymbolLarge
    std::uint8_t m_iszPostCommands[0x8]; // 0xA48 CUtlSymbolLarge
    std::uint8_t m_iszCommentaryFile[0x8]; // 0xA50 CUtlSymbolLarge
    std::uint8_t m_iszViewTarget[0x8]; // 0xA58 CUtlSymbolLarge
    std::uint8_t m_hViewTarget[0x4]; // 0xA60 CHandle<CBaseEntity>
    std::uint8_t m_hViewTargetAngles[0x4]; // 0xA64 CHandle<CBaseEntity>
    std::uint8_t m_iszViewPosition[0x8]; // 0xA68 CUtlSymbolLarge
    std::uint8_t m_hViewPosition[0x4]; // 0xA70 CHandle<CBaseEntity>
    std::uint8_t m_hViewPositionMover[0x4]; // 0xA74 CHandle<CBaseEntity>
    std::uint8_t m_bPreventMovement[0x1]; // 0xA78 bool
    std::uint8_t m_bUnderCrosshair[0x1]; // 0xA79 bool
    std::uint8_t m_bUnstoppable[0x2]; // 0xA7A bool
    std::uint8_t m_flFinishedTime[0x4]; // 0xA7C GameTime_t
    std::uint8_t m_vecFinishOrigin[0xC]; // 0xA80 VectorWS
    std::uint8_t m_vecOriginalAngles[0xC]; // 0xA8C QAngle
    std::uint8_t m_vecFinishAngles[0xC]; // 0xA98 QAngle
    std::uint8_t m_bPreventChangesWhileMoving[0x1]; // 0xAA4 bool
    std::uint8_t m_bDisabled[0x3]; // 0xAA5 bool
    std::uint8_t m_vecTeleportOrigin[0xC]; // 0xAA8 VectorWS
    std::uint8_t m_flAbortedPlaybackAt[0x4]; // 0xAB4 GameTime_t
    std::uint8_t m_pOnCommentaryStarted[0x18]; // 0xAB8 CEntityIOOutput
    std::uint8_t m_pOnCommentaryStopped[0x18]; // 0xAD0 CEntityIOOutput
    std::uint8_t m_bActive[0x4]; // 0xAE8 bool
    std::uint8_t m_flStartTime[0x4]; // 0xAEC GameTime_t
    std::uint8_t m_flStartTimeInCommentary[0x8]; // 0xAF0 float32
    std::uint8_t m_iszTitle[0x8]; // 0xAF8 CUtlSymbolLarge
    std::uint8_t m_iszSpeakers[0x8]; // 0xB00 CUtlSymbolLarge
    std::uint8_t m_iNodeNumber[0x4]; // 0xB08 int32
    std::uint8_t m_iNodeNumberMax[0x4]; // 0xB0C int32
    std::uint8_t m_bListenedTo[0x10]; // 0xB10 bool
};

struct CMomentaryRotButton {
    static constexpr std::size_t size = 0xA88;
    std::uint8_t pad_0[0x9D0]; // 0x0
    std::uint8_t m_Position[0x20]; // 0x9D0 CEntityOutputTemplate<float32>
    std::uint8_t m_OnUnpressed[0x18]; // 0x9F0 CEntityIOOutput
    std::uint8_t m_OnFullyOpen[0x18]; // 0xA08 CEntityIOOutput
    std::uint8_t m_OnFullyClosed[0x18]; // 0xA20 CEntityIOOutput
    std::uint8_t m_OnReachedPosition[0x18]; // 0xA38 CEntityIOOutput
    std::uint8_t m_lastUsed[0x4]; // 0xA50 int32
    std::uint8_t m_start[0xC]; // 0xA54 QAngle
    std::uint8_t m_end[0xC]; // 0xA60 QAngle
    std::uint8_t m_IdealYaw[0x4]; // 0xA6C float32
    std::uint8_t m_sNoise[0x8]; // 0xA70 CUtlSymbolLarge
    std::uint8_t m_bUpdateTarget[0x4]; // 0xA78 bool
    std::uint8_t m_direction[0x4]; // 0xA7C int32
    std::uint8_t m_returnSpeed[0x4]; // 0xA80 float32
    std::uint8_t m_flStartPosition[0x4]; // 0xA84 float32
};

struct CSceneListManager {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hListManagers[0x18]; // 0x4A8 CUtlVector<CHandle<CSceneListManager>>
    std::uint8_t m_iszScenes[0x80]; // 0x4C0 CUtlSymbolLarge[16]
    std::uint8_t m_hScenes[0x40]; // 0x540 CHandle<CBaseEntity>[16]
};

struct CEnvTilt {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_Duration[0x4]; // 0x4A8 float32
    std::uint8_t m_Radius[0x4]; // 0x4AC float32
    std::uint8_t m_TiltTime[0x4]; // 0x4B0 float32
    std::uint8_t m_stopTime[0x4]; // 0x4B4 GameTime_t
};

struct CEnvSoundscapeTriggerable {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x538]; // 0x0
};

struct CFuncMover {
    static constexpr std::size_t size = 0xB40;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_iszPathName[0x8]; // 0x850 CUtlSymbolLarge
    std::uint8_t m_hPathMover[0x4]; // 0x858 CHandle<CPathMover>
    std::uint8_t m_hPrevPathMover[0x4]; // 0x85C CHandle<CPathMover>
    std::uint8_t m_iszPathNodeStart[0x8]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_iszPathNodeEnd[0x8]; // 0x868 CUtlSymbolLarge
    std::uint8_t m_bIgnoreEndNode[0x4]; // 0x870 bool
    std::uint8_t m_eMoveType[0x4]; // 0x874 CFuncMover::Move_t
    std::uint8_t m_bIsReversing[0x4]; // 0x878 bool
    std::uint8_t m_flStartSpeed[0x4]; // 0x87C float32
    std::uint8_t m_flPathLocation[0x4]; // 0x880 float32
    std::uint8_t m_flT[0x4]; // 0x884 float32
    std::uint8_t m_nCurrentNodeIndex[0x4]; // 0x888 int32
    std::uint8_t m_nPreviousNodeIndex[0x4]; // 0x88C int32
    std::uint8_t m_eSolidType[0x1]; // 0x890 SolidType_t
    std::uint8_t m_bIsMoving[0x3]; // 0x891 bool
    std::uint8_t m_flTimeToReachMaxSpeed[0x4]; // 0x894 float32
    std::uint8_t m_flDistanceToReachMaxSpeed[0x4]; // 0x898 float32
    std::uint8_t m_flTimeToReachZeroSpeed[0x4]; // 0x89C float32
    std::uint8_t m_flComputedDistanceToReachMaxSpeed[0x4]; // 0x8A0 float32
    std::uint8_t m_flComputedDistanceToReachZeroSpeed[0x4]; // 0x8A4 float32
    std::uint8_t m_flStartCurveScale[0x4]; // 0x8A8 float32
    std::uint8_t m_flStopCurveScale[0x4]; // 0x8AC float32
    std::uint8_t m_flDistanceToReachZeroSpeed[0x4]; // 0x8B0 float32
    std::uint8_t m_flTimeMovementStart[0x4]; // 0x8B4 GameTime_t
    std::uint8_t m_flTimeMovementStop[0x4]; // 0x8B8 GameTime_t
    std::uint8_t m_hStopAtNode[0x4]; // 0x8BC CHandle<CMoverPathNode>
    std::uint8_t m_flPathLocationToBeginStop[0x4]; // 0x8C0 float32
    std::uint8_t m_flPathLocationStart[0x4]; // 0x8C4 float32
    std::uint8_t m_flBeginStopT[0x8]; // 0x8C8 float32
    std::uint8_t m_iszStartForwardSound[0x8]; // 0x8D0 CGameSoundEventName
    std::uint8_t m_iszLoopForwardSound[0x8]; // 0x8D8 CGameSoundEventName
    std::uint8_t m_iszStopForwardSound[0x8]; // 0x8E0 CGameSoundEventName
    std::uint8_t m_iszStartReverseSound[0x8]; // 0x8E8 CGameSoundEventName
    std::uint8_t m_iszLoopReverseSound[0x8]; // 0x8F0 CGameSoundEventName
    std::uint8_t m_iszStopReverseSound[0x8]; // 0x8F8 CGameSoundEventName
    std::uint8_t m_iszArriveAtDestinationSound[0x20]; // 0x900 CGameSoundEventName
    std::uint8_t m_OnMovementEnd[0x18]; // 0x920 CEntityIOOutput
    std::uint8_t m_bStartAtClosestPoint[0x1]; // 0x938 bool
    std::uint8_t m_bStartAtEnd[0x1]; // 0x939 bool
    std::uint8_t m_bStartFollowingClosestMover[0x2]; // 0x93A bool
    std::uint8_t m_flStartFollowingClosestMoverWhenWithinDistance[0x4]; // 0x93C float32
    std::uint8_t m_flStartFollowingClosestMoverWhenOutsideDistance[0x4]; // 0x940 float32
    std::uint8_t m_eOrientationUpdate[0x4]; // 0x944 CFuncMover::OrientationUpdate_t
    std::uint8_t m_flTimeStartOrientationChange[0x4]; // 0x948 GameTime_t
    std::uint8_t m_flTimeToBlendToNewOrientation[0x4]; // 0x94C float32
    std::uint8_t m_flDurationBlendToNewOrientationRan[0x4]; // 0x950 float32
    std::uint8_t m_bCreateMovableNavMesh[0x1]; // 0x954 bool
    std::uint8_t m_bCreateMovableSurfaceGraph[0x1]; // 0x955 bool
    std::uint8_t m_bAllowMovableNavMeshDockingOnEntireEntity[0x2]; // 0x956 bool
    std::uint8_t m_OnNodePassed[0x20]; // 0x958 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_iszOrientationMatchEntityName[0x8]; // 0x978 CUtlSymbolLarge
    std::uint8_t m_hOrientationMatchEntity[0x4]; // 0x980 CHandle<CBaseEntity>
    std::uint8_t m_vLerpToNewPosStartWS[0xC]; // 0x984 VectorWS
    std::uint8_t m_flLerpToPositionTargetT[0x4]; // 0x990 float32
    std::uint8_t m_flLerpToPositionT[0x4]; // 0x994 float32
    std::uint8_t m_flLerpToPositionDeltaT[0x4]; // 0x998 float32
    std::uint8_t m_hTransitionSourcePath[0x4]; // 0x99C CHandle<CPathMover>
    std::uint8_t m_flTransitionSourceT[0x4]; // 0x9A0 float32
    std::uint8_t m_flTransitionSourcePathLocation[0x4]; // 0x9A4 float32
    std::uint8_t m_iszTransitionSourcePathNodeStart[0x8]; // 0x9A8 CUtlSymbolLarge
    std::uint8_t m_bStoppedDuringTransition[0x8]; // 0x9B0 bool
    std::uint8_t m_OnLerpToPositionComplete[0x18]; // 0x9B8 CEntityIOOutput
    std::uint8_t m_bIsPaused[0x4]; // 0x9D0 bool
    std::uint8_t m_eTransitionedToPathNodeAction[0xC]; // 0x9D4 CFuncMover::TransitionToPathNodeAction_t
    std::uint8_t m_qTransitionSourceOrientation[0x10]; // 0x9E0 Quaternion
    std::uint8_t m_nDelayedTeleportToNode[0x4]; // 0x9F0 int32
    std::uint8_t m_bIsImGuiLogging[0x1]; // 0x9F4 bool
    std::uint8_t m_bIsImGuiEntTextLogging[0x3]; // 0x9F5 bool
    std::uint8_t m_flSpeed[0x4]; // 0x9F8 float32
    std::uint8_t m_hFollowEntity[0x4]; // 0x9FC CHandle<CBaseEntity>
    std::uint8_t m_flFollowDistance[0x4]; // 0xA00 float32
    std::uint8_t m_flFollowMinimumSpeed[0x4]; // 0xA04 float32
    std::uint8_t m_flCurFollowEntityT[0x4]; // 0xA08 float32
    std::uint8_t m_flCurFollowSpeed[0x4]; // 0xA0C float32
    std::uint8_t m_strOrientationFaceEntityName[0x8]; // 0xA10 CUtlSymbolLarge
    std::uint8_t m_hOrientationFaceEntity[0x8]; // 0xA18 CHandle<CBaseEntity>
    std::uint8_t m_OnStart[0x18]; // 0xA20 CEntityIOOutput
    std::uint8_t m_OnStartForward[0x18]; // 0xA38 CEntityIOOutput
    std::uint8_t m_OnStartReverse[0x18]; // 0xA50 CEntityIOOutput
    std::uint8_t m_OnStop[0x18]; // 0xA68 CEntityIOOutput
    std::uint8_t m_OnStopped[0x18]; // 0xA80 CEntityIOOutput
    std::uint8_t m_bNextNodeReturnsCurrent[0x1]; // 0xA98 bool
    std::uint8_t m_bStartedMoving[0x1F]; // 0xA99 bool
    std::uint8_t m_eFollowEntityDirection[0x4]; // 0xAB8 CFuncMover::FollowEntityDirection_t
    std::uint8_t m_hFollowMover[0x4]; // 0xABC CHandle<CFuncMover>
    std::uint8_t m_iszFollowEntityName[0x8]; // 0xAC0 CUtlSymbolLarge
    std::uint8_t m_iszFollowMoverEntityName[0x8]; // 0xAC8 CUtlSymbolLarge
    std::uint8_t m_flFollowMoverDistance[0x4]; // 0xAD0 float32
    std::uint8_t m_flFollowMoverRatio[0x4]; // 0xAD4 float32
    std::uint8_t m_flFollowMoverCalculatedDistance[0x4]; // 0xAD8 float32
    std::uint8_t m_flFollowMoverSpringStrength[0x4]; // 0xADC float32
    std::uint8_t m_nFollowMoverConstraintPriority[0x4]; // 0xAE0 int32
    std::uint8_t m_vecFollowMoverCouplerRange[0x8]; // 0xAE4 Vector2D
    std::uint8_t m_bFollowConstraintsInitialized[0x4]; // 0xAEC bool
    std::uint8_t m_eFollowConstraint[0x4]; // 0xAF0 CFuncMover::FollowConstraint_t
    std::uint8_t m_flFollowMoverSpeed[0x4]; // 0xAF4 float32
    std::uint8_t m_flFollowMoverVelocity[0x4]; // 0xAF8 float32
    std::uint8_t m_nTickMovementRan[0x4]; // 0xAFC GameTick_t
    std::uint8_t m_movementSummary[0x20]; // 0xB00 FuncMoverMovementSummary_t
    std::uint8_t m_bStopFromBeginStopTarget[0x1]; // 0xB20 bool
    std::uint8_t m_bQueueStop[0x1]; // 0xB21 bool
    std::uint8_t m_bQueueStopMoving[0x1]; // 0xB22 bool
    std::uint8_t m_bQueueSetupPathMover[0x1]; // 0xB23 bool
    std::uint8_t m_ePathRebuildStrategy[0x4]; // 0xB24 CFuncMover::PathRebuildStrategy_t
    std::uint8_t m_eFindFollowMoverStrategy[0x4]; // 0xB28 CFuncMover::FindFollowMoverStrategy_t
    std::uint8_t m_bDisableDecelerationToStop[0x4]; // 0xB2C bool
    std::uint8_t m_vOffsetFromPath[0x10]; // 0xB30 Vector
};

struct CPhysicsProp {
    static constexpr std::size_t size = 0xD10;
    std::uint8_t pad_0[0xBE0]; // 0x0
    std::uint8_t m_MotionEnabled[0x18]; // 0xBE0 CEntityIOOutput
    std::uint8_t m_OnAwakened[0x18]; // 0xBF8 CEntityIOOutput
    std::uint8_t m_OnAwake[0x18]; // 0xC10 CEntityIOOutput
    std::uint8_t m_OnAsleep[0x18]; // 0xC28 CEntityIOOutput
    std::uint8_t m_OnPlayerUse[0x18]; // 0xC40 CEntityIOOutput
    std::uint8_t m_OnOutOfWorld[0x18]; // 0xC58 CEntityIOOutput
    std::uint8_t m_OnPlayerPickup[0x18]; // 0xC70 CEntityIOOutput
    std::uint8_t m_bForceNavIgnore[0x1]; // 0xC88 bool
    std::uint8_t m_bNoNavmeshBlocker[0x1]; // 0xC89 bool
    std::uint8_t m_bForceNpcExclude[0x2]; // 0xC8A bool
    std::uint8_t m_massScale[0x4]; // 0xC8C float32
    std::uint8_t m_buoyancyScale[0x4]; // 0xC90 float32
    std::uint8_t m_damageType[0x4]; // 0xC94 int32
    std::uint8_t m_damageToEnableMotion[0x4]; // 0xC98 int32
    std::uint8_t m_flForceToEnableMotion[0x4]; // 0xC9C float32
    std::uint8_t m_bDroppedByPlayer[0x1]; // 0xCA0 bool
    std::uint8_t m_bTouchedByPlayer[0x1]; // 0xCA1 bool
    std::uint8_t m_bFirstCollisionAfterLaunch[0x1]; // 0xCA2 bool
    std::uint8_t m_bHasBeenAwakened[0x1]; // 0xCA3 bool
    std::uint8_t m_bIsOverrideProp[0x4]; // 0xCA4 bool
    std::uint8_t m_flLastBurn[0x4]; // 0xCA8 GameTime_t
    std::uint8_t m_nDynamicContinuousContactBehavior[0x4]; // 0xCAC DynamicContinuousContactBehavior_t
    std::uint8_t m_fNextCheckDisableMotionContactsTime[0x4]; // 0xCB0 GameTime_t
    std::uint8_t m_iInitialGlowState[0x4]; // 0xCB4 int32
    std::uint8_t m_nGlowRange[0x4]; // 0xCB8 int32
    std::uint8_t m_nGlowRangeMin[0x4]; // 0xCBC int32
    std::uint8_t m_glowColor[0x4]; // 0xCC0 Color
    std::uint8_t m_bShouldAutoConvertBackFromDebris[0x1]; // 0xCC4 bool
    std::uint8_t m_bMuteImpactEffects[0x3]; // 0xCC5 bool
    std::uint8_t m_nNavObstacleType[0x4]; // 0xCC8 INavObstacle::NavObstacleType_t
    std::uint8_t m_bUpdateNavWhenMoving[0x1]; // 0xCCC bool
    std::uint8_t m_bForceNavObstacleCut[0x1]; // 0xCCD bool
    std::uint8_t m_bAcceptDamageFromHeldObjects[0x1]; // 0xCCE bool
    std::uint8_t m_bEnableUseOutput[0x1]; // 0xCCF bool
    std::uint8_t m_CrateType[0x8]; // 0xCD0 CPhysicsProp::CrateType_t
    std::uint8_t m_strItemClass[0x20]; // 0xCD8 CUtlSymbolLarge[4]
    std::uint8_t m_nItemCount[0x10]; // 0xCF8 int32[4]
    std::uint8_t m_bRemovableForAmmoBalancing[0x1]; // 0xD08 bool
    std::uint8_t m_bAwake[0x1]; // 0xD09 bool
    std::uint8_t m_bAttachedToReferenceFrame[0x6]; // 0xD0A bool
};

struct CFuncNavObstruction {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x868 bool
    std::uint8_t m_bUseAsyncObstacleUpdate[0x7]; // 0x869 bool
};

struct CPhysWheelConstraint {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t m_flSuspensionFrequency[0x4]; // 0x508 float32
    std::uint8_t m_flSuspensionDampingRatio[0x4]; // 0x50C float32
    std::uint8_t m_flSuspensionHeightOffset[0x4]; // 0x510 float32
    std::uint8_t m_bEnableSuspensionLimit[0x4]; // 0x514 bool
    std::uint8_t m_flMinSuspensionOffset[0x4]; // 0x518 float32
    std::uint8_t m_flMaxSuspensionOffset[0x4]; // 0x51C float32
    std::uint8_t m_bEnableSteeringLimit[0x4]; // 0x520 bool
    std::uint8_t m_flMinSteeringAngle[0x4]; // 0x524 float32
    std::uint8_t m_flMaxSteeringAngle[0x4]; // 0x528 float32
    std::uint8_t m_flSteeringAxisFriction[0x4]; // 0x52C float32
    std::uint8_t m_flSpinAxisFriction[0x4]; // 0x530 float32
    std::uint8_t m_hSteeringMimicsEntity[0xC]; // 0x534 CHandle<CBaseEntity>
};

struct CSkyboxReference {
    static constexpr std::size_t size = 0x4B0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_worldGroupId[0x4]; // 0x4A8 WorldGroupId_t
    std::uint8_t m_hSkyCamera[0x4]; // 0x4AC CHandle<CSkyCamera>
};

struct CPointPulse {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CMolotovProjectile {
    static constexpr std::size_t size = 0xC40;
    std::uint8_t pad_0[0xB40]; // 0x0
    std::uint8_t m_bIsIncGrenade[0x18]; // 0xB40 bool
    std::uint8_t m_bDetonated[0x8]; // 0xB58 bool
    std::uint8_t m_stillTimer[0xE0]; // 0xB60 IntervalTimer
};

struct CFilterClass {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iFilterClass[0x8]; // 0x4E0 CUtlSymbolLarge
};

struct CPathWithDynamicNodes {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x5B0]; // 0x0
    std::uint8_t m_vecPathNodes[0x20]; // 0x5B0 CNetworkUtlVectorBase<CHandle<CPathNode>>
    std::uint8_t m_xInitialPathWorldToLocal[0x20]; // 0x5D0 CTransform
    std::uint8_t m_eDesiredDirection[0x4]; // 0x5F0 DirectionAlongSimplePath_t
    std::uint8_t m_bIgnoreParentRotation[0xC]; // 0x5F4 bool
};

struct CColorCorrection {
    static constexpr std::size_t size = 0x6E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flFadeInDuration[0x4]; // 0x4A8 float32
    std::uint8_t m_flFadeOutDuration[0x4]; // 0x4AC float32
    std::uint8_t m_flStartFadeInWeight[0x4]; // 0x4B0 float32
    std::uint8_t m_flStartFadeOutWeight[0x4]; // 0x4B4 float32
    std::uint8_t m_flTimeStartFadeIn[0x4]; // 0x4B8 GameTime_t
    std::uint8_t m_flTimeStartFadeOut[0x4]; // 0x4BC GameTime_t
    std::uint8_t m_flMaxWeight[0x4]; // 0x4C0 float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x4C4 bool
    std::uint8_t m_bEnabled[0x1]; // 0x4C5 bool
    std::uint8_t m_bMaster[0x1]; // 0x4C6 bool
    std::uint8_t m_bClientSide[0x1]; // 0x4C7 bool
    std::uint8_t m_bExclusive[0x4]; // 0x4C8 bool
    std::uint8_t m_MinFalloff[0x4]; // 0x4CC float32
    std::uint8_t m_MaxFalloff[0x4]; // 0x4D0 float32
    std::uint8_t m_flCurWeight[0x4]; // 0x4D4 float32
    std::uint8_t m_netlookupFilename[0x200]; // 0x4D8 char[512]
    std::uint8_t m_lookupFilename[0x8]; // 0x6D8 CUtlSymbolLarge
};

struct CPropDoorRotatingBreakable {
    static constexpr std::size_t size = 0xF50;
    std::uint8_t pad_0[0xF30]; // 0x0
    std::uint8_t m_bBreakable[0x1]; // 0xF30 bool
    std::uint8_t m_isAbleToCloseAreaPortals[0x3]; // 0xF31 bool
    std::uint8_t m_currentDamageState[0x4]; // 0xF34 int32
    std::uint8_t m_damageStates[0x18]; // 0xF38 CUtlVector<CUtlSymbolLarge>
};

struct CLightDirectionalEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CBaseClientUIEntity {
    static constexpr std::size_t size = 0x9B0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_bEnabled[0x8]; // 0x850 bool
    std::uint8_t m_DialogXMLName[0x8]; // 0x858 CUtlSymbolLarge
    std::uint8_t m_PanelClassName[0x8]; // 0x860 CUtlSymbolLarge
    std::uint8_t m_PanelID[0x8]; // 0x868 CUtlSymbolLarge
    std::uint8_t m_CustomOutput0[0x20]; // 0x870 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput1[0x20]; // 0x890 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput2[0x20]; // 0x8B0 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput3[0x20]; // 0x8D0 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput4[0x20]; // 0x8F0 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput5[0x20]; // 0x910 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput6[0x20]; // 0x930 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput7[0x20]; // 0x950 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput8[0x20]; // 0x970 CEntityOutputTemplate<CUtlString>
    std::uint8_t m_CustomOutput9[0x20]; // 0x990 CEntityOutputTemplate<CUtlString>
};

struct CBreakable {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_CPropDataComponent[0x40]; // 0x858 CPropDataComponent
    std::uint8_t m_Material[0x4]; // 0x898 Materials
    std::uint8_t m_hBreaker[0x4]; // 0x89C CHandle<CBaseEntity>
    std::uint8_t m_Explosion[0x8]; // 0x8A0 Explosions
    std::uint8_t m_iszSpawnObject[0x8]; // 0x8A8 CUtlSymbolLarge
    std::uint8_t m_flPressureDelay[0x4]; // 0x8B0 float32
    std::uint8_t m_iMinHealthDmg[0x4]; // 0x8B4 int32
    std::uint8_t m_iszPropData[0x8]; // 0x8B8 CUtlSymbolLarge
    std::uint8_t m_impactEnergyScale[0x4]; // 0x8C0 float32
    std::uint8_t m_nOverrideBlockLOS[0x4]; // 0x8C4 EOverrideBlockLOS_t
    std::uint8_t m_OnStartDeath[0x18]; // 0x8C8 CEntityIOOutput
    std::uint8_t m_OnBreak[0x18]; // 0x8E0 CEntityIOOutput
    std::uint8_t m_OnHealthChanged[0x20]; // 0x8F8 CEntityOutputTemplate<float32>
    std::uint8_t m_PerformanceMode[0x4]; // 0x918 PerformanceMode_t
    std::uint8_t m_hPhysicsAttacker[0x4]; // 0x91C CHandle<CBasePlayerPawn>
    std::uint8_t m_flLastPhysicsInfluenceTime[0x8]; // 0x920 GameTime_t
};

struct CInfoLandmark {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CBaseFilter {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bNegated[0x8]; // 0x4A8 bool
    std::uint8_t m_OnPass[0x18]; // 0x4B0 CEntityIOOutput
    std::uint8_t m_OnFail[0x18]; // 0x4C8 CEntityIOOutput
};

struct WeaponPurchaseTracker_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_weaponPurchases[0x68]; // 0x8 CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
};

struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_sceneInstance[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_mainActor[0x4]; // 0x4 CHandle<CBaseEntity>
    std::uint8_t m_cursorIDToEventID[0x20]; // 0x8 CUtlHashtable<PulseCursorID_t,int32>
};

struct CMapInfo {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_iBuyingStatus[0x4]; // 0x4A8 int32
    std::uint8_t m_flBombRadius[0x4]; // 0x4AC float32
    std::uint8_t m_iPetPopulation[0x4]; // 0x4B0 int32
    std::uint8_t m_bUseNormalSpawnsForDM[0x1]; // 0x4B4 bool
    std::uint8_t m_bDisableAutoGeneratedDMSpawns[0x3]; // 0x4B5 bool
    std::uint8_t m_flBotMaxVisionDistance[0x4]; // 0x4B8 float32
    std::uint8_t m_iHostageCount[0x4]; // 0x4BC int32
    std::uint8_t m_bFadePlayerVisibilityFarZ[0x1]; // 0x4C0 bool
    std::uint8_t m_bRainTraceToSkyEnabled[0x1]; // 0x4C1 bool
    std::uint8_t m_bGPUCullSkybox[0x2]; // 0x4C2 bool
    std::uint8_t m_flEnvRainStrength[0x4]; // 0x4C4 float32
    std::uint8_t m_flEnvPuddleRippleStrength[0x4]; // 0x4C8 float32
    std::uint8_t m_flEnvPuddleRippleDirection[0x4]; // 0x4CC float32
    std::uint8_t m_flEnvWetnessCoverage[0x4]; // 0x4D0 float32
    std::uint8_t m_flEnvWetnessDryingAmount[0x4]; // 0x4D4 float32
};

struct CGradientFog {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_hGradientFogTexture[0x8]; // 0x4A8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_flFogStartDistance[0x4]; // 0x4B0 float32
    std::uint8_t m_flFogEndDistance[0x4]; // 0x4B4 float32
    std::uint8_t m_bHeightFogEnabled[0x4]; // 0x4B8 bool
    std::uint8_t m_flFogStartHeight[0x4]; // 0x4BC float32
    std::uint8_t m_flFogEndHeight[0x4]; // 0x4C0 float32
    std::uint8_t m_flFarZ[0x4]; // 0x4C4 float32
    std::uint8_t m_flFogMaxOpacity[0x4]; // 0x4C8 float32
    std::uint8_t m_flFogFalloffExponent[0x4]; // 0x4CC float32
    std::uint8_t m_flFogVerticalExponent[0x4]; // 0x4D0 float32
    std::uint8_t m_fogColor[0x4]; // 0x4D4 Color
    std::uint8_t m_flFogStrength[0x4]; // 0x4D8 float32
    std::uint8_t m_flFadeTime[0x4]; // 0x4DC float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x4E0 bool
    std::uint8_t m_bIsEnabled[0x1]; // 0x4E1 bool
    std::uint8_t m_bGradientFogNeedsTextures[0x6]; // 0x4E2 bool
};

struct CSoundOpvarSetAABBEntity {
    static constexpr std::size_t size = 0x6A8;
    std::uint8_t pad_0[0x6A8]; // 0x0
};

struct CPulseCell_Outflow_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t m_ParamSequenceName[0x8]; // 0x138 CUtlString
};

struct CPulseCell_Outflow_PlayDynamicVCD {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x138]; // 0x0
};

struct CPointClientUIWorldTextPanel {
    static constexpr std::size_t size = 0xC10;
    std::uint8_t pad_0[0xA10]; // 0x0
    std::uint8_t m_messageText[0x200]; // 0xA10 char[512]
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_nameStringTableIndex[0x4]; // 0x14 int32
    std::uint8_t m_name[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_designerName[0x10]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_flags[0x8]; // 0x30 uint32
    std::uint8_t m_worldGroupId[0x4]; // 0x38 WorldGroupId_t
    std::uint8_t m_fDataObjectTypes[0x4]; // 0x3C uint32
    std::uint8_t m_PathIndex[0x8]; // 0x40 ChangeAccessorFieldPathIndex_t
    std::uint8_t m_pAttributes[0x8]; // 0x48 CEntityAttributeTable*
    std::uint8_t m_pPrev[0x8]; // 0x50 CEntityIdentity*
    std::uint8_t m_pNext[0x8]; // 0x58 CEntityIdentity*
    std::uint8_t m_pPrevByClass[0x8]; // 0x60 CEntityIdentity*
    std::uint8_t m_pNextByClass[0x8]; // 0x68 CEntityIdentity*
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bLimitCountPasses[0x1]; // 0x0 bool
};

struct CFuncRotator {
    static constexpr std::size_t size = 0x9B0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_eRotateType[0x4]; // 0x850 CFuncRotator::Rotate_t
    std::uint8_t m_bIsRotating[0x1]; // 0x854 bool
    std::uint8_t m_eSolidType[0x3]; // 0x855 SolidType_t
    std::uint8_t m_flSpeed[0x4]; // 0x858 float32
    std::uint8_t m_flRotationDistanceDegrees[0x4]; // 0x85C float32
    std::uint8_t m_flTimeToCompleteRotation[0x4]; // 0x860 float32
    std::uint8_t m_hRotatorTarget[0x4]; // 0x864 CHandle<CBaseEntity>
    std::uint8_t m_strRotatorTarget[0x8]; // 0x868 CUtlSymbolLarge
    std::uint8_t m_OnRotationStarted[0x18]; // 0x870 CEntityIOOutput
    std::uint8_t m_OnRotationCompleted[0x18]; // 0x888 CEntityIOOutput
    std::uint8_t m_OnOscillate[0x18]; // 0x8A0 CEntityIOOutput
    std::uint8_t m_OnOscillateStartArrive[0x18]; // 0x8B8 CEntityIOOutput
    std::uint8_t m_OnOscillateStartDepart[0x18]; // 0x8D0 CEntityIOOutput
    std::uint8_t m_OnOscillateEndArrive[0x18]; // 0x8E8 CEntityIOOutput
    std::uint8_t m_OnOscillateEndDepart[0x18]; // 0x900 CEntityIOOutput
    std::uint8_t m_nTickRotateRan[0x4]; // 0x918 GameTick_t
    std::uint8_t m_bStartedRotating[0x4]; // 0x91C bool
    std::uint8_t m_rotationSummary[0x8]; // 0x920 FuncRotatorRotationSummary_t
    std::uint8_t m_flTimeToReachMaxSpeed[0x4]; // 0x928 float32
    std::uint8_t m_flTimeToReachZeroSpeed[0x4]; // 0x92C float32
    std::uint8_t m_flTimeRotationStart[0x4]; // 0x930 GameTime_t
    std::uint8_t m_flTimeRotationStop[0x4]; // 0x934 GameTime_t
    std::uint8_t m_flStartSpeed[0x8]; // 0x938 float32
    std::uint8_t m_qSpawnOrientation[0x10]; // 0x940 Quaternion
    std::uint8_t m_bReturningToInitialRotation[0x4]; // 0x950 bool
    std::uint8_t m_flMinYawRotation[0x4]; // 0x954 float32
    std::uint8_t m_flMaxYawRotation[0x4]; // 0x958 float32
    std::uint8_t m_bOscillationFromStart[0x4]; // 0x95C bool
    std::uint8_t m_iszStartSound[0x8]; // 0x960 CGameSoundEventName
    std::uint8_t m_iszLoopSound[0x20]; // 0x968 CGameSoundEventName
    std::uint8_t m_iszStopSound[0x8]; // 0x988 CGameSoundEventName
    std::uint8_t m_flTargetAngle[0x4]; // 0x990 float32
    std::uint8_t m_flCurrentAngle[0x4]; // 0x994 float32
    std::uint8_t m_eRotationAxis[0x4]; // 0x998 CFuncRotator::RotationAxis_t
    std::uint8_t m_flSpeedDriftFromOverRotate[0x4]; // 0x99C float32
    std::uint8_t m_bQueueStop[0x10]; // 0x9A0 bool
};

struct CSoundEventEntity {
    static constexpr std::size_t size = 0x568;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_bStartOnSpawn[0x1]; // 0x4A8 bool
    std::uint8_t m_bToLocalPlayer[0x1]; // 0x4A9 bool
    std::uint8_t m_bStopOnNew[0x1]; // 0x4AA bool
    std::uint8_t m_bSaveRestore[0x1]; // 0x4AB bool
    std::uint8_t m_bSavedIsPlaying[0x4]; // 0x4AC bool
    std::uint8_t m_flSavedElapsedTime[0x8]; // 0x4B0 float32
    std::uint8_t m_iszSourceEntityName[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_iszAttachmentName[0x8]; // 0x4C0 CUtlSymbolLarge
    std::uint8_t m_onGUIDChanged[0x30]; // 0x4C8 CEntityOutputTemplate<SndOpEventGuid_t>
    std::uint8_t m_onSoundFinished[0x18]; // 0x4F8 CEntityIOOutput
    std::uint8_t m_flClientCullRadius[0x30]; // 0x510 float32
    std::uint8_t m_iszSoundName[0x1C]; // 0x540 CUtlSymbolLarge
    std::uint8_t m_hSource[0x4]; // 0x55C CEntityHandle
    std::uint8_t m_nEntityIndexSelection[0x8]; // 0x560 int32
};

struct CInfoPlayerCounterterrorist {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x4B8]; // 0x0
};

struct CEnvFade {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_fadeColor[0x4]; // 0x4A8 Color
    std::uint8_t m_Duration[0x4]; // 0x4AC float32
    std::uint8_t m_HoldDuration[0x8]; // 0x4B0 float32
    std::uint8_t m_OnBeginFade[0x18]; // 0x4B8 CEntityIOOutput
};

struct CBasePlayerVData {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_sModelName[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_sModelNameAg2Override[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_flHeadDamageMultiplier[0x10]; // 0x1E8 CSkillFloat
    std::uint8_t m_flChestDamageMultiplier[0x10]; // 0x1F8 CSkillFloat
    std::uint8_t m_flStomachDamageMultiplier[0x10]; // 0x208 CSkillFloat
    std::uint8_t m_flArmDamageMultiplier[0x10]; // 0x218 CSkillFloat
    std::uint8_t m_flLegDamageMultiplier[0x10]; // 0x228 CSkillFloat
    std::uint8_t m_flHoldBreathTime[0x4]; // 0x238 float32
    std::uint8_t m_flDrowningDamageInterval[0x4]; // 0x23C float32
    std::uint8_t m_nDrowningDamageInitial[0x4]; // 0x240 int32
    std::uint8_t m_nDrowningDamageMax[0x4]; // 0x244 int32
    std::uint8_t m_nWaterSpeed[0x4]; // 0x248 int32
    std::uint8_t m_flUseRange[0x4]; // 0x24C float32
    std::uint8_t m_flUseAngleTolerance[0x4]; // 0x250 float32
    std::uint8_t m_flCrouchTime[0x4]; // 0x254 float32
};

struct CTriggerImpact {
    static constexpr std::size_t size = 0xA18;
    std::uint8_t pad_0[0x9E0]; // 0x0
    std::uint8_t m_flMagnitude[0x4]; // 0x9E0 float32
    std::uint8_t m_flNoise[0x4]; // 0x9E4 float32
    std::uint8_t m_flViewkick[0x8]; // 0x9E8 float32
    std::uint8_t m_pOutputForce[0x28]; // 0x9F0 CEntityOutputTemplate<Vector>
};

struct CCSGameModeRules_Deathmatch {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_flDMBonusStartTime[0x4]; // 0x30 GameTime_t
    std::uint8_t m_flDMBonusTimeLength[0x4]; // 0x34 float32
    std::uint8_t m_sDMBonusWeapon[0x50]; // 0x38 CUtlString
};

struct CTestPulseIO__EntityHandleIntArgs_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t handleA[0x4]; // 0x0 CEntityHandle
    std::uint8_t valueB[0x4]; // 0x4 int32
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_nCursorsAllowedToRunParallel[0x8]; // 0x128 int32
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CBasePropDoor {
    static constexpr std::size_t size = 0xE90;
    std::uint8_t pad_0[0xCA0]; // 0x0
    std::uint8_t m_flAutoReturnDelay[0x8]; // 0xCA0 float32
    std::uint8_t m_hDoorList[0x18]; // 0xCA8 CUtlVector<CHandle<CBasePropDoor>>
    std::uint8_t m_nHardwareType[0x4]; // 0xCC0 int32
    std::uint8_t m_bNeedsHardware[0x4]; // 0xCC4 bool
    std::uint8_t m_eDoorState[0x4]; // 0xCC8 DoorState_t
    std::uint8_t m_bLocked[0x1]; // 0xCCC bool
    std::uint8_t m_bNoNPCs[0x3]; // 0xCCD bool
    std::uint8_t m_closedPosition[0xC]; // 0xCD0 VectorWS
    std::uint8_t m_closedAngles[0xC]; // 0xCDC QAngle
    std::uint8_t m_hBlocker[0x4]; // 0xCE8 CHandle<CBaseEntity>
    std::uint8_t m_bFirstBlocked[0x4]; // 0xCEC bool
    std::uint8_t m_ls[0x20]; // 0xCF0 locksound_t
    std::uint8_t m_bForceClosed[0x4]; // 0xD10 bool
    std::uint8_t m_vecLatchWorldPosition[0xC]; // 0xD14 VectorWS
    std::uint8_t m_hActivator[0x4]; // 0xD20 CHandle<CBaseEntity>
    std::uint8_t m_flSpeed[0x1C]; // 0xD24 float32
    std::uint8_t m_SoundMoving[0x8]; // 0xD40 CGameSoundEventName
    std::uint8_t m_SoundOpen[0x8]; // 0xD48 CGameSoundEventName
    std::uint8_t m_SoundClose[0x8]; // 0xD50 CGameSoundEventName
    std::uint8_t m_SoundLock[0x8]; // 0xD58 CGameSoundEventName
    std::uint8_t m_SoundUnlock[0x8]; // 0xD60 CGameSoundEventName
    std::uint8_t m_SoundLatch[0x8]; // 0xD68 CGameSoundEventName
    std::uint8_t m_SoundPound[0x8]; // 0xD70 CGameSoundEventName
    std::uint8_t m_SoundJiggle[0x8]; // 0xD78 CGameSoundEventName
    std::uint8_t m_SoundLockedAnim[0x8]; // 0xD80 CGameSoundEventName
    std::uint8_t m_numCloseAttempts[0x4]; // 0xD88 int32
    std::uint8_t m_nPhysicsMaterial[0x4]; // 0xD8C CUtlStringToken
    std::uint8_t m_SlaveName[0x8]; // 0xD90 CUtlSymbolLarge
    std::uint8_t m_hMaster[0x8]; // 0xD98 CHandle<CBasePropDoor>
    std::uint8_t m_OnBlockedClosing[0x18]; // 0xDA0 CEntityIOOutput
    std::uint8_t m_OnBlockedOpening[0x18]; // 0xDB8 CEntityIOOutput
    std::uint8_t m_OnUnblockedClosing[0x18]; // 0xDD0 CEntityIOOutput
    std::uint8_t m_OnUnblockedOpening[0x18]; // 0xDE8 CEntityIOOutput
    std::uint8_t m_OnFullyClosed[0x18]; // 0xE00 CEntityIOOutput
    std::uint8_t m_OnFullyOpen[0x18]; // 0xE18 CEntityIOOutput
    std::uint8_t m_OnClose[0x18]; // 0xE30 CEntityIOOutput
    std::uint8_t m_OnOpen[0x18]; // 0xE48 CEntityIOOutput
    std::uint8_t m_OnLockedUse[0x18]; // 0xE60 CEntityIOOutput
    std::uint8_t m_OnAjarOpen[0x18]; // 0xE78 CEntityIOOutput
};

struct CLogicBranchList {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nLogicBranchNames[0x80]; // 0x4A8 CUtlSymbolLarge[16]
    std::uint8_t m_LogicBranchList[0x18]; // 0x528 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t m_eLastState[0x8]; // 0x540 CLogicBranchList::LogicBranchListenerLastState_t
    std::uint8_t m_OnAllTrue[0x18]; // 0x548 CEntityIOOutput
    std::uint8_t m_OnAllFalse[0x18]; // 0x560 CEntityIOOutput
    std::uint8_t m_OnMixed[0x18]; // 0x578 CEntityIOOutput
};

struct CBtActionParachutePositioning {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_ActionTimer[0x20]; // 0x58 CountdownTimer
};

struct CAK47 {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x12A0]; // 0x0
};

struct CDynamicProp {
    static constexpr std::size_t size = 0xC90;
    std::uint8_t pad_0[0xBD0]; // 0x0
    std::uint8_t m_bGraphControllerEnabled[0x10]; // 0xBD0 bool
    std::uint8_t m_bCreateNavObstacle[0x1]; // 0xBE0 bool
    std::uint8_t m_bNavObstacleUpdatesOverridden[0x1]; // 0xBE1 bool
    std::uint8_t m_bUseHitboxesForRenderBox[0x1]; // 0xBE2 bool
    std::uint8_t m_bUseAnimGraph[0x5]; // 0xBE3 bool
    std::uint8_t m_pOutputAnimBegun[0x18]; // 0xBE8 CEntityIOOutput
    std::uint8_t m_pOutputAnimOver[0x18]; // 0xC00 CEntityIOOutput
    std::uint8_t m_pOutputAnimLoopCycleOver[0x18]; // 0xC18 CEntityIOOutput
    std::uint8_t m_OnAnimReachedStart[0x18]; // 0xC30 CEntityIOOutput
    std::uint8_t m_OnAnimReachedEnd[0x18]; // 0xC48 CEntityIOOutput
    std::uint8_t m_iszIdleAnim[0x8]; // 0xC60 CUtlSymbolLarge
    std::uint8_t m_nIdleAnimLoopMode[0x4]; // 0xC68 AnimLoopMode_t
    std::uint8_t m_bRandomizeCycle[0x1]; // 0xC6C bool
    std::uint8_t m_bStartDisabled[0x1]; // 0xC6D bool
    std::uint8_t m_bFiredStartEndOutput[0x1]; // 0xC6E bool
    std::uint8_t m_bForceNpcExclude[0x1]; // 0xC6F bool
    std::uint8_t m_bCreateMovableSurfaceGraph[0x1]; // 0xC70 bool
    std::uint8_t m_bCreateNonSolid[0x1]; // 0xC71 bool
    std::uint8_t m_bIsOverrideProp[0x2]; // 0xC72 bool
    std::uint8_t m_iInitialGlowState[0x4]; // 0xC74 int32
    std::uint8_t m_nGlowRange[0x4]; // 0xC78 int32
    std::uint8_t m_nGlowRangeMin[0x4]; // 0xC7C int32
    std::uint8_t m_glowColor[0x4]; // 0xC80 Color
    std::uint8_t m_nGlowTeam[0xC]; // 0xC84 int32
};

struct CHostageAlias_info_hostage_spawn {
    static constexpr std::size_t size = 0x2DA0;
    std::uint8_t pad_0[0x2DA0]; // 0x0
};

struct CFilterTeam {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x4E0]; // 0x0
    std::uint8_t m_iFilterTeam[0x8]; // 0x4E0 int32
};

struct CFuncConveyor {
    static constexpr std::size_t size = 0x8A8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t m_szConveyorModels[0x8]; // 0x850 CUtlSymbolLarge
    std::uint8_t m_flTransitionDurationSeconds[0x4]; // 0x858 float32
    std::uint8_t m_flSpeed[0x4]; // 0x85C float32
    std::uint8_t m_angMoveEntitySpace[0xC]; // 0x860 QAngle
    std::uint8_t m_vecMoveDirEntitySpace[0xC]; // 0x86C Vector
    std::uint8_t m_flTargetSpeed[0x4]; // 0x878 float32
    std::uint8_t m_nTransitionStartTick[0x4]; // 0x87C GameTick_t
    std::uint8_t m_nTransitionDurationTicks[0x4]; // 0x880 int32
    std::uint8_t m_flTransitionStartSpeed[0x4]; // 0x884 float32
    std::uint8_t m_flFrictionScale[0x8]; // 0x888 float32
    std::uint8_t m_hConveyorModels[0x18]; // 0x890 CNetworkUtlVectorBase<CHandle<CBaseEntity>>
};

struct CTriggerPhysics {
    static constexpr std::size_t size = 0xA28;
    std::uint8_t pad_0[0x9D0]; // 0x0
    std::uint8_t m_pController[0x8]; // 0x9D0 IPhysicsMotionController*
    std::uint8_t m_gravityScale[0x4]; // 0x9D8 float32
    std::uint8_t m_linearLimit[0x4]; // 0x9DC float32
    std::uint8_t m_linearDamping[0x4]; // 0x9E0 float32
    std::uint8_t m_angularLimit[0x4]; // 0x9E4 float32
    std::uint8_t m_angularDamping[0x4]; // 0x9E8 float32
    std::uint8_t m_linearForce[0x4]; // 0x9EC float32
    std::uint8_t m_flFrequency[0x4]; // 0x9F0 float32
    std::uint8_t m_flDampingRatio[0x4]; // 0x9F4 float32
    std::uint8_t m_vecLinearForcePointAt[0xC]; // 0x9F8 Vector
    std::uint8_t m_bCollapseToForcePoint[0x4]; // 0xA04 bool
    std::uint8_t m_vecLinearForcePointAtWorld[0xC]; // 0xA08 VectorWS
    std::uint8_t m_vecLinearForceDirection[0xC]; // 0xA14 Vector
    std::uint8_t m_bForceDirectionIsInLocalSpace[0x1]; // 0xA20 bool
    std::uint8_t m_bConvertToDebrisWhenPossible[0x7]; // 0xA21 bool
};

struct CInfoInstructorHintBombTargetB {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CFuncTimescale {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_flDesiredTimescale[0x4]; // 0x4A8 float32
    std::uint8_t m_flAcceleration[0x4]; // 0x4AC float32
    std::uint8_t m_flMinBlendRate[0x4]; // 0x4B0 float32
    std::uint8_t m_flBlendDeltaMultiplier[0x4]; // 0x4B4 float32
    std::uint8_t m_isStarted[0x8]; // 0x4B8 bool
};

struct CSoundOpvarSetPointEntity {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x550]; // 0x0
    std::uint8_t m_OnEnter[0x18]; // 0x550 CEntityIOOutput
    std::uint8_t m_OnExit[0x18]; // 0x568 CEntityIOOutput
    std::uint8_t m_bAutoDisable[0x44]; // 0x580 bool
    std::uint8_t m_flDistanceMin[0x4]; // 0x5C4 float32
    std::uint8_t m_flDistanceMax[0x4]; // 0x5C8 float32
    std::uint8_t m_flDistanceMapMin[0x4]; // 0x5CC float32
    std::uint8_t m_flDistanceMapMax[0x4]; // 0x5D0 float32
    std::uint8_t m_flOcclusionRadius[0x4]; // 0x5D4 float32
    std::uint8_t m_flOcclusionMin[0x4]; // 0x5D8 float32
    std::uint8_t m_flOcclusionMax[0x4]; // 0x5DC float32
    std::uint8_t m_flValSetOnDisable[0x4]; // 0x5E0 float32
    std::uint8_t m_bSetValueOnDisable[0x1]; // 0x5E4 bool
    std::uint8_t m_bReloading[0x3]; // 0x5E5 bool
    std::uint8_t m_nSimulationMode[0x4]; // 0x5E8 int32
    std::uint8_t m_nVisibilitySamples[0x4]; // 0x5EC int32
    std::uint8_t m_vDynamicProxyPoint[0xC]; // 0x5F0 Vector
    std::uint8_t m_flDynamicMaximumOcclusion[0x4]; // 0x5FC float32
    std::uint8_t m_hDynamicEntity[0x8]; // 0x600 CEntityHandle
    std::uint8_t m_iszDynamicEntityName[0x8]; // 0x608 CUtlSymbolLarge
    std::uint8_t m_flPathingDistanceNormFactor[0x4]; // 0x610 float32
    std::uint8_t m_vPathingSourcePos[0xC]; // 0x614 VectorWS
    std::uint8_t m_vPathingListenerPos[0xC]; // 0x620 VectorWS
    std::uint8_t m_vPathingDirection[0xC]; // 0x62C Vector
    std::uint8_t m_nPathingSourceIndex[0x8]; // 0x638 int32
};

struct CBasePlayerWeaponVData {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_szWorldModel[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_szWorldModelAg2Override[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_sToolsOnlyOwnerModelName[0xE0]; // 0x1E8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_bBuiltRightHanded[0x1]; // 0x2C8 bool
    std::uint8_t m_bAllowFlipping[0x7]; // 0x2C9 bool
    std::uint8_t m_sMuzzleAttachment[0x20]; // 0x2D0 CAttachmentNameSymbolWithStorage
    std::uint8_t m_szMuzzleFlashParticle[0xE0]; // 0x2F0 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szMuzzleFlashParticleConfig[0x8]; // 0x3D0 CUtlString
    std::uint8_t m_szBarrelSmokeParticle[0xE0]; // 0x3D8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_nMuzzleSmokeShotThreshold[0x4]; // 0x4B8 uint8
    std::uint8_t m_flMuzzleSmokeTimeout[0x4]; // 0x4BC float32
    std::uint8_t m_flMuzzleSmokeDecrementRate[0x4]; // 0x4C0 float32
    std::uint8_t m_bGenerateMuzzleLight[0x1]; // 0x4C4 bool
    std::uint8_t m_bShouldAnimateInWorld[0x1]; // 0x4C5 bool
    std::uint8_t m_bLinkedCooldowns[0x1]; // 0x4C6 bool
    std::uint8_t m_iFlags[0x1]; // 0x4C7 ItemFlagTypes_t
    std::uint8_t m_iWeight[0x4]; // 0x4C8 int32
    std::uint8_t m_bAutoSwitchTo[0x1]; // 0x4CC bool
    std::uint8_t m_bAutoSwitchFrom[0x1]; // 0x4CD bool
    std::uint8_t m_nPrimaryAmmoType[0x1]; // 0x4CE AmmoIndex_t
    std::uint8_t m_nSecondaryAmmoType[0x1]; // 0x4CF AmmoIndex_t
    std::uint8_t m_iMaxClip1[0x4]; // 0x4D0 int32
    std::uint8_t m_iMaxClip2[0x4]; // 0x4D4 int32
    std::uint8_t m_iDefaultClip1[0x4]; // 0x4D8 int32
    std::uint8_t m_iDefaultClip2[0x4]; // 0x4DC int32
    std::uint8_t m_bReserveAmmoAsClips[0x1]; // 0x4E0 bool
    std::uint8_t m_bTreatAsSingleClip[0x1]; // 0x4E1 bool
    std::uint8_t m_bKeepLoadedAmmo[0x2]; // 0x4E2 bool
    std::uint8_t m_iRumbleEffect[0x4]; // 0x4E4 RumbleEffect_t
    std::uint8_t m_flDropSpeed[0x4]; // 0x4E8 float32
    std::uint8_t m_iSlot[0x4]; // 0x4EC int32
    std::uint8_t m_iPosition[0x8]; // 0x4F0 int32
    std::uint8_t m_aShootSounds[0x28]; // 0x4F8 CUtlOrderedMap<WeaponSound_t,CSoundEventName>
};

struct CInfoTargetServerOnly {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CCSGO_RushIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CServerRagdollTrigger {
    static constexpr std::size_t size = 0x9C8;
    std::uint8_t pad_0[0x9C8]; // 0x0
};

struct CDynamicPropAlias_dynamic_prop {
    static constexpr std::size_t size = 0xC90;
    std::uint8_t pad_0[0xC90]; // 0x0
};

struct CMarkupVolumeTagged {
    static constexpr std::size_t size = 0x890;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t m_GroupNames[0x18]; // 0x858 CUtlVector<CGlobalSymbol>
    std::uint8_t m_Tags[0x18]; // 0x870 CUtlVector<CGlobalSymbol>
    std::uint8_t m_bIsGroup[0x1]; // 0x888 bool
    std::uint8_t m_bGroupByPrefab[0x1]; // 0x889 bool
    std::uint8_t m_bGroupByVolume[0x1]; // 0x88A bool
    std::uint8_t m_bGroupOtherGroups[0x1]; // 0x88B bool
    std::uint8_t m_bIsInGroup[0x4]; // 0x88C bool
};

struct CInfoParticleTarget {
    static constexpr std::size_t size = 0x4A8;
    std::uint8_t pad_0[0x4A8]; // 0x0
};

struct CEnvCubemap {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x528]; // 0x0
    std::uint8_t m_Entity_hCubemapTexture[0x8]; // 0x528 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_bCustomCubemapTexture[0x4]; // 0x530 bool
    std::uint8_t m_Entity_flInfluenceRadius[0x4]; // 0x534 float32
    std::uint8_t m_Entity_vBoxProjectMins[0xC]; // 0x538 Vector
    std::uint8_t m_Entity_vBoxProjectMaxs[0xC]; // 0x544 Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x550 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x554 int32
    std::uint8_t m_Entity_nEnvCubeMapArrayIndex[0x4]; // 0x558 int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x55C int32
    std::uint8_t m_Entity_flEdgeFadeDist[0x4]; // 0x560 float32
    std::uint8_t m_Entity_vEdgeFadeDists[0xC]; // 0x564 Vector
    std::uint8_t m_Entity_flDiffuseScale[0x4]; // 0x570 float32
    std::uint8_t m_Entity_bStartDisabled[0x1]; // 0x574 bool
    std::uint8_t m_Entity_bDefaultEnvMap[0x1]; // 0x575 bool
    std::uint8_t m_Entity_bDefaultSpecEnvMap[0x1]; // 0x576 bool
    std::uint8_t m_Entity_bIndoorCubeMap[0x1]; // 0x577 bool
    std::uint8_t m_Entity_bCopyDiffuseFromDefaultCubemap[0x10]; // 0x578 bool
    std::uint8_t m_Entity_bEnabled[0x8]; // 0x588 bool
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
    static constexpr std::size_t size = 0xA68;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_iszLerpTarget[0x8]; // 0x9C8 CUtlSymbolLarge
    std::uint8_t m_hLerpTarget[0x8]; // 0x9D0 CHandle<CBaseEntity>
    std::uint8_t m_iszLerpTargetAttachment[0x8]; // 0x9D8 CUtlSymbolLarge
    std::uint8_t m_hLerpTargetAttachment[0x4]; // 0x9E0 AttachmentHandle_t
    std::uint8_t m_flLerpDuration[0x4]; // 0x9E4 float32
    std::uint8_t m_bAttachedEntityWasParented[0x1]; // 0x9E8 bool
    std::uint8_t m_bLerpRestoreMoveType[0x1]; // 0x9E9 bool
    std::uint8_t m_bSingleLerpObject[0x6]; // 0x9EA bool
    std::uint8_t m_vecLerpingObjects[0x18]; // 0x9F0 CUtlVector<lerpdata_t>
    std::uint8_t m_iszLerpEffect[0x8]; // 0xA08 CUtlSymbolLarge
    std::uint8_t m_iszLerpSound[0x8]; // 0xA10 CUtlSymbolLarge
    std::uint8_t m_bAttachTouchingObject[0x4]; // 0xA18 bool
    std::uint8_t m_hEntityToWaitForDisconnect[0x4]; // 0xA1C CHandle<CBaseEntity>
    std::uint8_t m_OnLerpStarted[0x18]; // 0xA20 CEntityIOOutput
    std::uint8_t m_OnLerpFinished[0x18]; // 0xA38 CEntityIOOutput
    std::uint8_t m_OnDetached[0x18]; // 0xA50 CEntityIOOutput
};

struct CPhysicsPropOverride {
    static constexpr std::size_t size = 0xD10;
    std::uint8_t pad_0[0xD10]; // 0x0
};

struct CTriggerSave {
    static constexpr std::size_t size = 0x9D8;
    std::uint8_t pad_0[0x9C8]; // 0x0
    std::uint8_t m_bForceNewLevelUnit[0x4]; // 0x9C8 bool
    std::uint8_t m_fDangerousTimer[0x4]; // 0x9CC float32
    std::uint8_t m_minHitPoints[0x4]; // 0x9D0 int32
    std::uint8_t m_flRetriggerDelay[0x4]; // 0x9D4 float32
};

struct CPointHurt {
    static constexpr std::size_t size = 0x4C8;
    std::uint8_t pad_0[0x4A8]; // 0x0
    std::uint8_t m_nDamage[0x4]; // 0x4A8 int32
    std::uint8_t m_bitsDamageType[0x4]; // 0x4AC DamageTypes_t
    std::uint8_t m_flRadius[0x4]; // 0x4B0 float32
    std::uint8_t m_flDelay[0x4]; // 0x4B4 float32
    std::uint8_t m_strTarget[0x8]; // 0x4B8 CUtlSymbolLarge
    std::uint8_t m_pActivator[0x8]; // 0x4C0 CHandle<CBaseEntity>
};

struct CBaseAnimGraphAlias_baseanimating {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0xA40]; // 0x0
};

struct CBasePlayerController {
    static constexpr std::size_t size = 0x7D8;
    std::uint8_t pad_0[0x4B0]; // 0x0
    std::uint8_t m_nInButtonsWhichAreToggles[0x8]; // 0x4B0 uint64
    std::uint8_t m_nTickBase[0x28]; // 0x4B8 uint32
    std::uint8_t m_hPawn[0x4]; // 0x4E0 CHandle<CBasePlayerPawn>
    std::uint8_t m_bKnownTeamMismatch[0x8]; // 0x4E4 bool
    std::uint8_t m_nSplitScreenSlot[0x4]; // 0x4EC CSplitScreenSlot
    std::uint8_t m_hSplitOwner[0x8]; // 0x4F0 CHandle<CBasePlayerController>
    std::uint8_t m_hSplitScreenPlayers[0x18]; // 0x4F8 CUtlVector<CHandle<CBasePlayerController>>
    std::uint8_t m_bIsHLTV[0x4]; // 0x510 bool
    std::uint8_t m_iConnected[0x4]; // 0x514 PlayerConnectedState
    std::uint8_t m_iMostConnected[0x4]; // 0x518 PlayerConnectedState
    std::uint8_t m_iszPlayerName[0x84]; // 0x51C char[128]
    std::uint8_t m_szNetworkIDString[0x8]; // 0x5A0 CUtlString
    std::uint8_t m_fLerpTime[0x4]; // 0x5A8 float32
    std::uint8_t m_bLagCompensation[0x1]; // 0x5AC bool
    std::uint8_t m_bPredict[0x7]; // 0x5AD bool
    std::uint8_t m_bIsLowViolence[0x1]; // 0x5B4 bool
    std::uint8_t m_bGamePaused[0x13B]; // 0x5B5 bool
    std::uint8_t m_iIgnoreGlobalChat[0x4]; // 0x6F0 ChatIgnoreType_t
    std::uint8_t m_flLastPlayerTalkTime[0x4]; // 0x6F4 float32
    std::uint8_t m_flLastEntitySteadyState[0x4]; // 0x6F8 float32
    std::uint8_t m_nAvailableEntitySteadyState[0x4]; // 0x6FC int32
    std::uint8_t m_bHasAnySteadyStateEnts[0x10]; // 0x700 bool
    std::uint8_t m_steamID[0x8]; // 0x710 uint64
    std::uint8_t m_bNoClipEnabled[0x4]; // 0x718 bool
    std::uint8_t m_iDesiredFOV[0xBC]; // 0x71C uint32
};

struct CRangeFloat {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pValue[0x8]; // 0x0 float32[2]
};

struct CDestructiblePart {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_DebugName[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_nHitGroup[0x4]; // 0x8 HitGroup_t
    std::uint8_t m_bDisableHitGroupWhenDestroyed[0x4]; // 0xC bool
    std::uint8_t m_nOtherHitgroupsToDestroyWhenFullyDestructed[0x18]; // 0x10 CUtlVector<HitGroup_t>
    std::uint8_t m_bOnlyDestroyWhenGibbing[0x8]; // 0x28 bool
    std::uint8_t m_sBodyGroupName[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t m_DamageLevels[0x18]; // 0x38 CUtlVector<CDestructiblePart_DamageLevel>
};

struct PhysBlockHeader_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nSaved[0x8]; // 0x0 int32
    std::uint8_t pWorldObject[0x8]; // 0x8 uint64
};

struct RelationshipOverride_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t entity[0x4]; // 0x8 CHandle<CBaseEntity>
    std::uint8_t classType[0x4]; // 0xC Class_T
};

struct AutoRoomDoorwayPairs_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t vP1[0xC]; // 0x0 VectorWS
    std::uint8_t vP2[0xC]; // 0xC VectorWS
};

struct NavHull_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nHullIdx[0x4]; // 0x0 int32
};

struct CDebugSnapshotData_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t m_text[0x8]; // 0x0 CUtlString
    std::uint8_t m_dataType[0x4]; // 0x8 uint32
    std::uint8_t m_userFlags[0x4]; // 0xC uint32
    std::uint8_t m_userData[0x4]; // 0x10 uint32
    std::uint8_t m_userVector[0xC]; // 0x14 VectorWS
    std::uint8_t m_userTransform[0x20]; // 0x20 CTransformWS
    std::uint8_t m_userShape[0x98]; // 0x40 CGenericShapeProxy
    std::uint8_t m_drawColor[0x8]; // 0xD8 Color
    std::uint8_t m_vecDebugOverlayData[0x18]; // 0xE0 CUtlVector<CDebugDrawHistoryData*>
    std::uint8_t m_pStructuredData[0x8]; // 0xF8 DebugSnapshotBaseStructuredData_t*
    std::uint8_t m_hEntity[0x8]; // 0x100 CHandle<CBaseEntity>
    std::uint8_t m_sEntityName[0x8]; // 0x108 CUtlString
    std::uint8_t m_nEntityIndex[0x10]; // 0x110 CEntityIndex
    std::uint8_t m_children[0x10]; // 0x120 CUtlLeanVector<CDebugSnapshotData_t>
};

struct CRemapFloat {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pValue[0x10]; // 0x0 float32[4]
};

struct CHintMessage {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_hintString[0x8]; // 0x0 char*
    std::uint8_t m_args[0x18]; // 0x8 CUtlVector<char*>
    std::uint8_t m_duration[0x8]; // 0x20 float32
};

struct CNavAttribute {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct AI_GroundRootMotionMotor_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t desired_movement_gait_set[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t desired_movement_gait[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t current_movement_gait_set[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t current_movement_gait[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t movement_setting_id[0x8]; // 0x28 CGlobalSymbol
    std::uint8_t gait_switch_blocked_reason[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t b_goal_completion_allowed[0x8]; // 0x38 bool
    std::uint8_t state[0x8]; // 0x40 CGlobalSymbol
    std::uint8_t n_state_active_tick_count[0x4]; // 0x48 int32
    std::uint8_t b_has_path[0x4]; // 0x4C bool
    std::uint8_t f_remaining_ground_path_length[0x4]; // 0x50 float32
    std::uint8_t f_current_speed[0x4]; // 0x54 float32
    std::uint8_t move_type[0x8]; // 0x58 CGlobalSymbol
    std::uint8_t f_forward_strafing_angle_actual[0x4]; // 0x60 float32
    std::uint8_t f_forward_strafing_angle_desired[0x4]; // 0x64 float32
    std::uint8_t f_forward_strafing_angle_committed[0x4]; // 0x68 float32
    std::uint8_t f_current_lean[0x4]; // 0x6C float32
    std::uint8_t f_target_lean[0x8]; // 0x70 float32
    std::uint8_t vec_events[0x18]; // 0x78 CUtlVector<AI_GroundRootMotionMotor_DebugSnapshotData_t::Event_t>
};

struct ParticleNode_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t m_hEntity[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_iIndex[0x4]; // 0x4 ParticleIndex_t
    std::uint8_t m_flStartTime[0x4]; // 0x8 GameTime_t
    std::uint8_t m_flGrowthDuration[0x4]; // 0xC float32
    std::uint8_t m_vecGrowthOrigin[0xC]; // 0x10 VectorWS
    std::uint8_t m_flEndcapTime[0x4]; // 0x1C float32
    std::uint8_t m_bMarkedForDelete[0x4]; // 0x20 bool
};

struct CFootstepTableHandle {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CDecalGroupVData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_vecOptions[0x18]; // 0x0 CUtlVector<DecalGroupOption_t>
    std::uint8_t m_flTotalProbability[0x8]; // 0x18 float32
};

struct CNmSnapWeaponTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CPlayerControllerComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x38]; // 0x8 CNetworkVarChainer
};

struct CResponseQueue {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_ExpresserTargets[0x18]; // 0x38 CUtlVector<CAI_Expresser*>
};

struct CodeGenAABB_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vMinBounds[0xC]; // 0x0 Vector
    std::uint8_t m_vMaxBounds[0xC]; // 0xC Vector
};

struct CScriptUniformRandomStream {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hScriptScope[0x94]; // 0x8 HSCRIPT
    std::uint8_t m_nInitialSeed[0x4]; // 0x9C int32
};

struct lerpdata_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_hEnt[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_MoveType[0x4]; // 0x4 MoveType_t
    std::uint8_t m_flStartTime[0x4]; // 0x8 GameTime_t
    std::uint8_t m_vecStartOrigin[0x14]; // 0xC VectorWS
    std::uint8_t m_qStartRot[0x10]; // 0x20 Quaternion
    std::uint8_t m_nFXIndex[0x20]; // 0x30 ParticleIndex_t
};

struct WrappedPhysicsJoint_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pJoint[0x8]; // 0x0 IPhysicsJoint*
};

struct SimpleConstraintSoundProfile {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flKeyPointMinSoundThreshold[0x4]; // 0x8 float32
    std::uint8_t m_flKeyPointMaxSoundThreshold[0x4]; // 0xC float32
    std::uint8_t m_reversalSoundThresholdSmall[0x4]; // 0x10 float32
    std::uint8_t m_reversalSoundThresholdMedium[0x4]; // 0x14 float32
    std::uint8_t m_reversalSoundThresholdLarge[0x8]; // 0x18 float32
};

struct CSimpleSimTimer {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flNext[0x4]; // 0x0 GameTime_t
    std::uint8_t m_nWorldGroupId[0x4]; // 0x4 WorldGroupId_t
};

struct AI_BaseNPCAnimGraph_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t ag2_update_id[0x8]; // 0x0 int32
    std::uint8_t e_action_desired[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t e_action_handshake_restart[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t e_action_handshake_body_authority_current[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t e_action_handshake_body_authority_desired[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t e_movement_type_desired[0x8]; // 0x28 CGlobalSymbol
    std::uint8_t e_movement_handshake_restart[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t e_movement_handshake_body_authority_current[0x8]; // 0x38 CGlobalSymbol
    std::uint8_t e_movement_handshake_body_authority_desired[0x8]; // 0x40 CGlobalSymbol
};

struct CPhysicsBodyGameMarkupData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_PhysicsBodyMarkupByBoneName[0x28]; // 0x0 CUtlDict<CPhysicsBodyGameMarkup>
};

struct SoundCommand_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_time[0x4]; // 0x8 float32
    std::uint8_t m_deltaTime[0x4]; // 0xC float32
    std::uint8_t m_command[0x4]; // 0x10 soundcommands_t
    std::uint8_t m_value[0xC]; // 0x14 float32
};

struct modifiedconvars_t {
    static constexpr std::size_t size = 0x180;
    std::uint8_t pszConvar[0x80]; // 0x0 char[128]
    std::uint8_t pszCurrentValue[0x80]; // 0x80 char[128]
    std::uint8_t pszOrgValue[0x80]; // 0x100 char[128]
};

struct CTestPulseIOComponent_Derived {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct SAVE_HEADER {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_saveId[0x4]; // 0x0 int32
    std::uint8_t m_version[0x4]; // 0x4 int32
    std::uint8_t m_nConnectionCount[0x4]; // 0x8 int32
    std::uint8_t m_nMapVersion[0x4]; // 0xC int32
    std::uint8_t m_sSpawnGroupName[0x10]; // 0x10 CUtlString
    std::uint8_t m_vecWorldOffset[0x30]; // 0x20 matrix3x4a_t
    std::uint8_t m_flSaveTime[0x10]; // 0x50 float32
};

struct CSkillDamage {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_flDamage[0x10]; // 0x0 CSkillFloat
    std::uint8_t m_flNPCDamageScalarVsNPC[0x4]; // 0x10 float32
    std::uint8_t m_flPhysicsForceDamage[0x4]; // 0x14 float32
};

struct DebugSnapshotBaseStructuredData_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_nInitialMovementId[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_nCurrentMovementId[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_nMode[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t m_nType[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_nState[0x8]; // 0x20 CGlobalSymbol
};

struct CFloatExponentialMovingAverage {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0x14]; // 0x0
};

struct physics_save_sphere_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t radius[0x4]; // 0x0 float32
};

struct CAnimGraph2InstancePtr {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct GAME_HEADER {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sComment[0x8]; // 0x0 CUtlString
    std::uint8_t m_nSpawnGroupCount[0x8]; // 0x8 int32
    std::uint8_t m_sLandmark[0x8]; // 0x10 CUtlString
    std::uint8_t m_sRequiredAddons[0x8]; // 0x18 CUtlString
};

struct ChickenPathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct AI_BaseNPC_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x188;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t npc_state[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t current_enemy[0x8]; // 0x10 CHandle<CBaseEntity>
    std::uint8_t s_current_schedule[0x8]; // 0x18 CUtlString
    std::uint8_t s_current_task[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t s_prev_schedule[0x8]; // 0x28 CUtlString
    std::uint8_t s_npc_current_movement[0x8]; // 0x30 CUtlString
    std::uint8_t s_last_task_end_location[0x8]; // 0x38 CUtlString
    std::uint8_t conditions[0x18]; // 0x40 CUtlVector<CGlobalSymbol>
    std::uint8_t anim_events[0x18]; // 0x58 CUtlVector<CGlobalSymbol>
    std::uint8_t animgraph[0x48]; // 0x70 AI_BaseNPCAnimGraph_DebugSnapshotData_t
    std::uint8_t navigator[0x50]; // 0xB8 AI_Navigator_DebugSnapshotData_t
    std::uint8_t motorServices[0x38]; // 0x108 AI_MotorServices_DebugSnapshotData_t
    std::uint8_t facingServices[0x48]; // 0x140 AI_FacingServices_DebugSnapshotData_t
};

struct CDebugDrawHistoryData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_hEntity[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_etype[0x4]; // 0x4 ESceneViewDebugOverlaysListenerDataType_t
    std::uint8_t m_vectors[0x10]; // 0x8 CUtlLeanVector<Vector4D>
    std::uint8_t m_colors[0x10]; // 0x18 CUtlLeanVector<Color>
    std::uint8_t m_dimensions[0x10]; // 0x28 CUtlLeanVector<float32>
    std::uint8_t m_times[0x10]; // 0x38 CUtlLeanVector<float64>
    std::uint8_t m_uint64s[0x10]; // 0x48 CUtlLeanVector<uint64>
    std::uint8_t m_bools[0x10]; // 0x58 CUtlLeanVector<bool>
    std::uint8_t m_strings[0x10]; // 0x68 CUtlLeanVector<CUtlString>
};

struct CNmEventConsumer {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CNetworkViewOffsetVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_vecX[0x8]; // 0x10 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x20 CNetworkedQuantizedFloat
};

struct AmmoIndex_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_Value[0x1]; // 0x0 int8
};

struct CNmEventConsumerContact {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CDestructiblePartsSystemData {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_PartsDataByHitGroup[0x28]; // 0x0 CUtlOrderedMap<HitGroup_t,CDestructiblePart>
    std::uint8_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing[0x8]; // 0x28 CRangeInt
};

struct CRopeOverlapHit {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_hEntity[0x8]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_vecOverlappingLinks[0x18]; // 0x8 CUtlVector<int32>
};

struct ActorClipEntry_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_sClipName[0x8]; // 0x0 CUtlString
    std::uint8_t m_bLooping[0x8]; // 0x8 bool
};

struct CNavPathCostForTests {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct ResponseContext_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_iszName[0x8]; // 0x0 CUtlSymbolLarge
    std::uint8_t m_iszValue[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_fExpirationTime[0x8]; // 0x10 GameTime_t
};

struct ApproachAreaCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CNavVolumeSphericalShell {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_flRadiusInner[0x8]; // 0x88 float32
};

struct CPlayerPawnComponent {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
    std::uint8_t m_pComponentGraphController[0x18]; // 0x30 CAnimGraphControllerPtr
};

struct AI_FacingServices_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t npc_position[0x10]; // 0x0 VectorWS
    std::uint8_t facing_target_source[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t facing_target[0x10]; // 0x18 VectorWS
    std::uint8_t schedule_facing_priority[0x8]; // 0x28 CGlobalSymbol
    std::uint8_t strafing_source[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t strafing_enabled[0x8]; // 0x38 bool
    std::uint8_t movement_id[0x8]; // 0x40 CGlobalSymbol
};

struct AI_Navigator_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t s_movement_id[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t s_movement_serial_number[0x8]; // 0x8 uint32
    std::uint8_t s_goal_source_location[0x8]; // 0x10 CUtlString
    std::uint8_t last_waypoint_pos[0xC]; // 0x18 VectorWS
    std::uint8_t goal_location[0xC]; // 0x24 VectorWS
    std::uint8_t waypoints[0x18]; // 0x30 CUtlVector<AI_Navigator_DebugSnapshotData_t::Waypoint_t>
    std::uint8_t s_arrival_movement_gait_set[0x8]; // 0x48 CGlobalSymbol
};

struct CDecalInstance {
    static constexpr std::size_t size = 0x108;
    std::uint8_t m_sDecalGroup[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_hMaterial[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_sSequenceName[0x4]; // 0x10 CUtlStringToken
    std::uint8_t m_hEntity[0x4]; // 0x14 CHandle<CBaseEntity>
    std::uint8_t m_nBoneIndex[0x4]; // 0x18 int32
    std::uint8_t m_nTriangleIndex[0x4]; // 0x1C int32
    std::uint8_t m_vPositionLS[0xC]; // 0x20 Vector
    std::uint8_t m_vPositionOS[0xC]; // 0x2C Vector
    std::uint8_t m_vNormalLS[0xC]; // 0x38 Vector
    std::uint8_t m_vNormalOS[0xC]; // 0x44 Vector
    std::uint8_t m_vSAxisLS[0xC]; // 0x50 Vector
    std::uint8_t m_nFlags[0x4]; // 0x5C DecalFlags_t
    std::uint8_t m_Color[0x4]; // 0x60 Color
    std::uint8_t m_flWidth[0x4]; // 0x64 float32
    std::uint8_t m_flHeight[0x4]; // 0x68 float32
    std::uint8_t m_flDepth[0x4]; // 0x6C float32
    std::uint8_t m_mTransform[0x30]; // 0x70 matrix3x4_t
    std::uint8_t m_mLocalToTriangle[0x30]; // 0xA0 matrix3x4_t
    std::uint8_t m_flAnimationScale[0x4]; // 0xD0 float32
    std::uint8_t m_flAnimationStartTime[0x4]; // 0xD4 float32
    std::uint8_t m_flPlaceTime[0x4]; // 0xD8 GameTime_t
    std::uint8_t m_flFadeStartTime[0x4]; // 0xDC float32
    std::uint8_t m_flFadeDuration[0x4]; // 0xE0 float32
    std::uint8_t m_flLightingOriginOffset[0x14]; // 0xE4 float32
    std::uint8_t m_flBoundingRadiusSqr[0x4]; // 0xF8 float32
    std::uint8_t m_nSequenceIndex[0x2]; // 0xFC int16
    std::uint8_t m_bIsAdjacent[0x1]; // 0xFE bool
    std::uint8_t m_bDoDecalLightmapping[0x9]; // 0xFF bool
};

struct CGameScriptedMoveData {
    static constexpr std::size_t size = 0x74;
    std::uint8_t m_vAccumulatedRootMotion[0xC]; // 0x0 Vector
    std::uint8_t m_angAccumulatedRootMotionRotation[0xC]; // 0xC QAngle
    std::uint8_t m_vSrc[0xC]; // 0x18 VectorWS
    std::uint8_t m_angSrc[0xC]; // 0x24 QAngle
    std::uint8_t m_angCurrent[0xC]; // 0x30 QAngle
    std::uint8_t m_flLockedSpeed[0x4]; // 0x3C float32
    std::uint8_t m_flAngRate[0x4]; // 0x40 float32
    std::uint8_t m_flDuration[0x4]; // 0x44 float32
    std::uint8_t m_flStartTime[0x4]; // 0x48 GameTime_t
    std::uint8_t m_bActive[0x1]; // 0x4C bool
    std::uint8_t m_bTeleportOnEnd[0x1]; // 0x4D bool
    std::uint8_t m_bIgnoreRotation[0x1]; // 0x4E bool
    std::uint8_t m_bSuccess[0x1]; // 0x4F bool
    std::uint8_t m_nForcedCrouchState[0x4]; // 0x50 ForcedCrouchState_t
    std::uint8_t m_bIgnoreCollisions[0x4]; // 0x54 bool
    std::uint8_t m_vDest[0xC]; // 0x58 Vector
    std::uint8_t m_angDst[0xC]; // 0x64 QAngle
    std::uint8_t m_hDestEntity[0x4]; // 0x70 CHandle<CBaseEntity>
};

struct CSkeletonAnimationController {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pSkeletonInstance[0x8]; // 0x8 CSkeletonInstance*
};

struct CNavVolumeMarkupVolume {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t pad_0[0xE0]; // 0x0
};

struct CResponseCriteriaSet {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_bOverrideOnAppend[0x8]; // 0x30 bool
};

struct FuncRotatorRotationSummary_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t nTick[0x4]; // 0x0 GameTick_t
    std::uint8_t nFlags[0x4]; // 0x4 FuncRotatorRotationSummaryFlags_t
};

struct CAI_Expresser {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_conceptCooldowns[0x28]; // 0x10 CUtlDict<GameTime_t>
    std::uint8_t m_ruleCooldowns[0x28]; // 0x38 CUtlDict<GameTime_t>
    std::uint8_t m_flStopTalkTime[0x4]; // 0x60 GameTime_t
    std::uint8_t m_flStopTalkTimeWithoutDelay[0x4]; // 0x64 GameTime_t
    std::uint8_t m_flQueuedSpeechTime[0x4]; // 0x68 GameTime_t
    std::uint8_t m_flBlockedTalkTime[0x4]; // 0x6C GameTime_t
    std::uint8_t m_voicePitch[0x4]; // 0x70 int32
    std::uint8_t m_flLastTimeAcceptedSpeak[0x4]; // 0x74 GameTime_t
    std::uint8_t m_bAllowSpeakingInterrupts[0x1]; // 0x78 bool
    std::uint8_t m_bConsiderSceneInvolvementAsSpeech[0x1]; // 0x79 bool
    std::uint8_t m_bSceneEntityDisabled[0x2]; // 0x7A bool
    std::uint8_t m_nLastSpokenPriority[0x1C]; // 0x7C int32
    std::uint8_t m_pOuter[0x8]; // 0x98 CBaseModelEntity*
};

struct IChoreoServices {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNmEventConsumerAttributes {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CStopwatch {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0xC]; // 0x0
    std::uint8_t m_flInterval[0x4]; // 0xC float32
};

struct CNmEventConsumerCloth {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct ResponseParams {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t odds[0x2]; // 0x10 int16
    std::uint8_t flags[0x6]; // 0x12 int16
    std::uint8_t m_pFollowup[0x8]; // 0x18 ResponseFollowup*
};

struct SPAWNGROUP_HEADER {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_sGroupName[0x8]; // 0x0 CUtlString
    std::uint8_t m_sEntityLumpName[0x8]; // 0x8 CUtlString
    std::uint8_t m_vecWorldOffset[0x30]; // 0x10 matrix3x4a_t
    std::uint8_t m_bClientSpawnGroup[0x1]; // 0x40 bool
    std::uint8_t m_bSuppressAllEntities[0xF]; // 0x41 bool
};

struct globalentity_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t name[0x2]; // 0x0 CUtlSymbol
    std::uint8_t levelName[0x2]; // 0x2 CUtlSymbol
    std::uint8_t state[0x4]; // 0x4 GLOBALESTATE
    std::uint8_t counter[0x4]; // 0x8 int32
};

struct CAnimGraphControllerPtr {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pController[0x8]; // 0x0 CAnimGraphControllerBase*
};

struct ConstraintSoundInfo {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vSampler[0x18]; // 0x8 VelocitySampler
    std::uint8_t m_soundProfile[0x20]; // 0x20 SimpleConstraintSoundProfile
    std::uint8_t m_forwardAxis[0x10]; // 0x40 Vector
    std::uint8_t m_iszTravelSoundFwd[0x8]; // 0x50 CUtlSymbolLarge
    std::uint8_t m_iszTravelSoundBack[0x20]; // 0x58 CUtlSymbolLarge
    std::uint8_t m_iszReversalSoundSmall[0x8]; // 0x78 CUtlSymbolLarge
    std::uint8_t m_iszReversalSoundMedium[0x8]; // 0x80 CUtlSymbolLarge
    std::uint8_t m_iszReversalSoundLarge[0x8]; // 0x88 CUtlSymbolLarge
    std::uint8_t m_bPlayTravelSound[0x1]; // 0x90 bool
    std::uint8_t m_bPlayReversalSound[0x7]; // 0x91 bool
};

struct CPhysicsBodyGameMarkup {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_TargetBody[0x8]; // 0x0 CUtlString
    std::uint8_t m_Tag[0x8]; // 0x8 CGlobalSymbol
};

struct PointCameraSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_flNearBlurryDistance[0x4]; // 0x0 float32
    std::uint8_t m_flNearCrispDistance[0x4]; // 0x4 float32
    std::uint8_t m_flFarCrispDistance[0x4]; // 0x8 float32
    std::uint8_t m_flFarBlurryDistance[0x4]; // 0xC float32
};

struct HUDPanelHasClass_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nPanelIdIndex[0x2]; // 0x0 uint16
    std::uint8_t m_nClassNameIndex[0x2]; // 0x2 uint16
    std::uint8_t m_eClassStatus[0x4]; // 0x4 EHudPanelClassStatus_t
};

struct DebugDrawBoneTransforms_t {
    static constexpr std::size_t size = 0x1030;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t vecBones[0x1020]; // 0x10 CUtlVectorFixedGrowable<CTransform,128>
};

struct INavPathCost {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_navHull[0x8]; // 0x8 NavHull_t
};

struct CVectorMovingAverage {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct HUDPanelDialogVariableString_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nPanelIdIndex[0x2]; // 0x8 uint16
    std::uint8_t m_nDialogVariableIndex[0x6]; // 0xA uint16
    std::uint8_t m_sValue[0x8]; // 0x10 CUtlString
    std::uint8_t m_bIsSet[0x8]; // 0x18 bool
};

struct CSoundEnvelope {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_current[0x4]; // 0x0 float32
    std::uint8_t m_target[0x4]; // 0x4 float32
    std::uint8_t m_rate[0x4]; // 0x8 float32
    std::uint8_t m_forceupdate[0x4]; // 0xC bool
};

struct dynpitchvol_base_t {
    static constexpr std::size_t size = 0x64;
    std::uint8_t preset[0x4]; // 0x0 int32
    std::uint8_t pitchrun[0x4]; // 0x4 int32
    std::uint8_t pitchstart[0x4]; // 0x8 int32
    std::uint8_t spinup[0x4]; // 0xC int32
    std::uint8_t spindown[0x4]; // 0x10 int32
    std::uint8_t volrun[0x4]; // 0x14 int32
    std::uint8_t volstart[0x4]; // 0x18 int32
    std::uint8_t fadein[0x4]; // 0x1C int32
    std::uint8_t fadeout[0x4]; // 0x20 int32
    std::uint8_t lfotype[0x4]; // 0x24 int32
    std::uint8_t lforate[0x4]; // 0x28 int32
    std::uint8_t lfomodpitch[0x4]; // 0x2C int32
    std::uint8_t lfomodvol[0x4]; // 0x30 int32
    std::uint8_t cspinup[0x4]; // 0x34 int32
    std::uint8_t cspincount[0x4]; // 0x38 int32
    std::uint8_t pitch[0x4]; // 0x3C int32
    std::uint8_t spinupsav[0x4]; // 0x40 int32
    std::uint8_t spindownsav[0x4]; // 0x44 int32
    std::uint8_t pitchfrac[0x4]; // 0x48 int32
    std::uint8_t vol[0x4]; // 0x4C int32
    std::uint8_t fadeinsav[0x4]; // 0x50 int32
    std::uint8_t fadeoutsav[0x4]; // 0x54 int32
    std::uint8_t volfrac[0x4]; // 0x58 int32
    std::uint8_t lfofrac[0x4]; // 0x5C int32
    std::uint8_t lfomult[0x4]; // 0x60 int32
};

struct CStopwatchBase {
    static constexpr std::size_t size = 0xC;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bIsRunning[0x4]; // 0x8 bool
};

struct AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t description[0x8]; // 0x0 CUtlString
    std::uint8_t location[0x10]; // 0x8 VectorWS
};

struct CMarkupSearch_PathCostAreaFilter {
    static constexpr std::size_t size = 0x2B8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_searchHelper[0x2B0]; // 0x8 CMarkupSearchHelper
};

struct CNavVolumeVector {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_bHasBeenPreFiltered[0x20]; // 0x80 bool
};

struct NavGravity_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_vGravity[0xC]; // 0x0 Vector
    std::uint8_t m_bDefault[0x4]; // 0xC bool
};

struct PulseScriptedSequenceData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_nActorID[0x8]; // 0x0 int32
    std::uint8_t m_szPreIdleSequence[0x8]; // 0x8 CUtlString
    std::uint8_t m_szEntrySequence[0x8]; // 0x10 CUtlString
    std::uint8_t m_szSequence[0x8]; // 0x18 CUtlString
    std::uint8_t m_szExitSequence[0x8]; // 0x20 CUtlString
    std::uint8_t m_nMoveTo[0x4]; // 0x28 ScriptedMoveTo_t
    std::uint8_t m_nMoveToGait[0x4]; // 0x2C SharedMovementGait_t
    std::uint8_t m_nHeldWeaponBehavior[0x4]; // 0x30 ScriptedHeldWeaponBehavior_t
    std::uint8_t m_bLoopPreIdleSequence[0x1]; // 0x34 bool
    std::uint8_t m_bLoopActionSequence[0x1]; // 0x35 bool
    std::uint8_t m_bLoopPostIdleSequence[0x1]; // 0x36 bool
    std::uint8_t m_bIgnoreLookAt[0x1]; // 0x37 bool
};

struct CChoreo_GraphController {
    static constexpr std::size_t size = 0x108;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_eChoreoState[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_tChoreoTargetWarp[0x18]; // 0xD8 CAnimGraph2ParamOptionalRef<CTransform>
    std::uint8_t m_tChoreoExitWarp[0x18]; // 0xF0 CAnimGraph2ParamOptionalRef<CTransform>
};

struct CBaseAnimGraphDestructibleParts_GraphController {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0xC0]; // 0x0
};

struct ExternalAnimGraphHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct CPhysicsShake {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_force[0x10]; // 0x8 Vector
};

struct CInfoChoreoAnchorPosition {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_vOriginLS[0x10]; // 0x0 Vector
    std::uint8_t m_qAnglesLS[0x10]; // 0x10 Quaternion
    std::uint8_t m_vExtentsMin[0xC]; // 0x20 Vector
    std::uint8_t m_vExtentsMax[0xC]; // 0x2C Vector
    std::uint8_t m_flRadius[0x4]; // 0x38 float32
    std::uint8_t m_bOnlyWarpPosition[0x4]; // 0x3C bool
    std::uint8_t m_hParent[0x4]; // 0x40 CHandle<CBaseEntity>
    std::uint8_t m_nShapeType[0xC]; // 0x44 CInfoChoreoLocatorShapeType_t
};

struct VelocitySampler {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_prevSample[0xC]; // 0x0 Vector
    std::uint8_t m_fPrevSampleTime[0x4]; // 0xC GameTime_t
    std::uint8_t m_fIdealSampleRate[0x4]; // 0x10 float32
};

struct CTakeDamageResult {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_pOriginatingInfo[0x8]; // 0x0 CTakeDamageInfo*
    std::uint8_t m_DestructibleHitGroupRequests[0x10]; // 0x8 CUtlLeanVector<DestructiblePartDamageRequest_t>
    std::uint8_t m_nHealthLost[0x4]; // 0x18 int32
    std::uint8_t m_nHealthBefore[0x4]; // 0x1C int32
    std::uint8_t m_flDamageDealt[0x4]; // 0x20 float32
    std::uint8_t m_flPreModifiedDamage[0x4]; // 0x24 float32
    std::uint8_t m_vDamagePosition[0xC]; // 0x28 VectorWS
    std::uint8_t m_nTotalledHealthLost[0x4]; // 0x34 int32
    std::uint8_t m_flTotalledDamageDealt[0x4]; // 0x38 float32
    std::uint8_t m_flTotalledPreModifiedDamage[0x4]; // 0x3C float32
    std::uint8_t m_flNewDamageAccumulatorValue[0x8]; // 0x40 float32
    std::uint8_t m_nDamageFlags[0x8]; // 0x48 TakeDamageFlags_t
    std::uint8_t m_bWasDamageSuppressed[0x1]; // 0x50 bool
    std::uint8_t m_bSuppressFlinch[0x3]; // 0x51 bool
    std::uint8_t m_nOverrideFlinchHitGroup[0xC]; // 0x54 HitGroup_t
};

struct CMarkupSearchHelper {
    static constexpr std::size_t size = 0x2B0;
    std::uint8_t m_navHull[0x8]; // 0x0 NavHull_t
    std::uint8_t m_tagString[0x8]; // 0x8 CUtlString
    std::uint8_t m_nameString[0x8]; // 0x10 CUtlString
    std::uint8_t m_vRefPos[0xC]; // 0x18 VectorWS
    std::uint8_t m_bRefPosSet[0x1]; // 0x24 bool
    std::uint8_t m_bUseStepHeight[0x1]; // 0x25 bool
    std::uint8_t m_bActive[0x28A]; // 0x26 bool
};

struct SceneEventId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct CCommentarySystem {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x12]; // 0x0
    std::uint8_t m_bCommentaryEnabledMidGame[0x2]; // 0x12 bool
    std::uint8_t m_flNextTeleportTime[0x4]; // 0x14 GameTime_t
    std::uint8_t m_iTeleportStage[0x4]; // 0x18 int32
    std::uint8_t m_bCheatState[0x1]; // 0x1C bool
    std::uint8_t m_bIsFirstSpawnGroupToLoad[0x3]; // 0x1D bool
    std::uint8_t m_ModifiedConvars[0x18]; // 0x20 CUtlVector<modifiedconvars_t>
    std::uint8_t m_hCurrentNode[0x4]; // 0x38 CHandle<CPointCommentaryNode>
    std::uint8_t m_hActiveCommentaryNode[0x4]; // 0x3C CHandle<CPointCommentaryNode>
    std::uint8_t m_hLastCommentaryNode[0x8]; // 0x40 CHandle<CPointCommentaryNode>
    std::uint8_t m_vecNodes[0x18]; // 0x48 CUtlVector<CHandle<CPointCommentaryNode>>
};

struct ResponseFollowup {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t followup_concept[0x8]; // 0x0 char*
    std::uint8_t followup_contexts[0x8]; // 0x8 char*
    std::uint8_t followup_delay[0x4]; // 0x10 float32
    std::uint8_t followup_target[0x8]; // 0x14 char*
};

struct AmmoTypeInfo_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nMaxCarry[0xC]; // 0x10 int32
    std::uint8_t m_nSplashSize[0x8]; // 0x1C CRangeInt
    std::uint8_t m_nFlags[0x4]; // 0x24 AmmoFlags_t
    std::uint8_t m_flMass[0x4]; // 0x28 float32
    std::uint8_t m_flSpeed[0xC]; // 0x2C CRangeFloat
};

struct CNetworkTransmitComponent {
    static constexpr std::size_t size = 0x1D0;
    std::uint8_t pad_0[0x184]; // 0x0
    std::uint8_t m_nTransmitStateOwnedCounter[0x4C]; // 0x184 uint8
};

struct AI_MotorServices_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t active_motor[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t desired_speed[0x4]; // 0x8 float32
    std::uint8_t motor_velocity[0xC]; // 0xC Vector
    std::uint8_t motor_path[0x18]; // 0x18 CUtlVector<AI_MotorServices_DebugSnapshotData_t::MotorPathWaypoint_t>
    std::uint8_t ground_entity_debug_name[0x8]; // 0x30 CUtlString
};

struct CPathQueryUtil {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_PathToEntityTransform[0x20]; // 0x10 CTransform
    std::uint8_t m_vecPathSamplePositions[0x18]; // 0x30 CUtlVector<Vector>
    std::uint8_t m_vecPathSampleParameters[0x18]; // 0x48 CUtlVector<float32>
    std::uint8_t m_vecPathSampleDistances[0x18]; // 0x60 CUtlVector<float32>
    std::uint8_t m_bIsClosedLoop[0x8]; // 0x78 bool
};

struct RagdollCreationParams_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vForce[0xC]; // 0x0 Vector
    std::uint8_t m_nForceBone[0x4]; // 0xC int32
    std::uint8_t m_bForceCurrentWorldTransform[0x4]; // 0x10 bool
    std::uint8_t m_nHealthToGrant[0x4]; // 0x14 int32
};

struct CRelativeTransform {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_bTransformIsWorldSpace[0x10]; // 0x0 bool
    std::uint8_t m_transform[0x20]; // 0x10 CTransform
    std::uint8_t m_transformWS[0x20]; // 0x30 CTransformWS
    std::uint8_t m_hEntity[0x10]; // 0x50 CHandle<CBaseEntity>
};

struct CRangeInt {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pValue[0x8]; // 0x0 int32[2]
};

struct PathCost {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x3C]; // 0x0
    std::uint8_t m_dangerFactor[0x4]; // 0x3C float32
    std::uint8_t m_damagingAreasPenaltyCost[0x4]; // 0x40 float32
    std::uint8_t m_flAgentMaxClimb[0x1C]; // 0x44 float32
};

struct globalentitydatabase_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_list[0x18]; // 0x60 CUtlVector<globalentity_t>
};

struct CNmEventConsumerPulse {
    static constexpr std::size_t size = 0xC8;
    std::uint8_t pad_0[0xC8]; // 0x0
};

struct CNMEventPulseState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_eventID[0x8]; // 0x0 CGlobalSymbol
};

struct CWorldCompositionChunkReferenceElement_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_strMapToLoad[0x8]; // 0x0 CUtlString
    std::uint8_t m_strLandmarkName[0x8]; // 0x8 CUtlString
};

struct CRandStopwatch {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0xC]; // 0x0
    std::uint8_t m_flMinInterval[0x4]; // 0xC float32
    std::uint8_t m_flMaxInterval[0x4]; // 0x10 float32
};

struct CMovementStatsProperty {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nUseCounter[0x4]; // 0x10 int32
    std::uint8_t m_emaMovementDirection[0x2C]; // 0x14 CVectorExponentialMovingAverage
};

struct CGameChoreoServices {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hOwner[0x4]; // 0x8 CHandle<CBaseModelEntity>
    std::uint8_t m_hScriptedSequence[0x4]; // 0xC CHandle<CScriptedSequence>
    std::uint8_t m_scriptState[0x4]; // 0x10 IChoreoServices::ScriptState_t
    std::uint8_t m_choreoState[0x4]; // 0x14 IChoreoServices::ChoreoState_t
    std::uint8_t m_flTimeStartedState[0x8]; // 0x18 GameTime_t
};

struct PhysObjectHeader_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t type[0x4]; // 0x0 PhysInterfaceId_t
    std::uint8_t hEntity[0x4]; // 0x4 CHandle<CBaseEntity>
    std::uint8_t fieldName[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t bSaveObject[0x8]; // 0x10 bool
    std::uint8_t modelName[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t bbox[0x18]; // 0x20 AABB_t
    std::uint8_t sphere[0x4]; // 0x38 physics_save_sphere_t
    std::uint8_t iCollide[0x4]; // 0x3C int32
};

struct CSimpleStopwatch {
    static constexpr std::size_t size = 0xC;
    std::uint8_t pad_0[0xC]; // 0x0
};

struct CShatterGlassShard {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hShardHandle[0x8]; // 0x8 uint32
    std::uint8_t m_vecPanelVertices[0x18]; // 0x10 CUtlVector<Vector2D>
    std::uint8_t m_vLocalPanelSpaceOrigin[0x8]; // 0x28 Vector2D
    std::uint8_t m_hModel[0x8]; // 0x30 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_hPhysicsEntity[0x4]; // 0x38 CHandle<CShatterGlassShardPhysics>
    std::uint8_t m_hParentPanel[0x4]; // 0x3C CHandle<CFuncShatterglass>
    std::uint8_t m_hParentShard[0x4]; // 0x40 uint32
    std::uint8_t m_ShatterStressType[0x4]; // 0x44 ShatterGlassStressType
    std::uint8_t m_vecStressVelocity[0xC]; // 0x48 Vector
    std::uint8_t m_bCreatedModel[0x4]; // 0x54 bool
    std::uint8_t m_flLongestEdge[0x4]; // 0x58 float32
    std::uint8_t m_flShortestEdge[0x4]; // 0x5C float32
    std::uint8_t m_flLongestAcross[0x4]; // 0x60 float32
    std::uint8_t m_flShortestAcross[0x4]; // 0x64 float32
    std::uint8_t m_flSumOfAllEdges[0x4]; // 0x68 float32
    std::uint8_t m_flArea[0x4]; // 0x6C float32
    std::uint8_t m_nOnFrameEdge[0x4]; // 0x70 OnFrame
    std::uint8_t m_nSubShardGeneration[0x4]; // 0x74 int32
    std::uint8_t m_vecAverageVertPosition[0x8]; // 0x78 Vector2D
    std::uint8_t m_bAverageVertPositionIsValid[0x4]; // 0x80 bool
    std::uint8_t m_vecPanelSpaceStressPositionA[0x8]; // 0x84 Vector2D
    std::uint8_t m_vecPanelSpaceStressPositionB[0x8]; // 0x8C Vector2D
    std::uint8_t m_bStressPositionAIsValid[0x1]; // 0x94 bool
    std::uint8_t m_bStressPositionBIsValid[0x1]; // 0x95 bool
    std::uint8_t m_bFlaggedForRemoval[0x2]; // 0x96 bool
    std::uint8_t m_flPhysicsEntitySpawnedAtTime[0x4]; // 0x98 GameTime_t
    std::uint8_t m_hEntityHittingMe[0x4]; // 0x9C CHandle<CBaseEntity>
    std::uint8_t m_vecNeighbors[0x18]; // 0xA0 CUtlVector<uint32>
};

struct ragdollelement_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t originParentSpace[0x20]; // 0x0 Vector
    std::uint8_t parentIndex[0x4]; // 0x20 int32
    std::uint8_t m_flRadius[0x4]; // 0x24 float32
    std::uint8_t m_nHeight[0x8]; // 0x28 int32
};

struct CGameScriptedMoveDef_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_vDestOffset[0xC]; // 0x0 Vector
    std::uint8_t m_hDestEntity[0x4]; // 0xC CHandle<CBaseEntity>
    std::uint8_t m_angDest[0xC]; // 0x10 QAngle
    std::uint8_t m_flDuration[0x4]; // 0x1C float32
    std::uint8_t m_flAngRate[0x4]; // 0x20 float32
    std::uint8_t m_flMoveSpeed[0x4]; // 0x24 float32
    std::uint8_t m_bAimDisabled[0x1]; // 0x28 bool
    std::uint8_t m_bIgnoreRotation[0x3]; // 0x29 bool
    std::uint8_t m_nForcedCrouchState[0x4]; // 0x2C ForcedCrouchState_t
};

struct CNetworkOriginCellCoordQuantizedVector {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_cellX[0x2]; // 0x10 uint16
    std::uint8_t m_cellY[0x2]; // 0x12 uint16
    std::uint8_t m_cellZ[0x2]; // 0x14 uint16
    std::uint8_t m_nOutsideWorld[0x2]; // 0x16 uint16
    std::uint8_t m_vecX[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x20 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x28 CNetworkedQuantizedFloat
};

struct CBaseAnimGraphVariationUserData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct DynamicVolumeDef_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_source[0x4]; // 0x0 CHandle<CBaseEntity>
    std::uint8_t m_target[0x4]; // 0x4 CHandle<CBaseEntity>
    std::uint8_t m_nHullIdx[0x4]; // 0x8 int32
    std::uint8_t m_vSourceAnchorPos[0xC]; // 0xC VectorWS
    std::uint8_t m_vTargetAnchorPos[0xC]; // 0x18 VectorWS
    std::uint8_t m_nAreaSrc[0x4]; // 0x24 uint32
    std::uint8_t m_nAreaDst[0x4]; // 0x28 uint32
    std::uint8_t m_bAttached[0x4]; // 0x2C bool
};

struct CNetworkOriginQuantizedVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_vecX[0x8]; // 0x10 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x20 CNetworkedQuantizedFloat
};

struct magnetted_objects_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t hEntity[0x8]; // 0x8 CHandle<CBaseEntity>
};

struct CHintMessageQueue {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_tmMessageEnd[0x8]; // 0x0 float32
    std::uint8_t m_messages[0x18]; // 0x8 CUtlVector<CHintMessage*>
    std::uint8_t m_pPlayerController[0x8]; // 0x20 CBasePlayerController*
};

struct CSkillInt {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pValue[0x10]; // 0x0 int32[4]
};

struct thinkfunc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_think[0x8]; // 0x0 BASEPTR
    std::uint8_t m_hFn[0x8]; // 0x8 HSCRIPT
    std::uint8_t m_nContext[0x4]; // 0x10 CUtlStringToken
    std::uint8_t m_nNextThinkTick[0x4]; // 0x14 GameTick_t
    std::uint8_t m_nLastThinkTick[0x8]; // 0x18 GameTick_t
};

struct CNavHullPresetVData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vecNavHulls[0x18]; // 0x0 CUtlVector<CUtlString>
};

struct CSkillFloat {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pValue[0x10]; // 0x0 float32[4]
};

struct WaterWheelFrictionScale_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flFractionOfWheelSubmerged[0x4]; // 0x0 float32
    std::uint8_t m_flFrictionScale[0x4]; // 0x4 float32
};

struct ragdollhierarchyjoint_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t parentIndex[0x4]; // 0x0 int32
    std::uint8_t childIndex[0xC]; // 0x4 int32
};

struct CSceneEventInfo {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_iLayer[0x4]; // 0x0 int32
    std::uint8_t m_iPriority[0x4]; // 0x4 int32
    std::uint8_t m_hSequence[0x4]; // 0x8 HSequence
    std::uint8_t m_flWeight[0x4]; // 0xC float32
    std::uint8_t m_flLastAccumulatedTime[0x4]; // 0x10 float32
    std::uint8_t m_flLastJumpFromTime[0x4]; // 0x14 float32
    std::uint8_t m_flLastJumpToTime[0x4]; // 0x18 float32
    std::uint8_t m_flLastCycle[0x4]; // 0x1C float32
    std::uint8_t m_hAnimClip[0x8]; // 0x20 CStrongHandle<InfoForResourceTypeCNmClip>
    std::uint8_t m_sAnimClipSlot[0x8]; // 0x28 CGlobalSymbol
    std::uint8_t m_sAnimClipSlotWeight[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t m_bHasArrived[0x4]; // 0x38 bool
    std::uint8_t m_nType[0x4]; // 0x3C int32
    std::uint8_t m_flNext[0x4]; // 0x40 GameTime_t
    std::uint8_t m_bIsGesture[0x1]; // 0x44 bool
    std::uint8_t m_bShouldRemove[0x27]; // 0x45 bool
    std::uint8_t m_hTarget[0x4]; // 0x6C CHandle<CBaseEntity>
    std::uint8_t m_nSceneEventId[0x4]; // 0x70 SceneEventId_t
    std::uint8_t m_bClientSide[0x1]; // 0x74 bool
    std::uint8_t m_bStarted[0x3]; // 0x75 bool
};

struct SoundeventPathCornerPairNetworked_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t vP1[0xC]; // 0x0 VectorWS
    std::uint8_t vP2[0xC]; // 0xC VectorWS
    std::uint8_t flPathLengthSqr[0x4]; // 0x18 float32
    std::uint8_t flP1Pct[0x4]; // 0x1C float32
    std::uint8_t flP2Pct[0x4]; // 0x20 float32
};

struct CSoundPatch {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pitch[0x10]; // 0x8 CSoundEnvelope
    std::uint8_t m_volume[0x24]; // 0x18 CSoundEnvelope
    std::uint8_t m_shutdownTime[0x4]; // 0x3C float32
    std::uint8_t m_flLastTime[0x8]; // 0x40 float32
    std::uint8_t m_iszSoundScriptName[0x8]; // 0x48 CUtlSymbolLarge
    std::uint8_t m_hEnt[0x4]; // 0x50 CHandle<CBaseEntity>
    std::uint8_t m_soundEntityIndex[0x4]; // 0x54 CEntityIndex
    std::uint8_t m_soundOrigin[0xC]; // 0x58 VectorWS
    std::uint8_t m_isPlaying[0x4]; // 0x64 int32
    std::uint8_t m_Filter[0x38]; // 0x68 CCopyRecipientFilter
    std::uint8_t m_flCloseCaptionDuration[0x4]; // 0xA0 float32
    std::uint8_t m_bUpdatedSoundOrigin[0x4]; // 0xA4 bool
    std::uint8_t m_iszClassName[0x8]; // 0xA8 CUtlSymbolLarge
};

struct CCS2ChickenGraphController {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_action[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_bActionReset[0x20]; // 0xD8 CAnimGraph2ParamAutoResetOptionalRef
    std::uint8_t m_actionVariation[0x18]; // 0xF8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bInWater[0x18]; // 0x110 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_mode[0x18]; // 0x128 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_lifeStage[0x18]; // 0x140 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_idlePhase[0x18]; // 0x158 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_turnAngle[0x18]; // 0x170 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bHasLookatTarget[0x18]; // 0x188 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_lookatTarget[0x18]; // 0x1A0 CAnimGraph2ParamOptionalRef<Vector>
    std::uint8_t m_bFlinch[0x18]; // 0x1B8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flinchVariation[0x18]; // 0x1D0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bHasActionCompletedEvent[0x8]; // 0x1E8 bool
};

struct levellist_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_sMapName[0x8]; // 0x0 CUtlString
    std::uint8_t m_sLandmarkName[0x8]; // 0x8 CUtlString
    std::uint8_t m_hEntLandmark[0x4]; // 0x10 CEntityHandle
    std::uint8_t m_vecLandmarkOrigin[0xC]; // 0x14 VectorWS
    std::uint8_t m_vecLandmarkAngles[0x10]; // 0x20 QAngle
};

struct locksound_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t sLockedSound[0x8]; // 0x8 CGameSoundEventName
    std::uint8_t sUnlockedSound[0x8]; // 0x10 CGameSoundEventName
    std::uint8_t flwaitSound[0x8]; // 0x18 GameTime_t
};

struct DecalGroupOption_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_hMaterial[0x8]; // 0x0 CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
    std::uint8_t m_sSequenceName[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_flProbability[0x4]; // 0x10 float32
    std::uint8_t m_bEnableAngleBetweenNormalAndGravityRange[0x4]; // 0x14 bool
    std::uint8_t m_flMinAngleBetweenNormalAndGravity[0x4]; // 0x18 float32
    std::uint8_t m_flMaxAngleBetweenNormalAndGravity[0x4]; // 0x1C float32
};

struct CBtNode {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CAnimGraphControllerManager {
    static constexpr std::size_t size = 0x98;
    std::uint8_t m_controllers[0x90]; // 0x0 CUtlVector<CAnimGraphControllerBase*>
    std::uint8_t m_bGraphBindingsCreated[0x8]; // 0x90 bool
};

struct CFiringModeFloat {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flValues[0x8]; // 0x0 float32[2]
};

struct CCopyRecipientFilter {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Flags[0x8]; // 0x8 int32
    std::uint8_t m_Recipients[0x20]; // 0x10 CUtlVector<CPlayerSlot>
    std::uint8_t m_slotPlayerExcludedDueToPrediction[0x8]; // 0x30 CPlayerSlot
};

struct CFloatMovingAverage {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct FuncMoverMovementSummary_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t flStartT[0x4]; // 0x0 float32
    std::uint8_t flEndT[0x4]; // 0x4 float32
    std::uint8_t nStartNodeIndex[0x4]; // 0x8 int32
    std::uint8_t nStopNodeIndex[0x4]; // 0xC int32
    std::uint8_t nMovementMode[0x4]; // 0x10 int32
    std::uint8_t nFlags[0x4]; // 0x14 FuncMoverMovementSummaryFlags_t
    std::uint8_t nTick[0x4]; // 0x18 GameTick_t
    std::uint8_t hPathMover[0x4]; // 0x1C CHandle<CPathMover>
};

struct CSmoothFunc {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flSmoothAmplitude[0x4]; // 0x8 float32
    std::uint8_t m_flSmoothBias[0x4]; // 0xC float32
    std::uint8_t m_flSmoothDuration[0x4]; // 0x10 float32
    std::uint8_t m_flSmoothRemainingTime[0x4]; // 0x14 float32
    std::uint8_t m_nSmoothDir[0x8]; // 0x18 int32
};

struct IHasAttributes {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct ragdoll_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t list[0x18]; // 0x0 CUtlVector<ragdollelement_t>
    std::uint8_t hierarchyJoints[0x18]; // 0x18 CUtlVector<ragdollhierarchyjoint_t>
    std::uint8_t boneIndex[0x18]; // 0x30 CUtlVector<int32>
    std::uint8_t allowStretch[0x1]; // 0x48 bool
    std::uint8_t unused[0x7]; // 0x49 bool
};

struct HullFlags_t {
    static constexpr std::size_t size = 0xA;
    std::uint8_t m_bHull_Human[0x1]; // 0x0 bool
    std::uint8_t m_bHull_SmallCentered[0x1]; // 0x1 bool
    std::uint8_t m_bHull_WideHuman[0x1]; // 0x2 bool
    std::uint8_t m_bHull_Tiny[0x1]; // 0x3 bool
    std::uint8_t m_bHull_Medium[0x1]; // 0x4 bool
    std::uint8_t m_bHull_TinyCentered[0x1]; // 0x5 bool
    std::uint8_t m_bHull_Large[0x1]; // 0x6 bool
    std::uint8_t m_bHull_LargeCentered[0x1]; // 0x7 bool
    std::uint8_t m_bHull_MediumTall[0x1]; // 0x8 bool
    std::uint8_t m_bHull_Small[0x1]; // 0x9 bool
};

struct CNavFlags {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_Flags[0x8]; // 0x0 uint64
};

struct ISkeletonAnimationController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNetworkOriginQuantizedVectorWS {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_vecX[0x8]; // 0x10 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x20 CNetworkedQuantizedFloat
};

struct GameAmmoTypeInfo_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_nBuySize[0x4]; // 0x38 int32
    std::uint8_t m_nCost[0x14]; // 0x3C int32
};

struct CMotorController {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_speed[0x4]; // 0x8 float32
    std::uint8_t m_maxTorque[0x4]; // 0xC float32
    std::uint8_t m_axis[0xC]; // 0x10 Vector
    std::uint8_t m_inertiaFactor[0x4]; // 0x1C float32
};

struct CSimTimer {
    static constexpr std::size_t size = 0xC;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flInterval[0x4]; // 0x8 float32
};

struct CBaseIssue {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_szTypeString[0x40]; // 0x20 char[64]
    std::uint8_t m_szDetailsString[0x104]; // 0x60 char[260]
    std::uint8_t m_iNumYesVotes[0x4]; // 0x164 int32
    std::uint8_t m_iNumNoVotes[0x4]; // 0x168 int32
    std::uint8_t m_iNumPotentialVotes[0x4]; // 0x16C int32
    std::uint8_t m_pVoteController[0x8]; // 0x170 CVoteController*
};

struct CDynamicPropGraphController {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_sActionState[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
};

struct SummaryTakeDamageInfo_t {
    static constexpr std::size_t size = 0x188;
    std::uint8_t nSummarisedCount[0x8]; // 0x0 int32
    std::uint8_t info[0x118]; // 0x8 CTakeDamageInfo
    std::uint8_t result[0x60]; // 0x120 CTakeDamageResult
    std::uint8_t hTarget[0x8]; // 0x180 CHandle<CBaseEntity>
};

struct INavObstacle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nId[0x8]; // 0x8 uint64
};

struct entitytable_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t id[0x4]; // 0x0 int32
    std::uint8_t edictindex[0x4]; // 0x4 CEntityIndex
    std::uint8_t saveentityindex[0xC]; // 0x8 CEntityIndex
    std::uint8_t bWasSaved[0x4]; // 0x14 bool
    std::uint8_t flags[0x8]; // 0x18 SaveRestoreTableFlags_t
    std::uint8_t classname[0x8]; // 0x20 CUtlSymbolLarge
    std::uint8_t globalname[0x8]; // 0x28 CUtlSymbolLarge
    std::uint8_t entityname[0x8]; // 0x30 CUtlSymbolLarge
    std::uint8_t landmarkModelSpace[0x10]; // 0x38 Vector
    std::uint8_t m_pPrecacheEntityKeys[0x8]; // 0x48 CEntityKeyValues*
};

struct AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t position[0xC]; // 0x0 VectorWS
    std::uint8_t nav_type[0x4]; // 0xC uint32
    std::uint8_t flags[0x4]; // 0x10 uint32
};

struct CRR_Response {
    static constexpr std::size_t size = 0x1B8;
    std::uint8_t m_Type[0x1]; // 0x0 uint8
    std::uint8_t m_szResponseName[0xC0]; // 0x1 char[192]
    std::uint8_t m_szMatchingRule[0x9F]; // 0xC1 char[128]
    std::uint8_t m_Params[0x20]; // 0x160 ResponseParams
    std::uint8_t m_fMatchScore[0x4]; // 0x180 float32
    std::uint8_t m_bAnyMatchingRulesInCooldown[0x4]; // 0x184 bool
    std::uint8_t m_szSpeakerContext[0x8]; // 0x188 char*
    std::uint8_t m_szWorldContext[0x8]; // 0x190 char*
    std::uint8_t m_Followup[0x1C]; // 0x198 ResponseFollowup
    std::uint8_t m_recipientFilter[0x4]; // 0x1B4 CUtlSymbol
};

struct CVectorExponentialMovingAverage {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t pad_0[0x2C]; // 0x0
};

struct CNmAimCSNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nVerticalAngleNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_nHorizontalAngleNodeIdx[0x2]; // 0x1A int16
    std::uint8_t m_nWeaponCategoryNodeIdx[0x2]; // 0x1C int16
    std::uint8_t m_nWeaponTypeNodeIdx[0x2]; // 0x1E int16
    std::uint8_t m_nWeaponActionNodeIdx[0x2]; // 0x20 int16
    std::uint8_t m_nWeaponDropNodeIdx[0x2]; // 0x22 int16
    std::uint8_t m_nIsDefusingNodeIdx[0x2]; // 0x24 int16
    std::uint8_t m_nCrouchWeightNodeIdx[0x2]; // 0x26 int16
    std::uint8_t m_flHandIKBlendInTimeSeconds[0x4]; // 0x28 float32
    std::uint8_t m_flActionBlendTimeSeconds[0x4]; // 0x2C float32
    std::uint8_t m_flPlantingBlendTimeSeconds[0x8]; // 0x30 float32
};

struct CConstantForceController {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0xC]; // 0x0
    std::uint8_t m_linear[0xC]; // 0xC Vector
    std::uint8_t m_angular[0xC]; // 0x18 RotationVector
    std::uint8_t m_linearSave[0xC]; // 0x24 Vector
    std::uint8_t m_angularSave[0x10]; // 0x30 RotationVector
};

struct WaterWheelDrag_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flFractionOfWheelSubmerged[0x4]; // 0x0 float32
    std::uint8_t m_flWheelDrag[0x4]; // 0x4 float32
};

struct CTakeDamageInfo {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vecDamageForce[0xC]; // 0x8 Vector
    std::uint8_t m_vecDamagePosition[0xC]; // 0x14 VectorWS
    std::uint8_t m_vecReportedPosition[0xC]; // 0x20 VectorWS
    std::uint8_t m_vecDamageDirection[0xC]; // 0x2C Vector
    std::uint8_t m_hInflictor[0x4]; // 0x38 CHandle<CBaseEntity>
    std::uint8_t m_hAttacker[0x4]; // 0x3C CHandle<CBaseEntity>
    std::uint8_t m_hAbility[0x4]; // 0x40 CHandle<CBaseEntity>
    std::uint8_t m_flDamage[0x4]; // 0x44 float32
    std::uint8_t m_flTotalledDamage[0x4]; // 0x48 float32
    std::uint8_t m_bitsDamageType[0x4]; // 0x4C DamageTypes_t
    std::uint8_t m_iDamageCustom[0x4]; // 0x50 int32
    std::uint8_t m_iAmmoType[0xC]; // 0x54 AmmoIndex_t
    std::uint8_t m_flOriginalDamage[0x4]; // 0x60 float32
    std::uint8_t m_bShouldBleed[0x1]; // 0x64 bool
    std::uint8_t m_bShouldSpark[0xB]; // 0x65 bool
    std::uint8_t m_nDamageFlags[0x8]; // 0x70 TakeDamageFlags_t
    std::uint8_t m_iHitGroupId[0x4]; // 0x78 HitGroup_t
    std::uint8_t m_nNumObjectsPenetrated[0x4]; // 0x7C int32
    std::uint8_t m_flFriendlyFireDamageReductionRatio[0x4]; // 0x80 float32
    std::uint8_t m_bStoppedBullet[0x7C]; // 0x84 bool
    std::uint8_t m_DestructibleHitGroupRequests[0x10]; // 0x100 CUtlLeanVector<DestructiblePartDamageRequest_t>
    std::uint8_t m_bInTakeDamageFlow[0x8]; // 0x110 bool
};

struct CRandSimTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flMinInterval[0x4]; // 0x8 float32
    std::uint8_t m_flMaxInterval[0x4]; // 0xC float32
};

struct CBtNodeComposite {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CRelativeLocation {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Type[0x4]; // 0x18 RelativeLocationType_t
    std::uint8_t m_vRelativeOffset[0xC]; // 0x1C Vector
    std::uint8_t m_vWorldSpacePos[0xC]; // 0x28 VectorWS
    std::uint8_t m_hEntity[0x4]; // 0x34 CHandle<CBaseEntity>
};

struct HostagePathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct Extent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t lo[0xC]; // 0x0 VectorWS
    std::uint8_t hi[0xC]; // 0xC VectorWS
};

struct sndopvarlatchdata_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_iszStack[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_iszOperator[0x8]; // 0x10 CUtlSymbolLarge
    std::uint8_t m_iszOpvar[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_flVal[0x4]; // 0x20 float32
    std::uint8_t m_vPos[0xC]; // 0x24 VectorWS
};

struct PrecipitationFilter_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flMaxRadius[0x4]; // 0x0 float32
};

struct IEconItemInterface {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct PathMoverEntitySpawn {
    static constexpr std::size_t size = 0x28;
    std::uint8_t hMover[0x8]; // 0x0 CHandle<CFuncMover>
    std::uint8_t vecOtherEntities[0x18]; // 0x8 CUtlVector<CHandle<CBaseEntity>>
    std::uint8_t nSpawnNumber[0x8]; // 0x20 int32
};

struct CMultiplayer_Expresser {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0xA0]; // 0x0
    std::uint8_t m_bAllowMultipleScenes[0x8]; // 0xA0 bool
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
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CAI_ExpresserWithFollowup {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0xA0]; // 0x0
};

struct CTakeDamageSummaryScopeGuard {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vecSummaries[0x18]; // 0x8 CUtlVector<SummaryTakeDamageInfo_t*>
};

struct CIronSightController {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bIronSightAvailable[0x4]; // 0x8 bool
    std::uint8_t m_flIronSightAmount[0x4]; // 0xC float32
    std::uint8_t m_flIronSightAmountGained[0x4]; // 0x10 float32
    std::uint8_t m_flIronSightAmountBiased[0x4]; // 0x14 float32
};

struct INavPathCostAreaFilter {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNmEventConsumerSound {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0xB8]; // 0x0
};

struct CNmEventConsumerLegacy {
    static constexpr std::size_t size = 0x3E8;
    std::uint8_t pad_0[0x3E8]; // 0x0
};

struct DestructiblePartDamageRequest_t {
    static constexpr std::size_t size = 0x3C;
    std::uint8_t m_nHitGroup[0x4]; // 0x0 HitGroup_t
    std::uint8_t m_nDamageLevel[0x4]; // 0x4 int32
    std::uint8_t m_nDesiredHealth[0x4]; // 0x8 uint16
    std::uint8_t m_nDestroyFlags[0x4]; // 0xC EDestructibleParts_DestroyParameterFlags
    std::uint8_t m_nDamageType[0x4]; // 0x10 DamageTypes_t
    std::uint8_t m_flBreakDamage[0x4]; // 0x14 float32
    std::uint8_t m_flBreakDamageRadius[0x4]; // 0x18 float32
    std::uint8_t m_hAttacker[0x4]; // 0x1C CHandle<CBaseEntity>
    std::uint8_t m_vWsBreakDamageOrigin[0xC]; // 0x20 VectorWS
    std::uint8_t m_vWsBreakDamageForce[0x10]; // 0x2C Vector
};

struct CInButtonState {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pButtonStates[0x18]; // 0x8 uint64[3]
};

struct SoundeventBoxHelperNetworked_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t vOrigin[0xC]; // 0x0 VectorWS
    std::uint8_t qAngles[0xC]; // 0xC QAngle
    std::uint8_t vMins[0xC]; // 0x18 Vector
    std::uint8_t vMaxs[0xC]; // 0x24 Vector
};

struct CNetworkOriginCellCoordQuantizedVectorWS {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_cellX[0x2]; // 0x10 uint16
    std::uint8_t m_cellY[0x2]; // 0x12 uint16
    std::uint8_t m_cellZ[0x2]; // 0x14 uint16
    std::uint8_t m_nOutsideWorld[0x2]; // 0x16 uint16
    std::uint8_t m_vecX[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x20 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x28 CNetworkedQuantizedFloat
};

struct CNmEventConsumerParticle {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CNavHullVData {
    static constexpr std::size_t size = 0x3C;
    std::uint8_t m_bAgentEnabled[0x4]; // 0x0 bool
    std::uint8_t m_agentRadius[0x4]; // 0x4 float32
    std::uint8_t m_agentHeight[0x4]; // 0x8 float32
    std::uint8_t m_agentShortHeightEnabled[0x4]; // 0xC bool
    std::uint8_t m_agentShortHeight[0x4]; // 0x10 float32
    std::uint8_t m_agentCrawlEnabled[0x4]; // 0x14 bool
    std::uint8_t m_agentCrawlHeight[0x4]; // 0x18 float32
    std::uint8_t m_agentMaxClimb[0x4]; // 0x1C float32
    std::uint8_t m_agentMaxSlope[0x4]; // 0x20 int32
    std::uint8_t m_agentMaxJumpDownDist[0x4]; // 0x24 float32
    std::uint8_t m_agentMaxJumpHorizDistBase[0x4]; // 0x28 float32
    std::uint8_t m_agentMaxJumpUpDist[0x4]; // 0x2C float32
    std::uint8_t m_agentBorderErosion[0x4]; // 0x30 int32
    std::uint8_t m_flowMapGenerationEnabled[0x4]; // 0x34 bool
    std::uint8_t m_flowMapNodeMaxRadius[0x4]; // 0x38 float32
};

struct CNmEventConsumerCamera {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct AI_DefaultNPC_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t s_npc_current_ability[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t s_npc_current_held_ability[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t s_npc_tactic_current[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t s_npc_tactic_phase[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t tactic_interrupt_conditions[0x18]; // 0x28 CUtlVector<CGlobalSymbol>
    std::uint8_t path_query[0x28]; // 0x40 AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
    std::uint8_t path_queries_speculative[0x18]; // 0x68 CUtlVector<AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t>
};

struct CNavPathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bAllowLadders[0x1]; // 0x10 bool
    std::uint8_t m_bCanFly[0x1]; // 0x11 bool
    std::uint8_t m_bCanSwim[0x2]; // 0x12 bool
    std::uint8_t m_flWaterToGroundMaxHeight[0x4]; // 0x14 float32
    std::uint8_t m_flGroundToWaterMaxHeight[0x4]; // 0x18 float32
    std::uint8_t m_flGroundToWaterTransitionDistance[0x4]; // 0x1C float32
    std::uint8_t m_flWaterToGroundTransitionDistance[0x4]; // 0x20 float32
    std::uint8_t m_flFlyingTransitionTolerance[0x4]; // 0x24 float32
    std::uint8_t m_bOptimizeFlySpacePathfinds[0x1]; // 0x28 bool
    std::uint8_t m_bStringPullFlySpacePathfinds[0x1]; // 0x29 bool
    std::uint8_t m_bSupportsTransitions[0x2]; // 0x2A bool
    std::uint8_t m_flTransitionPenalty[0x4]; // 0x2C float32
};

struct CNmSnapWeaponNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nFlashedAmountNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_nWeaponCategoryNodeIdx[0x2]; // 0x1A int16
    std::uint8_t m_nWeaponTypeNodeIdx[0x4]; // 0x1C int16
};

struct SoundOpvarTraceResult_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t vPos[0xC]; // 0x0 VectorWS
    std::uint8_t bDidHit[0x4]; // 0xC bool
    std::uint8_t flDistSqrToCenter[0x4]; // 0x10 float32
};

struct ActorMapping_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_sActorName[0x8]; // 0x0 CUtlString
    std::uint8_t m_hEntity[0x8]; // 0x8 CHandle<CBaseEntity>
};

struct CNavVolumeCalculatedVector {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0xA0]; // 0x0
};

struct CFiringModeInt {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nValues[0x8]; // 0x0 int32[2]
};

struct CBtNodeDecorator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CSAdditionalPerRoundStats_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t m_numChickensKilled[0x4]; // 0x0 int32
    std::uint8_t m_killsWhileBlind[0x4]; // 0x4 int32
    std::uint8_t m_bombCarrierkills[0x4]; // 0x8 int32
    std::uint8_t m_flBurnDamageInflicted[0x4]; // 0xC float32
    std::uint8_t m_flBlastDamageInflicted[0x4]; // 0x10 float32
    std::uint8_t m_iDinks[0x4]; // 0x14 int32
    std::uint8_t m_bFreshStartThisRound[0x1]; // 0x18 bool
    std::uint8_t m_bBombPlantedAndAlive[0x3]; // 0x19 bool
    std::uint8_t m_nDefuseStarts[0x4]; // 0x1C int32
    std::uint8_t m_nHostagePickUps[0x4]; // 0x20 int32
    std::uint8_t m_numTeammatesFlashed[0x4]; // 0x24 int32
    std::uint8_t m_strAnnotationsWorkshopId[0xE8]; // 0x28 CUtlString
};

struct CNmEventConsumerBodyGroup {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CEmptyGraphController {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0xC0]; // 0x0
};

struct ModelConfigHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct CEntitySubclassVDataBase {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

struct CBreakableStageHelper {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nCurrentStage[0x4]; // 0x8 int32
    std::uint8_t m_nStageCount[0xC]; // 0xC int32
};

struct CNavVolumeBreadthFirstSearch {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0xA8]; // 0x0
    std::uint8_t m_vStartPos[0xC]; // 0xA8 VectorWS
    std::uint8_t m_flSearchDist[0xC]; // 0xB4 float32
};

struct dynpitchvol_t {
    static constexpr std::size_t size = 0x64;
    std::uint8_t pad_0[0x64]; // 0x0
};

struct CSAdditionalMatchStats_t {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x110]; // 0x0
    std::uint8_t m_numRoundsSurvivedStreak[0x4]; // 0x110 int32
    std::uint8_t m_maxNumRoundsSurvivedStreak[0x4]; // 0x114 int32
    std::uint8_t m_numRoundsSurvivedTotal[0x4]; // 0x118 int32
    std::uint8_t m_iRoundsWonWithoutPurchase[0x4]; // 0x11C int32
    std::uint8_t m_iRoundsWonWithoutPurchaseTotal[0x4]; // 0x120 int32
    std::uint8_t m_numFirstKills[0x4]; // 0x124 int32
    std::uint8_t m_numClutchKills[0x4]; // 0x128 int32
    std::uint8_t m_numPistolKills[0x4]; // 0x12C int32
    std::uint8_t m_numSniperKills[0x4]; // 0x130 int32
    std::uint8_t m_iNumSuicides[0x4]; // 0x134 int32
    std::uint8_t m_iNumTeamKills[0x4]; // 0x138 int32
    std::uint8_t m_flTeamDamage[0x4]; // 0x13C float32
};

struct AI_Navigator_DebugSnapshotData_t__Waypoint_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t position[0xC]; // 0x0 VectorWS
    std::uint8_t nav_type[0x4]; // 0xC uint32
    std::uint8_t flags[0x4]; // 0x10 uint32
    std::uint8_t is_pathcorner[0x4]; // 0x14 bool
};

struct CTestPulseIOComponent {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_ComponentData[0x8]; // 0x8 CUtlString
    std::uint8_t m_OnComponentTestFunc[0x20]; // 0x10 CEntityOutputTemplate<CUtlSymbolLarge>
};

struct IRagdoll {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CCSPlayerAnimationState {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_currentMoveType[0x1]; // 0x18 CCSPlayerAnimationState::MoveType_t
    std::uint8_t m_groundMoveState[0x1]; // 0x19 CCSPlayerAnimationState::GroundMoveState_t
    std::uint8_t m_groundActionDirection[0x1]; // 0x1A CCSPlayerAnimationState::Direction_t
    std::uint8_t m_airAction[0x1]; // 0x1B CCSPlayerAnimationState::AirAction_t
    std::uint8_t m_bWasOnGroundLastUpdate[0x1]; // 0x1C bool
    std::uint8_t m_bWasStationaryLastUpdate[0x3]; // 0x1D bool
    std::uint8_t m_actionStartTick[0x4]; // 0x20 GameTick_t
    std::uint8_t m_staticAimTimerStartTick[0x4]; // 0x24 GameTick_t
    std::uint8_t m_plantAndTurnStartTick[0x4]; // 0x28 GameTick_t
    std::uint8_t m_flTurnOnSpotAngle[0x4]; // 0x2C float32
    std::uint8_t m_flPreviousAimYaw[0x4]; // 0x30 float32
    std::uint8_t m_flPreviousHorizontalSpeed[0x4]; // 0x34 float32
    std::uint8_t m_flFootIKOffsetLeft[0x4]; // 0x38 float32
    std::uint8_t m_flFootIKOffsetRight[0x4]; // 0x3C float32
    std::uint8_t m_flWeaponDropPercentageDueToMovement[0x4]; // 0x40 float32
    std::uint8_t m_flWeaponDropSmoothDampVelocity[0x9C]; // 0x44 float32
};

struct hudtextparms_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t color1[0x4]; // 0x0 Color
    std::uint8_t color2[0x4]; // 0x4 Color
    std::uint8_t effect[0x1]; // 0x8 uint8
    std::uint8_t channel[0x3]; // 0x9 uint8
    std::uint8_t x[0x4]; // 0xC float32
    std::uint8_t y[0x4]; // 0x10 float32
};

struct QueuedAISearchId_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_Value[0x8]; // 0x0 uint64
};

struct CAnimGraphControllerBase {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x4C]; // 0x0
    std::uint8_t m_hExternalGraph[0x74]; // 0x4C ExternalAnimGraphHandle_t
};

struct CNetworkVelocityVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_vecX[0x8]; // 0x10 CNetworkedQuantizedFloat
    std::uint8_t m_vecY[0x8]; // 0x18 CNetworkedQuantizedFloat
    std::uint8_t m_vecZ[0x8]; // 0x20 CNetworkedQuantizedFloat
};

struct CDestructiblePart_DamageLevel {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_sName[0x8]; // 0x0 CUtlString
    std::uint8_t m_sBreakablePieceName[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_nBodyGroupValue[0x4]; // 0x10 int32
    std::uint8_t m_nHealth[0x10]; // 0x14 CSkillInt
    std::uint8_t m_flCriticalDamagePercent[0x4]; // 0x24 float32
    std::uint8_t m_nDamagePassthroughType[0x4]; // 0x28 EDestructiblePartDamagePassThroughType
    std::uint8_t m_nDestructionDeathBehavior[0x4]; // 0x2C DestructiblePartDestructionDeathBehavior_t
    std::uint8_t m_sCustomDeathHandshake[0x8]; // 0x30 CGlobalSymbol
    std::uint8_t m_bShouldDestroyOnDeath[0x4]; // 0x38 bool
    std::uint8_t m_flDeathDestroyTime[0xC]; // 0x3C CRangeFloat
};

struct CNavVolumeAll {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0xA0]; // 0x0
};

struct CNavVolumeSphere {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_vCenter[0xC]; // 0x78 VectorWS
    std::uint8_t m_flRadius[0x4]; // 0x84 float32
};

struct Relationship_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t disposition[0x4]; // 0x0 Disposition_t
    std::uint8_t priority[0x4]; // 0x4 int32
};

} // namespace