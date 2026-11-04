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

namespace Cs2.server {

    public enum CLogicBranchList__LogicBranchListenerLastState_t : int {
        LOGIC_BRANCH_LISTENER_NOT_INIT = 0, 
        LOGIC_BRANCH_LISTENER_ALL_TRUE = 1, 
        LOGIC_BRANCH_LISTENER_ALL_FALSE = 2, 
        LOGIC_BRANCH_LISTENER_MIXED = 3, 
    }
    public enum CFuncMover__Move_t : int {
        MOVE_LOOP = 0, 
        MOVE_OSCILLATE = 1, 
        MOVE_STOP_AT_END = 2, 
    }
    public enum CFuncRotator__Rotate_t : int {
        ROTATE_LOOP = 0, 
        ROTATE_OSCILLATE = 1, 
        ROTATE_STOP_AT_END = 2, 
        ROTATE_LOOK_AT_TARGET = 3, 
        ROTATE_LOOK_AT_TARGET_ONLY_YAW = 4, 
        ROTATE_LOOK_AT_TARGET_ONLY_PITCH = 5, 
        ROTATE_RETURN_TO_INITIAL_ORIENTATION = 6, 
    }
    public enum CFuncRotator__RotationAxis_t : int {
        ROTATION_AXIS_UNDEFINED = 0, 
        ROTATION_AXIS_YAW = 1, 
        ROTATION_AXIS_PITCH = 2, 
        ROTATION_AXIS_ROLL = 3, 
    }
    public enum PulseBestOutflowRules_t : int {
        SORT_BY_NUMBER_OF_VALID_CRITERIA = 0, 
        SORT_BY_OUTFLOW_INDEX = 1, 
    }
    public enum CPhysicsProp__CrateType_t : int {
        CRATE_SPECIFIC_ITEM = 0, 
        CRATE_TYPE_COUNT = 1, 
    }
    public enum CFuncMover__FindFollowMoverStrategy_t : int {
        FIND_FOLLOW_MOVER_FORWARD_CLOSEST = 0, 
        FIND_FOLLOW_MOVER_REVERSE_CLOSEST = 1, 
        FIND_FOLLOW_MOVER_BIDIRECTIONAL_CLOSEST = 2, 
    }
    public enum CPathMoverEntitySpawner__TemplateChoiceStrategy_t : int {
        TEMPLATE_CHOICE_COUNT_SEQUENTIAL = 0, 
        TEMPLATE_CHOICE_WEIGHTED_RANDOM = 1, 
        TEMPLATE_CHOICE_COUNT_RANDOM = 2, 
    }
    public enum PulseCursorCancelPriority_t : int {
        None = 0, 
        CancelOnSucceeded = 1, 
        SoftCancel = 2, 
        HardCancel = 3, 
    }
    public enum PulseMethodCallMode_t : int {
        SYNC_WAIT_FOR_COMPLETION = 0, 
        ASYNC_FIRE_AND_FORGET = 1, 
    }
    public enum CFuncMover__FollowConstraint_t : int {
        FOLLOW_CONSTRAINT_DISTANCE = 0, 
        FOLLOW_CONSTRAINT_SPRING = 1, 
        FOLLOW_CONSTRAINT_RATIO = 2, 
        FOLLOW_CONSTRAINT_COUPLER = 3, 
    }
    public enum CFuncMover__FollowEntityDirection_t : int {
        FOLLOW_ENTITY_BIDIRECTIONAL = 0, 
        FOLLOW_ENTITY_FORWARD = 1, 
        FOLLOW_ENTITY_REVERSE = 2, 
    }
    public enum CFuncMover__PathRebuildStrategy_t : int {
        PATH_REBUILD_DONT_MOVE = 0, 
        PATH_REBUILD_MAINTAIN_T = 1, 
        PATH_REBUILD_USE_CURRENT_NODE_T = 2, 
    }
    public enum CFuncMover__TransitionToPathNodeAction_t : int {
        TRANSITION_TO_PATH_NODE_ACTION_NONE = 0, 
        TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 1, 
        TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 2, 
        TRANSITION_TO_PATH_NODE_TRANSITIONING = 3, 
    }
    public enum PulseCursorWakePriority_t : int {
        WakeElegantly = 0, 
        WakeImmediate = 1, 
    }
    public enum CFuncMover__OrientationUpdate_t : int {
        ORIENTATION_FORWARD_PATH = 0, 
        ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 1, 
        ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 2, 
        ORIENTATION_MATCH_CONTROL_POINT = 3, 
        ORIENTATION_FIXED = 4, 
        ORIENTATION_FACE_PLAYER = 5, 
        ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 6, 
        ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 7, 
        ORIENTATION_FACE_ENTITY = 8, 
    }
    public enum PropDoorRotatingOpenDirection_e : int {
        DOOR_ROTATING_OPEN_BOTH_WAYS = 0, 
        DOOR_ROTATING_OPEN_FORWARD = 1, 
        DOOR_ROTATING_OPEN_BACKWARD = 2, 
    }
    public enum PulseCollisionGroup_t : int {
        DEFAULT = 0, 
    }
    public enum SceneOnPlayerDeath_t : int {
        SCENE_ONPLAYERDEATH_DO_NOTHING = 0, 
        SCENE_ONPLAYERDEATH_CANCEL = 1, 
    }
    public enum LessonPanelLayoutFileTypes_t : int {
        LAYOUT_HAND_DEFAULT = 0, 
        LAYOUT_WORLD_DEFAULT = 1, 
        LAYOUT_CUSTOM = 2, 
    }
    public enum TimelineCompression_t : int {
        TIMELINE_COMPRESSION_SUM = 0, 
        TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1, 
        TIMELINE_COMPRESSION_AVERAGE = 2, 
        TIMELINE_COMPRESSION_AVERAGE_BLEND = 3, 
        TIMELINE_COMPRESSION_TOTAL = 4, 
    }
    public enum CustomCameraMode_t : int {
        CUSTOM_CAMERA_MODE_DISABLED = 0, 
        CUSTOM_CAMERA_MODE_CONTROLLED = 1, 
        CUSTOM_CAMERA_MODE_CONTROLLED_POSITION = 2, 
        CUSTOM_CAMERA_MODE_FOLLOW_POSITION = 3, 
    }
    public enum SubclassVDataChangeType_t : int {
        SUBCLASS_VDATA_CREATED = 0, 
        SUBCLASS_VDATA_SUBCLASS_CHANGED = 1, 
        SUBCLASS_VDATA_RELOADED = 2, 
    }
    public enum C4LightEffect_t : int {
        eLightEffectNone = 0, 
        eLightEffectDropped = 1, 
        eLightEffectThirdPersonHeld = 2, 
    }
    public enum StanceType_t : int {
        STANCE_CURRENT = 18446744073709551615, 
        STANCE_DEFAULT = 0, 
        STANCE_CROUCHING = 1, 
        STANCE_PRONE = 2, 
        NUM_STANCES = 3, 
    }
    public enum Explosions : int {
        expRandom = 0, 
        expDirected = 1, 
        expUsePrecise = 2, 
    }
    public enum PreviewCharacterMode : int {
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
    }
    public enum ObserverInterpState_t : int {
        OBSERVER_INTERP_NONE = 0, 
        OBSERVER_INTERP_STARTING = 1, 
        OBSERVER_INTERP_TRAVELING = 2, 
        OBSERVER_INTERP_SETTLING = 3, 
    }
    public enum ENetworkDisconnectionReason : int {
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
    }
    public enum WorldTextPanelOrientation_t : int {
        WORLDTEXT_ORIENTATION_DEFAULT = 0, 
        WORLDTEXT_ORIENTATION_FACEUSER = 1, 
        WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2, 
    }
    public enum EDestructibleParts_DestroyParameterFlags : int {
        None = 0, 
        GenerateBreakpieces = 1, 
        SetBodyGroupAndCollisionState = 2, 
        EnableFlinches = 4, 
        ForceDamageApply = 8, 
        IgnoreKillEntityFlag = 16, 
        IgnoreHealthCheck = 32, 
        ApplyPhysicsForce = 64, 
        Default = 7, 
    }
    public enum DIALOG_TYPE : int {
        DIALOG_MSG = 0, 
        DIALOG_MENU = 1, 
        DIALOG_TEXT = 2, 
        DIALOG_ENTRY = 3, 
        DIALOG_ASKCONNECT = 4, 
    }
    public enum WorldTextPanelHorizontalAlign_t : int {
        WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0, 
        WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1, 
        WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2, 
    }
    public enum SequenceFinishNotifyState_t : int {
        eDoNotNotify = 0, 
        eNotifyWhenFinished = 1, 
        eNotifyTriggered = 2, 
    }
    public enum SoundEventStartType_t : int {
        SOUNDEVENT_START_PLAYER = 0, 
        SOUNDEVENT_START_WORLD = 1, 
        SOUNDEVENT_START_ENTITY = 2, 
    }
    public enum EDemoCommands : int {
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
    }
    public enum ChoreoLookAtConditions_t : int {
        WHILE_MOVING = 1, 
        WHILE_ANIMATING = 2, 
        DURING_OUTRO = 4, 
    }
    public enum soundcommands_t : int {
        SOUNDCTRL_CHANGE_VOLUME = 0, 
        SOUNDCTRL_CHANGE_PITCH = 1, 
        SOUNDCTRL_STOP = 2, 
        SOUNDCTRL_DESTROY = 3, 
        SOUNDCTRL_FADEOUT = 4, 
    }
    public enum AnimGraphDebugDrawType_t : int {
        None = 0, 
        WsPosition = 1, 
        MsPosition = 2, 
        WsDirection = 3, 
        MsDirection = 4, 
    }
    public enum TrainOrientationType_t : int {
        TrainOrientation_Fixed = 0, 
        TrainOrientation_AtPathTracks = 1, 
        TrainOrientation_LinearBlend = 2, 
        TrainOrientation_EaseInEaseOut = 3, 
    }
    public enum CInfoChoreoLocatorShapeType_t : int {
        POINT = 0, 
        LINE = 1, 
        RADIUS = 2, 
        COUNT = 3, 
        NONE = 4, 
    }
    public enum CSWeaponCategory : int {
        WEAPONCATEGORY_OTHER = 0, 
        WEAPONCATEGORY_MELEE = 1, 
        WEAPONCATEGORY_SECONDARY = 2, 
        WEAPONCATEGORY_SMG = 3, 
        WEAPONCATEGORY_RIFLE = 4, 
        WEAPONCATEGORY_HEAVY = 5, 
        WEAPONCATEGORY_COUNT = 6, 
    }
    public enum BeginDeathLifeStateTransition_t : int {
        TRANSITION_TO_LIFESTATE_DYING = 0, 
        TRANSITION_TO_LIFESTATE_DEAD = 1, 
    }
    public enum EGCItemCustomizationNotification : int {
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
    }
    public enum PointOrientGoalDirectionType_t : int {
        eAbsOrigin = 0, 
        eCenter = 1, 
        eHead = 2, 
        eForward = 3, 
        eEyesForward = 4, 
    }
    public enum ItemFlagTypes_t : int {
        ITEM_FLAG_NONE = 0, 
        ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1, 
        ITEM_FLAG_NOAUTORELOAD = 2, 
        ITEM_FLAG_NOAUTOSWITCHEMPTY = 4, 
        ITEM_FLAG_LIMITINWORLD = 8, 
        ITEM_FLAG_EXHAUSTIBLE = 16, 
        ITEM_FLAG_DOHITLOCATIONDMG = 32, 
        ITEM_FLAG_NOAMMOPICKUPS = 64, 
        ITEM_FLAG_NOITEMPICKUP = 128, 
    }
    public enum SurroundingBoundsType_t : int {
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
    }
    public enum LifeState_t : int {
        LIFE_ALIVE = 0, 
        LIFE_DYING = 1, 
        LIFE_DEAD = 2, 
        LIFE_RESPAWNABLE = 3, 
        LIFE_RESPAWNING = 4, 
        NUM_LIFESTATES = 5, 
    }
    public enum PointOrientConstraint_t : int {
        eNone = 0, 
        ePreserveUpAxis = 1, 
    }
    public enum EHitGroup : int {
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
    }
    public enum NPCFollowFormation_t : int {
        Default = 18446744073709551615, 
        CloseCircle = 0, 
        WideCircle = 1, 
        MediumCircle = 5, 
        Sidekick = 6, 
    }
    public enum SVC_Messages : int {
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
    }
    public enum QuestType : int {
        k_EQuestType_Operation = 1, 
        k_EQuestType_RecurringMission = 2, 
    }
    public enum ECsgoGCMsg : int {
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
    }
    public enum GLOBALESTATE : int {
        GLOBAL_OFF = 0, 
        GLOBAL_ON = 1, 
        GLOBAL_DEAD = 2, 
    }
    public enum AnimationAlgorithm_t : int {
        eInvalid = 18446744073709551615, 
        eNone = 0, 
        eSequence = 1, 
        eAnimGraph2 = 2, 
        eAnimGraph2Secondary = 3, 
        eCount = 4, 
    }
    public enum CSWeaponMode : int {
        Primary_Mode = 0, 
        Secondary_Mode = 1, 
        WeaponMode_MAX = 2, 
    }
    public enum OnFrame : int {
        ONFRAME_UNKNOWN = 0, 
        ONFRAME_TRUE = 1, 
        ONFRAME_FALSE = 2, 
    }
    public enum Materials : int {
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
    }
    public enum BloodType : int {
        None = 18446744073709551615, 
        ColorRed = 0, 
        ColorYellow = 1, 
        ColorGreen = 2, 
        ColorRedLVL2 = 3, 
        ColorRedLVL3 = 4, 
        ColorRedLVL4 = 5, 
        ColorRedLVL5 = 6, 
        ColorRedLVL6 = 7, 
    }
    public enum NavScope_t : int {
        eGround = 0, 
        eAir = 1, 
        eCount = 2, 
        eFirst = 0, 
        eInvalid = 255, 
    }
    public enum BreakableContentsType_t : int {
        BC_DEFAULT = 0, 
        BC_EMPTY = 1, 
        BC_PROP_GROUP_OVERRIDE = 2, 
        BC_PARTICLE_SYSTEM_OVERRIDE = 3, 
    }
    public enum AnimLoopMode_t : int {
        ANIM_LOOP_MODE_INVALID = 18446744073709551615, 
        ANIM_LOOP_MODE_NOT_LOOPING = 0, 
        ANIM_LOOP_MODE_LOOPING = 1, 
        ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2, 
        ANIM_LOOP_MODE_COUNT = 3, 
    }
    public enum EBaseUserMessages : int {
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
    }
    public enum Class_T : int {
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
    }
    public enum filter_t : int {
        FILTER_AND = 0, 
        FILTER_OR = 1, 
    }
    public enum CSWeaponSilencerType : int {
        WEAPONSILENCER_NONE = 0, 
        WEAPONSILENCER_DETACHABLE = 1, 
        WEAPONSILENCER_INTEGRATED = 2, 
    }
    public enum EProceduralRagdollWeightIndexPropagationMethod : int {
        Bone = 0, 
        BoneAndChildren = 1, 
    }
    public enum GameAnimEventIndex_t : int {
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
    }
    public enum EGCToGCMsg : int {
        k_EGCToGCMsgMasterAck = 150, 
        k_EGCToGCMsgMasterAckResponse = 151, 
        k_EGCToGCMsgRouted = 152, 
        k_EGCToGCMsgRoutedReply = 153, 
        k_EMsgUpdateSessionIP = 154, 
        k_EMsgRequestSessionIP = 155, 
        k_EMsgRequestSessionIPResponse = 156, 
        k_EGCToGCMsgMasterStartupComplete = 157, 
    }
    public enum EQueryCvarValueStatus : int {
        eQueryCvarValueStatus_ValueIntact = 0, 
        eQueryCvarValueStatus_CvarNotFound = 1, 
        eQueryCvarValueStatus_NotACvar = 2, 
        eQueryCvarValueStatus_CvarProtected = 3, 
    }
    public enum GC_BannedWordType : int {
        GC_BANNED_WORD_DISABLE_WORD = 0, 
        GC_BANNED_WORD_ENABLE_WORD = 1, 
    }
    public enum ESource2PlayStatsFieldType : int {
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
    }
    public enum FixAngleSet_t : int {
        None = 0, 
        Absolute = 1, 
        Relative = 2, 
    }
    public enum IChoreoServices__ScriptState_t : int {
        SCRIPT_PLAYING = 0, 
        SCRIPT_WAIT = 1, 
        SCRIPT_POST_IDLE = 2, 
        SCRIPT_CLEANUP = 3, 
        SCRIPT_MOVE_TO_MARK = 4, 
    }
    public enum Touch_t : int {
        touch_none = 0, 
        touch_player_only = 1, 
        touch_npc_only = 2, 
        touch_player_or_npc = 3, 
        touch_player_or_npc_or_physicsprop = 4, 
    }
    public enum CCSPlayerAnimationState__MoveType_t : int {
        None = 0, 
        Ground = 1, 
        Air = 2, 
        Ladder = 3, 
    }
    public enum TrainVelocityType_t : int {
        TrainVelocity_Instantaneous = 0, 
        TrainVelocity_LinearBlend = 1, 
        TrainVelocity_EaseInEaseOut = 2, 
    }
    public enum SignonState_t : int {
        SIGNONSTATE_NONE = 0, 
        SIGNONSTATE_CHALLENGE = 1, 
        SIGNONSTATE_CONNECTED = 2, 
        SIGNONSTATE_NEW = 3, 
        SIGNONSTATE_PRESPAWN = 4, 
        SIGNONSTATE_SPAWN = 5, 
        SIGNONSTATE_FULL = 6, 
        SIGNONSTATE_CHANGELEVEL = 7, 
    }
    public enum CSWeaponType : int {
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
    }
    public enum NavScopeFlags_t : int {
        eGround = 1, 
        eAir = 2, 
        eAll = 3, 
        eNone = 0, 
    }
    public enum EntFinderMethod_t : int {
        ENT_FIND_METHOD_NEAREST = 0, 
        ENT_FIND_METHOD_FARTHEST = 1, 
        ENT_FIND_METHOD_RANDOM = 2, 
    }
    public enum TestInputOutputCombinationsEnum_t : int {
        ZERO = 0, 
        ONE = 1, 
        TWO = 2, 
    }
    public enum FuncMoverMovementSummaryFlags_t : int {
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
    }
    public enum EGCBaseClientMsg : int {
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
    }
    public enum PropDoorRotatingSpawnPos_t : int {
        DOOR_SPAWN_CLOSED = 0, 
        DOOR_SPAWN_OPEN_FORWARD = 1, 
        DOOR_SPAWN_OPEN_BACK = 2, 
        DOOR_SPAWN_AJAR = 3, 
    }
    public enum ShardSolid_t : int {
        SHARD_SOLID = 0, 
        SHARD_DEBRIS = 1, 
    }
    public enum ESplitScreenMessageType : int {
        MSG_SPLITSCREEN_ADDUSER = 0, 
        MSG_SPLITSCREEN_REMOVEUSER = 1, 
    }
    public enum EntityPlatformTypes_t : int {
        ENTITY_NOT_PLATFORM = 0, 
        ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1, 
        ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2, 
    }
    public enum PulseNPCCondition_t : int {
        COND_SEE_PLAYER = 1, 
        COND_LOST_PLAYER = 2, 
        COND_HEAR_PLAYER = 3, 
        COND_PLAYER_PUSHING = 4, 
        COND_NO_PRIMARY_AMMO = 5, 
    }
    public enum RenderMode_t : int {
        kRenderNormal = 0, 
        kRenderTransAlpha = 1, 
        kRenderNone = 2, 
        kRenderModeCount = 3, 
    }
    public enum EGCSystemMsg : int {
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
    }
    public enum ECommunityItemClass : int {
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
    }
    public enum ETeam : int {
        ET_Unknown = 0, 
        ET_Spectator = 1, 
        ET_Terrorist = 2, 
        ET_CT = 3, 
    }
    public enum ForcedCrouchState_t : int {
        FORCEDCROUCH_NONE = 0, 
        FORCEDCROUCH_CROUCHED = 1, 
        FORCEDCROUCH_UNCROUCHED = 2, 
    }
    public enum EBasePredictionEvents : int {
        BPE_StringCommand = 128, 
        BPE_Teleport = 130, 
        BPE_Diagnostic = 16384, 
    }
    public enum EClientReportingVersion : int {
        k_EClientReportingVersion_OldVersion = 0, 
        k_EClientReportingVersion_BetaVersion = 1, 
        k_EClientReportingVersion_SupportsTrustedMode = 2, 
    }
    public enum EGCBaseProtoObjectTypes : int {
        k_EProtoObjectPartyInvite = 1001, 
        k_EProtoObjectLobbyInvite = 1002, 
    }
    public enum PerformanceMode_t : int {
        PM_NORMAL = 0, 
        PM_NO_GIBS = 1, 
    }
    public enum TOGGLE_STATE : int {
        TS_AT_TOP = 0, 
        TS_AT_BOTTOM = 1, 
        TS_GOING_UP = 2, 
        TS_GOING_DOWN = 3, 
        DOOR_OPEN = 0, 
        DOOR_CLOSED = 1, 
        DOOR_OPENING = 2, 
        DOOR_CLOSING = 3, 
    }
    public enum loadout_slot_t : int {
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
    }
    public enum EDestructiblePartDamagePassThroughType : int {
        Normal = 0, 
        Absorb = 1, 
        InvincibleAbsorb = 2, 
        InvinciblePassthrough = 3, 
    }
    public enum RadiusDmgOverride_t : int {
        RADIUS_DMG_OVERRIDE_NONE = 0, 
        RADIUS_DMG_OVERRIDE_POSITION_ONLY = 1, 
        RADIUS_DMG_OVERRIDE_POSITION_SKIP_TRACES = 2, 
    }
    public enum VoiceDataFormat_t : int {
        VOICEDATA_FORMAT_STEAM = 0, 
        VOICEDATA_FORMAT_ENGINE = 1, 
        VOICEDATA_FORMAT_OPUS = 2, 
    }
    public enum NavAttributeEnum : int {
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
    }
    public enum MoveLinearAuthoredPos_t : int {
        MOVELINEAR_AUTHORED_AT_START_POSITION = 0, 
        MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1, 
        MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2, 
    }
    public enum ValueRemapperMomentumType_t : int {
        MomentumType_None = 0, 
        MomentumType_Friction = 1, 
        MomentumType_SpringTowardSnapValue = 2, 
        MomentumType_SpringAwayFromSnapValue = 3, 
    }
    public enum Hull_t : int {
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
    }
    public enum ExternalAnimGraphInactiveBehavior_t : int {
        eNone = 0, 
        eUnbind = 1, 
        eUnbindAndDelete = 2, 
    }
    public enum NET_Messages : int {
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
    }
    public enum EWeaponType : int {
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
    }
    public enum EBaseEntityMessages : int {
        EM_PlayJingle = 136, 
        EM_ScreenOverlay = 137, 
        EM_PropagateForce = 139, 
        EM_DoSpark = 140, 
        EM_FixAngle = 141, 
    }
    public enum ECSPredictionEvents : int {
        CSPE_DamageTag = 1, 
        CSPE_PlayerTeleport = 3, 
    }
    public enum CCSPlayerAnimationState__GroundMoveState_t : int {
        None = 0, 
        Idle = 1, 
        Start = 2, 
        Move = 3, 
        TurnOnSpot = 4, 
        TurnOnSpotLoop = 5, 
        PlantAndTurn = 6, 
    }
    public enum PreviewWeaponState : int {
        DROPPED = 0, 
        HOLSTERED = 1, 
        DEPLOYED = 2, 
        PLANTED = 3, 
        INSPECT = 4, 
        ICON = 5, 
    }
    public enum EInButtonState : int {
        IN_BUTTON_UP = 0, 
        IN_BUTTON_DOWN = 1, 
        IN_BUTTON_DOWN_UP = 2, 
        IN_BUTTON_UP_DOWN = 3, 
        IN_BUTTON_UP_DOWN_UP = 4, 
        IN_BUTTON_DOWN_UP_DOWN = 5, 
        IN_BUTTON_DOWN_UP_DOWN_UP = 6, 
        IN_BUTTON_UP_DOWN_UP_DOWN = 7, 
        IN_BUTTON_STATE_COUNT = 8, 
    }
    public enum WeaponAttackType_t : int {
        eInvalid = 18446744073709551615, 
        ePrimary = 0, 
        eSecondary = 1, 
        eCount = 2, 
    }
    public enum CDebugOverlayFilterTextType_t : int {
        FILTER_TEXT_NONE = 0, 
        MATCH = 1, 
        HIERARCHY = 2, 
        COUNT = 3, 
    }
    public enum PARTICLE_MESSAGE : int {
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
    }
    public enum CSPlayerBlockingUseAction_t : int {
        k_CSPlayerBlockingUseAction_None = 0, 
        k_CSPlayerBlockingUseAction_DefusingDefault = 1, 
        k_CSPlayerBlockingUseAction_DefusingWithKit = 2, 
        k_CSPlayerBlockingUseAction_HostageGrabbing = 3, 
        k_CSPlayerBlockingUseAction_HostageDropping = 4, 
        k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 5, 
        k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 6, 
        k_CSPlayerBlockingUseAction_MaxCount = 7, 
    }
    public enum ShatterDamageCause : int {
        SHATTERDAMAGE_BULLET = 0, 
        SHATTERDAMAGE_MELEE = 1, 
        SHATTERDAMAGE_THROWN = 2, 
        SHATTERDAMAGE_SCRIPT = 3, 
        SHATTERDAMAGE_EXPLOSIVE = 4, 
    }
    public enum ECommunityItemAttribute : int {
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
    }
    public enum SVC_Messages_LowFrequency : int {
        svc_dummy = 600, 
    }
    public enum eRollType : int {
        ROLL_NONE = 18446744073709551615, 
        ROLL_STATS = 0, 
        ROLL_CREDITS = 1, 
        ROLL_LATE_JOIN_LOGO = 2, 
        ROLL_OUTTRO = 3, 
    }
    public enum ScriptedOnDeath_t : int {
        SS_ONDEATH_NOT_APPLICABLE = 18446744073709551615, 
        SS_ONDEATH_UNDEFINED = 0, 
        SS_ONDEATH_RAGDOLL = 1, 
        SS_ONDEATH_ANIMATED_DEATH = 2, 
    }
    public enum CSWeaponNameID : int {
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
    }
    public enum ChoreoLookAtSpeed_t : int {
        eInvalid = 18446744073709551615, 
        eSlow = 0, 
        eMedium = 1, 
        eFast = 2, 
    }
    public enum SpawnGroupFlags_t : int {
        SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 1, 
        SPAWN_GROUP_DONT_SPAWN_ENTITIES = 2, 
        SPAWN_GROUP_SYNCHRONOUS_SPAWN = 4, 
        SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 8, 
        SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 16, 
        SPAWN_GROUP_BLOCK_UNTIL_LOADED = 64, 
        SPAWN_GROUP_LOAD_STREAMING_DATA = 128, 
        SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 256, 
    }
    public enum ECSUsrMsg_DisconnectToLobby_Action : int {
        k_ECSUsrMsg_DisconnectToLobby_Action_Default = 0, 
        k_ECSUsrMsg_DisconnectToLobby_Action_GoQueue = 1, 
    }
    public enum ECsgoSteamUserStat : int {
        k_ECsgoSteamUserStat_XpEarnedGames = 1, 
        k_ECsgoSteamUserStat_MatchWinsCompetitive = 2, 
        k_ECsgoSteamUserStat_SurvivedDangerZone = 3, 
    }
    public enum gear_slot_t : int {
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
    }
    public enum CSPlayerState : int {
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
    }
    public enum RequestPause_t : int {
        RP_PAUSE = 0, 
        RP_UNPAUSE = 1, 
        RP_TOGGLEPAUSE = 2, 
    }
    public enum ScriptedConflictResponse_t : int {
        SS_CONFLICT_ENQUEUE = 0, 
        SS_CONFLICT_INTERRUPT = 1, 
    }
    public enum WaterLevel_t : int {
        WL_NotInWater = 0, 
        WL_Feet = 1, 
        WL_Knees = 2, 
        WL_Waist = 3, 
        WL_Chest = 4, 
        WL_FullyUnderwater = 5, 
        WL_Count = 6, 
    }
    public enum WorldTextPanelVerticalAlign_t : int {
        WORLDTEXT_VERTICAL_ALIGN_TOP = 0, 
        WORLDTEXT_VERTICAL_ALIGN_CENTER = 1, 
        WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2, 
    }
    public enum RelativeLocationType_t : int {
        WORLD_SPACE_POSITION = 0, 
        RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1, 
        RELATIVE_TO_ENTITY_YAW_ONLY = 2, 
        RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3, 
    }
    public enum CLC_Messages : int {
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
    }
    public enum EClientUIEvent : int {
        EClientUIEvent_Invalid = 0, 
        EClientUIEvent_DialogFinished = 1, 
        EClientUIEvent_FireOutput = 2, 
    }
    public enum AmmoPosition_t : int {
        AMMO_POSITION_INVALID = 18446744073709551615, 
        AMMO_POSITION_PRIMARY = 0, 
        AMMO_POSITION_SECONDARY = 1, 
        AMMO_POSITION_COUNT = 2, 
    }
    public enum CDebugOverlayFilterType_t : int {
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
    }
    public enum PreviewEOMCelebration : int {
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
    }
    public enum ESOMsg : int {
        k_ESOMsg_Create = 21, 
        k_ESOMsg_Update = 22, 
        k_ESOMsg_Destroy = 23, 
        k_ESOMsg_CacheSubscribed = 24, 
        k_ESOMsg_CacheUnsubscribed = 25, 
        k_ESOMsg_UpdateMultiple = 26, 
        k_ESOMsg_CacheSubscriptionCheck = 27, 
        k_ESOMsg_CacheSubscriptionRefresh = 28, 
    }
    public enum SaveRestoreTableFlags_t : int {
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
    }
    public enum InputBitMask_t : int {
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
    }
    public enum HitGroup_t : int {
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
    }
    public enum FuncRotatorRotationSummaryFlags_t : int {
        eNone = 0, 
        eRotateBegin = 1, 
        eEventsDispatched = 2, 
        eRotateCompleted = 4, 
        eOscillateStart = 8, 
        eOscillateEnd = 16, 
        eOscillateArrived = 32, 
        eOscillateDepart = 64, 
    }
    public enum PointWorldTextReorientMode_t : int {
        POINT_WORLD_TEXT_REORIENT_NONE = 0, 
        POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1, 
    }
    public enum DebugOverlayBits_t : int {
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
    }
    public enum AmmoFlags_t : int {
        AMMO_FORCE_DROP_IF_CARRIED = 1, 
        AMMO_RESERVE_STAYS_WITH_WEAPON = 2, 
        AMMO_FLAG_MAX = 2, 
    }
    public enum EBaseGameEvents : int {
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
    }
    public enum DecalFlags_t : int {
        eNone = 0, 
        eCannotClear = 1, 
        eDecalProjectToBackfaces = 2, 
        eAll = 4294967295, 
        eAllButCannotClear = 4294967294, 
    }
    public enum ECstrike15UserMessages : int {
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
    }
    public enum HierarchyType_t : int {
        HIERARCHY_NONE = 0, 
        HIERARCHY_BONE_MERGE = 1, 
        HIERARCHY_ATTACHMENT = 2, 
        HIERARCHY_ABSORIGIN = 3, 
        HIERARCHY_BONE = 4, 
        HIERARCHY_TYPE_COUNT = 5, 
    }
    public enum doorCheck_e : int {
        DOOR_CHECK_FORWARD = 0, 
        DOOR_CHECK_BACKWARD = 1, 
        DOOR_CHECK_FULL = 2, 
    }
    public enum BeamType_t : int {
        BEAM_INVALID = 0, 
        BEAM_POINTS = 1, 
        BEAM_ENTPOINT = 2, 
        BEAM_ENTS = 3, 
        xxBEAM_HOSExxunused = 4, 
        BEAM_SPLINE = 5, 
        BEAM_LASER = 6, 
    }
    public enum ReplayEventType_t : int {
        REPLAY_EVENT_CANCEL = 0, 
        REPLAY_EVENT_DEATH = 1, 
        REPLAY_EVENT_GENERIC = 2, 
        REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 3, 
        REPLAY_EVENT_VICTORY = 4, 
    }
    public enum EntitySubclassScope_t : int {
        SUBCLASS_SCOPE_NONE = 18446744073709551615, 
        SUBCLASS_SCOPE_PRECIPITATION = 0, 
        SUBCLASS_SCOPE_PLAYER_WEAPONS = 1, 
        SUBCLASS_SCOPE_COUNT = 2, 
    }
    public enum PointTemplateClientOnlyEntityBehavior_t : int {
        CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0, 
        CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1, 
    }
    public enum CDebugOverlayCombinedTypes_t : int {
        ALL = 0, 
        ANY = 1, 
        COUNT = 2, 
    }
    public enum ShatterGlassStressType : int {
        SHATTERGLASS_BLUNT = 0, 
        SHATTERGLASS_BALLISTIC = 1, 
        SHATTERGLASS_PULSE = 2, 
        SHATTERGLASS_EXPLOSIVE = 3, 
    }
    public enum TrackOrientationType_t : int {
        TrackOrientation_Fixed = 0, 
        TrackOrientation_FacePath = 1, 
        TrackOrientation_FacePathAngles = 2, 
    }
    public enum WeaponSwitchReason_t : int {
        eDrawn = 0, 
        eEquipped = 1, 
        eUserInitiatedSwitchToLast = 2, 
        eUserInitiatedUIKeyPress = 3, 
        eUserInitiatedSwitchHands = 4, 
    }
    public enum ValueRemapperRatchetType_t : int {
        RatchetType_Absolute = 0, 
        RatchetType_EachEngage = 1, 
    }
    public enum NavDirType : int {
        NORTH = 0, 
        EAST = 1, 
        SOUTH = 2, 
        WEST = 3, 
        NUM_NAV_DIR_TYPE_DIRECTIONS = 4, 
    }
    public enum EGCBaseMsg : int {
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
    }
    public enum CRR_Response__ResponseEnum_t : int {
        MAX_RESPONSE_NAME = 192, 
        MAX_RULE_NAME = 128, 
    }
    public enum MoveMountingAmount_t : int {
        MOVE_MOUNT_NONE = 0, 
        MOVE_MOUNT_LOW = 1, 
        MOVE_MOUNT_HIGH = 2, 
        MOVE_MOUNT_MAXCOUNT = 3, 
    }
    public enum EHudPanelClassStatus_t : int {
        k_eHudPanelClassStatus_Undefined = 18446744073709551615, 
        k_eHudPanelClassStatus_DoesNotHaveClass = 0, 
        k_eHudPanelClassStatus_HasClass = 1, 
    }
    public enum GCClientLauncherType : int {
        GCClientLauncherType_DEFAULT = 0, 
        GCClientLauncherType_PERFECTWORLD = 1, 
        GCClientLauncherType_STEAMCHINA = 2, 
        GCClientLauncherType_SOURCE2 = 3, 
    }
    public enum ChoreoStrafeMode_t : int {
        DEFAULT = 0, 
        ENABLE = 1, 
        DISABLE = 2, 
    }
    public enum HoverPoseFlags_t : int {
        eNone = 0, 
        ePosition = 1, 
        eAngles = 2, 
    }
    public enum RenderFx_t : int {
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
    }
    public enum vote_create_failed_t : int {
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
    }
    public enum RumbleEffect_t : int {
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
    }
    public enum LatchDirtyPermission_t : int {
        LATCH_DIRTY_DISALLOW = 0, 
        LATCH_DIRTY_SERVER_CONTROLLED = 1, 
        LATCH_DIRTY_CLIENT_SIMULATED = 2, 
        LATCH_DIRTY_PREDICTION = 3, 
        LATCH_DIRTY_FRAMESIMULATE = 4, 
        LATCH_DIRTY_PARTICLE_SIMULATE = 5, 
    }
    public enum DoorState_t : int {
        DOOR_STATE_CLOSED = 0, 
        DOOR_STATE_OPENING = 1, 
        DOOR_STATE_OPEN = 2, 
        DOOR_STATE_CLOSING = 3, 
        DOOR_STATE_AJAR = 4, 
    }
    public enum ChoreoLookAtMode_t : int {
        eInvalid = 18446744073709551615, 
        eChest = 0, 
        eHead = 1, 
        eEyesOnly = 2, 
    }
    public enum ChatIgnoreType_t : int {
        CHAT_IGNORE_NONE = 0, 
        CHAT_IGNORE_ALL = 1, 
        CHAT_IGNORE_TEAM = 2, 
    }
    public enum PlayerConnectedState : int {
        NeverConnected = 18446744073709551615, 
        Connected = 0, 
        Connecting = 1, 
        Reconnecting = 2, 
        Disconnecting = 3, 
        Disconnected = 4, 
        Reserved = 5, 
    }
    public enum PreviewCharacterBannerAnimation : int {
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
    }
    public enum EntityDissolveType_t : int {
        ENTITY_DISSOLVE_INVALID = 18446744073709551615, 
        ENTITY_DISSOLVE_NORMAL = 0, 
        ENTITY_DISSOLVE_ELECTRICAL = 1, 
        ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2, 
        ENTITY_DISSOLVE_CORE = 3, 
    }
    public enum navproperties_t : int {
        NAV_IGNORE = 1, 
    }
    public enum Bidirectional_Messages : int {
        bi_RebroadcastGameEvent = 16, 
        bi_RebroadcastSource = 17, 
        bi_GameEvent_DEPRECATED = 18, 
        bi_PredictionEvent = 19, 
    }
    public enum EntityEffects_t : int {
        DEPRICATED_EF_NOINTERP = 8, 
        EF_NOSHADOW = 16, 
        EF_NODRAW = 32, 
        EF_NORECEIVESHADOW = 64, 
        EF_PARENT_ANIMATES = 512, 
        EF_NODRAW_BUT_TRANSMIT = 1024, 
        EF_MAX_BITS = 10, 
    }
    public enum ChoreoExternalAnimgraphControlState_t : int {
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
    }
    public enum SolidType_t : int {
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
    }
    public enum DamageTypes_t : int {
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
    }
    public enum PointWorldTextJustifyVertical_t : int {
        POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0, 
        POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1, 
        POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2, 
    }
    public enum EProtoDebugVisiblity : int {
        k_EProtoDebugVisibility_Always = 0, 
        k_EProtoDebugVisibility_Server = 70, 
        k_EProtoDebugVisibility_ValveServer = 80, 
        k_EProtoDebugVisibility_GC = 90, 
        k_EProtoDebugVisibility_Never = 100, 
    }
    public enum attributeprovidertypes_t : int {
        PROVIDER_GENERIC = 0, 
        PROVIDER_WEAPON = 1, 
    }
    public enum EGCMsgResponse : int {
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
    }
    public enum MoveCollide_t : int {
        MOVECOLLIDE_DEFAULT = 0, 
        MOVECOLLIDE_FLY_BOUNCE = 1, 
        MOVECOLLIDE_FLY_CUSTOM = 2, 
        MOVECOLLIDE_FLY_SLIDE = 3, 
        MOVECOLLIDE_COUNT = 4, 
        MOVECOLLIDE_MAX_BITS = 3, 
    }
    public enum IChoreoServices__ChoreoState_t : int {
        STATE_PRE_SCRIPT = 0, 
        STATE_WAIT_FOR_SCRIPT = 1, 
        STATE_WALK_TO_MARK = 2, 
        STATE_SYNCHRONIZE_SCRIPT = 3, 
        STATE_PLAY_SCRIPT = 4, 
        STATE_PLAY_SCRIPT_POST_IDLE = 5, 
        STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6, 
    }
    public enum PrefetchType : int {
        PFT_SOUND = 0, 
    }
    public enum ValueRemapperOutputType_t : int {
        OutputType_AnimationCycle = 0, 
        OutputType_RotationX = 1, 
        OutputType_RotationY = 2, 
        OutputType_RotationZ = 3, 
    }
    public enum ETEProtobufIds : int {
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
    }
    public enum INavObstacle__NavObstacleType_t : int {
        NAV_OBSTACLE_TYPE_INVALID = 18446744073709551615, 
        NAV_OBSTACLE_TYPE_NONE = 0, 
        NAV_OBSTACLE_TYPE_AVOID = 1, 
        NAV_OBSTACLE_TYPE_CONN = 2, 
        NAV_OBSTACLE_TYPE_BLOCK = 3, 
        NAV_OBSTACLE_TYPE_PERMANENT_BLOCK = 4, 
    }
    public enum PointTemplateOwnerSpawnGroupType_t : int {
        INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0, 
        INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1, 
        INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2, 
    }
    public enum EContributionScoreFlag_t : int {
        k_EContributionScoreFlag_Default = 0, 
        k_EContributionScoreFlag_Objective = 1, 
        k_EContributionScoreFlag_Bullets = 2, 
    }
    public enum CCSPlayerAnimationState__Direction_t : int {
        None = 0, 
        N = 1, 
        NE = 2, 
        E = 3, 
        SE = 4, 
        S = 5, 
        SW = 6, 
        W = 7, 
        NW = 8, 
    }
    public enum eSplinePushType : int {
        k_eSplinePushAlong = 0, 
        k_eSplinePushAway = 1, 
        k_eSplinePushTowards = 2, 
    }
    public enum ChoreoScriptedMoveTo_t : int {
        eWait = 0, 
        eMoveWithGait = 1, 
        eTeleport = 2, 
        eWaitFacing = 3, 
    }
    public enum WeaponGameplayAnimState : int {
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
    }
    public enum EDestructiblePartRadiusDamageApplyType : int {
        ScaleByExplosionRadius = 0, 
        PrioritizeClosestPart = 1, 
    }
    public enum EntityDistanceMode_t : int {
        eOriginToOrigin = 0, 
        eCenterToCenter = 1, 
        eAxisToAxis = 2, 
    }
    public enum PulseTraceContents_t : int {
        STATIC_LEVEL = 0, 
        SOLID = 1, 
    }
    public enum NavAttributeDynamicType : int {
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
    }
    public enum PointWorldTextJustifyHorizontal_t : int {
        POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0, 
        POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1, 
        POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2, 
    }
    public enum EHapticPulseType : int {
        VR_HAND_HAPTIC_PULSE_LIGHT = 0, 
        VR_HAND_HAPTIC_PULSE_MEDIUM = 1, 
        VR_HAND_HAPTIC_PULSE_STRONG = 2, 
    }
    public enum EGCItemMsg : int {
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
    }
    public enum ShakeCommand_t : int {
        SHAKE_START = 0, 
        SHAKE_STOP = 1, 
        SHAKE_AMPLITUDE = 2, 
        SHAKE_FREQUENCY = 3, 
        SHAKE_START_RUMBLEONLY = 4, 
        SHAKE_START_NORUMBLE = 5, 
        SHAKE_DURATION = 6, 
    }
    public enum Flags_t : int {
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
    }
    public enum TRAIN_CODE : int {
        TRAIN_SAFE = 0, 
        TRAIN_BLOCKING = 1, 
        TRAIN_FOLLOWING = 2, 
    }
    public enum DestructiblePartDestructionDeathBehavior_t : int {
        eDoNotKill = 0, 
        eKill = 1, 
        eGib = 2, 
        eRemove = 3, 
    }
    public enum BrushSolidities_e : int {
        BRUSHSOLID_TOGGLE = 0, 
        BRUSHSOLID_NEVER = 1, 
        BRUSHSOLID_ALWAYS = 2, 
    }
    public enum GCProtoBufMsgSrc : int {
        GCProtoBufMsgSrc_Unspecified = 0, 
        GCProtoBufMsgSrc_FromSystem = 1, 
        GCProtoBufMsgSrc_FromSteamID = 2, 
        GCProtoBufMsgSrc_FromGC = 3, 
        GCProtoBufMsgSrc_ReplySystem = 4, 
    }
    public enum QuestProgress__Reason : int {
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
    }
    public enum ModifyDamageReturn_t : int {
        CONTINUE_TO_APPLY_DAMAGE = 0, 
        ABORT_DO_NOT_APPLY_DAMAGE = 1, 
    }
    public enum ShadowType_t : int {
        SHADOWS_NONE = 0, 
        SHADOWS_SIMPLE = 1, 
    }
    public enum DirectionAlongSimplePath_t : int {
        None = 0, 
        TGoesUp = 1, 
        TGoesDown = 2, 
    }
    public enum GrenadeType_t : int {
        GRENADE_TYPE_EXPLOSIVE = 0, 
        GRENADE_TYPE_FLASH = 1, 
        GRENADE_TYPE_FIRE = 2, 
        GRENADE_TYPE_DECOY = 3, 
        GRENADE_TYPE_SMOKE = 4, 
        GRENADE_TYPE_TOTAL = 5, 
    }
    public enum ValueRemapperInputType_t : int {
        InputType_PlayerShootPosition = 0, 
        InputType_PlayerShootPositionAroundAxis = 1, 
    }
    public enum EKillTypes_t : int {
        KILL_NONE = 0, 
        KILL_DEFAULT = 1, 
        KILL_HEADSHOT = 2, 
        KILL_BLAST = 3, 
        KILL_BURN = 4, 
        KILL_SLASH = 5, 
        KILL_SHOCK = 6, 
        KILLTYPE_COUNT = 7, 
    }
    public enum WeaponSound_t : int {
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
    }
    public enum TakeDamageFlags_t : int {
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
    }
    public enum ShatterGlassEntityPoolState_t : int {
        ENTITY_POOL_STATE_INVALID = 0, 
        ENTITY_POOL_STATE_AVAILABLE = 1, 
        ENTITY_POOL_STATE_IN_USE = 2, 
    }
    public enum EGCPetMsg : int {
        k_EMsgGCAckPetEvent = 2538, 
    }
    public enum ValueRemapperHapticsType_t : int {
        HaticsType_Default = 0, 
        HaticsType_None = 1, 
    }
    public enum Disposition_t : int {
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
    }
    public enum GCConnectionStatus : int {
        GCConnectionStatus_HAVE_SESSION = 0, 
        GCConnectionStatus_GC_GOING_DOWN = 1, 
        GCConnectionStatus_NO_SESSION = 2, 
        GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 3, 
        GCConnectionStatus_NO_STEAM = 4, 
    }
    public enum CanPlaySequence_t : int {
        CANNOT_PLAY = 0, 
        CAN_PLAY_NOW = 1, 
        CAN_PLAY_ENQUEUED = 2, 
    }
    public enum BodySectionMutex_t : int {
        eNone = 0, 
        eLowerBody = 1, 
        eUpperBody = 2, 
        eFullBody = 3, 
    }
    public enum EChickenActivity : int {
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
    }
    public enum CCSPlayerAnimationState__AirAction_t : int {
        None = 0, 
        Jump = 1, 
        StartFall = 2, 
        Land = 3, 
    }
    public enum MedalRank_t : int {
        MEDAL_RANK_NONE = 0, 
        MEDAL_RANK_BRONZE = 1, 
        MEDAL_RANK_SILVER = 2, 
        MEDAL_RANK_GOLD = 3, 
        MEDAL_RANK_COUNT = 4, 
    }
    public enum EBaseClientMessages : int {
        CM_CustomGameEvent = 280, 
        CM_CustomGameEventBounce = 281, 
        CM_ClientUIEvent = 282, 
        CM_DevPaletteVisibilityChanged = 283, 
        CM_WorldUIControllerHasPanelChanged = 284, 
        CM_RotateAnchor = 285, 
        CM_MAX_BASE = 300, 
    }
    public enum ObserverMode_t : int {
        OBS_MODE_NONE = 0, 
        OBS_MODE_FIXED = 1, 
        OBS_MODE_IN_EYE = 2, 
        OBS_MODE_CHASE = 3, 
        OBS_MODE_ROAMING = 4, 
        NUM_OBSERVER_MODES = 5, 
    }
    public enum FuncDoorSpawnPos_t : int {
        FUNC_DOOR_SPAWN_CLOSED = 0, 
        FUNC_DOOR_SPAWN_OPEN = 1, 
    }
    public enum EOverrideBlockLOS_t : int {
        BLOCK_LOS_DEFAULT = 0, 
        BLOCK_LOS_FORCE_FALSE = 1, 
        BLOCK_LOS_FORCE_TRUE = 2, 
    }
    public enum EntityAttachmentType_t : int {
        eAbsOrigin = 0, 
        eCenter = 1, 
        eEyes = 2, 
        eAttachment = 3, 
        eLocalOffset = 4, 
    }
    public enum ECsgoGameEvents : int {
        GE_PlayerAnimEventId = 450, 
        GE_RadioIconEventId = 451, 
        GE_FireBulletsId = 452, 
        GE_PlayerBulletHitId = 453, 
    }
    public enum MoveType_t : int {
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
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1280)]
    public unsafe struct CWeaponNOVA {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB00)]
    public unsafe struct CPointWorldText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_messageText[0x200];
        [FieldOffset(0xA50)] public fixed byte m_FontName[0x40];
        [FieldOffset(0xA90)] public fixed byte m_BackgroundMaterialName[0x40];
        [FieldOffset(0xAD0)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0xAD1)] public fixed byte m_bFullbright[0x3];
        [FieldOffset(0xAD4)] public fixed byte m_flWorldUnitsPerPx[0x4];
        [FieldOffset(0xAD8)] public fixed byte m_flFontSize[0x4];
        [FieldOffset(0xADC)] public fixed byte m_flDepthOffset[0x4];
        [FieldOffset(0xAE0)] public fixed byte m_bDrawBackground[0x4];
        [FieldOffset(0xAE4)] public fixed byte m_flBackgroundBorderWidth[0x4];
        [FieldOffset(0xAE8)] public fixed byte m_flBackgroundBorderHeight[0x4];
        [FieldOffset(0xAEC)] public fixed byte m_flBackgroundWorldToUV[0x4];
        [FieldOffset(0xAF0)] public fixed byte m_Color[0x4];
        [FieldOffset(0xAF4)] public fixed byte m_nJustifyHorizontal[0x4];
        [FieldOffset(0xAF8)] public fixed byte m_nJustifyVertical[0x4];
        [FieldOffset(0xAFC)] public fixed byte m_nReorientMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x550)]
    public unsafe struct CAmbientGeneric {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_radius[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flMaxRadius[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_iSoundLevel[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_dpv[0x64];
        [FieldOffset(0x518)] public fixed byte m_fActive[0x1];
        [FieldOffset(0x519)] public fixed byte m_fLooping[0x7];
        [FieldOffset(0x520)] public fixed byte m_iszSound[0x8];
        [FieldOffset(0x528)] public fixed byte m_sSourceEntName[0x8];
        [FieldOffset(0x530)] public fixed byte m_hSoundSource[0x4];
        [FieldOffset(0x534)] public fixed byte m_nSoundSourceEntIndex[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x528)]
    public unsafe struct CEnvEntityMaker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vecEntityMins[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_vecEntityMaxs[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_hCurrentInstance[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hCurrentBlocker[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_vecBlockerOrigin[0xC];
        [FieldOffset(0x4D4)] public fixed byte m_angPostSpawnDirection[0xC];
        [FieldOffset(0x4E0)] public fixed byte m_flPostSpawnDirectionVariance[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_flPostSpawnSpeed[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_bPostSpawnUseAngles[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_iszTemplate[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_pOutputOnSpawned[0x18];
        [FieldOffset(0x510)] public fixed byte m_pOutputOnFailedSpawn[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CPulseGraphInstance_GameBlackboard {
        [FieldOffset(0x0)] public fixed byte pad_0[0x150];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CFilterEnemy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iszEnemyName[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_flOuterRadius[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_nMaxSquadmatesPerEnemy[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_iszPlayerName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_WingmanIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_WaitForCursorsWithTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_bTagSelfWhenComplete[0x4];
        [FieldOffset(0x12C)] public fixed byte m_nDesiredKillPriority[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x958)]
    public unsafe struct CFuncTrackAuto {
        [FieldOffset(0x0)] public fixed byte pad_0[0x958];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6F0)]
    public unsafe struct CScriptedSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszEntry[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszPreIdle[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszPlay[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iszPostIdle[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_iszModifierToAddOnPlay[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_iszNextScript[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_iszEntity[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iszSyncGroup[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_nMoveTo[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_nMoveToGait[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_nHeldWeaponBehavior[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_nForcedCrouchState[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_bIsPlayingPreIdle[0x1];
        [FieldOffset(0x4F9)] public fixed byte m_bIsPlayingEntry[0x1];
        [FieldOffset(0x4FA)] public fixed byte m_bIsPlayingAction[0x1];
        [FieldOffset(0x4FB)] public fixed byte m_bIsPlayingPostIdle[0x1];
        [FieldOffset(0x4FC)] public fixed byte m_bDontRotateOther[0x1];
        [FieldOffset(0x4FD)] public fixed byte m_bIsRepeatable[0x1];
        [FieldOffset(0x4FE)] public fixed byte m_bShouldLeaveCorpse[0x1];
        [FieldOffset(0x4FF)] public fixed byte m_bStartOnSpawn[0x1];
        [FieldOffset(0x500)] public fixed byte m_bDisallowInterrupts[0x1];
        [FieldOffset(0x501)] public fixed byte m_bCanOverrideNPCState[0x1];
        [FieldOffset(0x502)] public fixed byte m_bDontTeleportAtEnd[0x1];
        [FieldOffset(0x503)] public fixed byte m_bHighPriority[0x1];
        [FieldOffset(0x504)] public fixed byte m_bHideDebugComplaints[0x1];
        [FieldOffset(0x505)] public fixed byte m_bContinueOnDeath[0x1];
        [FieldOffset(0x506)] public fixed byte m_bLoopPreIdleSequence[0x1];
        [FieldOffset(0x507)] public fixed byte m_bLoopActionSequence[0x1];
        [FieldOffset(0x508)] public fixed byte m_bLoopPostIdleSequence[0x1];
        [FieldOffset(0x509)] public fixed byte m_bSynchPostIdles[0x1];
        [FieldOffset(0x50A)] public fixed byte m_bIgnoreLookAt[0x1];
        [FieldOffset(0x50B)] public fixed byte m_bIgnoreGravity[0x1];
        [FieldOffset(0x50C)] public fixed byte m_bDisableNPCCollisions[0x1];
        [FieldOffset(0x50D)] public fixed byte m_bKeepAnimgraphLockedPost[0x1];
        [FieldOffset(0x50E)] public fixed byte m_bDontAddModifiers[0x1];
        [FieldOffset(0x50F)] public fixed byte m_bDisableAimingWhileMoving[0x1];
        [FieldOffset(0x510)] public fixed byte m_bIgnoreRotation[0x4];
        [FieldOffset(0x514)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x518)] public fixed byte m_flRepeat[0x4];
        [FieldOffset(0x51C)] public fixed byte m_flPlayAnimFadeInTime[0x4];
        [FieldOffset(0x520)] public fixed byte m_flMoveInterpTime[0x4];
        [FieldOffset(0x524)] public fixed byte m_flAngRate[0x4];
        [FieldOffset(0x528)] public fixed byte m_flMoveSpeed[0x4];
        [FieldOffset(0x52C)] public fixed byte m_bWaitUntilMoveCompletesToStartAnimation[0x4];
        [FieldOffset(0x530)] public fixed byte m_nNotReadySequenceCount[0x4];
        [FieldOffset(0x534)] public fixed byte m_startTime[0x4];
        [FieldOffset(0x538)] public fixed byte m_bWaitForBeginSequence[0x4];
        [FieldOffset(0x53C)] public fixed byte m_saved_effects[0x4];
        [FieldOffset(0x540)] public fixed byte m_savedFlags[0x4];
        [FieldOffset(0x544)] public fixed byte m_savedCollisionGroup[0x4];
        [FieldOffset(0x548)] public fixed byte m_bInterruptable[0x1];
        [FieldOffset(0x549)] public fixed byte m_sequenceStarted[0x1];
        [FieldOffset(0x54A)] public fixed byte m_bPositionRelativeToOtherEntity[0x2];
        [FieldOffset(0x54C)] public fixed byte m_hTargetEnt[0x4];
        [FieldOffset(0x550)] public fixed byte m_hNextCine[0x4];
        [FieldOffset(0x554)] public fixed byte m_bThinking[0x1];
        [FieldOffset(0x555)] public fixed byte m_bInitiatedSelfDelete[0x1];
        [FieldOffset(0x556)] public fixed byte m_bIsTeleportingDueToMoveTo[0x1];
        [FieldOffset(0x557)] public fixed byte m_bAllowCustomInterruptConditions[0x1];
        [FieldOffset(0x558)] public fixed byte m_hForcedTarget[0x4];
        [FieldOffset(0x55C)] public fixed byte m_bDontCancelOtherSequences[0x1];
        [FieldOffset(0x55D)] public fixed byte m_bForceSynch[0x1];
        [FieldOffset(0x55E)] public fixed byte m_bPreventUpdateYawOnFinish[0x1];
        [FieldOffset(0x55F)] public fixed byte m_bEnsureOnNavmeshOnFinish[0x1];
        [FieldOffset(0x560)] public fixed byte m_onDeathBehavior[0x4];
        [FieldOffset(0x564)] public fixed byte m_ConflictResponse[0x4];
        [FieldOffset(0x568)] public fixed byte m_OnBeginSequence[0x18];
        [FieldOffset(0x580)] public fixed byte m_OnActionStartOrLoop[0x18];
        [FieldOffset(0x598)] public fixed byte m_OnEndSequence[0x18];
        [FieldOffset(0x5B0)] public fixed byte m_OnPostIdleEndSequence[0x18];
        [FieldOffset(0x5C8)] public fixed byte m_OnCancelSequence[0x18];
        [FieldOffset(0x5E0)] public fixed byte m_OnCancelFailedSequence[0x18];
        [FieldOffset(0x5F8)] public fixed byte m_OnScriptEvent[0xC8];
        [FieldOffset(0x6C0)] public fixed byte m_matOtherToMain[0x20];
        [FieldOffset(0x6E0)] public fixed byte m_hInteractionMainEntity[0x4];
        [FieldOffset(0x6E4)] public fixed byte m_iPlayerDeathBehavior[0x4];
        [FieldOffset(0x6E8)] public fixed byte m_bSkipFadeIn[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA30)]
    public unsafe struct CFogTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_fog[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoTeleportDestination {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CPointBroadcastClientCommand {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CCSPlayer_PingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_flPlayerPingTokens[0x14];
        [FieldOffset(0x5C)] public fixed byte m_hPlayerPing[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CHEGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct CPhysicsSpring {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pSpringJoint[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flDampingRatio[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flRestLength[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_nameAttachStart[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_nameAttachEnd[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_start[0xC];
        [FieldOffset(0x4DC)] public fixed byte m_end[0xC];
        [FieldOffset(0x4E8)] public fixed byte m_teleportTick[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CEnvMuzzleFlash {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flScale[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszParentAttachment[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CEconItemAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_iAttributeDefinitionIndex[0x4];
        [FieldOffset(0x34)] public fixed byte m_flValue[0x4];
        [FieldOffset(0x38)] public fixed byte m_flInitialValue[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nRefundableCurrency[0x4];
        [FieldOffset(0x40)] public fixed byte m_bSetBonus[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_RaceCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponRevolver {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CFuncTrainControls {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CBtActionCombatPositioning {
        [FieldOffset(0x0)] public fixed byte pad_0[0x68];
        [FieldOffset(0x68)] public fixed byte m_szSensorInputKey[0x18];
        [FieldOffset(0x80)] public fixed byte m_szIsAttackingKey[0x8];
        [FieldOffset(0x88)] public fixed byte m_ActionTimer[0x18];
        [FieldOffset(0xA0)] public fixed byte m_bCrouching[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xCB0)]
    public unsafe struct CFuncRetakeBarrier {
        [FieldOffset(0x0)] public fixed byte pad_0[0xCB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAE8)]
    public unsafe struct CTriggerBuoyancy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_BuoyancyHelper[0x118];
        [FieldOffset(0xAE0)] public fixed byte m_flFluidDensity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CTonemapController2Alias_env_tonemap_controller2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CPathTrack {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pnext[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_pprevious[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_paltpath[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_length[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_altName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_nIterVal[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_eOrientationType[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_OnPass[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CCSGO_EndOfMatchLineupEndpoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Base {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nEditorNodeID[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA00)]
    public unsafe struct CTriggerProximity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_hMeasureTarget[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_iszMeasureTarget[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_fRadius[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_nTouchers[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_NearestEntityDistance[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CTankTrainAI {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hTrain[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_hTargetEntity[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_soundPlaying[0x18];
        [FieldOffset(0x4C8)] public fixed byte m_startSoundName[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_engineSoundName[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_movementSoundName[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_targetEntityName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x880)]
    public unsafe struct CGameText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x860];
        [FieldOffset(0x860)] public fixed byte m_iszMessage[0x8];
        [FieldOffset(0x868)] public fixed byte m_textParms[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x860)]
    public unsafe struct CGameEnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x860];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CInfoDeathmatchSpawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1020)]
    public unsafe struct CCSPlayerController_InventoryServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_unMusicID[0x4];
        [FieldOffset(0x44)] public fixed byte m_rank[0x18];
        [FieldOffset(0x5C)] public fixed byte m_nPersonaDataPublicLevel[0x4];
        [FieldOffset(0x60)] public fixed byte m_nPersonaDataPublicCommendsLeader[0x4];
        [FieldOffset(0x64)] public fixed byte m_nPersonaDataPublicCommendsTeacher[0x4];
        [FieldOffset(0x68)] public fixed byte m_nPersonaDataPublicCommendsFriendly[0x4];
        [FieldOffset(0x6C)] public fixed byte m_nPersonaDataXpTrailLevel[0xF1C];
        [FieldOffset(0xF88)] public fixed byte m_unEquippedPlayerSprayIDs[0x8];
        [FieldOffset(0xF90)] public fixed byte m_unCurrentLoadoutHash[0x8];
        [FieldOffset(0xF98)] public fixed byte m_vecServerAuthoritativeWeaponSlots[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CCSPlayerModernJump {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nLastActualJumpPressTick[0x4];
        [FieldOffset(0x14)] public fixed byte m_flLastActualJumpPressFrac[0x4];
        [FieldOffset(0x18)] public fixed byte m_nLastUsableJumpPressTick[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flLastUsableJumpPressFrac[0x4];
        [FieldOffset(0x20)] public fixed byte m_nLastLandedTick[0x4];
        [FieldOffset(0x24)] public fixed byte m_flLastLandedFrac[0x4];
        [FieldOffset(0x28)] public fixed byte m_flLastLandedVelocityX[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flLastLandedVelocityY[0x4];
        [FieldOffset(0x30)] public fixed byte m_flLastLandedVelocityZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA90)]
    public unsafe struct CTriggerFan {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_vFanOriginOffset[0xC];
        [FieldOffset(0x9D4)] public fixed byte m_vDirection[0xC];
        [FieldOffset(0x9E0)] public fixed byte m_bPushTowardsInfoTarget[0x1];
        [FieldOffset(0x9E1)] public fixed byte m_bPushAwayFromInfoTarget[0xF];
        [FieldOffset(0x9F0)] public fixed byte m_qNoiseDelta[0x10];
        [FieldOffset(0xA00)] public fixed byte m_hInfoFan[0x4];
        [FieldOffset(0xA04)] public fixed byte m_flForce[0x4];
        [FieldOffset(0xA08)] public fixed byte m_bFalloff[0x8];
        [FieldOffset(0xA10)] public fixed byte m_RampTimer[0x18];
        [FieldOffset(0xA28)] public fixed byte m_vFanOriginWS[0xC];
        [FieldOffset(0xA34)] public fixed byte m_vFanOriginLS[0xC];
        [FieldOffset(0xA40)] public fixed byte m_vFanEndLS[0xC];
        [FieldOffset(0xA4C)] public fixed byte m_vNoiseDirectionTarget[0xC];
        [FieldOffset(0xA58)] public fixed byte m_iszInfoFan[0x8];
        [FieldOffset(0xA60)] public fixed byte m_flRopeForceScale[0x4];
        [FieldOffset(0xA64)] public fixed byte m_flParticleForceScale[0x4];
        [FieldOffset(0xA68)] public fixed byte m_flPlayerForce[0x4];
        [FieldOffset(0xA6C)] public fixed byte m_bPlayerWindblock[0x4];
        [FieldOffset(0xA70)] public fixed byte m_flNPCForce[0x4];
        [FieldOffset(0xA74)] public fixed byte m_flRampTime[0x4];
        [FieldOffset(0xA78)] public fixed byte m_fNoiseDegrees[0x4];
        [FieldOffset(0xA7C)] public fixed byte m_fNoiseSpeed[0x4];
        [FieldOffset(0xA80)] public fixed byte m_bPushPlayer[0x1];
        [FieldOffset(0xA81)] public fixed byte m_bRampDown[0x3];
        [FieldOffset(0xA84)] public fixed byte m_nManagerFanIdx[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x678)]
    public unsafe struct CPhysHingeAlias_phys_hinge_local {
        [FieldOffset(0x0)] public fixed byte pad_0[0x678];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8F0)]
    public unsafe struct CLogicCase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nCase[0x100];
        [FieldOffset(0x5A8)] public fixed byte m_nShuffleCases[0x4];
        [FieldOffset(0x5AC)] public fixed byte m_nLastShuffleCase[0x4];
        [FieldOffset(0x5B0)] public fixed byte m_uchShuffleCaseMap[0x20];
        [FieldOffset(0x5D0)] public fixed byte m_OnCase[0x300];
        [FieldOffset(0x8D0)] public fixed byte m_OnDefault[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Outflow_PlayVOLine {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CInfoGameEventProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszEventName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_flRange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponBizon {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C8)]
    public unsafe struct CGamePlayerZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_OnPlayerInZone[0x18];
        [FieldOffset(0x870)] public fixed byte m_OnPlayerOutZone[0x18];
        [FieldOffset(0x888)] public fixed byte m_PlayersInCount[0x20];
        [FieldOffset(0x8A8)] public fixed byte m_PlayersOutCount[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D0)]
    public unsafe struct CBaseToggle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_toggle_state[0x4];
        [FieldOffset(0x854)] public fixed byte m_flMoveDistance[0x4];
        [FieldOffset(0x858)] public fixed byte m_flWait[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flLip[0x4];
        [FieldOffset(0x860)] public fixed byte m_bAlwaysFireBlockedOutputs[0x4];
        [FieldOffset(0x864)] public fixed byte m_vecPosition1[0xC];
        [FieldOffset(0x870)] public fixed byte m_vecPosition2[0xC];
        [FieldOffset(0x87C)] public fixed byte m_vecMoveAng[0xC];
        [FieldOffset(0x888)] public fixed byte m_vecAngle1[0xC];
        [FieldOffset(0x894)] public fixed byte m_vecAngle2[0xC];
        [FieldOffset(0x8A0)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_vecFinalDest[0xC];
        [FieldOffset(0x8B4)] public fixed byte m_vecFinalAngle[0xC];
        [FieldOffset(0x8C0)] public fixed byte m_movementType[0x8];
        [FieldOffset(0x8C8)] public fixed byte m_sMaster[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CPulseServerCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE8];
        [FieldOffset(0xE8)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0xEC)] public fixed byte m_hCaller[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_PlaySequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_SequenceName[0x8];
        [FieldOffset(0xE0)] public fixed byte m_PulseAnimEvents[0x18];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14D8)]
    public unsafe struct CInferno {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_firePositions[0x300];
        [FieldOffset(0xB50)] public fixed byte m_fireParentPositions[0x300];
        [FieldOffset(0xE50)] public fixed byte m_bFireIsBurning[0x40];
        [FieldOffset(0xE90)] public fixed byte m_BurnNormal[0x300];
        [FieldOffset(0x1190)] public fixed byte m_fireCount[0x4];
        [FieldOffset(0x1194)] public fixed byte m_nInfernoType[0x4];
        [FieldOffset(0x1198)] public fixed byte m_nFireEffectTickBegin[0x4];
        [FieldOffset(0x119C)] public fixed byte m_nFireLifetime[0x4];
        [FieldOffset(0x11A0)] public fixed byte m_bInPostEffectTime[0x1];
        [FieldOffset(0x11A1)] public fixed byte m_bWasCreatedInSmoke[0x207];
        [FieldOffset(0x13A8)] public fixed byte m_extent[0x18];
        [FieldOffset(0x13C0)] public fixed byte m_damageTimer[0x18];
        [FieldOffset(0x13D8)] public fixed byte m_damageRampTimer[0x18];
        [FieldOffset(0x13F0)] public fixed byte m_splashVelocity[0xC];
        [FieldOffset(0x13FC)] public fixed byte m_InitialSplashVelocity[0xC];
        [FieldOffset(0x1408)] public fixed byte m_startPos[0xC];
        [FieldOffset(0x1414)] public fixed byte m_vecOriginalSpawnLocation[0xC];
        [FieldOffset(0x1420)] public fixed byte m_activeTimer[0x10];
        [FieldOffset(0x1430)] public fixed byte m_fireSpawnOffset[0x4];
        [FieldOffset(0x1434)] public fixed byte m_nMaxFlames[0x4];
        [FieldOffset(0x1438)] public fixed byte m_nSpreadCount[0x8];
        [FieldOffset(0x1440)] public fixed byte m_BookkeepingTimer[0x18];
        [FieldOffset(0x1458)] public fixed byte m_NextSpreadTimer[0x18];
        [FieldOffset(0x1470)] public fixed byte m_nSourceItemDefIndex[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CTouchExpansionComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_Outflow_PlaySceneBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_OnFinished[0x48];
        [FieldOffset(0x120)] public fixed byte m_Triggers[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CPulseCell_LerpCameraSettings {
        [FieldOffset(0x0)] public fixed byte pad_0[0x120];
        [FieldOffset(0x120)] public fixed byte m_flSeconds[0x4];
        [FieldOffset(0x124)] public fixed byte m_Start[0x10];
        [FieldOffset(0x134)] public fixed byte m_End[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponSCAR20 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x868)]
    public unsafe struct CFuncInteractionLayerClip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bDisabled[0x8];
        [FieldOffset(0x858)] public fixed byte m_iszInteractsAs[0x8];
        [FieldOffset(0x860)] public fixed byte m_iszInteractsWith[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CCSObserver_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E8)]
    public unsafe struct CCSMinimapVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_strMinimapName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E8)]
    public unsafe struct CTriggerDetectBulletFire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_bPlayerFireOnly[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_OnDetectedBulletFire[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CCSPlayer_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hLastKnownUseEntity[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flLastUseTimeStamp[0x4];
        [FieldOffset(0x50)] public fixed byte m_flTimeLastUsedWindow[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponAWP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nCheckType[0x8];
        [FieldOffset(0x50)] public fixed byte m_OutflowList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CInfoFan {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E8];
        [FieldOffset(0x4E8)] public fixed byte m_fFanForceMaxRadius[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_fFanForceMinRadius[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_flCurveDistRange[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_FanForceCurveString[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CGameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
        [FieldOffset(0x30)] public fixed byte m_szQuestName[0x80];
        [FieldOffset(0xB0)] public fixed byte m_nQuestPhase[0x4];
        [FieldOffset(0xB4)] public fixed byte m_nLastMatchTime[0x4];
        [FieldOffset(0xB8)] public fixed byte m_nLastMatchTime_MatchID64[0x8];
        [FieldOffset(0xC0)] public fixed byte m_nTotalPausedTicks[0x4];
        [FieldOffset(0xC4)] public fixed byte m_nPauseStartTick[0x4];
        [FieldOffset(0xC8)] public fixed byte m_bGamePaused[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyDynamicAttributeEHandle {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB50)]
    public unsafe struct CFish {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_pool[0x4];
        [FieldOffset(0xA44)] public fixed byte m_id[0x4];
        [FieldOffset(0xA48)] public fixed byte m_x[0x4];
        [FieldOffset(0xA4C)] public fixed byte m_y[0x4];
        [FieldOffset(0xA50)] public fixed byte m_z[0x4];
        [FieldOffset(0xA54)] public fixed byte m_angle[0x4];
        [FieldOffset(0xA58)] public fixed byte m_angleChange[0x4];
        [FieldOffset(0xA5C)] public fixed byte m_forward[0xC];
        [FieldOffset(0xA68)] public fixed byte m_perp[0xC];
        [FieldOffset(0xA74)] public fixed byte m_poolOrigin[0xC];
        [FieldOffset(0xA80)] public fixed byte m_waterLevel[0x4];
        [FieldOffset(0xA84)] public fixed byte m_speed[0x4];
        [FieldOffset(0xA88)] public fixed byte m_desiredSpeed[0x4];
        [FieldOffset(0xA8C)] public fixed byte m_calmSpeed[0x4];
        [FieldOffset(0xA90)] public fixed byte m_panicSpeed[0x4];
        [FieldOffset(0xA94)] public fixed byte m_avoidRange[0x4];
        [FieldOffset(0xA98)] public fixed byte m_turnTimer[0x18];
        [FieldOffset(0xAB0)] public fixed byte m_turnClockwise[0x8];
        [FieldOffset(0xAB8)] public fixed byte m_goTimer[0x18];
        [FieldOffset(0xAD0)] public fixed byte m_moveTimer[0x18];
        [FieldOffset(0xAE8)] public fixed byte m_panicTimer[0x18];
        [FieldOffset(0xB00)] public fixed byte m_disperseTimer[0x18];
        [FieldOffset(0xB18)] public fixed byte m_proximityTimer[0x18];
        [FieldOffset(0xB30)] public fixed byte m_visible[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5E38)]
    public unsafe struct CCSBot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x108];
        [FieldOffset(0x108)] public fixed byte m_eyePosition[0xC];
        [FieldOffset(0x114)] public fixed byte m_name[0x40];
        [FieldOffset(0x154)] public fixed byte m_combatRange[0x4];
        [FieldOffset(0x158)] public fixed byte m_isRogue[0x8];
        [FieldOffset(0x160)] public fixed byte m_rogueTimer[0x1C];
        [FieldOffset(0x17C)] public fixed byte m_diedLastRound[0x4];
        [FieldOffset(0x180)] public fixed byte m_safeTime[0x4];
        [FieldOffset(0x184)] public fixed byte m_wasSafe[0x8];
        [FieldOffset(0x18C)] public fixed byte m_blindFire[0x4];
        [FieldOffset(0x190)] public fixed byte m_surpriseTimer[0x18];
        [FieldOffset(0x1A8)] public fixed byte m_bAllowActive[0x1];
        [FieldOffset(0x1A9)] public fixed byte m_isFollowing[0x3];
        [FieldOffset(0x1AC)] public fixed byte m_leader[0x4];
        [FieldOffset(0x1B0)] public fixed byte m_followTimestamp[0x4];
        [FieldOffset(0x1B4)] public fixed byte m_allowAutoFollowTime[0x4];
        [FieldOffset(0x1B8)] public fixed byte m_hurryTimer[0x18];
        [FieldOffset(0x1D0)] public fixed byte m_alertTimer[0x18];
        [FieldOffset(0x1E8)] public fixed byte m_sneakTimer[0x18];
        [FieldOffset(0x200)] public fixed byte m_panicTimer[0x3C8];
        [FieldOffset(0x5C8)] public fixed byte m_stateTimestamp[0x4];
        [FieldOffset(0x5CC)] public fixed byte m_isAttacking[0x1];
        [FieldOffset(0x5CD)] public fixed byte m_isOpeningDoor[0x7];
        [FieldOffset(0x5D4)] public fixed byte m_taskEntity[0x10];
        [FieldOffset(0x5E4)] public fixed byte m_goalPosition[0xC];
        [FieldOffset(0x5F0)] public fixed byte m_goalEntity[0x4];
        [FieldOffset(0x5F4)] public fixed byte m_avoid[0x4];
        [FieldOffset(0x5F8)] public fixed byte m_avoidTimestamp[0x4];
        [FieldOffset(0x5FC)] public fixed byte m_isStopping[0x1];
        [FieldOffset(0x5FD)] public fixed byte m_hasVisitedEnemySpawn[0x3];
        [FieldOffset(0x600)] public fixed byte m_stillTimer[0x10];
        [FieldOffset(0x610)] public fixed byte m_bEyeAnglesUnderPathFinderControl[0x48F0];
        [FieldOffset(0x4F00)] public fixed byte m_pathIndex[0x4];
        [FieldOffset(0x4F04)] public fixed byte m_areaEnteredTimestamp[0x4];
        [FieldOffset(0x4F08)] public fixed byte m_repathTimer[0x18];
        [FieldOffset(0x4F20)] public fixed byte m_avoidFriendTimer[0x18];
        [FieldOffset(0x4F38)] public fixed byte m_isFriendInTheWay[0x8];
        [FieldOffset(0x4F40)] public fixed byte m_politeTimer[0x18];
        [FieldOffset(0x4F58)] public fixed byte m_isWaitingBehindFriend[0x2C];
        [FieldOffset(0x4F84)] public fixed byte m_pathLadderEnd[0x4C];
        [FieldOffset(0x4FD0)] public fixed byte m_mustRunTimer[0x18];
        [FieldOffset(0x4FE8)] public fixed byte m_waitTimer[0x18];
        [FieldOffset(0x5000)] public fixed byte m_updateTravelDistanceTimer[0x18];
        [FieldOffset(0x5018)] public fixed byte m_playerTravelDistance[0x100];
        [FieldOffset(0x5118)] public fixed byte m_travelDistancePhase[0x198];
        [FieldOffset(0x52B0)] public fixed byte m_hostageEscortCount[0x4];
        [FieldOffset(0x52B4)] public fixed byte m_hostageEscortCountTimestamp[0x4];
        [FieldOffset(0x52B8)] public fixed byte m_desiredTeam[0x4];
        [FieldOffset(0x52BC)] public fixed byte m_hasJoined[0x1];
        [FieldOffset(0x52BD)] public fixed byte m_isWaitingForHostage[0x3];
        [FieldOffset(0x52C0)] public fixed byte m_inhibitWaitingForHostageTimer[0x18];
        [FieldOffset(0x52D8)] public fixed byte m_waitForHostageTimer[0x18];
        [FieldOffset(0x52F0)] public fixed byte m_noisePosition[0xC];
        [FieldOffset(0x52FC)] public fixed byte m_noiseTravelDistance[0x4];
        [FieldOffset(0x5300)] public fixed byte m_noiseTimestamp[0x8];
        [FieldOffset(0x5308)] public fixed byte m_noiseSource[0x18];
        [FieldOffset(0x5320)] public fixed byte m_noiseBendTimer[0x18];
        [FieldOffset(0x5338)] public fixed byte m_bentNoisePosition[0xC];
        [FieldOffset(0x5344)] public fixed byte m_bendNoisePositionValid[0x4];
        [FieldOffset(0x5348)] public fixed byte m_lookAroundStateTimestamp[0x4];
        [FieldOffset(0x534C)] public fixed byte m_lookAheadAngle[0x4];
        [FieldOffset(0x5350)] public fixed byte m_lookUpAngle[0x4];
        [FieldOffset(0x5354)] public fixed byte m_forwardAngle[0x4];
        [FieldOffset(0x5358)] public fixed byte m_inhibitLookAroundTimestamp[0x8];
        [FieldOffset(0x5360)] public fixed byte m_lookAtSpot[0x10];
        [FieldOffset(0x5370)] public fixed byte m_lookAtSpotDuration[0x4];
        [FieldOffset(0x5374)] public fixed byte m_lookAtSpotTimestamp[0x4];
        [FieldOffset(0x5378)] public fixed byte m_lookAtSpotAngleTolerance[0x4];
        [FieldOffset(0x537C)] public fixed byte m_lookAtSpotClearIfClose[0x1];
        [FieldOffset(0x537D)] public fixed byte m_lookAtSpotAttack[0x3];
        [FieldOffset(0x5380)] public fixed byte m_lookAtDesc[0x8];
        [FieldOffset(0x5388)] public fixed byte m_peripheralTimestamp[0x188];
        [FieldOffset(0x5510)] public fixed byte m_approachPointCount[0x4];
        [FieldOffset(0x5514)] public fixed byte m_approachPointViewPosition[0xC];
        [FieldOffset(0x5520)] public fixed byte m_viewSteadyTimer[0x18];
        [FieldOffset(0x5538)] public fixed byte m_tossGrenadeTimer[0x20];
        [FieldOffset(0x5558)] public fixed byte m_isAvoidingGrenade[0x20];
        [FieldOffset(0x5578)] public fixed byte m_spotCheckTimestamp[0x408];
        [FieldOffset(0x5980)] public fixed byte m_checkedHidingSpotCount[0x4];
        [FieldOffset(0x5984)] public fixed byte m_lookPitch[0x4];
        [FieldOffset(0x5988)] public fixed byte m_lookPitchVel[0x4];
        [FieldOffset(0x598C)] public fixed byte m_lookYaw[0x4];
        [FieldOffset(0x5990)] public fixed byte m_lookYawVel[0x4];
        [FieldOffset(0x5994)] public fixed byte m_targetSpot[0xC];
        [FieldOffset(0x59A0)] public fixed byte m_targetSpotVelocity[0xC];
        [FieldOffset(0x59AC)] public fixed byte m_targetSpotPredicted[0xC];
        [FieldOffset(0x59B8)] public fixed byte m_aimError[0xC];
        [FieldOffset(0x59C4)] public fixed byte m_aimGoal[0xC];
        [FieldOffset(0x59D0)] public fixed byte m_targetSpotTime[0x4];
        [FieldOffset(0x59D4)] public fixed byte m_aimFocus[0x4];
        [FieldOffset(0x59D8)] public fixed byte m_aimFocusInterval[0x4];
        [FieldOffset(0x59DC)] public fixed byte m_aimFocusNextUpdate[0xC];
        [FieldOffset(0x59E8)] public fixed byte m_ignoreEnemiesTimer[0x18];
        [FieldOffset(0x5A00)] public fixed byte m_enemy[0x4];
        [FieldOffset(0x5A04)] public fixed byte m_isEnemyVisible[0x1];
        [FieldOffset(0x5A05)] public fixed byte m_visibleEnemyParts[0x3];
        [FieldOffset(0x5A08)] public fixed byte m_lastEnemyPosition[0xC];
        [FieldOffset(0x5A14)] public fixed byte m_lastSawEnemyTimestamp[0x4];
        [FieldOffset(0x5A18)] public fixed byte m_firstSawEnemyTimestamp[0x4];
        [FieldOffset(0x5A1C)] public fixed byte m_currentEnemyAcquireTimestamp[0x4];
        [FieldOffset(0x5A20)] public fixed byte m_enemyDeathTimestamp[0x4];
        [FieldOffset(0x5A24)] public fixed byte m_friendDeathTimestamp[0x4];
        [FieldOffset(0x5A28)] public fixed byte m_isLastEnemyDead[0x4];
        [FieldOffset(0x5A2C)] public fixed byte m_nearbyEnemyCount[0x20C];
        [FieldOffset(0x5C38)] public fixed byte m_bomber[0x4];
        [FieldOffset(0x5C3C)] public fixed byte m_nearbyFriendCount[0x4];
        [FieldOffset(0x5C40)] public fixed byte m_closestVisibleFriend[0x4];
        [FieldOffset(0x5C44)] public fixed byte m_closestVisibleHumanFriend[0x4];
        [FieldOffset(0x5C48)] public fixed byte m_attentionInterval[0x10];
        [FieldOffset(0x5C58)] public fixed byte m_attacker[0x4];
        [FieldOffset(0x5C5C)] public fixed byte m_attackedTimestamp[0x4];
        [FieldOffset(0x5C60)] public fixed byte m_burnedByFlamesTimer[0x10];
        [FieldOffset(0x5C70)] public fixed byte m_lastVictimID[0x4];
        [FieldOffset(0x5C74)] public fixed byte m_isAimingAtEnemy[0x1];
        [FieldOffset(0x5C75)] public fixed byte m_isRapidFiring[0x3];
        [FieldOffset(0x5C78)] public fixed byte m_equipTimer[0x10];
        [FieldOffset(0x5C88)] public fixed byte m_zoomTimer[0x18];
        [FieldOffset(0x5CA0)] public fixed byte m_fireWeaponTimestamp[0x8];
        [FieldOffset(0x5CA8)] public fixed byte m_lookForWeaponsOnGroundTimer[0x18];
        [FieldOffset(0x5CC0)] public fixed byte m_bIsSleeping[0x1];
        [FieldOffset(0x5CC1)] public fixed byte m_isEnemySniperVisible[0x7];
        [FieldOffset(0x5CC8)] public fixed byte m_sawEnemySniperTimer[0xB8];
        [FieldOffset(0x5D80)] public fixed byte m_enemyQueueIndex[0x1];
        [FieldOffset(0x5D81)] public fixed byte m_enemyQueueCount[0x1];
        [FieldOffset(0x5D82)] public fixed byte m_enemyQueueAttendIndex[0x1];
        [FieldOffset(0x5D83)] public fixed byte m_isStuck[0x1];
        [FieldOffset(0x5D84)] public fixed byte m_stuckTimestamp[0x4];
        [FieldOffset(0x5D88)] public fixed byte m_stuckSpot[0x10];
        [FieldOffset(0x5D98)] public fixed byte m_wiggleTimer[0x18];
        [FieldOffset(0x5DB0)] public fixed byte m_stuckJumpTimer[0x18];
        [FieldOffset(0x5DC8)] public fixed byte m_nextCleanupCheckTimestamp[0x4];
        [FieldOffset(0x5DCC)] public fixed byte m_avgVel[0x28];
        [FieldOffset(0x5DF4)] public fixed byte m_avgVelIndex[0x4];
        [FieldOffset(0x5DF8)] public fixed byte m_avgVelCount[0x4];
        [FieldOffset(0x5DFC)] public fixed byte m_lastOrigin[0x10];
        [FieldOffset(0x5E0C)] public fixed byte m_lastRadioRecievedTimestamp[0x4];
        [FieldOffset(0x5E10)] public fixed byte m_lastRadioSentTimestamp[0x4];
        [FieldOffset(0x5E14)] public fixed byte m_radioSubject[0x4];
        [FieldOffset(0x5E18)] public fixed byte m_radioPosition[0xC];
        [FieldOffset(0x5E24)] public fixed byte m_voiceEndTimestamp[0xC];
        [FieldOffset(0x5E30)] public fixed byte m_lastValidReactionQueueFrame[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CHandleTest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_Handle[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_bSendHandle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x728)]
    public unsafe struct CLogicNPCCounter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnMinCountAll[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnMaxCountAll[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_OnFactorAll[0x20];
        [FieldOffset(0x4F8)] public fixed byte m_OnMinPlayerDistAll[0x20];
        [FieldOffset(0x518)] public fixed byte m_OnMinCount_1[0x18];
        [FieldOffset(0x530)] public fixed byte m_OnMaxCount_1[0x18];
        [FieldOffset(0x548)] public fixed byte m_OnFactor_1[0x20];
        [FieldOffset(0x568)] public fixed byte m_OnMinPlayerDist_1[0x20];
        [FieldOffset(0x588)] public fixed byte m_OnMinCount_2[0x18];
        [FieldOffset(0x5A0)] public fixed byte m_OnMaxCount_2[0x18];
        [FieldOffset(0x5B8)] public fixed byte m_OnFactor_2[0x20];
        [FieldOffset(0x5D8)] public fixed byte m_OnMinPlayerDist_2[0x20];
        [FieldOffset(0x5F8)] public fixed byte m_OnMinCount_3[0x18];
        [FieldOffset(0x610)] public fixed byte m_OnMaxCount_3[0x18];
        [FieldOffset(0x628)] public fixed byte m_OnFactor_3[0x20];
        [FieldOffset(0x648)] public fixed byte m_OnMinPlayerDist_3[0x20];
        [FieldOffset(0x668)] public fixed byte m_hSource[0x8];
        [FieldOffset(0x670)] public fixed byte m_iszSourceEntityName[0x8];
        [FieldOffset(0x678)] public fixed byte m_flDistanceMax[0x4];
        [FieldOffset(0x67C)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x680)] public fixed byte m_nMinCountAll[0x4];
        [FieldOffset(0x684)] public fixed byte m_nMaxCountAll[0x4];
        [FieldOffset(0x688)] public fixed byte m_nMinFactorAll[0x4];
        [FieldOffset(0x68C)] public fixed byte m_nMaxFactorAll[0xC];
        [FieldOffset(0x698)] public fixed byte m_iszNPCClassname_1[0x8];
        [FieldOffset(0x6A0)] public fixed byte m_nNPCState_1[0x4];
        [FieldOffset(0x6A4)] public fixed byte m_bInvertState_1[0x4];
        [FieldOffset(0x6A8)] public fixed byte m_nMinCount_1[0x4];
        [FieldOffset(0x6AC)] public fixed byte m_nMaxCount_1[0x4];
        [FieldOffset(0x6B0)] public fixed byte m_nMinFactor_1[0x4];
        [FieldOffset(0x6B4)] public fixed byte m_nMaxFactor_1[0x8];
        [FieldOffset(0x6BC)] public fixed byte m_flDefaultDist_1[0x4];
        [FieldOffset(0x6C0)] public fixed byte m_iszNPCClassname_2[0x8];
        [FieldOffset(0x6C8)] public fixed byte m_nNPCState_2[0x4];
        [FieldOffset(0x6CC)] public fixed byte m_bInvertState_2[0x4];
        [FieldOffset(0x6D0)] public fixed byte m_nMinCount_2[0x4];
        [FieldOffset(0x6D4)] public fixed byte m_nMaxCount_2[0x4];
        [FieldOffset(0x6D8)] public fixed byte m_nMinFactor_2[0x4];
        [FieldOffset(0x6DC)] public fixed byte m_nMaxFactor_2[0x8];
        [FieldOffset(0x6E4)] public fixed byte m_flDefaultDist_2[0x4];
        [FieldOffset(0x6E8)] public fixed byte m_iszNPCClassname_3[0x8];
        [FieldOffset(0x6F0)] public fixed byte m_nNPCState_3[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_bInvertState_3[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_nMinCount_3[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_nMaxCount_3[0x4];
        [FieldOffset(0x700)] public fixed byte m_nMinFactor_3[0x4];
        [FieldOffset(0x704)] public fixed byte m_nMaxFactor_3[0x8];
        [FieldOffset(0x70C)] public fixed byte m_flDefaultDist_3[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CCSPlayer_RadioServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_flGotHostageTalkTimer[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flDefusingTalkTimer[0x4];
        [FieldOffset(0x50)] public fixed byte m_flC4PlantTalkTimer[0x4];
        [FieldOffset(0x54)] public fixed byte m_flRadioTokenSlots[0xC];
        [FieldOffset(0x60)] public fixed byte m_bIgnoreRadio[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponSG556 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct CRagdollConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_xmin[0x4];
        [FieldOffset(0x50C)] public fixed byte m_xmax[0x4];
        [FieldOffset(0x510)] public fixed byte m_ymin[0x4];
        [FieldOffset(0x514)] public fixed byte m_ymax[0x4];
        [FieldOffset(0x518)] public fixed byte m_zmin[0x4];
        [FieldOffset(0x51C)] public fixed byte m_zmax[0x4];
        [FieldOffset(0x520)] public fixed byte m_xfriction[0x4];
        [FieldOffset(0x524)] public fixed byte m_yfriction[0x4];
        [FieldOffset(0x528)] public fixed byte m_zfriction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CFuncVehicleClip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CDEagle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponFamas {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CEnvSplash {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct CPointCameraVFOV {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_flVerticalFOV[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_WingmanIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1280)]
    public unsafe struct CCSWeaponBaseShotgun {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x958)]
    public unsafe struct CFuncMoveLinear {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8D0];
        [FieldOffset(0x8D0)] public fixed byte m_authoredPosition[0x4];
        [FieldOffset(0x8D4)] public fixed byte m_angMoveEntitySpace[0xC];
        [FieldOffset(0x8E0)] public fixed byte m_vecMoveDirParentSpace[0x10];
        [FieldOffset(0x8F0)] public fixed byte m_soundStart[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_soundStop[0x8];
        [FieldOffset(0x900)] public fixed byte m_currentSound[0x8];
        [FieldOffset(0x908)] public fixed byte m_flBlockDamage[0x4];
        [FieldOffset(0x90C)] public fixed byte m_flStartPosition[0xC];
        [FieldOffset(0x918)] public fixed byte m_OnFullyOpen[0x18];
        [FieldOffset(0x930)] public fixed byte m_OnFullyClosed[0x18];
        [FieldOffset(0x948)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x94C)] public fixed byte m_bCreateMovableNavMesh[0x1];
        [FieldOffset(0x94D)] public fixed byte m_bAllowMovableNavMeshDockingOnEntireEntity[0x1];
        [FieldOffset(0x94E)] public fixed byte m_bCreateNavObstacle[0xA];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2F0)]
    public unsafe struct CPrecipitationVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_szParticlePrecipitationEffect[0xE0];
        [FieldOffset(0x108)] public fixed byte m_szParticlePrecipitationPuddleEffect[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_szParticlePrecipitationPostEffect[0xE0];
        [FieldOffset(0x2C8)] public fixed byte m_flInnerDistance[0x4];
        [FieldOffset(0x2CC)] public fixed byte m_nAttachType[0x4];
        [FieldOffset(0x2D0)] public fixed byte m_bBatchSameVolumeType[0x4];
        [FieldOffset(0x2D4)] public fixed byte m_nRTEnvCP[0x4];
        [FieldOffset(0x2D8)] public fixed byte m_nRTEnvCPComponent[0x8];
        [FieldOffset(0x2E0)] public fixed byte m_szModifier[0x8];
        [FieldOffset(0x2E8)] public fixed byte m_nUseSnapshotFromSurfaceGraph[0x4];
        [FieldOffset(0x2EC)] public fixed byte m_snapshotFilter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CPulseCell_WaitForObservable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_OnTrue[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAF0)]
    public unsafe struct CScriptItem {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAE0];
        [FieldOffset(0xAE0)] public fixed byte m_MoveTypeOverride[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC90)]
    public unsafe struct CDynamicPropAlias_prop_dynamic_override {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CBaseTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8D0];
        [FieldOffset(0x8D0)] public fixed byte m_OnStartTouch[0x18];
        [FieldOffset(0x8E8)] public fixed byte m_OnStartTouchAll[0x18];
        [FieldOffset(0x900)] public fixed byte m_OnEndTouch[0x18];
        [FieldOffset(0x918)] public fixed byte m_OnEndTouchAll[0x18];
        [FieldOffset(0x930)] public fixed byte m_OnTouching[0x18];
        [FieldOffset(0x948)] public fixed byte m_OnTouchingEachEntity[0x18];
        [FieldOffset(0x960)] public fixed byte m_OnNotTouching[0x18];
        [FieldOffset(0x978)] public fixed byte m_OnTouchingChanged[0x18];
        [FieldOffset(0x990)] public fixed byte m_hTouchingEntities[0x18];
        [FieldOffset(0x9A8)] public fixed byte m_iFilterName[0x8];
        [FieldOffset(0x9B0)] public fixed byte m_hFilter[0x4];
        [FieldOffset(0x9B4)] public fixed byte m_bDisabled[0xC];
        [FieldOffset(0x9C0)] public fixed byte m_bUseAsyncQueries[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CPointPush {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flMagnitude[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flInnerRadius[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flConeOfInfluence[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iszFilterName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_hFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_EntFire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Input[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CCSObserver_ObserverServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CPlayerPing {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_hPlayer[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_hPingedEntity[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_iType[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_bUrgent[0x1];
        [FieldOffset(0x4BD)] public fixed byte m_szPlaceName[0x13];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CHitboxComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_flBoundsExpandRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A8)]
    public unsafe struct CRopeKeyframe {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_RopeFlags[0x8];
        [FieldOffset(0x860)] public fixed byte m_iNextLinkName[0x8];
        [FieldOffset(0x868)] public fixed byte m_Slack[0x4];
        [FieldOffset(0x86C)] public fixed byte m_Width[0x4];
        [FieldOffset(0x870)] public fixed byte m_TextureScale[0x4];
        [FieldOffset(0x874)] public fixed byte m_nSegments[0x1];
        [FieldOffset(0x875)] public fixed byte m_bConstrainBetweenEndpoints[0x3];
        [FieldOffset(0x878)] public fixed byte m_strRopeMaterialModel[0x8];
        [FieldOffset(0x880)] public fixed byte m_iRopeMaterialModelIndex[0x8];
        [FieldOffset(0x888)] public fixed byte m_Subdiv[0x1];
        [FieldOffset(0x889)] public fixed byte m_nChangeCount[0x1];
        [FieldOffset(0x88A)] public fixed byte m_RopeLength[0x2];
        [FieldOffset(0x88C)] public fixed byte m_fLockedPoints[0x1];
        [FieldOffset(0x88D)] public fixed byte m_bCreatedFromMapFile[0x3];
        [FieldOffset(0x890)] public fixed byte m_flScrollSpeed[0x4];
        [FieldOffset(0x894)] public fixed byte m_bStartPointValid[0x1];
        [FieldOffset(0x895)] public fixed byte m_bEndPointValid[0x3];
        [FieldOffset(0x898)] public fixed byte m_hStartPoint[0x4];
        [FieldOffset(0x89C)] public fixed byte m_hEndPoint[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_iStartAttachment[0x1];
        [FieldOffset(0x8A1)] public fixed byte m_iEndAttachment[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12D0)]
    public unsafe struct CSmokeGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB10)]
    public unsafe struct CBaseCombatCharacter {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_bForceServerRagdoll[0x8];
        [FieldOffset(0xA48)] public fixed byte m_hMyWearables[0x18];
        [FieldOffset(0xA60)] public fixed byte m_impactEnergyScale[0x4];
        [FieldOffset(0xA64)] public fixed byte m_bApplyStressDamage[0x1];
        [FieldOffset(0xA65)] public fixed byte m_bDeathEventsDispatched[0x43];
        [FieldOffset(0xAA8)] public fixed byte m_vecRelationships[0x18];
        [FieldOffset(0xAC0)] public fixed byte m_strRelationships[0x8];
        [FieldOffset(0xAC8)] public fixed byte m_eHull[0x4];
        [FieldOffset(0xACC)] public fixed byte m_nNavHullIdx[0x4];
        [FieldOffset(0xAD0)] public fixed byte m_movementStats[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x570)]
    public unsafe struct CLogicGameStateReport {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0xC8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct ServerAuthoritativeWeaponSlot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte unClass[0x2];
        [FieldOffset(0x32)] public fixed byte unSlot[0x2];
        [FieldOffset(0x34)] public fixed byte unItemDefIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CPathQueryComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CLogicRelay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnSpawn[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnTrigger[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x4D9)] public fixed byte m_bWaitForRefire[0x1];
        [FieldOffset(0x4DA)] public fixed byte m_bTriggerOnce[0x1];
        [FieldOffset(0x4DB)] public fixed byte m_bFastRetrigger[0x1];
        [FieldOffset(0x4DC)] public fixed byte m_bPassthoughCaller[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SequenceHistory_t {
        [FieldOffset(0x0)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x4)] public fixed byte m_flSeqStartTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flSeqFixedCycle[0x4];
        [FieldOffset(0xC)] public fixed byte m_nSeqLoopMode[0x4];
        [FieldOffset(0x10)] public fixed byte m_flPlaybackRate[0x4];
        [FieldOffset(0x14)] public fixed byte m_flCyclesPerSecond[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_ItemServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_OutflowConnection {
        [FieldOffset(0x0)] public fixed byte m_SourceOutflowName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nDestChunk[0x4];
        [FieldOffset(0x14)] public fixed byte m_nInstruction[0x4];
        [FieldOffset(0x18)] public fixed byte m_OutflowRegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7A0)]
    public unsafe struct CTestPulseIO {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnVariantVoid[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnVariantBool[0x20];
        [FieldOffset(0x4E0)] public fixed byte m_OnVariantInt[0x20];
        [FieldOffset(0x500)] public fixed byte m_OnVariantFloat[0x20];
        [FieldOffset(0x520)] public fixed byte m_OnVariantString[0x20];
        [FieldOffset(0x540)] public fixed byte m_OnVariantColor[0x20];
        [FieldOffset(0x560)] public fixed byte m_OnVariantVector[0x28];
        [FieldOffset(0x588)] public fixed byte m_bAllowEmptyInputs[0x8];
        [FieldOffset(0x590)] public fixed byte m_TestComponent[0x30];
        [FieldOffset(0x5C0)] public fixed byte m_OnInternalTestVoid[0x18];
        [FieldOffset(0x5D8)] public fixed byte m_OnInternalTestBool[0x20];
        [FieldOffset(0x5F8)] public fixed byte m_OnInternalTestInt[0x20];
        [FieldOffset(0x618)] public fixed byte m_OnInternalTestFloat[0x20];
        [FieldOffset(0x638)] public fixed byte m_OnInternalTestString[0x20];
        [FieldOffset(0x658)] public fixed byte m_OnInternalTestColor[0x20];
        [FieldOffset(0x678)] public fixed byte m_OnInternalTestVector[0x28];
        [FieldOffset(0x6A0)] public fixed byte m_OnInternalTestEntityName[0x20];
        [FieldOffset(0x6C0)] public fixed byte m_OnInternalTestEntityHandle[0x20];
        [FieldOffset(0x6E0)] public fixed byte m_OnInternalTestSchemaEnum[0x20];
        [FieldOffset(0x700)] public fixed byte m_OnInternalTestFloatString[0x28];
        [FieldOffset(0x728)] public fixed byte m_OnInternalTestEntityNameString[0x28];
        [FieldOffset(0x750)] public fixed byte m_OnInternalTestEntityHandleInt[0x20];
        [FieldOffset(0x770)] public fixed byte m_OnInternalTestStringStringString[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponUMP45 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x878)]
    public unsafe struct CGamePlayerEquip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x878];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CPointEntityFinder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hEntity[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iFilterName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hFilter[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iRefName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_hReference[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_FindMethod[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_OnFoundEntity[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C0)]
    public unsafe struct CPulseGraphDef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_DomainIdentifier[0x10];
        [FieldOffset(0x18)] public fixed byte m_DomainSubType[0x18];
        [FieldOffset(0x30)] public fixed byte m_ParentMapName[0x10];
        [FieldOffset(0x40)] public fixed byte m_ParentXmlName[0x10];
        [FieldOffset(0x50)] public fixed byte m_Chunks[0x18];
        [FieldOffset(0x68)] public fixed byte m_Cells[0x18];
        [FieldOffset(0x80)] public fixed byte m_Vars[0x18];
        [FieldOffset(0x98)] public fixed byte m_TempVarBanks[0x18];
        [FieldOffset(0xB0)] public fixed byte m_PublicOutputs[0x18];
        [FieldOffset(0xC8)] public fixed byte m_InvokeBindings[0x18];
        [FieldOffset(0xE0)] public fixed byte m_CallInfos[0x18];
        [FieldOffset(0xF8)] public fixed byte m_Constants[0x18];
        [FieldOffset(0x110)] public fixed byte m_DomainValues[0x18];
        [FieldOffset(0x128)] public fixed byte m_BlackboardReferences[0x18];
        [FieldOffset(0x140)] public fixed byte m_OutputConnections[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1290)]
    public unsafe struct CKnife {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
        [FieldOffset(0x1280)] public fixed byte m_bFirstAttack[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CHostageRescueZoneShim {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x890)]
    public unsafe struct CSimpleMarkupVolumeTagged {
        [FieldOffset(0x0)] public fixed byte pad_0[0x890];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CEnvSoundscapeAlias_snd_soundscape {
        [FieldOffset(0x0)] public fixed byte pad_0[0x538];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_HostageServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hCarriedHostage[0x4];
        [FieldOffset(0x4C)] public fixed byte m_hCarriedHostageProp[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CRenderComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte __m_pChainEntity[0x40];
        [FieldOffset(0x50)] public fixed byte m_bIsRenderingWithViewModels[0x4];
        [FieldOffset(0x54)] public fixed byte m_nSplitscreenFlags[0x4];
        [FieldOffset(0x58)] public fixed byte m_bEnableRendering[0x50];
        [FieldOffset(0xA8)] public fixed byte m_bInterpolationReadyToDraw[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct CWaterBullet {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9F0)]
    public unsafe struct CTriggerSoundscape {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_hSoundscape[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_SoundscapeName[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_spectators[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_PlayVOLine__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_sceneInstance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB20)]
    public unsafe struct CHostageExpresserShim {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB10];
        [FieldOffset(0xB10)] public fixed byte m_pExpresser[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CPointChildModifier {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bOrphanInsteadOfDeletingChildrenOnRemove[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CCSPlayerLegacyJump {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bOldJumpPressed[0x4];
        [FieldOffset(0x14)] public fixed byte m_flJumpPressedTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponHKP2000 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8E0)]
    public unsafe struct CShatterGlassShardPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_hParentShard[0x8];
        [FieldOffset(0x858)] public fixed byte m_ShardDesc[0x80];
        [FieldOffset(0x8D8)] public fixed byte m_nPoolState[0x4];
        [FieldOffset(0x8DC)] public fixed byte m_bTouchedByPlayer[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CPathParticleRope {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_bStartActive[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flMaxSimulationTime[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_iszEffectName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_PathNodes_Name[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_flParticleSpacing[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_flSlack[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_ColorTint[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_nEffectState[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_iEffectIndex[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_PathNodes_Position[0x18];
        [FieldOffset(0x510)] public fixed byte m_PathNodes_TangentIn[0x18];
        [FieldOffset(0x528)] public fixed byte m_PathNodes_TangentOut[0x18];
        [FieldOffset(0x540)] public fixed byte m_PathNodes_Color[0x18];
        [FieldOffset(0x558)] public fixed byte m_PathNodes_PinEnabled[0x18];
        [FieldOffset(0x570)] public fixed byte m_PathNodes_RadiusScale[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CCredits {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnCreditsDone[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_bRolledOutroCredits[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flLogoLength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponFiveSeven {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CFishPool {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
        [FieldOffset(0x4B8)] public fixed byte m_fishCount[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_maxRange[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_swimDepth[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_waterLevel[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_isDormant[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_fishes[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_visTimer[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CPlayer_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nImpulse[0x8];
        [FieldOffset(0x50)] public fixed byte m_nButtons[0x20];
        [FieldOffset(0x70)] public fixed byte m_nQueuedButtonDownMask[0x8];
        [FieldOffset(0x78)] public fixed byte m_nQueuedButtonChangeMask[0x8];
        [FieldOffset(0x80)] public fixed byte m_nButtonDoublePressed[0x8];
        [FieldOffset(0x88)] public fixed byte m_pButtonPressedCmdNumber[0x100];
        [FieldOffset(0x188)] public fixed byte m_nLastCommandNumberProcessed[0x8];
        [FieldOffset(0x190)] public fixed byte m_nToggleButtonDownMask[0x10];
        [FieldOffset(0x1A0)] public fixed byte m_flCmdForwardMove[0x4];
        [FieldOffset(0x1A4)] public fixed byte m_flCmdLeftMove[0x4];
        [FieldOffset(0x1A8)] public fixed byte m_flCmdUpMove[0x4];
        [FieldOffset(0x1AC)] public fixed byte m_flMaxspeed[0x4];
        [FieldOffset(0x1B0)] public fixed byte m_arrForceSubtickMoveWhen[0x10];
        [FieldOffset(0x1C0)] public fixed byte m_flForwardMove[0x4];
        [FieldOffset(0x1C4)] public fixed byte m_flLeftMove[0x4];
        [FieldOffset(0x1C8)] public fixed byte m_flUpMove[0x4];
        [FieldOffset(0x1CC)] public fixed byte m_vecLastMovementImpulses[0x74];
        [FieldOffset(0x240)] public fixed byte m_vecOldViewAngles[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC00)]
    public unsafe struct CRagdollPropAlias_physics_prop_ragdoll {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC00];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBD0)]
    public unsafe struct CBreakableProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA78];
        [FieldOffset(0xA78)] public fixed byte m_CPropDataComponent[0x40];
        [FieldOffset(0xAB8)] public fixed byte m_OnStartDeath[0x18];
        [FieldOffset(0xAD0)] public fixed byte m_OnBreak[0x18];
        [FieldOffset(0xAE8)] public fixed byte m_OnHealthChanged[0x20];
        [FieldOffset(0xB08)] public fixed byte m_OnTakeDamage[0x18];
        [FieldOffset(0xB20)] public fixed byte m_impactEnergyScale[0x4];
        [FieldOffset(0xB24)] public fixed byte m_iMinHealthDmg[0x4];
        [FieldOffset(0xB28)] public fixed byte m_preferredCarryAngles[0xC];
        [FieldOffset(0xB34)] public fixed byte m_flPressureDelay[0x4];
        [FieldOffset(0xB38)] public fixed byte m_flDefBurstScale[0x4];
        [FieldOffset(0xB3C)] public fixed byte m_vDefBurstOffset[0xC];
        [FieldOffset(0xB48)] public fixed byte m_hBreaker[0x4];
        [FieldOffset(0xB4C)] public fixed byte m_PerformanceMode[0x4];
        [FieldOffset(0xB50)] public fixed byte m_flPreventDamageBeforeTime[0x4];
        [FieldOffset(0xB54)] public fixed byte m_BreakableContentsType[0x4];
        [FieldOffset(0xB58)] public fixed byte m_strBreakableContentsPropGroupOverride[0x8];
        [FieldOffset(0xB60)] public fixed byte m_strBreakableContentsParticleOverride[0x8];
        [FieldOffset(0xB68)] public fixed byte m_bHasBreakPiecesOrCommands[0x4];
        [FieldOffset(0xB6C)] public fixed byte m_explodeDamage[0x4];
        [FieldOffset(0xB70)] public fixed byte m_explodeRadius[0x8];
        [FieldOffset(0xB78)] public fixed byte m_sExplosionType[0x8];
        [FieldOffset(0xB80)] public fixed byte m_explosionDelay[0x8];
        [FieldOffset(0xB88)] public fixed byte m_explosionBuildupSound[0x8];
        [FieldOffset(0xB90)] public fixed byte m_explosionCustomEffect[0x8];
        [FieldOffset(0xB98)] public fixed byte m_explosionCustomSound[0x8];
        [FieldOffset(0xBA0)] public fixed byte m_explosionModifier[0x8];
        [FieldOffset(0xBA8)] public fixed byte m_hPhysicsAttacker[0x4];
        [FieldOffset(0xBAC)] public fixed byte m_flLastPhysicsInfluenceTime[0x4];
        [FieldOffset(0xBB0)] public fixed byte m_flDefaultFadeScale[0x4];
        [FieldOffset(0xBB4)] public fixed byte m_hLastAttacker[0x4];
        [FieldOffset(0xBB8)] public fixed byte m_iszPuntSound[0x8];
        [FieldOffset(0xBC0)] public fixed byte m_bUsePuntSound[0x1];
        [FieldOffset(0xBC1)] public fixed byte m_bOriginalBlockLOS[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CLightEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_CLightComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CInfoDynamicShadowHintBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x4CC)] public fixed byte m_vBoxMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct CBaseAnimGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nAnimationAlgorithm[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nNextExternalGraphHandle[0x4];
        [FieldOffset(0x20)] public fixed byte m_vecSecondarySkeletonSlotIDs[0x18];
        [FieldOffset(0x38)] public fixed byte m_vecSecondarySkeletons[0x18];
        [FieldOffset(0x50)] public fixed byte m_nSecondarySkeletonMasterCount[0x4];
        [FieldOffset(0x54)] public fixed byte m_flSoundSyncTime[0x4];
        [FieldOffset(0x58)] public fixed byte m_nActiveIKChainMask[0x4];
        [FieldOffset(0x5C)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x60)] public fixed byte m_flSeqStartTime[0x4];
        [FieldOffset(0x64)] public fixed byte m_flSeqFixedCycle[0x4];
        [FieldOffset(0x68)] public fixed byte m_nAnimLoopMode[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flPlaybackRate[0xC];
        [FieldOffset(0x78)] public fixed byte m_nNotifyState[0x1];
        [FieldOffset(0x79)] public fixed byte m_bNetworkedAnimationInputsChanged[0x1];
        [FieldOffset(0x7A)] public fixed byte m_bNetworkedSequenceChanged[0x1];
        [FieldOffset(0x7B)] public fixed byte m_bLastUpdateSkipped[0x1];
        [FieldOffset(0x7C)] public fixed byte m_bSequenceFinished[0x4];
        [FieldOffset(0x80)] public fixed byte m_nPrevAnimUpdateTick[0x2A0];
        [FieldOffset(0x320)] public fixed byte m_hGraphDefinitionAG2[0x8];
        [FieldOffset(0x328)] public fixed byte m_SerializePoseRecipeAG2Slots[0x68];
        [FieldOffset(0x390)] public fixed byte m_SerializePoseRecipeAG2Dynamic[0x18];
        [FieldOffset(0x3A8)] public fixed byte m_nSerializePoseRecipeAG2ActiveSlot[0x4];
        [FieldOffset(0x3AC)] public fixed byte m_nSerializePoseRecipeVersionAG2[0x14];
        [FieldOffset(0x3C0)] public fixed byte m_nServerGraphInstanceIteration[0x4];
        [FieldOffset(0x3C4)] public fixed byte m_nServerSerializationContextIteration[0x4];
        [FieldOffset(0x3C8)] public fixed byte m_primaryGraphId[0x8];
        [FieldOffset(0x3D0)] public fixed byte m_vecExternalGraphIds[0x18];
        [FieldOffset(0x3E8)] public fixed byte m_vecExternalClipIds[0x18];
        [FieldOffset(0x400)] public fixed byte m_sAnimGraph2Identifier[0x8];
        [FieldOffset(0x408)] public fixed byte m_pGraphInstanceAG2[0x220];
        [FieldOffset(0x628)] public fixed byte m_vecExternalGraphs[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct AnimGraph2SerializedPoseRecipeSlot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_topology[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x118)]
    public unsafe struct CBuoyancyHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pController[0x10];
        [FieldOffset(0x18)] public fixed byte m_nFluidType[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flFluidDensity[0x4];
        [FieldOffset(0x20)] public fixed byte m_flNeutrallyBuoyantGravity[0x4];
        [FieldOffset(0x24)] public fixed byte m_flNeutrallyBuoyantLinearDamping[0x4];
        [FieldOffset(0x28)] public fixed byte m_flNeutrallyBuoyantAngularDamping[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bNeutrallyBuoyant[0x4];
        [FieldOffset(0x30)] public fixed byte m_vecFractionOfWheelSubmergedForWheelFriction[0x18];
        [FieldOffset(0x48)] public fixed byte m_vecWheelFrictionScales[0x18];
        [FieldOffset(0x60)] public fixed byte m_vecFractionOfWheelSubmergedForWheelDrag[0x18];
        [FieldOffset(0x78)] public fixed byte m_vecWheelDrag[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xCA0)]
    public unsafe struct COrnamentProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC90];
        [FieldOffset(0xC90)] public fixed byte m_initialOwner[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CCSPlayer_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CModelPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB40)]
    public unsafe struct CRectLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB38];
        [FieldOffset(0xB38)] public fixed byte m_bShowLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x560)]
    public unsafe struct CFilterMultiple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_nFilterType[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_iFilterName[0x50];
        [FieldOffset(0x538)] public fixed byte m_hFilter[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CCSPlayerResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bHostageAlive[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_isHostageFollowingSomeone[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_iHostageEntityIDs[0x30];
        [FieldOffset(0x4F0)] public fixed byte m_bombsiteCenterA[0xC];
        [FieldOffset(0x4FC)] public fixed byte m_bombsiteCenterB[0xC];
        [FieldOffset(0x508)] public fixed byte m_hostageRescueX[0x10];
        [FieldOffset(0x518)] public fixed byte m_hostageRescueY[0x10];
        [FieldOffset(0x528)] public fixed byte m_hostageRescueZ[0x10];
        [FieldOffset(0x538)] public fixed byte m_bEndMatchNextMapAllVoted[0x1];
        [FieldOffset(0x539)] public fixed byte m_foundGoalPositions[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_FireCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x868)]
    public unsafe struct CFuncNavBlocker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x85C)] public fixed byte m_nBlockedTeamNumber[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5A0)]
    public unsafe struct CMoverPathNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x500];
        [FieldOffset(0x500)] public fixed byte m_OnStartFromOrInSegment[0x20];
        [FieldOffset(0x520)] public fixed byte m_OnStoppedAtOrInSegment[0x20];
        [FieldOffset(0x540)] public fixed byte m_OnPassThrough[0x20];
        [FieldOffset(0x560)] public fixed byte m_OnPassThroughForward[0x20];
        [FieldOffset(0x580)] public fixed byte m_OnPassThroughReverse[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CEnvSoundscape {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnPlay[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_flRadius[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_soundEventName[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_bOverrideWithEvent[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_soundscapeIndex[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_soundscapeEntityListId[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_positionNames[0x40];
        [FieldOffset(0x520)] public fixed byte m_hProxySoundscape[0x4];
        [FieldOffset(0x524)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x528)] public fixed byte m_soundscapeName[0x8];
        [FieldOffset(0x530)] public fixed byte m_soundEventHash[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CFuncBrush {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_iSolidity[0x4];
        [FieldOffset(0x854)] public fixed byte m_iDisabled[0x4];
        [FieldOffset(0x858)] public fixed byte m_bSolidBsp[0x8];
        [FieldOffset(0x860)] public fixed byte m_iszExcludedClass[0x8];
        [FieldOffset(0x868)] public fixed byte m_bInvertExclusion[0x1];
        [FieldOffset(0x869)] public fixed byte m_bScriptedMovement[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x190)]
    public unsafe struct CBodyComponentPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_sceneNode[0x110];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA08)]
    public unsafe struct CPhysBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x928];
        [FieldOffset(0x928)] public fixed byte m_damageType[0x4];
        [FieldOffset(0x92C)] public fixed byte m_damageToEnableMotion[0x4];
        [FieldOffset(0x930)] public fixed byte m_flForceToEnableMotion[0x4];
        [FieldOffset(0x934)] public fixed byte m_vHoverPosePosition[0xC];
        [FieldOffset(0x940)] public fixed byte m_angHoverPoseAngles[0xC];
        [FieldOffset(0x94C)] public fixed byte m_bNotSolidToWorld[0x1];
        [FieldOffset(0x94D)] public fixed byte m_bEnableUseOutput[0x1];
        [FieldOffset(0x94E)] public fixed byte m_nHoverPoseFlags[0x2];
        [FieldOffset(0x950)] public fixed byte m_flTouchOutputPerEntityDelay[0x8];
        [FieldOffset(0x958)] public fixed byte m_iszCollisionGroup[0x8];
        [FieldOffset(0x960)] public fixed byte m_iszInteractsAs[0x8];
        [FieldOffset(0x968)] public fixed byte m_iszInteractsWith[0x8];
        [FieldOffset(0x970)] public fixed byte m_iszInteractsExclude[0x8];
        [FieldOffset(0x978)] public fixed byte m_OnDamaged[0x18];
        [FieldOffset(0x990)] public fixed byte m_OnAwakened[0x18];
        [FieldOffset(0x9A8)] public fixed byte m_OnMotionEnabled[0x18];
        [FieldOffset(0x9C0)] public fixed byte m_OnPlayerUse[0x18];
        [FieldOffset(0x9D8)] public fixed byte m_OnStartTouch[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x580)]
    public unsafe struct CSoundEventAABBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
        [FieldOffset(0x568)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x574)] public fixed byte m_vMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct CItemSoda {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyDynamicAttributeBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Timeline__TimelineEvent_t {
        [FieldOffset(0x0)] public fixed byte m_flTimeFromPrevious[0x8];
        [FieldOffset(0x8)] public fixed byte m_EventOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB48)]
    public unsafe struct COmniLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB38];
        [FieldOffset(0xB38)] public fixed byte m_flInnerAngle[0x4];
        [FieldOffset(0xB3C)] public fixed byte m_flOuterAngle[0x4];
        [FieldOffset(0xB40)] public fixed byte m_bShowLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x860)]
    public unsafe struct CTriggerVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_iFilterName[0x8];
        [FieldOffset(0x858)] public fixed byte m_hFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CBtNodeCondition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_bNegated[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CPulseCell_IntervalTimer__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWaitInterval[0x4];
        [FieldOffset(0xC)] public fixed byte m_flWaitIntervalHigh[0x4];
        [FieldOffset(0x10)] public fixed byte m_bCompleteOnNextWake[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseRequirement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A8)]
    public unsafe struct CEnvExplosion {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_iMagnitude[0x4];
        [FieldOffset(0x854)] public fixed byte m_flPlayerDamage[0x4];
        [FieldOffset(0x858)] public fixed byte m_iRadiusOverride[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flInnerRadius[0x4];
        [FieldOffset(0x860)] public fixed byte m_flDamageForce[0x4];
        [FieldOffset(0x864)] public fixed byte m_hInflictor[0x4];
        [FieldOffset(0x868)] public fixed byte m_iCustomDamageType[0x4];
        [FieldOffset(0x86C)] public fixed byte m_bHasCustomDamageType[0x1];
        [FieldOffset(0x86D)] public fixed byte m_bCreateDebris[0xB];
        [FieldOffset(0x878)] public fixed byte m_iszCustomEffectName[0x8];
        [FieldOffset(0x880)] public fixed byte m_iszCustomSoundName[0x8];
        [FieldOffset(0x888)] public fixed byte m_bSuppressParticleImpulse[0x4];
        [FieldOffset(0x88C)] public fixed byte m_iClassIgnore[0x4];
        [FieldOffset(0x890)] public fixed byte m_iClassIgnore2[0x8];
        [FieldOffset(0x898)] public fixed byte m_iszEntityIgnoreName[0x8];
        [FieldOffset(0x8A0)] public fixed byte m_hEntityIgnore[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct OutflowWithRequirements_t {
        [FieldOffset(0x0)] public fixed byte m_Connection[0x48];
        [FieldOffset(0x48)] public fixed byte m_DestinationFlowNodeID[0x8];
        [FieldOffset(0x50)] public fixed byte m_RequirementNodeIDs[0x18];
        [FieldOffset(0x68)] public fixed byte m_nCursorStateBlockIndex[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CTestPulseIO__ThreeStringArgs_t {
        [FieldOffset(0x0)] public fixed byte strArg1[0x8];
        [FieldOffset(0x8)] public fixed byte strArg2[0x8];
        [FieldOffset(0x10)] public fixed byte strArg3[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_IsRequirementValid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D8)]
    public unsafe struct CFootstepControl {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_source[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_destination[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_ItemServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_bHasDefuser[0x1];
        [FieldOffset(0x49)] public fixed byte m_bHasHelmet[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Value_Gradient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Gradient[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xDD8)]
    public unsafe struct CParticleSystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_szSnapshotFileName[0x200];
        [FieldOffset(0xA50)] public fixed byte m_bActive[0x1];
        [FieldOffset(0xA51)] public fixed byte m_bFrozen[0x3];
        [FieldOffset(0xA54)] public fixed byte m_flFreezeTransitionDuration[0x4];
        [FieldOffset(0xA58)] public fixed byte m_nStopType[0x4];
        [FieldOffset(0xA5C)] public fixed byte m_bAnimateDuringGameplayPause[0x4];
        [FieldOffset(0xA60)] public fixed byte m_iEffectIndex[0x8];
        [FieldOffset(0xA68)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xA6C)] public fixed byte m_flPreSimTime[0x4];
        [FieldOffset(0xA70)] public fixed byte m_vServerControlPoints[0x30];
        [FieldOffset(0xAA0)] public fixed byte m_iServerControlPointAssignments[0x4];
        [FieldOffset(0xAA4)] public fixed byte m_hControlPointEnts[0x100];
        [FieldOffset(0xBA4)] public fixed byte m_bDataStringLocalized[0x4];
        [FieldOffset(0xBA8)] public fixed byte m_strDataString[0x8];
        [FieldOffset(0xBB0)] public fixed byte m_bNoSave[0x1];
        [FieldOffset(0xBB1)] public fixed byte m_bNoFreeze[0x1];
        [FieldOffset(0xBB2)] public fixed byte m_bNoRamp[0x1];
        [FieldOffset(0xBB3)] public fixed byte m_bStartActive[0x5];
        [FieldOffset(0xBB8)] public fixed byte m_iszEffectName[0x8];
        [FieldOffset(0xBC0)] public fixed byte m_iszControlPointNames[0x200];
        [FieldOffset(0xDC0)] public fixed byte m_nDataCP[0x4];
        [FieldOffset(0xDC4)] public fixed byte m_vecDataCPValue[0xC];
        [FieldOffset(0xDD0)] public fixed byte m_nTintCP[0x4];
        [FieldOffset(0xDD4)] public fixed byte m_clrTint[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A0)]
    public unsafe struct CTriggerBrush {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_OnStartTouch[0x18];
        [FieldOffset(0x868)] public fixed byte m_OnEndTouch[0x18];
        [FieldOffset(0x880)] public fixed byte m_OnUse[0x18];
        [FieldOffset(0x898)] public fixed byte m_iInputFilter[0x4];
        [FieldOffset(0x89C)] public fixed byte m_iDontMessageParent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0xC)] public fixed byte m_nWorldGroupId[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct audioparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte localSound[0x60];
        [FieldOffset(0x68)] public fixed byte soundscapeIndex[0x4];
        [FieldOffset(0x6C)] public fixed byte localBits[0x4];
        [FieldOffset(0x70)] public fixed byte soundscapeEntityListIndex[0x4];
        [FieldOffset(0x74)] public fixed byte soundEventHash[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5A0)]
    public unsafe struct CSoundEventMultiPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
        [FieldOffset(0x568)] public fixed byte m_iCountMax[0x4];
        [FieldOffset(0x56C)] public fixed byte m_flDistanceMax[0x4];
        [FieldOffset(0x570)] public fixed byte m_flDistMaxSqr[0x4];
        [FieldOffset(0x574)] public fixed byte m_flDotProductMax[0x4];
        [FieldOffset(0x578)] public fixed byte m_bPlaying[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CSoundAreaEntityBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszSoundAreaType[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_vPos[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponM4A1Silencer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct CTimeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flValues[0x100];
        [FieldOffset(0x110)] public fixed byte m_nValueCounts[0x100];
        [FieldOffset(0x210)] public fixed byte m_nBucketCount[0x4];
        [FieldOffset(0x214)] public fixed byte m_flInterval[0x4];
        [FieldOffset(0x218)] public fixed byte m_flFinalValue[0x4];
        [FieldOffset(0x21C)] public fixed byte m_nCompressionType[0x4];
        [FieldOffset(0x220)] public fixed byte m_bStopped[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CTestPulseIO__FloatStringArgs_t {
        [FieldOffset(0x0)] public fixed byte flOutFloat[0x8];
        [FieldOffset(0x8)] public fixed byte strOutString[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CountdownTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_duration[0x4];
        [FieldOffset(0xC)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0x10)] public fixed byte m_timescale[0x4];
        [FieldOffset(0x14)] public fixed byte m_nWorldGroupId[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNoiseStreamData {
        [FieldOffset(0x0)] public fixed byte m_Stream[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte m_OutflowID[0x8];
        [FieldOffset(0x8)] public fixed byte m_Connection[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAE0)]
    public unsafe struct CItemAssaultSuit {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8F0)]
    public unsafe struct CBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_flFrameRate[0x4];
        [FieldOffset(0x854)] public fixed byte m_flHDRColorScale[0x4];
        [FieldOffset(0x858)] public fixed byte m_flFireTime[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x860)] public fixed byte m_nNumBeamEnts[0x8];
        [FieldOffset(0x868)] public fixed byte m_hBaseMaterial[0x8];
        [FieldOffset(0x870)] public fixed byte m_nHaloIndex[0x8];
        [FieldOffset(0x878)] public fixed byte m_nBeamType[0x4];
        [FieldOffset(0x87C)] public fixed byte m_nBeamFlags[0x4];
        [FieldOffset(0x880)] public fixed byte m_hAttachEntity[0x28];
        [FieldOffset(0x8A8)] public fixed byte m_nAttachIndex[0xC];
        [FieldOffset(0x8B4)] public fixed byte m_fWidth[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_fEndWidth[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_fFadeLength[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_fHaloScale[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_fAmplitude[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_fStartFrame[0x4];
        [FieldOffset(0x8CC)] public fixed byte m_fSpeed[0x4];
        [FieldOffset(0x8D0)] public fixed byte m_flFrame[0x4];
        [FieldOffset(0x8D4)] public fixed byte m_bTurnedOff[0x4];
        [FieldOffset(0x8D8)] public fixed byte m_vecEndPos[0xC];
        [FieldOffset(0x8E4)] public fixed byte m_hEndEntity[0x4];
        [FieldOffset(0x8E8)] public fixed byte m_nDissolveType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CLogicEventListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
        [FieldOffset(0x4B8)] public fixed byte m_strEventName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_bIsEnabled[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_nTeam[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_OnEventFired[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamSelectTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct CInfoData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x840];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponNegev {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponElite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xCD0)]
    public unsafe struct CBasePlayerPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB10];
        [FieldOffset(0xB10)] public fixed byte m_pWeaponServices[0x8];
        [FieldOffset(0xB18)] public fixed byte m_pItemServices[0x8];
        [FieldOffset(0xB20)] public fixed byte m_pAutoaimServices[0x8];
        [FieldOffset(0xB28)] public fixed byte m_pObserverServices[0x8];
        [FieldOffset(0xB30)] public fixed byte m_pWaterServices[0x8];
        [FieldOffset(0xB38)] public fixed byte m_pUseServices[0x8];
        [FieldOffset(0xB40)] public fixed byte m_pFlashlightServices[0x8];
        [FieldOffset(0xB48)] public fixed byte m_pCameraServices[0x8];
        [FieldOffset(0xB50)] public fixed byte m_pMovementServices[0x10];
        [FieldOffset(0xB60)] public fixed byte m_ServerViewAngleChanges[0x68];
        [FieldOffset(0xBC8)] public fixed byte v_angle[0xC];
        [FieldOffset(0xBD4)] public fixed byte v_anglePrevious[0xC];
        [FieldOffset(0xBE0)] public fixed byte m_iHideHUD[0x8];
        [FieldOffset(0xBE8)] public fixed byte m_skybox3d[0x90];
        [FieldOffset(0xC78)] public fixed byte m_fTimeLastHurt[0x4];
        [FieldOffset(0xC7C)] public fixed byte m_flDeathTime[0x4];
        [FieldOffset(0xC80)] public fixed byte m_fNextSuicideTime[0x8];
        [FieldOffset(0xC88)] public fixed byte m_fInitHUD[0x8];
        [FieldOffset(0xC90)] public fixed byte m_pExpresser[0x8];
        [FieldOffset(0xC98)] public fixed byte m_hController[0x4];
        [FieldOffset(0xC9C)] public fixed byte m_hDefaultController[0x8];
        [FieldOffset(0xCA4)] public fixed byte m_fHltvReplayDelay[0x4];
        [FieldOffset(0xCA8)] public fixed byte m_fHltvReplayEnd[0x4];
        [FieldOffset(0xCAC)] public fixed byte m_iHltvReplayEntity[0x4];
        [FieldOffset(0xCB0)] public fixed byte m_sndOpvarLatchData[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct WeaponPurchaseCount_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nItemDefIndex[0x2];
        [FieldOffset(0x32)] public fixed byte m_nCount[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBasePulseGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct FilterHealth {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_bAdrenalineActive[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_iHealthMin[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_iHealthMax[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CCSSprite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CMathColorBlend {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flInMin[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flInMax[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_OutColor1[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_OutColor2[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_OutValue[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CShower {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_flSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_GraphHook {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_HookName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x878)]
    public unsafe struct CScriptNavBlocker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x868];
        [FieldOffset(0x868)] public fixed byte m_vExtent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CEntityBlocker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Resume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x760)]
    public unsafe struct CSoundOpvarSetDomeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x640];
        [FieldOffset(0x640)] public fixed byte m_arDirections[0x18];
        [FieldOffset(0x658)] public fixed byte m_arOpenness[0x18];
        [FieldOffset(0x670)] public fixed byte m_arNeighbors[0x18];
        [FieldOffset(0x688)] public fixed byte m_nCurrentIndex[0x8];
        [FieldOffset(0x690)] public fixed byte m_arClusterParent[0x18];
        [FieldOffset(0x6A8)] public fixed byte m_arClusterSize[0x18];
        [FieldOffset(0x6C0)] public fixed byte m_arClusterWeight[0x18];
        [FieldOffset(0x6D8)] public fixed byte m_arClusterDirSum[0x18];
        [FieldOffset(0x6F0)] public fixed byte m_nClusterIndex[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_flClusteredOpenness[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_vClusterDirection[0xC];
        [FieldOffset(0x704)] public fixed byte m_vSmoothedOpenDir[0xC];
        [FieldOffset(0x710)] public fixed byte m_nDirWarmupThinksRemaining[0x4];
        [FieldOffset(0x714)] public fixed byte m_vLastTraceOrigin[0xC];
        [FieldOffset(0x720)] public fixed byte m_bTraceOriginValid[0x4];
        [FieldOffset(0x724)] public fixed byte m_nCatchUpThinksRemaining[0x4];
        [FieldOffset(0x728)] public fixed byte m_bDiscontinuityPending[0x4];
        [FieldOffset(0x72C)] public fixed byte m_flSmoothedOpenness[0x4];
        [FieldOffset(0x730)] public fixed byte m_flLastSmoothTime[0x4];
        [FieldOffset(0x734)] public fixed byte m_flSize[0x4];
        [FieldOffset(0x738)] public fixed byte m_nTotalDirections[0x4];
        [FieldOffset(0x73C)] public fixed byte m_nTracesPerFrame[0x4];
        [FieldOffset(0x740)] public fixed byte m_bDomeMode[0x1];
        [FieldOffset(0x741)] public fixed byte m_bMultiWall[0x3];
        [FieldOffset(0x744)] public fixed byte m_flWallTransmission[0x4];
        [FieldOffset(0x748)] public fixed byte m_nClusterK[0x4];
        [FieldOffset(0x74C)] public fixed byte m_flClusterP[0x4];
        [FieldOffset(0x750)] public fixed byte m_flClusterBlend[0x4];
        [FieldOffset(0x754)] public fixed byte m_flOpennessExponent[0x4];
        [FieldOffset(0x758)] public fixed byte m_flShoulderExponent[0x4];
        [FieldOffset(0x75C)] public fixed byte m_flSmoothHalfLife[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_Outflow_PlayVCDBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE50)]
    public unsafe struct CCSObserverPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E8)]
    public unsafe struct CTriggerActiveWeaponDetect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_OnTouchedActiveWeapon[0x18];
        [FieldOffset(0x9E0)] public fixed byte m_iszWeaponClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8E0)]
    public unsafe struct CFuncLadderAlias_func_useableladder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CSpriteOriented {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CPointServerCommand {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct shard_model_desc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nModelID[0x8];
        [FieldOffset(0x10)] public fixed byte m_hMaterialBase[0x8];
        [FieldOffset(0x18)] public fixed byte m_hMaterialDamageOverlay[0x8];
        [FieldOffset(0x20)] public fixed byte m_solid[0x4];
        [FieldOffset(0x24)] public fixed byte m_vecPanelSize[0x8];
        [FieldOffset(0x2C)] public fixed byte m_vecStressPositionA[0x8];
        [FieldOffset(0x34)] public fixed byte m_vecStressPositionB[0xC];
        [FieldOffset(0x40)] public fixed byte m_vecPanelVertices[0x18];
        [FieldOffset(0x58)] public fixed byte m_vInitialPanelVertices[0x18];
        [FieldOffset(0x70)] public fixed byte m_flGlassHalfThickness[0x4];
        [FieldOffset(0x74)] public fixed byte m_bHasParent[0x1];
        [FieldOffset(0x75)] public fixed byte m_bParentFrozen[0x3];
        [FieldOffset(0x78)] public fixed byte m_SurfacePropStringToken[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x928)]
    public unsafe struct CPlayerSprayDecal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_nUniqueID[0x4];
        [FieldOffset(0x854)] public fixed byte m_unAccountID[0x4];
        [FieldOffset(0x858)] public fixed byte m_unTraceID[0x4];
        [FieldOffset(0x85C)] public fixed byte m_rtGcTime[0x4];
        [FieldOffset(0x860)] public fixed byte m_vecEndPos[0xC];
        [FieldOffset(0x86C)] public fixed byte m_vecStart[0xC];
        [FieldOffset(0x878)] public fixed byte m_vecLeft[0xC];
        [FieldOffset(0x884)] public fixed byte m_vecNormal[0xC];
        [FieldOffset(0x890)] public fixed byte m_nPlayer[0x4];
        [FieldOffset(0x894)] public fixed byte m_nEntity[0x4];
        [FieldOffset(0x898)] public fixed byte m_nHitbox[0x4];
        [FieldOffset(0x89C)] public fixed byte m_flCreationTime[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_nTintID[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_nVersion[0x1];
        [FieldOffset(0x8A5)] public fixed byte m_ubSignature[0x83];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x968)]
    public unsafe struct CFuncWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_BuoyancyHelper[0x118];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CCSGameModeRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nEventID[0x8];
        [FieldOffset(0x8)] public fixed byte m_Outflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyDynamicAttributeInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xEB0)]
    public unsafe struct CEconEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA58];
        [FieldOffset(0xA58)] public fixed byte m_AttributeManager[0x438];
        [FieldOffset(0xE90)] public fixed byte m_OriginalOwnerXuidLow[0x4];
        [FieldOffset(0xE94)] public fixed byte m_OriginalOwnerXuidHigh[0x4];
        [FieldOffset(0xE98)] public fixed byte m_nFallbackPaintKit[0x4];
        [FieldOffset(0xE9C)] public fixed byte m_nFallbackSeed[0x4];
        [FieldOffset(0xEA0)] public fixed byte m_flFallbackWear[0x4];
        [FieldOffset(0xEA4)] public fixed byte m_nFallbackStatTrak[0x4];
        [FieldOffset(0xEA8)] public fixed byte m_hOldProvidee[0x4];
        [FieldOffset(0xEAC)] public fixed byte m_iOldOwnerClass[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CTankTargetChange {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_newTarget[0x10];
        [FieldOffset(0x4B8)] public fixed byte m_newTargetName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CCSPlayer_WaterServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_NextDrownDamageTime[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nDrownDmgRate[0x4];
        [FieldOffset(0x50)] public fixed byte m_AirFinishedTime[0x4];
        [FieldOffset(0x54)] public fixed byte m_flWaterJumpTime[0x4];
        [FieldOffset(0x58)] public fixed byte m_vecWaterJumpVel[0xC];
        [FieldOffset(0x64)] public fixed byte m_flSwimSoundTime[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x508)]
    public unsafe struct CLogicDistanceCheck {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszEntityA[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszEntityB[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_flZone1Distance[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flZone2Distance[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_InZone1[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_InZone2[0x18];
        [FieldOffset(0x4F0)] public fixed byte m_InZone3[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct CEnvCombinedLightProbeVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5C0];
        [FieldOffset(0x5C0)] public fixed byte m_Entity_Color[0x4];
        [FieldOffset(0x5C4)] public fixed byte m_Entity_flBrightness[0x4];
        [FieldOffset(0x5C8)] public fixed byte m_Entity_hCubemapTexture[0x8];
        [FieldOffset(0x5D0)] public fixed byte m_Entity_bCustomCubemapTexture[0x8];
        [FieldOffset(0x5D8)] public fixed byte m_Entity_hLightProbeTexture_AmbientCube[0x8];
        [FieldOffset(0x5E0)] public fixed byte m_Entity_hLightProbeTexture_SDF[0x8];
        [FieldOffset(0x5E8)] public fixed byte m_Entity_hLightProbeTexture_SH2_DC[0x8];
        [FieldOffset(0x5F0)] public fixed byte m_Entity_hLightProbeTexture_SH2_L1[0x8];
        [FieldOffset(0x5F8)] public fixed byte m_Entity_hLightProbeDirectLightIndicesTexture[0x8];
        [FieldOffset(0x600)] public fixed byte m_Entity_hLightProbeDirectLightScalarsTexture[0x8];
        [FieldOffset(0x608)] public fixed byte m_Entity_hLightProbeDirectLightShadowsTexture[0x8];
        [FieldOffset(0x610)] public fixed byte m_Entity_vBoxMins[0xC];
        [FieldOffset(0x61C)] public fixed byte m_Entity_vBoxMaxs[0xC];
        [FieldOffset(0x628)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x62C)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x630)] public fixed byte m_Entity_nEnvCubeMapArrayIndex[0x4];
        [FieldOffset(0x634)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x638)] public fixed byte m_Entity_bStartDisabled[0x4];
        [FieldOffset(0x63C)] public fixed byte m_Entity_flEdgeFadeDist[0x4];
        [FieldOffset(0x640)] public fixed byte m_Entity_vEdgeFadeDists[0xC];
        [FieldOffset(0x64C)] public fixed byte m_Entity_nLightProbeSizeX[0x4];
        [FieldOffset(0x650)] public fixed byte m_Entity_nLightProbeSizeY[0x4];
        [FieldOffset(0x654)] public fixed byte m_Entity_nLightProbeSizeZ[0x4];
        [FieldOffset(0x658)] public fixed byte m_Entity_nLightProbeAtlasX[0x4];
        [FieldOffset(0x65C)] public fixed byte m_Entity_nLightProbeAtlasY[0x4];
        [FieldOffset(0x660)] public fixed byte m_Entity_nLightProbeAtlasZ[0x19];
        [FieldOffset(0x679)] public fixed byte m_Entity_bEnabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct ViewAngleServerChange_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte nType[0x4];
        [FieldOffset(0x34)] public fixed byte qAngle[0xC];
        [FieldOffset(0x40)] public fixed byte nIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CLogicDistanceAutosave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszTargetEntity[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_flDistanceToPlayer[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bForceNewLevelUnit[0x1];
        [FieldOffset(0x4B5)] public fixed byte m_bCheckCough[0x1];
        [FieldOffset(0x4B6)] public fixed byte m_bThinkDangerous[0x2];
        [FieldOffset(0x4B8)] public fixed byte m_flDangerousTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F8)]
    public unsafe struct CLogicBranch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bInValue[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_Listeners[0x18];
        [FieldOffset(0x4C8)] public fixed byte m_OnTrue[0x18];
        [FieldOffset(0x4E0)] public fixed byte m_OnFalse[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x198)]
    public unsafe struct CPulseCell_Outflow_ScriptedSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_szSyncGroup[0x8];
        [FieldOffset(0xE0)] public fixed byte m_nExpectedNumSequencesInSyncGroup[0x4];
        [FieldOffset(0xE4)] public fixed byte m_bEnsureOnNavmeshOnFinish[0x1];
        [FieldOffset(0xE5)] public fixed byte m_bDontTeleportAtEnd[0x1];
        [FieldOffset(0xE6)] public fixed byte m_bDisallowInterrupts[0x2];
        [FieldOffset(0xE8)] public fixed byte m_scriptedSequenceDataMain[0x38];
        [FieldOffset(0x120)] public fixed byte m_vecAdditionalActors[0x18];
        [FieldOffset(0x138)] public fixed byte m_OnFinished[0x48];
        [FieldOffset(0x180)] public fixed byte m_Triggers[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x958)]
    public unsafe struct CFuncTrackChange {
        [FieldOffset(0x0)] public fixed byte pad_0[0x920];
        [FieldOffset(0x920)] public fixed byte m_trackTop[0x4];
        [FieldOffset(0x924)] public fixed byte m_trackBottom[0x4];
        [FieldOffset(0x928)] public fixed byte m_train[0x8];
        [FieldOffset(0x930)] public fixed byte m_trackTopName[0x8];
        [FieldOffset(0x938)] public fixed byte m_trackBottomName[0x8];
        [FieldOffset(0x940)] public fixed byte m_trainName[0x8];
        [FieldOffset(0x948)] public fixed byte m_code[0x4];
        [FieldOffset(0x94C)] public fixed byte m_targetState[0x4];
        [FieldOffset(0x950)] public fixed byte m_use[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x978)]
    public unsafe struct CFuncTrackTrain {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_ppath[0x4];
        [FieldOffset(0x854)] public fixed byte m_length[0x4];
        [FieldOffset(0x858)] public fixed byte m_vPosPrev[0xC];
        [FieldOffset(0x864)] public fixed byte m_angPrev[0xC];
        [FieldOffset(0x870)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x874)] public fixed byte m_controlMins[0xC];
        [FieldOffset(0x880)] public fixed byte m_controlMaxs[0xC];
        [FieldOffset(0x88C)] public fixed byte m_lastBlockPos[0xC];
        [FieldOffset(0x898)] public fixed byte m_lastBlockTick[0x4];
        [FieldOffset(0x89C)] public fixed byte m_flVolume[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_flBank[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_oldSpeed[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_flBlockDamage[0x4];
        [FieldOffset(0x8AC)] public fixed byte m_height[0x4];
        [FieldOffset(0x8B0)] public fixed byte m_maxSpeed[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_dir[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_iszSoundMove[0x8];
        [FieldOffset(0x8C0)] public fixed byte m_iszSoundMovePing[0x8];
        [FieldOffset(0x8C8)] public fixed byte m_iszSoundStart[0x8];
        [FieldOffset(0x8D0)] public fixed byte m_iszSoundStop[0x8];
        [FieldOffset(0x8D8)] public fixed byte m_strPathTarget[0x8];
        [FieldOffset(0x8E0)] public fixed byte m_flMoveSoundMinDuration[0x4];
        [FieldOffset(0x8E4)] public fixed byte m_flMoveSoundMaxDuration[0x4];
        [FieldOffset(0x8E8)] public fixed byte m_flNextMoveSoundTime[0x4];
        [FieldOffset(0x8EC)] public fixed byte m_flMoveSoundMinPitch[0x4];
        [FieldOffset(0x8F0)] public fixed byte m_flMoveSoundMaxPitch[0x4];
        [FieldOffset(0x8F4)] public fixed byte m_eOrientationType[0x4];
        [FieldOffset(0x8F8)] public fixed byte m_eVelocityType[0x18];
        [FieldOffset(0x910)] public fixed byte m_OnStart[0x18];
        [FieldOffset(0x928)] public fixed byte m_OnNext[0x18];
        [FieldOffset(0x940)] public fixed byte m_OnArrivedAtDestinationNode[0x18];
        [FieldOffset(0x958)] public fixed byte m_bManualSpeedChanges[0x4];
        [FieldOffset(0x95C)] public fixed byte m_flDesiredSpeed[0x4];
        [FieldOffset(0x960)] public fixed byte m_flSpeedChangeTime[0x4];
        [FieldOffset(0x964)] public fixed byte m_flAccelSpeed[0x4];
        [FieldOffset(0x968)] public fixed byte m_flDecelSpeed[0x4];
        [FieldOffset(0x96C)] public fixed byte m_bAccelToSpeed[0x4];
        [FieldOffset(0x970)] public fixed byte m_flNextMPSoundTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CEnvInstructorHint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszReplace_Key[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszHintTargetEntity[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iTimeout[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_iDisplayLimit[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_iszIcon_Onscreen[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_iszIcon_Offscreen[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_iszCaption[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iszActivatorCaption[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_Color[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_fIconOffset[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_fRange[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_iPulseOption[0x1];
        [FieldOffset(0x4F5)] public fixed byte m_iAlphaOption[0x1];
        [FieldOffset(0x4F6)] public fixed byte m_iShakeOption[0x1];
        [FieldOffset(0x4F7)] public fixed byte m_bStatic[0x1];
        [FieldOffset(0x4F8)] public fixed byte m_bNoOffscreen[0x1];
        [FieldOffset(0x4F9)] public fixed byte m_bForceCaption[0x3];
        [FieldOffset(0x4FC)] public fixed byte m_iInstanceType[0x4];
        [FieldOffset(0x500)] public fixed byte m_bSuppressRest[0x8];
        [FieldOffset(0x508)] public fixed byte m_iszBinding[0x8];
        [FieldOffset(0x510)] public fixed byte m_bAllowNoDrawTarget[0x1];
        [FieldOffset(0x511)] public fixed byte m_bAutoStart[0x1];
        [FieldOffset(0x512)] public fixed byte m_bLocalPlayerOnly[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5D8)]
    public unsafe struct CEnvWind {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_EnvWindShared[0x130];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct CSoundEventPathCornerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5A0];
        [FieldOffset(0x5A0)] public fixed byte m_iszPathCorner[0x20];
        [FieldOffset(0x5C0)] public fixed byte m_vecCornerPairsNetworked[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CCSPlayerBase_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
        [FieldOffset(0x178)] public fixed byte m_iFOV[0x4];
        [FieldOffset(0x17C)] public fixed byte m_iFOVStart[0x4];
        [FieldOffset(0x180)] public fixed byte m_flFOVTime[0x4];
        [FieldOffset(0x184)] public fixed byte m_flFOVRate[0x4];
        [FieldOffset(0x188)] public fixed byte m_hZoomOwner[0x8];
        [FieldOffset(0x190)] public fixed byte m_hTriggerFogList[0x18];
        [FieldOffset(0x1A8)] public fixed byte m_hLastFogTrigger[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPulseCell_ApplyAnimGraphParam__CursorState_t {
        [FieldOffset(0x0)] public fixed byte hEntity[0x8];
        [FieldOffset(0x8)] public fixed byte sParamName[0x8];
        [FieldOffset(0x10)] public fixed byte bApplyToExternalGraphs[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_EntryChunk[0x8];
        [FieldOffset(0x50)] public fixed byte m_RegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA18)]
    public unsafe struct CDynamicNavConnectionsVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_iszConnectionTarget[0x8];
        [FieldOffset(0x9E8)] public fixed byte m_vecConnections[0x18];
        [FieldOffset(0xA00)] public fixed byte m_sTransitionType[0x8];
        [FieldOffset(0xA08)] public fixed byte m_bConnectionsEnabled[0x4];
        [FieldOffset(0xA0C)] public fixed byte m_flTargetAreaSearchRadius[0x4];
        [FieldOffset(0xA10)] public fixed byte m_flUpdateDistance[0x4];
        [FieldOffset(0xA14)] public fixed byte m_flMaxConnectionDistance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA50)]
    public unsafe struct CConstraintAnchor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_massScale[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_WaitForCursorsWithTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_nCursorsAllowedToWait[0x8];
        [FieldOffset(0xE0)] public fixed byte m_WaitComplete[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x15D0)]
    public unsafe struct CCSPlayerPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE30];
        [FieldOffset(0xE30)] public fixed byte m_pBulletServices[0x8];
        [FieldOffset(0xE38)] public fixed byte m_pHostageServices[0x8];
        [FieldOffset(0xE40)] public fixed byte m_pBuyServices[0x8];
        [FieldOffset(0xE48)] public fixed byte m_pActionTrackingServices[0x8];
        [FieldOffset(0xE50)] public fixed byte m_pAimPunchServices[0x8];
        [FieldOffset(0xE58)] public fixed byte m_pRadioServices[0x8];
        [FieldOffset(0xE60)] public fixed byte m_pDamageReactServices[0x8];
        [FieldOffset(0xE68)] public fixed byte m_nCharacterDefIndex[0x2];
        [FieldOffset(0xE6A)] public fixed byte m_bHasFemaleVoice[0x6];
        [FieldOffset(0xE70)] public fixed byte m_strVOPrefix[0x8];
        [FieldOffset(0xE78)] public fixed byte m_szLastPlaceName[0xF8];
        [FieldOffset(0xF70)] public fixed byte m_bInHostageResetZone[0x1];
        [FieldOffset(0xF71)] public fixed byte m_bInBuyZone[0x7];
        [FieldOffset(0xF78)] public fixed byte m_TouchingBuyZones[0x18];
        [FieldOffset(0xF90)] public fixed byte m_bWasInBuyZone[0x1];
        [FieldOffset(0xF91)] public fixed byte m_bInHostageRescueZone[0x1];
        [FieldOffset(0xF92)] public fixed byte m_bInBombZone[0x1];
        [FieldOffset(0xF93)] public fixed byte m_bWasInHostageRescueZone[0x1];
        [FieldOffset(0xF94)] public fixed byte m_iRetakesOffering[0x4];
        [FieldOffset(0xF98)] public fixed byte m_iRetakesOfferingCard[0x4];
        [FieldOffset(0xF9C)] public fixed byte m_bRetakesHasDefuseKit[0x1];
        [FieldOffset(0xF9D)] public fixed byte m_bRetakesMVPLastRound[0x3];
        [FieldOffset(0xFA0)] public fixed byte m_iRetakesMVPBoostItem[0x4];
        [FieldOffset(0xFA4)] public fixed byte m_RetakesMVPBoostExtraUtility[0x4];
        [FieldOffset(0xFA8)] public fixed byte m_flHealthShotBoostExpirationTime[0x4];
        [FieldOffset(0xFAC)] public fixed byte m_flLandingTimeSeconds[0x4];
        [FieldOffset(0xFB0)] public fixed byte m_bIsBuyMenuOpen[0x38];
        [FieldOffset(0xFE8)] public fixed byte m_lastLandTime[0x4];
        [FieldOffset(0xFEC)] public fixed byte m_bOnGroundLastTick[0x4];
        [FieldOffset(0xFF0)] public fixed byte m_iPlayerLocked[0x8];
        [FieldOffset(0xFF8)] public fixed byte m_flTimeOfLastInjury[0x4];
        [FieldOffset(0xFFC)] public fixed byte m_flNextSprayDecalTime[0x4];
        [FieldOffset(0x1000)] public fixed byte m_bNextSprayDecalTimeExpedited[0x4];
        [FieldOffset(0x1004)] public fixed byte m_nRagdollDamageBone[0x4];
        [FieldOffset(0x1008)] public fixed byte m_vRagdollDamageForce[0xC];
        [FieldOffset(0x1014)] public fixed byte m_szRagdollDamageWeaponName[0x40];
        [FieldOffset(0x1054)] public fixed byte m_bRagdollDamageHeadshot[0x4];
        [FieldOffset(0x1058)] public fixed byte m_vRagdollServerOrigin[0x10];
        [FieldOffset(0x1068)] public fixed byte m_EconGloves[0x3E8];
        [FieldOffset(0x1450)] public fixed byte m_nEconGlovesChanged[0x4];
        [FieldOffset(0x1454)] public fixed byte m_qDeathEyeAngles[0xC];
        [FieldOffset(0x1460)] public fixed byte m_bLeftHanded[0x4];
        [FieldOffset(0x1464)] public fixed byte m_fSwitchedHandednessTime[0x4];
        [FieldOffset(0x1468)] public fixed byte m_flViewmodelOffsetX[0x4];
        [FieldOffset(0x146C)] public fixed byte m_flViewmodelOffsetY[0x4];
        [FieldOffset(0x1470)] public fixed byte m_flViewmodelOffsetZ[0x4];
        [FieldOffset(0x1474)] public fixed byte m_flViewmodelFOV[0x4];
        [FieldOffset(0x1478)] public fixed byte m_bIsWalking[0x4];
        [FieldOffset(0x147C)] public fixed byte m_fLastGivenDefuserTime[0x4];
        [FieldOffset(0x1480)] public fixed byte m_fLastGivenBombTime[0x4];
        [FieldOffset(0x1484)] public fixed byte m_flDealtDamageToEnemyMostRecentTimestamp[0x4];
        [FieldOffset(0x1488)] public fixed byte m_iDisplayHistoryBits[0x4];
        [FieldOffset(0x148C)] public fixed byte m_flLastAttackedTeammate[0x4];
        [FieldOffset(0x1490)] public fixed byte m_allowAutoFollowTime[0x4];
        [FieldOffset(0x1494)] public fixed byte m_bResetArmorNextSpawn[0x4];
        [FieldOffset(0x1498)] public fixed byte m_nLastKillerIndex[0x8];
        [FieldOffset(0x14A0)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x14B8)] public fixed byte m_nSpotRules[0x4];
        [FieldOffset(0x14BC)] public fixed byte m_bIsScoped[0x1];
        [FieldOffset(0x14BD)] public fixed byte m_bResumeZoom[0x1];
        [FieldOffset(0x14BE)] public fixed byte m_bIsDefusing[0x1];
        [FieldOffset(0x14BF)] public fixed byte m_bIsGrabbingHostage[0x1];
        [FieldOffset(0x14C0)] public fixed byte m_iBlockingUseActionInProgress[0x4];
        [FieldOffset(0x14C4)] public fixed byte m_flEmitSoundTime[0x4];
        [FieldOffset(0x14C8)] public fixed byte m_bInNoDefuseArea[0x4];
        [FieldOffset(0x14CC)] public fixed byte m_iBombSiteIndex[0x4];
        [FieldOffset(0x14D0)] public fixed byte m_nWhichBombZone[0x4];
        [FieldOffset(0x14D4)] public fixed byte m_bInBombZoneTrigger[0x1];
        [FieldOffset(0x14D5)] public fixed byte m_bWasInBombZoneTrigger[0x3];
        [FieldOffset(0x14D8)] public fixed byte m_iShotsFired[0x4];
        [FieldOffset(0x14DC)] public fixed byte m_flFlinchStack[0x4];
        [FieldOffset(0x14E0)] public fixed byte m_flVelocityModifier[0x4];
        [FieldOffset(0x14E4)] public fixed byte m_vecTotalBulletForce[0xC];
        [FieldOffset(0x14F0)] public fixed byte m_bWaitForNoAttack[0x4];
        [FieldOffset(0x14F4)] public fixed byte m_ignoreLadderJumpTime[0x4];
        [FieldOffset(0x14F8)] public fixed byte m_bKilledByHeadshot[0x4];
        [FieldOffset(0x14FC)] public fixed byte m_LastHitBox[0x4];
        [FieldOffset(0x1500)] public fixed byte m_pBot[0x8];
        [FieldOffset(0x1508)] public fixed byte m_bBotAllowActive[0x4];
        [FieldOffset(0x150C)] public fixed byte m_nLastPickupPriority[0x4];
        [FieldOffset(0x1510)] public fixed byte m_flLastPickupPriorityTime[0x4];
        [FieldOffset(0x1514)] public fixed byte m_ArmorValue[0x4];
        [FieldOffset(0x1518)] public fixed byte m_unCurrentEquipmentValue[0x2];
        [FieldOffset(0x151A)] public fixed byte m_unRoundStartEquipmentValue[0x2];
        [FieldOffset(0x151C)] public fixed byte m_unFreezetimeEndEquipmentValue[0x4];
        [FieldOffset(0x1520)] public fixed byte m_iLastWeaponFireUsercmd[0x4];
        [FieldOffset(0x1524)] public fixed byte m_bIsSpawning[0xC];
        [FieldOffset(0x1530)] public fixed byte m_iDeathFlags[0x4];
        [FieldOffset(0x1534)] public fixed byte m_bHasDeathInfo[0x4];
        [FieldOffset(0x1538)] public fixed byte m_flDeathInfoTime[0x4];
        [FieldOffset(0x153C)] public fixed byte m_vecDeathInfoOrigin[0xC];
        [FieldOffset(0x1548)] public fixed byte m_vecPlayerPatchEconIndices[0x14];
        [FieldOffset(0x155C)] public fixed byte m_GunGameImmunityColor[0x4];
        [FieldOffset(0x1560)] public fixed byte m_grenadeParameterStashTime[0x4];
        [FieldOffset(0x1564)] public fixed byte m_bGrenadeParametersStashed[0x4];
        [FieldOffset(0x1568)] public fixed byte m_angStashedShootAngles[0xC];
        [FieldOffset(0x1574)] public fixed byte m_vecStashedGrenadeThrowPosition[0xC];
        [FieldOffset(0x1580)] public fixed byte m_vecStashedGrenadeThrowPawnCenter[0xC];
        [FieldOffset(0x158C)] public fixed byte m_vecStashedVelocity[0x14];
        [FieldOffset(0x15A0)] public fixed byte m_bCommittingSuicideOnTeamChange[0x1];
        [FieldOffset(0x15A1)] public fixed byte m_wasNotKilledNaturally[0x3];
        [FieldOffset(0x15A4)] public fixed byte m_fImmuneToGunGameDamageTime[0x4];
        [FieldOffset(0x15A8)] public fixed byte m_bGunGameImmunity[0x4];
        [FieldOffset(0x15AC)] public fixed byte m_flBigHeadScale[0x4];
        [FieldOffset(0x15B0)] public fixed byte m_fMolotovDamageTime[0x4];
        [FieldOffset(0x15B4)] public fixed byte m_angEyeAngles[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5C8)]
    public unsafe struct CEnvLightProbeVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x540];
        [FieldOffset(0x540)] public fixed byte m_Entity_hLightProbeTexture_AmbientCube[0x8];
        [FieldOffset(0x548)] public fixed byte m_Entity_hLightProbeTexture_SDF[0x8];
        [FieldOffset(0x550)] public fixed byte m_Entity_hLightProbeTexture_SH2_DC[0x8];
        [FieldOffset(0x558)] public fixed byte m_Entity_hLightProbeTexture_SH2_L1[0x8];
        [FieldOffset(0x560)] public fixed byte m_Entity_hLightProbeDirectLightIndicesTexture[0x8];
        [FieldOffset(0x568)] public fixed byte m_Entity_hLightProbeDirectLightScalarsTexture[0x8];
        [FieldOffset(0x570)] public fixed byte m_Entity_hLightProbeDirectLightShadowsTexture[0x8];
        [FieldOffset(0x578)] public fixed byte m_Entity_vBoxMins[0xC];
        [FieldOffset(0x584)] public fixed byte m_Entity_vBoxMaxs[0xC];
        [FieldOffset(0x590)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x594)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x598)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x59C)] public fixed byte m_Entity_bStartDisabled[0x4];
        [FieldOffset(0x5A0)] public fixed byte m_Entity_nLightProbeSizeX[0x4];
        [FieldOffset(0x5A4)] public fixed byte m_Entity_nLightProbeSizeY[0x4];
        [FieldOffset(0x5A8)] public fixed byte m_Entity_nLightProbeSizeZ[0x4];
        [FieldOffset(0x5AC)] public fixed byte m_Entity_nLightProbeAtlasX[0x4];
        [FieldOffset(0x5B0)] public fixed byte m_Entity_nLightProbeAtlasY[0x4];
        [FieldOffset(0x5B4)] public fixed byte m_Entity_nLightProbeAtlasZ[0xD];
        [FieldOffset(0x5C1)] public fixed byte m_Entity_bEnabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct SpawnPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iPriority[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CGameSceneNode {
        [FieldOffset(0x0)] public fixed byte m_bDirtyHierarchy[0x10];
        [FieldOffset(0x10)] public fixed byte m_nodeToWorld[0x20];
        [FieldOffset(0x30)] public fixed byte m_pOwner[0x8];
        [FieldOffset(0x38)] public fixed byte m_pParent[0x8];
        [FieldOffset(0x40)] public fixed byte m_pChild[0x8];
        [FieldOffset(0x48)] public fixed byte m_pNextSibling[0x28];
        [FieldOffset(0x70)] public fixed byte m_hParent[0x10];
        [FieldOffset(0x80)] public fixed byte m_vecOrigin[0x38];
        [FieldOffset(0xB8)] public fixed byte m_angRotation[0xC];
        [FieldOffset(0xC4)] public fixed byte m_flScale[0x4];
        [FieldOffset(0xC8)] public fixed byte m_vecAbsOrigin[0xC];
        [FieldOffset(0xD4)] public fixed byte m_angAbsRotation[0xC];
        [FieldOffset(0xE0)] public fixed byte m_flAbsScale[0x4];
        [FieldOffset(0xE4)] public fixed byte m_nParentAttachmentOrBone[0x2];
        [FieldOffset(0xE6)] public fixed byte m_bDebugAbsOriginChanges[0x1];
        [FieldOffset(0xE7)] public fixed byte m_bDormant[0x1];
        [FieldOffset(0xE8)] public fixed byte m_bForceParentToBeNetworked[0x3];
        [FieldOffset(0xEB)] public fixed byte m_nHierarchicalDepth[0x1];
        [FieldOffset(0xEC)] public fixed byte m_nHierarchyType[0x1];
        [FieldOffset(0xED)] public fixed byte m_nDoNotSetAnimTimeInInvalidatePhysicsCount[0x3];
        [FieldOffset(0xF0)] public fixed byte m_name[0x14];
        [FieldOffset(0x104)] public fixed byte m_hierarchyAttachName[0x4];
        [FieldOffset(0x108)] public fixed byte m_flClientLocalScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponM249 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A8)]
    public unsafe struct CRopeKeyframeAlias_move_rope {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPlayer_ObserverServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_iObserverMode[0x4];
        [FieldOffset(0x4C)] public fixed byte m_hObserverTarget[0x4];
        [FieldOffset(0x50)] public fixed byte m_iObserverLastMode[0x4];
        [FieldOffset(0x54)] public fixed byte m_bForcedObserverMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CCashStack {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_nCashStackValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CLogicScript {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAttributeManager__cached_attribute_float_t {
        [FieldOffset(0x0)] public fixed byte flIn[0x8];
        [FieldOffset(0x8)] public fixed byte iAttribHook[0x8];
        [FieldOffset(0x10)] public fixed byte flOut[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseGraphInstance_ServerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x118];
        [FieldOffset(0x118)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x11C)] public fixed byte m_bActivated[0x4];
        [FieldOffset(0x120)] public fixed byte m_sNameFixupStaticPrefix[0x8];
        [FieldOffset(0x128)] public fixed byte m_sNameFixupParent[0x8];
        [FieldOffset(0x130)] public fixed byte m_sNameFixupLocal[0x8];
        [FieldOffset(0x138)] public fixed byte m_sProceduralWorldNameForRelays[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x800)]
    public unsafe struct CSceneEntityAlias_logic_choreographed_scene {
        [FieldOffset(0x0)] public fixed byte pad_0[0x800];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CRagdollManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iCurrentMaxRagdollCount[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_iMaxRagdollCount[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_bSaveImportant[0x1];
        [FieldOffset(0x4B1)] public fixed byte m_bCanTakeDamage[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A8)]
    public unsafe struct CSoundOpvarSetBoxEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x640];
        [FieldOffset(0x640)] public fixed byte m_vDistanceInnerMins[0xC];
        [FieldOffset(0x64C)] public fixed byte m_vDistanceInnerMaxs[0xC];
        [FieldOffset(0x658)] public fixed byte m_vDistanceOuterMins[0xC];
        [FieldOffset(0x664)] public fixed byte m_vDistanceOuterMaxs[0xC];
        [FieldOffset(0x670)] public fixed byte m_nBoxDirection[0x4];
        [FieldOffset(0x674)] public fixed byte m_vInnerMins[0xC];
        [FieldOffset(0x680)] public fixed byte m_vInnerMaxs[0xC];
        [FieldOffset(0x68C)] public fixed byte m_vOuterMins[0xC];
        [FieldOffset(0x698)] public fixed byte m_vOuterMaxs[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA08)]
    public unsafe struct CPostProcessingVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D8];
        [FieldOffset(0x9D8)] public fixed byte m_hPostSettings[0x8];
        [FieldOffset(0x9E0)] public fixed byte m_flFadeDuration[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_flMinLogExposure[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_flMaxLogExposure[0x4];
        [FieldOffset(0x9EC)] public fixed byte m_flMinExposure[0x4];
        [FieldOffset(0x9F0)] public fixed byte m_flMaxExposure[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_flExposureCompensation[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_flExposureFadeSpeedUp[0x4];
        [FieldOffset(0x9FC)] public fixed byte m_flExposureFadeSpeedDown[0x4];
        [FieldOffset(0xA00)] public fixed byte m_flTonemapEVSmoothingRange[0x4];
        [FieldOffset(0xA04)] public fixed byte m_bMaster[0x1];
        [FieldOffset(0xA05)] public fixed byte m_bExposureControl[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CPointProximitySensor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_hTargetEntity[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_Distance[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulse_InvokeBinding {
        [FieldOffset(0x0)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x30)] public fixed byte m_FuncName[0x10];
        [FieldOffset(0x40)] public fixed byte m_nCellIndex[0x4];
        [FieldOffset(0x44)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x48)] public fixed byte m_nSrcInstruction[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA48)]
    public unsafe struct CTriggerLook {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_hLookTarget[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_flFieldOfView[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_flLookTime[0x4];
        [FieldOffset(0x9EC)] public fixed byte m_flLookTimeTotal[0x4];
        [FieldOffset(0x9F0)] public fixed byte m_flLookTimeLast[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_flTimeoutDuration[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_bTimeoutFired[0x1];
        [FieldOffset(0x9F9)] public fixed byte m_bIsLooking[0x1];
        [FieldOffset(0x9FA)] public fixed byte m_b2DFOV[0x1];
        [FieldOffset(0x9FB)] public fixed byte m_bUseVelocity[0x1];
        [FieldOffset(0x9FC)] public fixed byte m_bTestOcclusion[0x1];
        [FieldOffset(0x9FD)] public fixed byte m_bTestAllVisibleOcclusion[0x3];
        [FieldOffset(0xA00)] public fixed byte m_OnTimeout[0x18];
        [FieldOffset(0xA18)] public fixed byte m_OnStartLook[0x18];
        [FieldOffset(0xA30)] public fixed byte m_OnEndLook[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct CPulseCell_Outflow_PlayVCD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
        [FieldOffset(0x138)] public fixed byte m_hChoreoScene[0x8];
        [FieldOffset(0x140)] public fixed byte m_OnPaused[0x48];
        [FieldOffset(0x188)] public fixed byte m_OnResumed[0x48];
        [FieldOffset(0x1D0)] public fixed byte m_OutRequirements[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CMultiplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CMolotovGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CPhysTorque {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_axis[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5D0)]
    public unsafe struct CMultiSource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_rgEntities[0x80];
        [FieldOffset(0x528)] public fixed byte m_rgTriggered[0x80];
        [FieldOffset(0x5A8)] public fixed byte m_OnTrigger[0x18];
        [FieldOffset(0x5C0)] public fixed byte m_iTotal[0x8];
        [FieldOffset(0x5C8)] public fixed byte m_globalstate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CBaseCSGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
        [FieldOffset(0x1280)] public fixed byte m_bRedraw[0x1];
        [FieldOffset(0x1281)] public fixed byte m_bIsHeldByPlayer[0x1];
        [FieldOffset(0x1282)] public fixed byte m_bPinPulled[0x1];
        [FieldOffset(0x1283)] public fixed byte m_bJumpThrow[0x1];
        [FieldOffset(0x1284)] public fixed byte m_bThrowAnimating[0x4];
        [FieldOffset(0x1288)] public fixed byte m_fThrowTime[0x4];
        [FieldOffset(0x128C)] public fixed byte m_flThrowStrength[0x4];
        [FieldOffset(0x1290)] public fixed byte m_fDropTime[0x4];
        [FieldOffset(0x1294)] public fixed byte m_fPinPullTime[0x4];
        [FieldOffset(0x1298)] public fixed byte m_bJustPulledPin[0x4];
        [FieldOffset(0x129C)] public fixed byte m_nNextHoldTick[0x4];
        [FieldOffset(0x12A0)] public fixed byte m_flNextHoldFrac[0x4];
        [FieldOffset(0x12A4)] public fixed byte m_hSwitchToWeaponAfterThrow[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5A0)]
    public unsafe struct CLogicAuto {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnMapSpawn[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnDemoMapSpawn[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_OnNewGame[0x18];
        [FieldOffset(0x4F0)] public fixed byte m_OnLoadGame[0x18];
        [FieldOffset(0x508)] public fixed byte m_OnMapTransition[0x18];
        [FieldOffset(0x520)] public fixed byte m_OnBackgroundMap[0x18];
        [FieldOffset(0x538)] public fixed byte m_OnMultiNewMap[0x18];
        [FieldOffset(0x550)] public fixed byte m_OnMultiNewRound[0x18];
        [FieldOffset(0x568)] public fixed byte m_OnVREnabled[0x18];
        [FieldOffset(0x580)] public fixed byte m_OnVRNotEnabled[0x18];
        [FieldOffset(0x598)] public fixed byte m_globalstate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CPhysicsWire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nDensity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CFuncIllusionary {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CInfoDynamicShadowHint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nImportance[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_nLightChoice[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_hLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CMarkupVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bDisabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CGenericLogicPlayerProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x518];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CPathNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vInTangentLocal[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_vOutTangentLocal[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_strParentPathUniqueID[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_strPathNodeParameter[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_xWSPrevParent[0x20];
        [FieldOffset(0x4F0)] public fixed byte m_hPath[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamSelectCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E0)]
    public unsafe struct CTriggerRemove {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_OnRemove[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CLogicGameEventListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
        [FieldOffset(0x4B8)] public fixed byte m_OnEventFired[0x18];
        [FieldOffset(0x4D0)] public fixed byte m_iszGameEventName[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_iszGameEventItem[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bStartDisabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CServerOnlyModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Completed[0x48];
        [FieldOffset(0x120)] public fixed byte m_OnInterval[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x898)]
    public unsafe struct CMarkupVolumeTagged_Nav {
        [FieldOffset(0x0)] public fixed byte pad_0[0x890];
        [FieldOffset(0x890)] public fixed byte m_nScopes[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CInfoPlayerTerrorist {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CLogicAutosave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bForceNewLevelUnit[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_minHitPoints[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_minHitPointsToCommit[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CSingleplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_bSinglePlayerGameEnding[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CEnvWindShared {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_iWindSeed[0x4];
        [FieldOffset(0x10)] public fixed byte m_iMinWind[0x2];
        [FieldOffset(0x12)] public fixed byte m_iMaxWind[0x2];
        [FieldOffset(0x14)] public fixed byte m_windRadius[0x4];
        [FieldOffset(0x18)] public fixed byte m_iMinGust[0x2];
        [FieldOffset(0x1A)] public fixed byte m_iMaxGust[0x2];
        [FieldOffset(0x1C)] public fixed byte m_flMinGustDelay[0x4];
        [FieldOffset(0x20)] public fixed byte m_flMaxGustDelay[0x4];
        [FieldOffset(0x24)] public fixed byte m_flGustDuration[0x4];
        [FieldOffset(0x28)] public fixed byte m_iGustDirChange[0x2];
        [FieldOffset(0x2A)] public fixed byte m_iInitialWindDir[0x2];
        [FieldOffset(0x2C)] public fixed byte m_flInitialWindSpeed[0x4];
        [FieldOffset(0x30)] public fixed byte m_location[0x10];
        [FieldOffset(0x40)] public fixed byte m_OnGustStart[0x18];
        [FieldOffset(0x58)] public fixed byte m_OnGustEnd[0x18];
        [FieldOffset(0x70)] public fixed byte m_hEntOwner[0xC0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct CPointPrefab {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_targetMapName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_forceWorldGroupID[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_associatedRelayTargetName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_fixupNames[0x1];
        [FieldOffset(0x4C1)] public fixed byte m_bLoadDynamic[0x3];
        [FieldOffset(0x4C4)] public fixed byte m_associatedRelayEntity[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_ProceduralRelaySources[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_BaseLerp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CEnvInstructorVRHint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszHintTargetEntity[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iTimeout[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iszCaption[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_iszStartSound[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_iLayoutFileType[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_iszCustomLayoutFile[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iAttachType[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_flHeightOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CCSGameRulesProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pGameRules[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CPrecipitation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CCommentaryViewPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CEnvGlobal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_outCounter[0x20];
        [FieldOffset(0x4C8)] public fixed byte m_globalstate[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_triggermode[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_initialstate[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_counter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x758)]
    public unsafe struct CLogicNPCCounterOBB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x758];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CPlatTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_pPlatform[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x800)]
    public unsafe struct CSceneEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_iszSceneFile[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszTarget1[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iszTarget2[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_iszTarget3[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_iszTarget4[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_iszTarget5[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iszTarget6[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_iszTarget7[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_iszTarget8[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_hTarget1[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_hTarget2[0x4];
        [FieldOffset(0x500)] public fixed byte m_hTarget3[0x4];
        [FieldOffset(0x504)] public fixed byte m_hTarget4[0x4];
        [FieldOffset(0x508)] public fixed byte m_hTarget5[0x4];
        [FieldOffset(0x50C)] public fixed byte m_hTarget6[0x4];
        [FieldOffset(0x510)] public fixed byte m_hTarget7[0x4];
        [FieldOffset(0x514)] public fixed byte m_hTarget8[0x4];
        [FieldOffset(0x518)] public fixed byte m_hLocatorOrigin[0x8];
        [FieldOffset(0x520)] public fixed byte m_sTargetAttachment[0x8];
        [FieldOffset(0x528)] public fixed byte m_bIsPlayingBack[0x1];
        [FieldOffset(0x529)] public fixed byte m_bPaused[0x1];
        [FieldOffset(0x52A)] public fixed byte m_bMultiplayer[0x1];
        [FieldOffset(0x52B)] public fixed byte m_bAutogenerated[0x1];
        [FieldOffset(0x52C)] public fixed byte m_flForceClientTime[0x4];
        [FieldOffset(0x530)] public fixed byte m_flCurrentTime[0x4];
        [FieldOffset(0x534)] public fixed byte m_flFrameTime[0x4];
        [FieldOffset(0x538)] public fixed byte m_bCancelAtNextInterrupt[0x1];
        [FieldOffset(0x539)] public fixed byte m_bRemoveOnCompletion[0x3];
        [FieldOffset(0x53C)] public fixed byte m_fPitch[0x4];
        [FieldOffset(0x540)] public fixed byte m_bAutomated[0x4];
        [FieldOffset(0x544)] public fixed byte m_nAutomatedAction[0x4];
        [FieldOffset(0x548)] public fixed byte m_flAutomationDelay[0x4];
        [FieldOffset(0x54C)] public fixed byte m_flAutomationTime[0x4];
        [FieldOffset(0x550)] public fixed byte m_nSpeechPriority[0x4];
        [FieldOffset(0x554)] public fixed byte m_bPausedViaInput[0x1];
        [FieldOffset(0x555)] public fixed byte m_bPauseAtNextInterrupt[0x1];
        [FieldOffset(0x556)] public fixed byte m_bWaitingForActor[0x1];
        [FieldOffset(0x557)] public fixed byte m_bWaitingForInterrupt[0x1];
        [FieldOffset(0x558)] public fixed byte m_bInterruptedActorsScenes[0x1];
        [FieldOffset(0x559)] public fixed byte m_bBreakOnNonIdle[0x1];
        [FieldOffset(0x55A)] public fixed byte m_bSceneFinished[0x6];
        [FieldOffset(0x560)] public fixed byte m_hActorList[0x18];
        [FieldOffset(0x578)] public fixed byte m_hRemoveActorList[0x48];
        [FieldOffset(0x5C0)] public fixed byte m_nSceneStringIndex[0x8];
        [FieldOffset(0x5C8)] public fixed byte m_OnStart[0x18];
        [FieldOffset(0x5E0)] public fixed byte m_OnCompletion[0x18];
        [FieldOffset(0x5F8)] public fixed byte m_OnCanceled[0x18];
        [FieldOffset(0x610)] public fixed byte m_OnPaused[0x18];
        [FieldOffset(0x628)] public fixed byte m_OnResumed[0x18];
        [FieldOffset(0x640)] public fixed byte m_OnPulseRequirement[0x90];
        [FieldOffset(0x6D0)] public fixed byte m_TargetNameMap[0x28];
        [FieldOffset(0x6F8)] public fixed byte m_AnchorNameMap[0x28];
        [FieldOffset(0x720)] public fixed byte m_ActorGraphMap[0x28];
        [FieldOffset(0x748)] public fixed byte m_ActorClipMap[0x28];
        [FieldOffset(0x770)] public fixed byte m_ActorMap[0x18];
        [FieldOffset(0x788)] public fixed byte m_hInterruptScene[0x4];
        [FieldOffset(0x78C)] public fixed byte m_nInterruptCount[0x4];
        [FieldOffset(0x790)] public fixed byte m_responseConcept[0x8];
        [FieldOffset(0x798)] public fixed byte m_responseCriteria[0x8];
        [FieldOffset(0x7A0)] public fixed byte m_bSceneMissing[0x1];
        [FieldOffset(0x7A1)] public fixed byte m_bInterrupted[0x1];
        [FieldOffset(0x7A2)] public fixed byte m_bCompletedEarly[0x1];
        [FieldOffset(0x7A3)] public fixed byte m_bInterruptSceneFinished[0x1];
        [FieldOffset(0x7A4)] public fixed byte m_bRestoring[0x4];
        [FieldOffset(0x7A8)] public fixed byte m_hNotifySceneCompletion[0x18];
        [FieldOffset(0x7C0)] public fixed byte m_hListManagers[0x18];
        [FieldOffset(0x7D8)] public fixed byte m_iszSoundName[0x8];
        [FieldOffset(0x7E0)] public fixed byte m_iszSequenceName[0x8];
        [FieldOffset(0x7E8)] public fixed byte m_hActor[0x4];
        [FieldOffset(0x7EC)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0x7F0)] public fixed byte m_BusyActor[0x4];
        [FieldOffset(0x7F4)] public fixed byte m_iPlayerDeathBehavior[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CChoreoInfoTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CTonemapController2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flAutoExposureMin[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flAutoExposureMax[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flExposureAdaptationSpeedUp[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flExposureAdaptationSpeedDown[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flTonemapEVSmoothingRange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CMapSharedEnvironment {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_targetMapName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkedSequenceOperation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0xC)] public fixed byte m_flPrevCycle[0x4];
        [FieldOffset(0x10)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x14)] public fixed byte m_flWeight[0x8];
        [FieldOffset(0x1C)] public fixed byte m_bSequenceChangeNetworked[0x1];
        [FieldOffset(0x1D)] public fixed byte m_bDiscontinuity[0x3];
        [FieldOffset(0x20)] public fixed byte m_flPrevCycleFromDiscontinuity[0x4];
        [FieldOffset(0x24)] public fixed byte m_flPrevCycleForAnimEventDetection[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAB0)]
    public unsafe struct CPhysMagnet {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_OnMagnetAttach[0x18];
        [FieldOffset(0xA58)] public fixed byte m_OnMagnetDetach[0x18];
        [FieldOffset(0xA70)] public fixed byte m_massScale[0x4];
        [FieldOffset(0xA74)] public fixed byte m_forceLimit[0x4];
        [FieldOffset(0xA78)] public fixed byte m_torqueLimit[0x8];
        [FieldOffset(0xA80)] public fixed byte m_MagnettedEntities[0x18];
        [FieldOffset(0xA98)] public fixed byte m_bActive[0x1];
        [FieldOffset(0xA99)] public fixed byte m_bHasHitSomething[0x3];
        [FieldOffset(0xA9C)] public fixed byte m_flTotalMass[0x4];
        [FieldOffset(0xAA0)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0xAA4)] public fixed byte m_flNextSuckTime[0x4];
        [FieldOffset(0xAA8)] public fixed byte m_iMaxObjectsAttached[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x818)]
    public unsafe struct CCSCustomHudLayout {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
        [FieldOffset(0x4B8)] public fixed byte m_strLayout[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_bObservable[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_vecPlayerLayoutStates[0x68];
        [FieldOffset(0x530)] public fixed byte m_globalLayoutState[0x198];
        [FieldOffset(0x6C8)] public fixed byte m_vecPanelIds[0x18];
        [FieldOffset(0x6E0)] public fixed byte m_vecClassNames[0x18];
        [FieldOffset(0x6F8)] public fixed byte m_vecDialogVariableNames[0x120];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszPrivateVScripts[0x8];
        [FieldOffset(0x10)] public fixed byte m_pEntity[0x18];
        [FieldOffset(0x28)] public fixed byte m_CScriptComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CGameGibManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_bAllowNewGibs[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_iCurrentMaxPieces[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_iMaxPieces[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_iLastFrame[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CHandleDummy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CFuncWallToggle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CCSPlayer_BulletServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_totalHitsOnServer[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x548)]
    public unsafe struct CSkyCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_skyboxData[0x90];
        [FieldOffset(0x538)] public fixed byte m_skyboxSlotToken[0x4];
        [FieldOffset(0x53C)] public fixed byte m_bUseAngles[0x4];
        [FieldOffset(0x540)] public fixed byte m_pNext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CCSGO_EndOfMatchLineupEnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_AutoaimServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB00)]
    public unsafe struct CItemDefuserAlias_item_defuser {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB00];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CPathCornerCrash {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CPhysPulley {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_position2[0xC];
        [FieldOffset(0x514)] public fixed byte m_offset[0x18];
        [FieldOffset(0x52C)] public fixed byte m_addLength[0x4];
        [FieldOffset(0x530)] public fixed byte m_gearRatio[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CCSPetPlacement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponMP5SD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1290)]
    public unsafe struct CWeaponBaseItem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
        [FieldOffset(0x1280)] public fixed byte m_bSequenceInProgress[0x1];
        [FieldOffset(0x1281)] public fixed byte m_bRedraw[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct CCommentaryAuto {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnCommentaryNewGame[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnCommentaryMidGame[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_OnCommentaryMultiplayerSpawn[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_entity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct ActiveModelConfig_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_Handle[0x8];
        [FieldOffset(0x38)] public fixed byte m_Name[0x8];
        [FieldOffset(0x40)] public fixed byte m_AssociatedEntities[0x18];
        [FieldOffset(0x58)] public fixed byte m_AssociatedEntityNames[0x18];
        [FieldOffset(0x70)] public fixed byte m_vecAssociatedEntityCollidesWithHierarchy[0x10];
        [FieldOffset(0x80)] public fixed byte m_vecAssociatedEntityCollidesOutsideHierarchy[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponUSPSilencer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CSoundStackSave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszStackName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Value_Curve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponMag7 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CLogicMeasureMovement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_strMeasureTarget[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_strMeasureReference[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_strTargetReference[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_hMeasureTarget[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hMeasureReference[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_hTargetReference[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_nMeasureType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CLogicActivityEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nEventType[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_iszSourceEntityName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hSource[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1300)]
    public unsafe struct CC4 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12B0];
        [FieldOffset(0x12B0)] public fixed byte m_vecLastValidPlayerHeldPosition[0xC];
        [FieldOffset(0x12BC)] public fixed byte m_vecLastValidDroppedPosition[0xC];
        [FieldOffset(0x12C8)] public fixed byte m_bDoValidDroppedPositionCheck[0x1];
        [FieldOffset(0x12C9)] public fixed byte m_bStartedArming[0x3];
        [FieldOffset(0x12CC)] public fixed byte m_fArmedTime[0x4];
        [FieldOffset(0x12D0)] public fixed byte m_bBombPlacedAnimation[0x1];
        [FieldOffset(0x12D1)] public fixed byte m_bIsPlantingViaUse[0x7];
        [FieldOffset(0x12D8)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x12F0)] public fixed byte m_nSpotRules[0x4];
        [FieldOffset(0x12F4)] public fixed byte m_bPlayedArmingBeeps[0x7];
        [FieldOffset(0x12FB)] public fixed byte m_bBombPlanted[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct CHostageCarriableProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC90)]
    public unsafe struct CDynamicPropAlias_cable_dynamic {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CCSObserver_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CEnvDetailController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flFadeStartDist[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flFadeEndDist[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE20)]
    public unsafe struct CCSPlayerPawnBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xCE0];
        [FieldOffset(0xCE0)] public fixed byte m_CTouchExpansionComponent[0x50];
        [FieldOffset(0xD30)] public fixed byte m_pPingServices[0x8];
        [FieldOffset(0xD38)] public fixed byte m_blindUntilTime[0x4];
        [FieldOffset(0xD3C)] public fixed byte m_blindStartTime[0x4];
        [FieldOffset(0xD40)] public fixed byte m_iPlayerState[0xB0];
        [FieldOffset(0xDF0)] public fixed byte m_bRespawning[0x1];
        [FieldOffset(0xDF1)] public fixed byte m_bHasMovedSinceSpawn[0x3];
        [FieldOffset(0xDF4)] public fixed byte m_iNumSpawns[0x8];
        [FieldOffset(0xDFC)] public fixed byte m_flIdleTimeSinceLastAction[0x4];
        [FieldOffset(0xE00)] public fixed byte m_fNextRadarUpdateTime[0x4];
        [FieldOffset(0xE04)] public fixed byte m_flFlashDuration[0x4];
        [FieldOffset(0xE08)] public fixed byte m_flFlashMaxAlpha[0x4];
        [FieldOffset(0xE0C)] public fixed byte m_flProgressBarStartTime[0x4];
        [FieldOffset(0xE10)] public fixed byte m_iProgressBarDuration[0x4];
        [FieldOffset(0xE14)] public fixed byte m_hOriginalController[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CEnvSoundscapeProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x538];
        [FieldOffset(0x538)] public fixed byte m_MainSoundscapeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_EventHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_EventName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct CCSPointScriptEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x668];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseFlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA28)]
    public unsafe struct CBombTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_OnBombExplode[0x18];
        [FieldOffset(0x9E0)] public fixed byte m_OnBombPlanted[0x18];
        [FieldOffset(0x9F8)] public fixed byte m_OnBombDefused[0x18];
        [FieldOffset(0xA10)] public fixed byte m_bIsBombSiteB[0x1];
        [FieldOffset(0xA11)] public fixed byte m_bIsHeistBombTarget[0x1];
        [FieldOffset(0xA12)] public fixed byte m_bBombPlantedHere[0x6];
        [FieldOffset(0xA18)] public fixed byte m_szMountTarget[0x8];
        [FieldOffset(0xA20)] public fixed byte m_hInstructorHint[0x4];
        [FieldOffset(0xA24)] public fixed byte m_nBombSiteDesignation[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CRuleEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_iszMaster[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CPhysThruster {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_localOrigin[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CInfoPlayerStart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bIsMaster[0x7];
        [FieldOffset(0x4B0)] public fixed byte m_pPawnSubclass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CEntityFlame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hEntAttached[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_bCheapEffect[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flSize[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bUseHitboxes[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_iNumHitboxFires[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flHitboxFireScale[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flLifetime[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hAttacker[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flDirectDamagePerSecond[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_iCustomDamageType[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x460)]
    public unsafe struct CSkeletonInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x120];
        [FieldOffset(0x120)] public fixed byte m_modelState[0x290];
        [FieldOffset(0x3B0)] public fixed byte m_bUseParentRenderBounds[0x1];
        [FieldOffset(0x3B1)] public fixed byte m_bDisableSolidCollisionsForHierarchy[0x1];
        [FieldOffset(0x3B2)] public fixed byte m_bDirtyMotionType[0x1];
        [FieldOffset(0x3B3)] public fixed byte m_bIsGeneratingLatchedParentSpaceState[0x5];
        [FieldOffset(0x3B8)] public fixed byte m_materialGroup[0x4];
        [FieldOffset(0x3BC)] public fixed byte m_nHitboxSet[0x60];
        [FieldOffset(0x41C)] public fixed byte m_bForceServerConstraintsEnabled[0x44];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8F8)]
    public unsafe struct CBasePlatTrain {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8D0];
        [FieldOffset(0x8D0)] public fixed byte m_NoiseMoving[0x8];
        [FieldOffset(0x8D8)] public fixed byte m_NoiseArrived[0x10];
        [FieldOffset(0x8E8)] public fixed byte m_volume[0x4];
        [FieldOffset(0x8EC)] public fixed byte m_flTWidth[0x4];
        [FieldOffset(0x8F0)] public fixed byte m_flTLength[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CPointTeleport {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vSaveOrigin[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_vSaveAngles[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_bTeleportParentedEntities[0x1];
        [FieldOffset(0x4C1)] public fixed byte m_bTeleportUseCurrentAngle[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E0)]
    public unsafe struct CTriggerGameEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_strStartTouchEventName[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_strEndTouchEventName[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_strTriggerID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CMessageEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_radius[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_messageText[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_drawText[0x1];
        [FieldOffset(0x4B9)] public fixed byte m_bDeveloperOnly[0x1];
        [FieldOffset(0x4BA)] public fixed byte m_bEnabled[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CEnvEntityIgniter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flLifetime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_Shuffle[0x20];
        [FieldOffset(0x20)] public fixed byte m_nNextShuffle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_BaseLerp__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CMarkupVolumeTagged_NavGame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8B8];
        [FieldOffset(0x8B8)] public fixed byte m_nScopes[0x1];
        [FieldOffset(0x8B9)] public fixed byte m_bFloodFillAttribute[0x1];
        [FieldOffset(0x8BA)] public fixed byte m_bSplitNavSpace[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CMultiLightProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszLightNameFilter[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszLightClassFilter[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_flLightRadiusFilter[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flBrightnessDelta[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_bPerformScreenFade[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flTargetBrightnessMultiplier[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flCurrentBrightnessMultiplier[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_vecLights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponM4A1 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CTriggerHostageReset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xEC0)]
    public unsafe struct CEconWearable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xEB0];
        [FieldOffset(0xEB0)] public fixed byte m_nForceSkin[0x4];
        [FieldOffset(0xEB4)] public fixed byte m_bAlwaysAllow[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponMAC10 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8E0)]
    public unsafe struct CFuncLadder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_vecLadderDir[0x10];
        [FieldOffset(0x860)] public fixed byte m_Dismounts[0x18];
        [FieldOffset(0x878)] public fixed byte m_vecLocalTop[0xC];
        [FieldOffset(0x884)] public fixed byte m_vecPlayerMountPositionTop[0xC];
        [FieldOffset(0x890)] public fixed byte m_vecPlayerMountPositionBottom[0xC];
        [FieldOffset(0x89C)] public fixed byte m_flAutoRideSpeed[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x8A1)] public fixed byte m_bFakeLadder[0x1];
        [FieldOffset(0x8A2)] public fixed byte m_bHasSlack[0x6];
        [FieldOffset(0x8A8)] public fixed byte m_surfacePropName[0x8];
        [FieldOffset(0x8B0)] public fixed byte m_OnPlayerGotOnLadder[0x18];
        [FieldOffset(0x8C8)] public fixed byte m_OnPlayerGotOffLadder[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CFogController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_fog[0x68];
        [FieldOffset(0x510)] public fixed byte m_bUseAngles[0x4];
        [FieldOffset(0x514)] public fixed byte m_iChangedVariables[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAE0)]
    public unsafe struct CItem {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA48];
        [FieldOffset(0xA48)] public fixed byte m_OnPlayerTouch[0x18];
        [FieldOffset(0xA60)] public fixed byte m_OnPlayerPickup[0x18];
        [FieldOffset(0xA78)] public fixed byte m_bActivateWhenAtRest[0x8];
        [FieldOffset(0xA80)] public fixed byte m_OnCacheInteraction[0x18];
        [FieldOffset(0xA98)] public fixed byte m_OnGlovePulled[0x18];
        [FieldOffset(0xAB0)] public fixed byte m_vOriginalSpawnOrigin[0xC];
        [FieldOffset(0xABC)] public fixed byte m_vOriginalSpawnAngles[0xC];
        [FieldOffset(0xAC8)] public fixed byte m_bPhysStartAsleep[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA00)]
    public unsafe struct CTriggerPush {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_angPushEntitySpace[0xC];
        [FieldOffset(0x9D4)] public fixed byte m_vecPushDirEntitySpace[0xC];
        [FieldOffset(0x9E0)] public fixed byte m_bTriggerOnStartTouch[0x1];
        [FieldOffset(0x9E1)] public fixed byte m_bUsePathSimple[0x7];
        [FieldOffset(0x9E8)] public fixed byte m_iszPathSimpleName[0x8];
        [FieldOffset(0x9F0)] public fixed byte m_PathSimple[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_splinePushType[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_flSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA70)]
    public unsafe struct CBaseProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_bModelOverrodeBlockLOS[0x4];
        [FieldOffset(0xA44)] public fixed byte m_iShapeType[0x4];
        [FieldOffset(0xA48)] public fixed byte m_bConformToCollisionBounds[0x8];
        [FieldOffset(0xA50)] public fixed byte m_mPreferredCatchTransform[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x528)]
    public unsafe struct CInfoOffscreenPanoramaTexture {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bEnableMipGen[0x3];
        [FieldOffset(0x4AC)] public fixed byte m_nResolutionX[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nResolutionY[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_szPanelType[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_szLayoutFileName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_RenderAttrName[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_TargetEntities[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_nTargetChangeCount[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_vecCSSClasses[0x18];
        [FieldOffset(0x508)] public fixed byte m_szTargetsName[0x8];
        [FieldOffset(0x510)] public fixed byte m_AdditionalTargetEntities[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x578)]
    public unsafe struct CPointAngularVelocitySensor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hTargetEntity[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flThreshold[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nLastCompareResult[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_nLastFireResult[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flFireTime[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flFireInterval[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flLastAngVelocity[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_lastOrientation[0xC];
        [FieldOffset(0x4D0)] public fixed byte m_vecAxis[0xC];
        [FieldOffset(0x4DC)] public fixed byte m_bUseHelper[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_AngularVelocity[0x20];
        [FieldOffset(0x500)] public fixed byte m_OnLessThan[0x18];
        [FieldOffset(0x518)] public fixed byte m_OnLessThanOrEqualTo[0x18];
        [FieldOffset(0x530)] public fixed byte m_OnGreaterThan[0x18];
        [FieldOffset(0x548)] public fixed byte m_OnGreaterThanOrEqualTo[0x18];
        [FieldOffset(0x560)] public fixed byte m_OnEqualTo[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CPlayerVisibility {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flVisibilityStrength[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flFogDistanceMultiplier[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flFogMaxDensityMultiplier[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x4B9)] public fixed byte m_bIsEnabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Step_FollowEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_ParamBoneOrAttachName[0x8];
        [FieldOffset(0x50)] public fixed byte m_ParamBoneOrAttachNameChild[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CFlashbang {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xEF0)]
    public unsafe struct CBasePlayerWeapon {
        [FieldOffset(0x0)] public fixed byte pad_0[0xEB0];
        [FieldOffset(0xEB0)] public fixed byte m_nNextPrimaryAttackTick[0x4];
        [FieldOffset(0xEB4)] public fixed byte m_flNextPrimaryAttackTickRatio[0x4];
        [FieldOffset(0xEB8)] public fixed byte m_nNextSecondaryAttackTick[0x4];
        [FieldOffset(0xEBC)] public fixed byte m_flNextSecondaryAttackTickRatio[0x4];
        [FieldOffset(0xEC0)] public fixed byte m_iClip1[0x4];
        [FieldOffset(0xEC4)] public fixed byte m_iClip2[0x4];
        [FieldOffset(0xEC8)] public fixed byte m_pReserveAmmo[0x8];
        [FieldOffset(0xED0)] public fixed byte m_OnPlayerUse[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x508)]
    public unsafe struct CPhysForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pController[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_nameAttach[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_force[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_forceTime[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_attachedObject[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_wasRestored[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_integrator[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A0)]
    public unsafe struct CCSWeaponBaseVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x520];
        [FieldOffset(0x520)] public fixed byte m_WeaponType[0x4];
        [FieldOffset(0x524)] public fixed byte m_WeaponCategory[0x4];
        [FieldOffset(0x528)] public fixed byte m_szAnimSkeleton[0xE0];
        [FieldOffset(0x608)] public fixed byte m_vecMuzzlePos0[0xC];
        [FieldOffset(0x614)] public fixed byte m_vecMuzzlePos1[0xC];
        [FieldOffset(0x620)] public fixed byte m_szTracerParticle[0xE0];
        [FieldOffset(0x700)] public fixed byte m_GearSlot[0x4];
        [FieldOffset(0x704)] public fixed byte m_GearSlotPosition[0x4];
        [FieldOffset(0x708)] public fixed byte m_DefaultLoadoutSlot[0x4];
        [FieldOffset(0x70C)] public fixed byte m_nPrice[0x4];
        [FieldOffset(0x710)] public fixed byte m_nKillAward[0x4];
        [FieldOffset(0x714)] public fixed byte m_nPrimaryReserveAmmoMax[0x4];
        [FieldOffset(0x718)] public fixed byte m_nSecondaryReserveAmmoMax[0x4];
        [FieldOffset(0x71C)] public fixed byte m_bMeleeWeapon[0x1];
        [FieldOffset(0x71D)] public fixed byte m_bHasBurstMode[0x1];
        [FieldOffset(0x71E)] public fixed byte m_bIsRevolver[0x1];
        [FieldOffset(0x71F)] public fixed byte m_bCannotShootUnderwater[0x1];
        [FieldOffset(0x720)] public fixed byte m_szName[0x8];
        [FieldOffset(0x728)] public fixed byte m_eSilencerType[0x4];
        [FieldOffset(0x72C)] public fixed byte m_bShowCrosshair[0x1];
        [FieldOffset(0x72D)] public fixed byte m_bIsFullAuto[0x3];
        [FieldOffset(0x730)] public fixed byte m_nNumBullets[0x4];
        [FieldOffset(0x734)] public fixed byte m_bReloadsSingleShells[0x4];
        [FieldOffset(0x738)] public fixed byte m_flCycleTime[0x8];
        [FieldOffset(0x740)] public fixed byte m_flCycleTimeWhenInBurstMode[0x4];
        [FieldOffset(0x744)] public fixed byte m_flTimeBetweenBurstShots[0x4];
        [FieldOffset(0x748)] public fixed byte m_flMaxSpeed[0x8];
        [FieldOffset(0x750)] public fixed byte m_flSpread[0x8];
        [FieldOffset(0x758)] public fixed byte m_flInaccuracyCrouch[0x8];
        [FieldOffset(0x760)] public fixed byte m_flInaccuracyStand[0x8];
        [FieldOffset(0x768)] public fixed byte m_flInaccuracyJump[0x8];
        [FieldOffset(0x770)] public fixed byte m_flInaccuracyLand[0x8];
        [FieldOffset(0x778)] public fixed byte m_flInaccuracyLadder[0x8];
        [FieldOffset(0x780)] public fixed byte m_flInaccuracyFire[0x8];
        [FieldOffset(0x788)] public fixed byte m_flInaccuracyMove[0x8];
        [FieldOffset(0x790)] public fixed byte m_flRecoilAngle[0x8];
        [FieldOffset(0x798)] public fixed byte m_flRecoilAngleVariance[0x8];
        [FieldOffset(0x7A0)] public fixed byte m_flRecoilMagnitude[0x8];
        [FieldOffset(0x7A8)] public fixed byte m_flRecoilMagnitudeVariance[0x8];
        [FieldOffset(0x7B0)] public fixed byte m_nTracerFrequency[0x8];
        [FieldOffset(0x7B8)] public fixed byte m_flInaccuracyJumpInitial[0x4];
        [FieldOffset(0x7BC)] public fixed byte m_flInaccuracyJumpApex[0x4];
        [FieldOffset(0x7C0)] public fixed byte m_flInaccuracyReload[0x4];
        [FieldOffset(0x7C4)] public fixed byte m_flDeployDuration[0x4];
        [FieldOffset(0x7C8)] public fixed byte m_flDisallowAttackAfterReloadStartDuration[0x4];
        [FieldOffset(0x7CC)] public fixed byte m_nBurstShotCount[0x4];
        [FieldOffset(0x7D0)] public fixed byte m_bAllowBurstHolster[0x4];
        [FieldOffset(0x7D4)] public fixed byte m_nRecoilSeed[0x4];
        [FieldOffset(0x7D8)] public fixed byte m_nSpreadSeed[0x4];
        [FieldOffset(0x7DC)] public fixed byte m_flAttackMovespeedFactor[0x4];
        [FieldOffset(0x7E0)] public fixed byte m_flInaccuracyPitchShift[0x4];
        [FieldOffset(0x7E4)] public fixed byte m_flInaccuracyAltSoundThreshold[0x4];
        [FieldOffset(0x7E8)] public fixed byte m_szUseRadioSubtitle[0x8];
        [FieldOffset(0x7F0)] public fixed byte m_bUnzoomsAfterShot[0x1];
        [FieldOffset(0x7F1)] public fixed byte m_bHideViewModelWhenZoomed[0x3];
        [FieldOffset(0x7F4)] public fixed byte m_nZoomLevels[0x4];
        [FieldOffset(0x7F8)] public fixed byte m_nZoomFOV1[0x4];
        [FieldOffset(0x7FC)] public fixed byte m_nZoomFOV2[0x4];
        [FieldOffset(0x800)] public fixed byte m_flZoomTime0[0x4];
        [FieldOffset(0x804)] public fixed byte m_flZoomTime1[0x4];
        [FieldOffset(0x808)] public fixed byte m_flZoomTime2[0x4];
        [FieldOffset(0x80C)] public fixed byte m_flIronSightPullUpSpeed[0x4];
        [FieldOffset(0x810)] public fixed byte m_flIronSightPutDownSpeed[0x4];
        [FieldOffset(0x814)] public fixed byte m_flIronSightFOV[0x4];
        [FieldOffset(0x818)] public fixed byte m_flIronSightPivotForward[0x4];
        [FieldOffset(0x81C)] public fixed byte m_flIronSightLooseness[0x4];
        [FieldOffset(0x820)] public fixed byte m_nDamage[0x4];
        [FieldOffset(0x824)] public fixed byte m_flHeadshotMultiplier[0x4];
        [FieldOffset(0x828)] public fixed byte m_flArmorRatio[0x4];
        [FieldOffset(0x82C)] public fixed byte m_flPenetration[0x4];
        [FieldOffset(0x830)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x834)] public fixed byte m_flRangeModifier[0x4];
        [FieldOffset(0x838)] public fixed byte m_flFlinchVelocityModifierLarge[0x4];
        [FieldOffset(0x83C)] public fixed byte m_flFlinchVelocityModifierSmall[0x4];
        [FieldOffset(0x840)] public fixed byte m_flRecoveryTimeCrouch[0x4];
        [FieldOffset(0x844)] public fixed byte m_flRecoveryTimeStand[0x4];
        [FieldOffset(0x848)] public fixed byte m_flRecoveryTimeCrouchFinal[0x4];
        [FieldOffset(0x84C)] public fixed byte m_flRecoveryTimeStandFinal[0x4];
        [FieldOffset(0x850)] public fixed byte m_nRecoveryTransitionStartBullet[0x4];
        [FieldOffset(0x854)] public fixed byte m_nRecoveryTransitionEndBullet[0x4];
        [FieldOffset(0x858)] public fixed byte m_flThrowVelocity[0x4];
        [FieldOffset(0x85C)] public fixed byte m_vSmokeColor[0xC];
        [FieldOffset(0x868)] public fixed byte m_szAnimClass[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CAttributeManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Providers[0x18];
        [FieldOffset(0x20)] public fixed byte m_iReapplyProvisionParity[0x4];
        [FieldOffset(0x24)] public fixed byte m_hOuter[0x4];
        [FieldOffset(0x28)] public fixed byte m_bPreventLoopback[0x4];
        [FieldOffset(0x2C)] public fixed byte m_ProviderType[0x4];
        [FieldOffset(0x30)] public fixed byte m_CachedResults[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Continue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CPlayer_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_vecCsViewPunchAngle[0xC];
        [FieldOffset(0x54)] public fixed byte m_nCsViewPunchAngleTick[0x4];
        [FieldOffset(0x58)] public fixed byte m_flCsViewPunchAngleTickRatio[0x8];
        [FieldOffset(0x60)] public fixed byte m_PlayerFog[0x40];
        [FieldOffset(0xA0)] public fixed byte m_hColorCorrectionCtrl[0x4];
        [FieldOffset(0xA4)] public fixed byte m_hViewEntity[0x4];
        [FieldOffset(0xA8)] public fixed byte m_hTonemapController[0x8];
        [FieldOffset(0xB0)] public fixed byte m_audio[0x78];
        [FieldOffset(0x128)] public fixed byte m_PostProcessingVolumes[0x18];
        [FieldOffset(0x140)] public fixed byte m_flOldPlayerZ[0x4];
        [FieldOffset(0x144)] public fixed byte m_flOldPlayerViewOffsetZ[0x1C];
        [FieldOffset(0x160)] public fixed byte m_hTriggerSoundscapeList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_Timeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_TimelineEvents[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CPulseCell_Inflow_EntOutputHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_SourceEntity[0x10];
        [FieldOffset(0x90)] public fixed byte m_SourceOutput[0x10];
        [FieldOffset(0xA0)] public fixed byte m_ExpectedParamType[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterAttributeInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_sAttributeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CKeepUpright {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_worldGoalAxis[0xC];
        [FieldOffset(0x4BC)] public fixed byte m_localTestAxis[0xC];
        [FieldOffset(0x4C8)] public fixed byte m_pController[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_nameAttach[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_attachedObject[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_angularLimit[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bDampAllRotation[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CPointTemplate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszWorldName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszSource2EntityLumpName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszEntityFilterName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_flTimeoutInterval[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_bAsynchronouslySpawnEntities[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_clientOnlyEntityBehavior[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_ownerSpawnGroupType[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_createdSpawnGroupHandles[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_SpawnedEntityHandles[0x18];
        [FieldOffset(0x500)] public fixed byte m_ScriptSpawnCallback[0x8];
        [FieldOffset(0x508)] public fixed byte m_ScriptCallbackScope[0x8];
        [FieldOffset(0x510)] public fixed byte m_OnEntitySpawned[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x558)]
    public unsafe struct CEnvVolumetricFogController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flScattering[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_TintColor[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flAnisotropy[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flFadeSpeed[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flDrawDistance[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flFadeInStart[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flFadeInEnd[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flIndirectStrength[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_nVolumeDepth[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_fFirstVolumeSliceThickness[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_nIndirectTextureDimX[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_nIndirectTextureDimY[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_nIndirectTextureDimZ[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x4E8)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x4F4)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_flStartAnisoTime[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_flStartScatterTime[0x4];
        [FieldOffset(0x500)] public fixed byte m_flStartDrawDistanceTime[0x4];
        [FieldOffset(0x504)] public fixed byte m_flStartAnisotropy[0x4];
        [FieldOffset(0x508)] public fixed byte m_flStartScattering[0x4];
        [FieldOffset(0x50C)] public fixed byte m_flStartDrawDistance[0x4];
        [FieldOffset(0x510)] public fixed byte m_flDefaultAnisotropy[0x4];
        [FieldOffset(0x514)] public fixed byte m_flDefaultScattering[0x4];
        [FieldOffset(0x518)] public fixed byte m_flDefaultDrawDistance[0x4];
        [FieldOffset(0x51C)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x51D)] public fixed byte m_bEnableIndirect[0x1];
        [FieldOffset(0x51E)] public fixed byte m_bIsMaster[0x2];
        [FieldOffset(0x520)] public fixed byte m_hFogIndirectTexture[0x8];
        [FieldOffset(0x528)] public fixed byte m_nForceRefreshCount[0x4];
        [FieldOffset(0x52C)] public fixed byte m_fNoiseSpeed[0x4];
        [FieldOffset(0x530)] public fixed byte m_fNoiseStrength[0x4];
        [FieldOffset(0x534)] public fixed byte m_vNoiseScale[0xC];
        [FieldOffset(0x540)] public fixed byte m_fWindSpeed[0x4];
        [FieldOffset(0x544)] public fixed byte m_vWindDirection[0xC];
        [FieldOffset(0x550)] public fixed byte m_bFirstTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CBot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_pController[0x8];
        [FieldOffset(0x18)] public fixed byte m_pPlayer[0x8];
        [FieldOffset(0x20)] public fixed byte m_bHasSpawned[0x4];
        [FieldOffset(0x24)] public fixed byte m_id[0x9C];
        [FieldOffset(0xC0)] public fixed byte m_isRunning[0x1];
        [FieldOffset(0xC1)] public fixed byte m_isCrouching[0x3];
        [FieldOffset(0xC4)] public fixed byte m_forwardSpeed[0x4];
        [FieldOffset(0xC8)] public fixed byte m_leftSpeed[0x4];
        [FieldOffset(0xCC)] public fixed byte m_verticalSpeed[0x4];
        [FieldOffset(0xD0)] public fixed byte m_buttonFlags[0x8];
        [FieldOffset(0xD8)] public fixed byte m_jumpTimestamp[0x4];
        [FieldOffset(0xDC)] public fixed byte m_viewForward[0x1C];
        [FieldOffset(0xF8)] public fixed byte m_postureStackIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_SetAnimGraphParam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_ParamName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_FlashlightServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAB8)]
    public unsafe struct CCSPlayerController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x7E8];
        [FieldOffset(0x7E8)] public fixed byte m_pInGameMoneyServices[0x8];
        [FieldOffset(0x7F0)] public fixed byte m_pInventoryServices[0x8];
        [FieldOffset(0x7F8)] public fixed byte m_pActionTrackingServices[0x8];
        [FieldOffset(0x800)] public fixed byte m_pDamageServices[0x8];
        [FieldOffset(0x808)] public fixed byte m_iPing[0x4];
        [FieldOffset(0x80C)] public fixed byte m_bHasCommunicationAbuseMute[0x4];
        [FieldOffset(0x810)] public fixed byte m_uiCommunicationMuteFlags[0x8];
        [FieldOffset(0x818)] public fixed byte m_szCrosshairCodes[0x8];
        [FieldOffset(0x820)] public fixed byte m_iPendingTeamNum[0x4];
        [FieldOffset(0x824)] public fixed byte m_flForceTeamTime[0x4];
        [FieldOffset(0x828)] public fixed byte m_iCompTeammateColor[0x4];
        [FieldOffset(0x82C)] public fixed byte m_bEverPlayedOnTeam[0x1];
        [FieldOffset(0x82D)] public fixed byte m_bAttemptedToGetColor[0x3];
        [FieldOffset(0x830)] public fixed byte m_iTeammatePreferredColor[0x4];
        [FieldOffset(0x834)] public fixed byte m_bTeamChanged[0x1];
        [FieldOffset(0x835)] public fixed byte m_bInSwitchTeam[0x1];
        [FieldOffset(0x836)] public fixed byte m_bHasSeenJoinGame[0x1];
        [FieldOffset(0x837)] public fixed byte m_bJustBecameSpectator[0x1];
        [FieldOffset(0x838)] public fixed byte m_bSwitchTeamsOnNextRoundReset[0x1];
        [FieldOffset(0x839)] public fixed byte m_bRemoveAllItemsOnNextRoundReset[0x3];
        [FieldOffset(0x83C)] public fixed byte m_flLastJoinTeamTime[0x4];
        [FieldOffset(0x840)] public fixed byte m_szClan[0x8];
        [FieldOffset(0x848)] public fixed byte m_unClanId32bit[0x4];
        [FieldOffset(0x84C)] public fixed byte m_iCoachingTeam[0x4];
        [FieldOffset(0x850)] public fixed byte m_nPlayerDominated[0x8];
        [FieldOffset(0x858)] public fixed byte m_nPlayerDominatingMe[0x8];
        [FieldOffset(0x860)] public fixed byte m_iCompetitiveRanking[0x4];
        [FieldOffset(0x864)] public fixed byte m_iCompetitiveWins[0x4];
        [FieldOffset(0x868)] public fixed byte m_iCompetitiveRankType[0x4];
        [FieldOffset(0x86C)] public fixed byte m_iCompetitiveRankingPredicted_Win[0x4];
        [FieldOffset(0x870)] public fixed byte m_iCompetitiveRankingPredicted_Loss[0x4];
        [FieldOffset(0x874)] public fixed byte m_iCompetitiveRankingPredicted_Tie[0x4];
        [FieldOffset(0x878)] public fixed byte m_nEndMatchNextMapVote[0x4];
        [FieldOffset(0x87C)] public fixed byte m_unActiveQuestId[0x4];
        [FieldOffset(0x880)] public fixed byte m_rtActiveMissionPeriod[0x4];
        [FieldOffset(0x884)] public fixed byte m_nQuestProgressReason[0x4];
        [FieldOffset(0x888)] public fixed byte m_unPlayerTvControlFlags[0x30];
        [FieldOffset(0x8B8)] public fixed byte m_iDraftIndex[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_msQueuedModeDisconnectionTimestamp[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_uiAbandonRecordedReason[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_eNetworkDisconnectionReason[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_bCannotBeKicked[0x1];
        [FieldOffset(0x8C9)] public fixed byte m_bEverFullyConnected[0x1];
        [FieldOffset(0x8CA)] public fixed byte m_bAbandonAllowsSurrender[0x1];
        [FieldOffset(0x8CB)] public fixed byte m_bAbandonOffersInstantSurrender[0x1];
        [FieldOffset(0x8CC)] public fixed byte m_bDisconnection1MinWarningPrinted[0x1];
        [FieldOffset(0x8CD)] public fixed byte m_bScoreReported[0x3];
        [FieldOffset(0x8D0)] public fixed byte m_nDisconnectionTick[0x10];
        [FieldOffset(0x8E0)] public fixed byte m_bControllingBot[0x1];
        [FieldOffset(0x8E1)] public fixed byte m_bHasControlledBotThisRound[0x1];
        [FieldOffset(0x8E2)] public fixed byte m_bHasBeenControlledByPlayerThisRound[0x2];
        [FieldOffset(0x8E4)] public fixed byte m_nBotsControlledThisRound[0x4];
        [FieldOffset(0x8E8)] public fixed byte m_bCanControlObservedBot[0x4];
        [FieldOffset(0x8EC)] public fixed byte m_hPlayerPawn[0x4];
        [FieldOffset(0x8F0)] public fixed byte m_hObserverPawn[0x4];
        [FieldOffset(0x8F4)] public fixed byte m_DesiredObserverMode[0x4];
        [FieldOffset(0x8F8)] public fixed byte m_hDesiredObserverTarget[0x4];
        [FieldOffset(0x8FC)] public fixed byte m_bPawnIsAlive[0x4];
        [FieldOffset(0x900)] public fixed byte m_iPawnHealth[0x4];
        [FieldOffset(0x904)] public fixed byte m_iPawnArmor[0x4];
        [FieldOffset(0x908)] public fixed byte m_bPawnHasDefuser[0x1];
        [FieldOffset(0x909)] public fixed byte m_bPawnHasHelmet[0x1];
        [FieldOffset(0x90A)] public fixed byte m_nPawnCharacterDefIndex[0x2];
        [FieldOffset(0x90C)] public fixed byte m_iPawnLifetimeStart[0x4];
        [FieldOffset(0x910)] public fixed byte m_iPawnLifetimeEnd[0x4];
        [FieldOffset(0x914)] public fixed byte m_iPawnBotDifficulty[0x4];
        [FieldOffset(0x918)] public fixed byte m_hOriginalControllerOfCurrentPawn[0x4];
        [FieldOffset(0x91C)] public fixed byte m_iScore[0x4];
        [FieldOffset(0x920)] public fixed byte m_iRoundScore[0x4];
        [FieldOffset(0x924)] public fixed byte m_iRoundsWon[0x4];
        [FieldOffset(0x928)] public fixed byte m_recentKillQueue[0x8];
        [FieldOffset(0x930)] public fixed byte m_nFirstKill[0x1];
        [FieldOffset(0x931)] public fixed byte m_nKillCount[0x1];
        [FieldOffset(0x932)] public fixed byte m_bMvpNoMusic[0x2];
        [FieldOffset(0x934)] public fixed byte m_eMvpReason[0x4];
        [FieldOffset(0x938)] public fixed byte m_iMusicKitID[0x4];
        [FieldOffset(0x93C)] public fixed byte m_iMusicKitMVPs[0x4];
        [FieldOffset(0x940)] public fixed byte m_iMVPs[0x4];
        [FieldOffset(0x944)] public fixed byte m_nUpdateCounter[0x4];
        [FieldOffset(0x948)] public fixed byte m_flSmoothedPing[0x8];
        [FieldOffset(0x950)] public fixed byte m_lastHeldVoteTimer[0x18];
        [FieldOffset(0x968)] public fixed byte m_bShowHints[0x4];
        [FieldOffset(0x96C)] public fixed byte m_iNextTimeCheck[0x4];
        [FieldOffset(0x970)] public fixed byte m_bJustDidTeamKill[0x1];
        [FieldOffset(0x971)] public fixed byte m_bPunishForTeamKill[0x1];
        [FieldOffset(0x972)] public fixed byte m_bGaveTeamDamageWarning[0x1];
        [FieldOffset(0x973)] public fixed byte m_bGaveTeamDamageWarningThisRound[0x5];
        [FieldOffset(0x978)] public fixed byte m_dblLastReceivedPacketPlatFloatTime[0x8];
        [FieldOffset(0x980)] public fixed byte m_LastTeamDamageWarningTime[0x4];
        [FieldOffset(0x984)] public fixed byte m_LastTimePlayerWasDisconnectedForPawnsRemove[0x4];
        [FieldOffset(0x988)] public fixed byte m_nSuspiciousHitCount[0x4];
        [FieldOffset(0x98C)] public fixed byte m_nNonSuspiciousHitStreak[0xAD];
        [FieldOffset(0xA39)] public fixed byte m_bFireBulletsSeedSynchronized[0x7F];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CPhysLength {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_offset[0x18];
        [FieldOffset(0x520)] public fixed byte m_vecAttach[0xC];
        [FieldOffset(0x52C)] public fixed byte m_addLength[0x4];
        [FieldOffset(0x530)] public fixed byte m_minLength[0x4];
        [FieldOffset(0x534)] public fixed byte m_totalLength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x560)]
    public unsafe struct CTeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_aPlayerControllers[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_aPlayers[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_iScore[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_szTeamname[0x84];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x758)]
    public unsafe struct CLogicNPCCounterAABB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x728];
        [FieldOffset(0x728)] public fixed byte m_vDistanceOuterMins[0xC];
        [FieldOffset(0x734)] public fixed byte m_vDistanceOuterMaxs[0xC];
        [FieldOffset(0x740)] public fixed byte m_vOuterMins[0xC];
        [FieldOffset(0x74C)] public fixed byte m_vOuterMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nNextIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x32F0)]
    public unsafe struct CChicken {
        [FieldOffset(0x0)] public fixed byte pad_0[0xCB0];
        [FieldOffset(0xCB0)] public fixed byte m_AttributeManager[0x438];
        [FieldOffset(0x10E8)] public fixed byte m_updateTimer[0x18];
        [FieldOffset(0x1100)] public fixed byte m_stuckAnchor[0x10];
        [FieldOffset(0x1110)] public fixed byte m_collisionStuckTimer[0x18];
        [FieldOffset(0x1128)] public fixed byte m_isOnGround[0x4];
        [FieldOffset(0x112C)] public fixed byte m_vFallVelocity[0xC];
        [FieldOffset(0x1138)] public fixed byte m_desiredActivity[0x4];
        [FieldOffset(0x113C)] public fixed byte m_currentActivity[0x4];
        [FieldOffset(0x1140)] public fixed byte m_activityTimer[0x18];
        [FieldOffset(0x1158)] public fixed byte m_turnRate[0x4];
        [FieldOffset(0x115C)] public fixed byte m_fleeFrom[0x4];
        [FieldOffset(0x1160)] public fixed byte m_moveRateThrottleTimer[0x18];
        [FieldOffset(0x1178)] public fixed byte m_startleTimer[0x18];
        [FieldOffset(0x1190)] public fixed byte m_vocalizeTimer[0x18];
        [FieldOffset(0x11A8)] public fixed byte m_leader[0x4];
        [FieldOffset(0x11AC)] public fixed byte m_owner[0x14];
        [FieldOffset(0x11C0)] public fixed byte m_reuseTimer[0x18];
        [FieldOffset(0x11D8)] public fixed byte m_jumpTimer[0x18];
        [FieldOffset(0x11F0)] public fixed byte m_flLastJumpTime[0x2010];
        [FieldOffset(0x3200)] public fixed byte m_repathTimer[0x98];
        [FieldOffset(0x3298)] public fixed byte m_vecPathGoal[0xC];
        [FieldOffset(0x32A4)] public fixed byte m_flActiveFollowStartTime[0x4];
        [FieldOffset(0x32A8)] public fixed byte m_followMinuteTimer[0x20];
        [FieldOffset(0x32C8)] public fixed byte m_BlockDirectionTimer[0x1A];
        [FieldOffset(0x32E2)] public fixed byte m_bSpawnDyingParticles[0xE];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD50)]
    public unsafe struct CPhysicsPropRespawnable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD10];
        [FieldOffset(0xD10)] public fixed byte m_vOriginalSpawnOrigin[0xC];
        [FieldOffset(0xD1C)] public fixed byte m_vOriginalSpawnAngles[0xC];
        [FieldOffset(0xD28)] public fixed byte m_vOriginalMins[0xC];
        [FieldOffset(0xD34)] public fixed byte m_vOriginalMaxs[0xC];
        [FieldOffset(0xD40)] public fixed byte m_flRespawnDuration[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x988)]
    public unsafe struct CEnvBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8F0];
        [FieldOffset(0x8F0)] public fixed byte m_active[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_spriteTexture[0x8];
        [FieldOffset(0x900)] public fixed byte m_iszStartEntity[0x8];
        [FieldOffset(0x908)] public fixed byte m_iszEndEntity[0x8];
        [FieldOffset(0x910)] public fixed byte m_life[0x4];
        [FieldOffset(0x914)] public fixed byte m_boltWidth[0x4];
        [FieldOffset(0x918)] public fixed byte m_noiseAmplitude[0x4];
        [FieldOffset(0x91C)] public fixed byte m_speed[0x4];
        [FieldOffset(0x920)] public fixed byte m_restrike[0x8];
        [FieldOffset(0x928)] public fixed byte m_iszSpriteName[0x8];
        [FieldOffset(0x930)] public fixed byte m_frameStart[0x4];
        [FieldOffset(0x934)] public fixed byte m_vEndPointWorld[0xC];
        [FieldOffset(0x940)] public fixed byte m_vEndPointRelative[0xC];
        [FieldOffset(0x94C)] public fixed byte m_radius[0x4];
        [FieldOffset(0x950)] public fixed byte m_TouchType[0x8];
        [FieldOffset(0x958)] public fixed byte m_iFilterName[0x8];
        [FieldOffset(0x960)] public fixed byte m_hFilter[0x8];
        [FieldOffset(0x968)] public fixed byte m_iszDecal[0x8];
        [FieldOffset(0x970)] public fixed byte m_OnTouchedByEntity[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CLightSpotEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CCSObservableElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_iszObservableModelEntity[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_hObservableModelEntity[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_hObservableModelEntity2[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_nTeamFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1280)]
    public unsafe struct CWeaponSawedoff {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D8)]
    public unsafe struct CTonemapTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_tonemapControllerName[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_hTonemapController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F8)]
    public unsafe struct CEnvShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_limitToEntity[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_Amplitude[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_Frequency[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_Duration[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_Radius[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_stopTime[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_nextShake[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_currentAmp[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_maxForce[0xC];
        [FieldOffset(0x4D8)] public fixed byte m_pShakeController[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_shakeCallback[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFE0)]
    public unsafe struct CCSPlayer_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x310];
        [FieldOffset(0x310)] public fixed byte m_AnimationState[0xE0];
        [FieldOffset(0x3F0)] public fixed byte m_bUsingGroundTopologyOffset[0x4];
        [FieldOffset(0x3F4)] public fixed byte m_flUsingGroundTopologyOffsetTransitionSmoothing[0x4];
        [FieldOffset(0x3F8)] public fixed byte m_vecLadderNormal[0xC];
        [FieldOffset(0x404)] public fixed byte m_nLadderSurfacePropIndex[0x4];
        [FieldOffset(0x408)] public fixed byte m_bDucked[0x4];
        [FieldOffset(0x40C)] public fixed byte m_flDuckAmount[0x4];
        [FieldOffset(0x410)] public fixed byte m_flDuckSpeed[0x4];
        [FieldOffset(0x414)] public fixed byte m_bDuckOverride[0x1];
        [FieldOffset(0x415)] public fixed byte m_bDesiresDuck[0x1];
        [FieldOffset(0x416)] public fixed byte m_bDucking[0x2];
        [FieldOffset(0x418)] public fixed byte m_flDuckRootOffset[0x4];
        [FieldOffset(0x41C)] public fixed byte m_flDuckViewOffset[0x4];
        [FieldOffset(0x420)] public fixed byte m_flLastDuckTime[0x4];
        [FieldOffset(0x424)] public fixed byte m_flBombPlantViewOffset[0xC];
        [FieldOffset(0x430)] public fixed byte m_vecLastPositionAtFullCrouchSpeed[0x8];
        [FieldOffset(0x438)] public fixed byte m_duckUntilOnGround[0x1];
        [FieldOffset(0x439)] public fixed byte m_bHasWalkMovedSinceLastJump[0x1];
        [FieldOffset(0x43A)] public fixed byte m_bInStuckTest[0x20E];
        [FieldOffset(0x648)] public fixed byte m_nTraceCount[0x4];
        [FieldOffset(0x64C)] public fixed byte m_StuckLast[0x4];
        [FieldOffset(0x650)] public fixed byte m_bSpeedCropped[0x4];
        [FieldOffset(0x654)] public fixed byte m_nOldWaterLevel[0x4];
        [FieldOffset(0x658)] public fixed byte m_flWaterEntryTime[0x4];
        [FieldOffset(0x65C)] public fixed byte m_vecForward[0xC];
        [FieldOffset(0x668)] public fixed byte m_vecLeft[0xC];
        [FieldOffset(0x674)] public fixed byte m_vecUp[0xC];
        [FieldOffset(0x680)] public fixed byte m_nGameCodeHasMovedPlayerAfterCommand[0x4];
        [FieldOffset(0x684)] public fixed byte m_bMadeFootstepNoise[0x4];
        [FieldOffset(0x688)] public fixed byte m_iFootsteps[0x4];
        [FieldOffset(0x68C)] public fixed byte m_fStashGrenadeParameterWhen[0x4];
        [FieldOffset(0x690)] public fixed byte m_bUseFrictionStashedSpeed[0x4];
        [FieldOffset(0x694)] public fixed byte m_flUseFrictionStashedSpeedUntilFrac[0x4];
        [FieldOffset(0x698)] public fixed byte m_flFrictionStashedSpeed[0x4];
        [FieldOffset(0x69C)] public fixed byte m_flStamina[0x4];
        [FieldOffset(0x6A0)] public fixed byte m_flHeightAtJumpStart[0x4];
        [FieldOffset(0x6A4)] public fixed byte m_flMaxJumpHeightThisJump[0x4];
        [FieldOffset(0x6A8)] public fixed byte m_flMaxJumpHeightLastJump[0x4];
        [FieldOffset(0x6AC)] public fixed byte m_flStaminaAtJumpStart[0x4];
        [FieldOffset(0x6B0)] public fixed byte m_flVelMulAtJumpStart[0x4];
        [FieldOffset(0x6B4)] public fixed byte m_flAccumulatedJumpError[0x4];
        [FieldOffset(0x6B8)] public fixed byte m_LegacyJump[0x18];
        [FieldOffset(0x6D0)] public fixed byte m_ModernJump[0x38];
        [FieldOffset(0x708)] public fixed byte m_nLastJumpTick[0x4];
        [FieldOffset(0x70C)] public fixed byte m_flLastJumpFrac[0x4];
        [FieldOffset(0x710)] public fixed byte m_flLastJumpVelocityZ[0x4];
        [FieldOffset(0x714)] public fixed byte m_bJumpApexPending[0x4];
        [FieldOffset(0x718)] public fixed byte m_flTicksSinceLastSurfingDetected[0x90];
        [FieldOffset(0x7A8)] public fixed byte m_vecWalkWishVel[0x828];
        [FieldOffset(0xFD0)] public fixed byte m_bHasEverProcessedCommand[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SellbackPurchaseEntry_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_unDefIdx[0x4];
        [FieldOffset(0x34)] public fixed byte m_nCost[0x4];
        [FieldOffset(0x38)] public fixed byte m_nPrevArmor[0x4];
        [FieldOffset(0x3C)] public fixed byte m_bPrevHelmet[0x4];
        [FieldOffset(0x40)] public fixed byte m_hItem[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CTestPulseIO__EntityNameStringArgs_t {
        [FieldOffset(0x0)] public fixed byte nameA[0x8];
        [FieldOffset(0x8)] public fixed byte strValueB[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CFuncMoverRouter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nMoverIndex[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_bRouteToAllMovers[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_hPathMover[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszPathMoverName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D0)]
    public unsafe struct CTriggerCallback {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct CSoundOpvarSetAutoRoomEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x640];
        [FieldOffset(0x640)] public fixed byte m_traceResults[0x18];
        [FieldOffset(0x658)] public fixed byte m_doorwayPairs[0x18];
        [FieldOffset(0x670)] public fixed byte m_flSize[0x4];
        [FieldOffset(0x674)] public fixed byte m_flHeightTolerance[0x4];
        [FieldOffset(0x678)] public fixed byte m_flSizeSqr[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_Outflow_ListenForEntityOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_OnFired[0x48];
        [FieldOffset(0x120)] public fixed byte m_strEntityOutput[0x8];
        [FieldOffset(0x128)] public fixed byte m_bListenUntilCanceled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x928)]
    public unsafe struct CPushable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x928];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CRotatorTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CPhysicsEntitySolver {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_hMovingEntity[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hPhysicsBlocker[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_separationDuration[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_cancelTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CLogicCollisionPair {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nameAttach1[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_nameAttach2[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_includeHierarchy[0x1];
        [FieldOffset(0x4B9)] public fixed byte m_supportMultipleEntitiesWithSameName[0x1];
        [FieldOffset(0x4BA)] public fixed byte m_disabled[0x1];
        [FieldOffset(0x4BB)] public fixed byte m_succeeded[0x1];
        [FieldOffset(0x4BC)] public fixed byte m_allowMissing[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x578)]
    public unsafe struct CTestEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iLoop[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_iBeam[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_pBeam[0x60];
        [FieldOffset(0x510)] public fixed byte m_flBeamTime[0x60];
        [FieldOffset(0x570)] public fixed byte m_flStartTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_scriptedSequence[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF30)]
    public unsafe struct CPropDoorRotating {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE90];
        [FieldOffset(0xE90)] public fixed byte m_vecAxis[0xC];
        [FieldOffset(0xE9C)] public fixed byte m_flDistance[0x4];
        [FieldOffset(0xEA0)] public fixed byte m_eSpawnPosition[0x4];
        [FieldOffset(0xEA4)] public fixed byte m_eOpenDirection[0x4];
        [FieldOffset(0xEA8)] public fixed byte m_eCurrentOpenDirection[0x4];
        [FieldOffset(0xEAC)] public fixed byte m_eDefaultCheckDirection[0x4];
        [FieldOffset(0xEB0)] public fixed byte m_flAjarAngle[0x4];
        [FieldOffset(0xEB4)] public fixed byte m_angRotationAjarDeprecated[0xC];
        [FieldOffset(0xEC0)] public fixed byte m_angRotationClosed[0xC];
        [FieldOffset(0xECC)] public fixed byte m_angRotationOpenForward[0xC];
        [FieldOffset(0xED8)] public fixed byte m_angRotationOpenBack[0xC];
        [FieldOffset(0xEE4)] public fixed byte m_angGoal[0xC];
        [FieldOffset(0xEF0)] public fixed byte m_vecForwardBoundsMin[0xC];
        [FieldOffset(0xEFC)] public fixed byte m_vecForwardBoundsMax[0xC];
        [FieldOffset(0xF08)] public fixed byte m_vecBackBoundsMin[0xC];
        [FieldOffset(0xF14)] public fixed byte m_vecBackBoundsMax[0xC];
        [FieldOffset(0xF20)] public fixed byte m_bAjarDoorShouldntAlwaysOpen[0x4];
        [FieldOffset(0xF24)] public fixed byte m_hEntityBlocker[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xDF0)]
    public unsafe struct CEnvParticleGlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0xDD8];
        [FieldOffset(0xDD8)] public fixed byte m_flAlphaScale[0x4];
        [FieldOffset(0xDDC)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0xDE0)] public fixed byte m_flSelfIllumScale[0x4];
        [FieldOffset(0xDE4)] public fixed byte m_ColorTint[0x4];
        [FieldOffset(0xDE8)] public fixed byte m_hTextureOverride[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CMathRemap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flInMin[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flInMax[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flOut1[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flOut2[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flOldInValue[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_OutValue[0x20];
        [FieldOffset(0x4E0)] public fixed byte m_OnRoseAboveMin[0x18];
        [FieldOffset(0x4F8)] public fixed byte m_OnRoseAboveMax[0x18];
        [FieldOffset(0x510)] public fixed byte m_OnFellBelowMin[0x18];
        [FieldOffset(0x528)] public fixed byte m_OnFellBelowMax[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CSkyCameraVolumeTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nSkyboxScale[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_hSkyMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CSoundOpvarSetOBBWindEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x550];
        [FieldOffset(0x550)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x55C)] public fixed byte m_vMaxs[0xC];
        [FieldOffset(0x568)] public fixed byte m_vDistanceMins[0xC];
        [FieldOffset(0x574)] public fixed byte m_vDistanceMaxs[0xC];
        [FieldOffset(0x580)] public fixed byte m_flWindMin[0x4];
        [FieldOffset(0x584)] public fixed byte m_flWindMax[0x4];
        [FieldOffset(0x588)] public fixed byte m_flWindMapMin[0x4];
        [FieldOffset(0x58C)] public fixed byte m_flWindMapMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct PhysicsRagdollPose_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_RelativeTransforms[0x18];
        [FieldOffset(0x20)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x24)] public fixed byte m_bSetFromDebugHistory[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CPulseCell_ApplyDynamicAttributeBase__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_hEntity[0x8];
        [FieldOffset(0x8)] public fixed byte m_szAttributeKey[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPropDataComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flDmgModBullet[0x4];
        [FieldOffset(0x14)] public fixed byte m_flDmgModClub[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDmgModExplosive[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDmgModFire[0x4];
        [FieldOffset(0x20)] public fixed byte m_iszPhysicsDamageTableName[0x8];
        [FieldOffset(0x28)] public fixed byte m_iszBasePropData[0x8];
        [FieldOffset(0x30)] public fixed byte m_nInteractions[0x4];
        [FieldOffset(0x34)] public fixed byte m_bSpawnMotionDisabled[0x4];
        [FieldOffset(0x38)] public fixed byte m_nDisableTakePhysicsDamageSpawnFlag[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nMotionDisabledSpawnFlag[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9F0)]
    public unsafe struct CScriptTriggerOnce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_vExtent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CLightOrthoEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoInstructorHintHostageRescueZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nCurrentCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D8)]
    public unsafe struct CTriggerTeleport {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_iLandmark[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_bUseLandmarkAngles[0x1];
        [FieldOffset(0x9D1)] public fixed byte m_bMirrorPlayer[0x1];
        [FieldOffset(0x9D2)] public fixed byte m_bCheckDestIfClearForPlayer[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CFuncWall {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_nState[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct CBtActionAim {
        [FieldOffset(0x0)] public fixed byte pad_0[0x68];
        [FieldOffset(0x68)] public fixed byte m_szSensorInputKey[0x18];
        [FieldOffset(0x80)] public fixed byte m_szAimReadyKey[0x8];
        [FieldOffset(0x88)] public fixed byte m_flZoomCooldownTimestamp[0x4];
        [FieldOffset(0x8C)] public fixed byte m_bDoneAiming[0x4];
        [FieldOffset(0x90)] public fixed byte m_flLerpStartTime[0x4];
        [FieldOffset(0x94)] public fixed byte m_flNextLookTargetLerpTime[0x4];
        [FieldOffset(0x98)] public fixed byte m_flPenaltyReductionRatio[0x4];
        [FieldOffset(0x9C)] public fixed byte m_NextLookTarget[0xC];
        [FieldOffset(0xA8)] public fixed byte m_AimTimer[0x18];
        [FieldOffset(0xC0)] public fixed byte m_SniperHoldTimer[0x18];
        [FieldOffset(0xD8)] public fixed byte m_FocusIntervalTimer[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bAcquired[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamPreviewCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nVariant[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_nRandom[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nOrdinal[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_sWeaponName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_xuid[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_agentItem[0x3E8];
        [FieldOffset(0x8B0)] public fixed byte m_glovesItem[0x3E8];
        [FieldOffset(0xC98)] public fixed byte m_weaponItem[0x3E8];
        [FieldOffset(0x1080)] public fixed byte m_petItem[0x3E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CGameRulesProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoLadderDismount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CMessage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszMessage[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_MessageVolume[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_MessageAttenuation[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_Radius[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_sNoise[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_OnShowMessage[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CPointVelocitySensor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hTargetEntity[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_vecAxis[0xC];
        [FieldOffset(0x4B8)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_fPrevVelocity[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flAvgInterval[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_Velocity[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x860)]
    public unsafe struct CCS2PawnGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5C0];
        [FieldOffset(0x5C0)] public fixed byte m_bIsDefusing[0x18];
        [FieldOffset(0x5D8)] public fixed byte m_moveType[0x18];
        [FieldOffset(0x5F0)] public fixed byte m_moveDirectionID[0x18];
        [FieldOffset(0x608)] public fixed byte m_flMoveSpeedX[0x18];
        [FieldOffset(0x620)] public fixed byte m_flMoveSpeedY[0x18];
        [FieldOffset(0x638)] public fixed byte m_flMoveSpeedHorizontal[0x18];
        [FieldOffset(0x650)] public fixed byte m_flPreviousMoveSpeedHorizontal[0x18];
        [FieldOffset(0x668)] public fixed byte m_flCrouchAmount[0x18];
        [FieldOffset(0x680)] public fixed byte m_bIsWalking[0x18];
        [FieldOffset(0x698)] public fixed byte m_flWeaponDropAmount[0x18];
        [FieldOffset(0x6B0)] public fixed byte m_groundAction[0x18];
        [FieldOffset(0x6C8)] public fixed byte m_groundActionDirectionID[0x18];
        [FieldOffset(0x6E0)] public fixed byte m_flGroundTurnAngleOrVelocity[0x18];
        [FieldOffset(0x6F8)] public fixed byte m_flLadderCycle[0x18];
        [FieldOffset(0x710)] public fixed byte m_flLadderYaw[0x18];
        [FieldOffset(0x728)] public fixed byte m_flLadderYawBackwards[0x18];
        [FieldOffset(0x740)] public fixed byte m_airAction[0x18];
        [FieldOffset(0x758)] public fixed byte m_flAirHeightAboveGround[0x18];
        [FieldOffset(0x770)] public fixed byte m_leftFootTarget[0x18];
        [FieldOffset(0x788)] public fixed byte m_rightFootTarget[0x18];
        [FieldOffset(0x7A0)] public fixed byte m_flFlashedAmount[0x18];
        [FieldOffset(0x7B8)] public fixed byte m_flAimPitchAngle[0x18];
        [FieldOffset(0x7D0)] public fixed byte m_flAimYawAngle[0x18];
        [FieldOffset(0x7E8)] public fixed byte m_flinchHead[0x18];
        [FieldOffset(0x800)] public fixed byte m_flinchHeadRestart[0x18];
        [FieldOffset(0x818)] public fixed byte m_flinchBody[0x18];
        [FieldOffset(0x830)] public fixed byte m_flinchBodyRestart[0x18];
        [FieldOffset(0x848)] public fixed byte m_flinchIsOnFire[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct EngineCountdownTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_duration[0x4];
        [FieldOffset(0xC)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0x10)] public fixed byte m_timescale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9F0)]
    public unsafe struct CScriptTriggerMultiple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_vExtent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2DA0)]
    public unsafe struct CHostage {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB38];
        [FieldOffset(0xB38)] public fixed byte m_OnHostageBeginGrab[0x18];
        [FieldOffset(0xB50)] public fixed byte m_OnFirstPickedUp[0x18];
        [FieldOffset(0xB68)] public fixed byte m_OnDroppedNotRescued[0x18];
        [FieldOffset(0xB80)] public fixed byte m_OnRescued[0x18];
        [FieldOffset(0xB98)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0xBB0)] public fixed byte m_nSpotRules[0x4];
        [FieldOffset(0xBB4)] public fixed byte m_uiHostageSpawnExclusionGroupMask[0x4];
        [FieldOffset(0xBB8)] public fixed byte m_nHostageSpawnRandomFactor[0x4];
        [FieldOffset(0xBBC)] public fixed byte m_bRemove[0x4];
        [FieldOffset(0xBC0)] public fixed byte m_vel[0xC];
        [FieldOffset(0xBCC)] public fixed byte m_isRescued[0x1];
        [FieldOffset(0xBCD)] public fixed byte m_jumpedThisFrame[0x3];
        [FieldOffset(0xBD0)] public fixed byte m_nHostageState[0x4];
        [FieldOffset(0xBD4)] public fixed byte m_leader[0x4];
        [FieldOffset(0xBD8)] public fixed byte m_lastLeader[0x8];
        [FieldOffset(0xBE0)] public fixed byte m_reuseTimer[0x18];
        [FieldOffset(0xBF8)] public fixed byte m_hasBeenUsed[0x4];
        [FieldOffset(0xBFC)] public fixed byte m_accel[0xC];
        [FieldOffset(0xC08)] public fixed byte m_isRunning[0x1];
        [FieldOffset(0xC09)] public fixed byte m_isCrouching[0x7];
        [FieldOffset(0xC10)] public fixed byte m_jumpTimer[0x18];
        [FieldOffset(0xC28)] public fixed byte m_isWaitingForLeader[0x2010];
        [FieldOffset(0x2C38)] public fixed byte m_repathTimer[0x18];
        [FieldOffset(0x2C50)] public fixed byte m_inhibitDoorTimer[0x90];
        [FieldOffset(0x2CE0)] public fixed byte m_inhibitObstacleAvoidanceTimer[0x20];
        [FieldOffset(0x2D00)] public fixed byte m_wiggleTimer[0x1C];
        [FieldOffset(0x2D1C)] public fixed byte m_isAdjusted[0x1];
        [FieldOffset(0x2D1D)] public fixed byte m_bHandsHaveBeenCut[0x3];
        [FieldOffset(0x2D20)] public fixed byte m_hHostageGrabber[0x4];
        [FieldOffset(0x2D24)] public fixed byte m_fLastGrabTime[0x4];
        [FieldOffset(0x2D28)] public fixed byte m_flGrabStartTime[0x4];
        [FieldOffset(0x2D2C)] public fixed byte m_vecPositionWhenStartedDroppingToGround[0xC];
        [FieldOffset(0x2D38)] public fixed byte m_vecGrabbedPos[0xC];
        [FieldOffset(0x2D44)] public fixed byte m_flRescueStartTime[0x4];
        [FieldOffset(0x2D48)] public fixed byte m_flGrabSuccessTime[0x4];
        [FieldOffset(0x2D4C)] public fixed byte m_flDropStartTime[0x4];
        [FieldOffset(0x2D50)] public fixed byte m_nApproachRewardPayouts[0x4];
        [FieldOffset(0x2D54)] public fixed byte m_nPickupEventCount[0x4];
        [FieldOffset(0x2D58)] public fixed byte m_vecSpawnGroundPos[0x38];
        [FieldOffset(0x2D90)] public fixed byte m_vecHostageResetPosition[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CEnvSpark {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_nMagnitude[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nTrailLength[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_nType[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_OnSpark[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CCSPlayerController_DamageServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_nSendUpdate[0x8];
        [FieldOffset(0x48)] public fixed byte m_DamageList[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x680];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CBaseModelEntity__OnDamageLevelChangedArgs_t {
        [FieldOffset(0x0)] public fixed byte nHitGroup[0x4];
        [FieldOffset(0x4)] public fixed byte nDamageLevel[0x4];
        [FieldOffset(0x8)] public fixed byte nDamageLevelsRemaining[0x4];
        [FieldOffset(0xC)] public fixed byte nPrevDamageLevel[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CFilterLOS {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CPointOrient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszSpawnTargetName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_nGoalDirection[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_nConstraint[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flMaxTurnRate[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flLastGameTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct sky3dparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte scale[0x4];
        [FieldOffset(0xC)] public fixed byte origin[0xC];
        [FieldOffset(0x18)] public fixed byte bClip3DSkyBoxNearToWorldFar[0x4];
        [FieldOffset(0x1C)] public fixed byte flClip3DSkyBoxNearToWorldFarOffset[0x4];
        [FieldOffset(0x20)] public fixed byte fog[0x68];
        [FieldOffset(0x88)] public fixed byte m_nWorldGroupID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponP250 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CDestructiblePartsComponent {
        [FieldOffset(0x0)] public fixed byte __m_pChainEntity[0x48];
        [FieldOffset(0x48)] public fixed byte m_vecDamageTakenByHitGroup[0x18];
        [FieldOffset(0x60)] public fixed byte m_hOwner[0x8];
        [FieldOffset(0x68)] public fixed byte m_pAnimGraphDestructibleGraphController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9F8)]
    public unsafe struct CChangeLevel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_sMapName[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_sLandmarkName[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_OnChangeLevel[0x18];
        [FieldOffset(0x9F0)] public fixed byte m_bTouched[0x1];
        [FieldOffset(0x9F1)] public fixed byte m_bNoTouch[0x1];
        [FieldOffset(0x9F2)] public fixed byte m_bNewChapter[0x1];
        [FieldOffset(0x9F3)] public fixed byte m_bOnChangeLevelFired[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D0)]
    public unsafe struct CBaseButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8D0];
        [FieldOffset(0x8D0)] public fixed byte m_angMoveEntitySpace[0xC];
        [FieldOffset(0x8DC)] public fixed byte m_fStayPushed[0x1];
        [FieldOffset(0x8DD)] public fixed byte m_fRotating[0x3];
        [FieldOffset(0x8E0)] public fixed byte m_ls[0x20];
        [FieldOffset(0x900)] public fixed byte m_sUseSound[0x8];
        [FieldOffset(0x908)] public fixed byte m_sLockedSound[0x8];
        [FieldOffset(0x910)] public fixed byte m_sUnlockedSound[0x8];
        [FieldOffset(0x918)] public fixed byte m_sOverrideAnticipationName[0x8];
        [FieldOffset(0x920)] public fixed byte m_bLocked[0x1];
        [FieldOffset(0x921)] public fixed byte m_bDisabled[0x3];
        [FieldOffset(0x924)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x928)] public fixed byte m_flUseLockedTime[0x4];
        [FieldOffset(0x92C)] public fixed byte m_bSolidBsp[0x4];
        [FieldOffset(0x930)] public fixed byte m_OnDamaged[0x18];
        [FieldOffset(0x948)] public fixed byte m_OnPressed[0x18];
        [FieldOffset(0x960)] public fixed byte m_OnUseLocked[0x18];
        [FieldOffset(0x978)] public fixed byte m_OnIn[0x18];
        [FieldOffset(0x990)] public fixed byte m_OnOut[0x18];
        [FieldOffset(0x9A8)] public fixed byte m_nState[0x4];
        [FieldOffset(0x9AC)] public fixed byte m_hConstraint[0x4];
        [FieldOffset(0x9B0)] public fixed byte m_hConstraintParent[0x4];
        [FieldOffset(0x9B4)] public fixed byte m_bForceNpcExclude[0x4];
        [FieldOffset(0x9B8)] public fixed byte m_sGlowEntity[0x8];
        [FieldOffset(0x9C0)] public fixed byte m_glowEntity[0x4];
        [FieldOffset(0x9C4)] public fixed byte m_usable[0x4];
        [FieldOffset(0x9C8)] public fixed byte m_szDisplayText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_SoundEventStart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Type[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_DebugLog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1290)]
    public unsafe struct CItem_Healthshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1290];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAD0)]
    public unsafe struct CBaseGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA48];
        [FieldOffset(0xA48)] public fixed byte m_bDamageDetonating[0x8];
        [FieldOffset(0xA50)] public fixed byte m_OnPlayerPickup[0x18];
        [FieldOffset(0xA68)] public fixed byte m_OnExplode[0x18];
        [FieldOffset(0xA80)] public fixed byte m_bHasWarnedAI[0x1];
        [FieldOffset(0xA81)] public fixed byte m_bIsSmokeGrenade[0x1];
        [FieldOffset(0xA82)] public fixed byte m_bIsLive[0x2];
        [FieldOffset(0xA84)] public fixed byte m_DmgRadius[0x4];
        [FieldOffset(0xA88)] public fixed byte m_flDetonateTime[0x4];
        [FieldOffset(0xA8C)] public fixed byte m_flWarnAITime[0x4];
        [FieldOffset(0xA90)] public fixed byte m_flDamage[0x8];
        [FieldOffset(0xA98)] public fixed byte m_iszBounceSound[0x8];
        [FieldOffset(0xAA0)] public fixed byte m_ExplosionSound[0x8];
        [FieldOffset(0xAA8)] public fixed byte m_hThrower[0x18];
        [FieldOffset(0xAC0)] public fixed byte m_flNextAttack[0x4];
        [FieldOffset(0xAC4)] public fixed byte m_hOriginalThrower[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBE8)]
    public unsafe struct CColorCorrectionVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_MaxWeight[0x4];
        [FieldOffset(0x9CC)] public fixed byte m_FadeDuration[0x4];
        [FieldOffset(0x9D0)] public fixed byte m_Weight[0x4];
        [FieldOffset(0x9D4)] public fixed byte m_lookupFilename[0x200];
        [FieldOffset(0xBD4)] public fixed byte m_LastEnterWeight[0x4];
        [FieldOffset(0xBD8)] public fixed byte m_LastEnterTime[0x4];
        [FieldOffset(0xBDC)] public fixed byte m_LastExitWeight[0x4];
        [FieldOffset(0xBE0)] public fixed byte m_LastExitTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x460)]
    public unsafe struct CCSPlayerController_ActionTrackingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_perRoundStats[0x88];
        [FieldOffset(0xC8)] public fixed byte m_matchStats[0xC0];
        [FieldOffset(0x188)] public fixed byte m_iNumRoundKills[0x4];
        [FieldOffset(0x18C)] public fixed byte m_iNumRoundKillsHeadshots[0x4];
        [FieldOffset(0x190)] public fixed byte m_flTotalRoundDamageDealt[0x2D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB30)]
    public unsafe struct CBodyComponentBaseAnimGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_animationController[0x650];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseYieldingInflow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_BaseFlow_OnAfterCancel[0x48];
        [FieldOffset(0x90)] public fixed byte m_BaseFlow_WhileActive[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseNodeDynamicOutflows_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x878)]
    public unsafe struct CFogVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_fogName[0x8];
        [FieldOffset(0x858)] public fixed byte m_postProcessName[0x8];
        [FieldOffset(0x860)] public fixed byte m_colorCorrectionName[0x10];
        [FieldOffset(0x870)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x871)] public fixed byte m_bInFogVolumesList[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x918)]
    public unsafe struct CFuncRotating {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_OnStopped[0x18];
        [FieldOffset(0x868)] public fixed byte m_OnStarted[0x18];
        [FieldOffset(0x880)] public fixed byte m_OnReachedStart[0x18];
        [FieldOffset(0x898)] public fixed byte m_localRotationVector[0xC];
        [FieldOffset(0x8A4)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_flFanFriction[0x4];
        [FieldOffset(0x8AC)] public fixed byte m_flAttenuation[0x4];
        [FieldOffset(0x8B0)] public fixed byte m_flVolume[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_flTargetSpeed[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_flMaxSpeed[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_flBlockDamage[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_NoiseRunning[0x8];
        [FieldOffset(0x8C8)] public fixed byte m_bReversed[0x1];
        [FieldOffset(0x8C9)] public fixed byte m_bAccelDecel[0x17];
        [FieldOffset(0x8E0)] public fixed byte m_prevLocalAngles[0xC];
        [FieldOffset(0x8EC)] public fixed byte m_angStart[0xC];
        [FieldOffset(0x8F8)] public fixed byte m_bStopAtStartPos[0x4];
        [FieldOffset(0x8FC)] public fixed byte m_vecClientOrigin[0xC];
        [FieldOffset(0x908)] public fixed byte m_vecClientAngles[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CTimerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnTimer[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnTimerHigh[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_OnTimerLow[0x18];
        [FieldOffset(0x4F0)] public fixed byte m_iDisabled[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_flInitialDelay[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_flRefireTime[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_bUpDownState[0x4];
        [FieldOffset(0x500)] public fixed byte m_iUseRandomTime[0x4];
        [FieldOffset(0x504)] public fixed byte m_bPauseAfterFiring[0x4];
        [FieldOffset(0x508)] public fixed byte m_flLowerRandomBound[0x4];
        [FieldOffset(0x50C)] public fixed byte m_flUpperRandomBound[0x4];
        [FieldOffset(0x510)] public fixed byte m_flRemainingTime[0x4];
        [FieldOffset(0x514)] public fixed byte m_bPaused[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct CBtActionMoveTo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_szDestinationInputKey[0x8];
        [FieldOffset(0x68)] public fixed byte m_szHidingSpotInputKey[0x8];
        [FieldOffset(0x70)] public fixed byte m_szThreatInputKey[0x8];
        [FieldOffset(0x78)] public fixed byte m_vecDestination[0xC];
        [FieldOffset(0x84)] public fixed byte m_bAutoLookAdjust[0x1];
        [FieldOffset(0x85)] public fixed byte m_bComputePath[0x3];
        [FieldOffset(0x88)] public fixed byte m_flDamagingAreasPenaltyCost[0x8];
        [FieldOffset(0x90)] public fixed byte m_CheckApproximateCornersTimer[0x18];
        [FieldOffset(0xA8)] public fixed byte m_CheckHighPriorityItem[0x18];
        [FieldOffset(0xC0)] public fixed byte m_RepathTimer[0x18];
        [FieldOffset(0xD8)] public fixed byte m_flArrivalEpsilon[0x4];
        [FieldOffset(0xDC)] public fixed byte m_flAdditionalArrivalEpsilon2D[0x4];
        [FieldOffset(0xE0)] public fixed byte m_flHidingSpotCheckDistanceThreshold[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flNearestAreaDistanceThreshold[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct CPlayer_MovementServices_Humanoid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x258];
        [FieldOffset(0x258)] public fixed byte m_flStepSoundTime[0x4];
        [FieldOffset(0x25C)] public fixed byte m_flFallVelocity[0x4];
        [FieldOffset(0x260)] public fixed byte m_groundNormal[0xC];
        [FieldOffset(0x26C)] public fixed byte m_flSurfaceFriction[0x4];
        [FieldOffset(0x270)] public fixed byte m_surfaceProps[0x10];
        [FieldOffset(0x280)] public fixed byte m_nStepside[0x4];
        [FieldOffset(0x284)] public fixed byte m_vecSmoothedVelocity[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_IsRequirementValid__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bIsValid[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponG3SG1 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E0)]
    public unsafe struct CTriggerOnce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CSMatchStats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x68];
        [FieldOffset(0x68)] public fixed byte m_iEnemy5Ks[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iEnemy4Ks[0x4];
        [FieldOffset(0x70)] public fixed byte m_iEnemy3Ks[0x4];
        [FieldOffset(0x74)] public fixed byte m_iEnemyKnifeKills[0x4];
        [FieldOffset(0x78)] public fixed byte m_iEnemyTaserKills[0x4];
        [FieldOffset(0x7C)] public fixed byte m_iEnemy2Ks[0x4];
        [FieldOffset(0x80)] public fixed byte m_iUtility_Count[0x4];
        [FieldOffset(0x84)] public fixed byte m_iUtility_Successes[0x4];
        [FieldOffset(0x88)] public fixed byte m_iUtility_Enemies[0x4];
        [FieldOffset(0x8C)] public fixed byte m_iFlash_Count[0x4];
        [FieldOffset(0x90)] public fixed byte m_iFlash_Successes[0x4];
        [FieldOffset(0x94)] public fixed byte m_flHealthPointsRemovedTotal[0x4];
        [FieldOffset(0x98)] public fixed byte m_flHealthPointsDealtTotal[0x4];
        [FieldOffset(0x9C)] public fixed byte m_nShotsFiredTotal[0x4];
        [FieldOffset(0xA0)] public fixed byte m_nShotsOnTargetTotal[0x4];
        [FieldOffset(0xA4)] public fixed byte m_i1v1Count[0x4];
        [FieldOffset(0xA8)] public fixed byte m_i1v1Wins[0x4];
        [FieldOffset(0xAC)] public fixed byte m_i1v2Count[0x4];
        [FieldOffset(0xB0)] public fixed byte m_i1v2Wins[0x4];
        [FieldOffset(0xB4)] public fixed byte m_iEntryCount[0x4];
        [FieldOffset(0xB8)] public fixed byte m_iEntryWins[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EntityRenderAttribute_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_ID[0x4];
        [FieldOffset(0x34)] public fixed byte m_Values[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Inflow_ObservableVariableListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_nBlackboardReference[0x2];
        [FieldOffset(0x82)] public fixed byte m_bSelfReference[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x890)]
    public unsafe struct CFuncMonitor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x870];
        [FieldOffset(0x870)] public fixed byte m_targetCamera[0x8];
        [FieldOffset(0x878)] public fixed byte m_nResolutionEnum[0x4];
        [FieldOffset(0x87C)] public fixed byte m_bRenderShadows[0x1];
        [FieldOffset(0x87D)] public fixed byte m_bUseUniqueColorTarget[0x3];
        [FieldOffset(0x880)] public fixed byte m_brushModelName[0x8];
        [FieldOffset(0x888)] public fixed byte m_hTargetCamera[0x4];
        [FieldOffset(0x88C)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x88D)] public fixed byte m_bDraw3DSkybox[0x1];
        [FieldOffset(0x88E)] public fixed byte m_bStartEnabled[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CInfoVisibilityBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4AC];
        [FieldOffset(0x4AC)] public fixed byte m_nMode[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_vBoxSize[0xC];
        [FieldOffset(0x4BC)] public fixed byte m_bEnabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8F8)]
    public unsafe struct CGunTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8D0];
        [FieldOffset(0x8D0)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x8D4)] public fixed byte m_on[0x4];
        [FieldOffset(0x8D8)] public fixed byte m_hTargetEnt[0x8];
        [FieldOffset(0x8E0)] public fixed byte m_OnDeath[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x580)]
    public unsafe struct CSoundEventConeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
        [FieldOffset(0x568)] public fixed byte m_flEmitterAngle[0x4];
        [FieldOffset(0x56C)] public fixed byte m_flSweetSpotAngle[0x4];
        [FieldOffset(0x570)] public fixed byte m_flAttenMin[0x4];
        [FieldOffset(0x574)] public fixed byte m_flAttenMax[0x4];
        [FieldOffset(0x578)] public fixed byte m_iszParameterName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A8)]
    public unsafe struct CSoundOpvarSetOBBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB80)]
    public unsafe struct CDecoyProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB58];
        [FieldOffset(0xB58)] public fixed byte m_nDecoyShotTick[0x4];
        [FieldOffset(0xB5C)] public fixed byte m_shotsRemaining[0x4];
        [FieldOffset(0xB60)] public fixed byte m_fExpireTime[0x10];
        [FieldOffset(0xB70)] public fixed byte m_decoyWeaponDefIndex[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CPrecipitationBlocker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x670)]
    public unsafe struct CSoundOpvarSetPathCornerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x658];
        [FieldOffset(0x658)] public fixed byte m_bUseParentedPath[0x4];
        [FieldOffset(0x65C)] public fixed byte m_flDistMinSqr[0x4];
        [FieldOffset(0x660)] public fixed byte m_flDistMaxSqr[0x8];
        [FieldOffset(0x668)] public fixed byte m_iszPathCornerEntityName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CPointClientCommand {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_RushIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_ApplyParent__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_hParentEntity[0x4];
        [FieldOffset(0x4)] public fixed byte m_hChildEntity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E8)]
    public unsafe struct CHostageRescueZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CWorld {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5B0)]
    public unsafe struct CPathMoverEntitySpawner {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_eTemplateChoiceStrategy[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_szSpawnTemplates[0x20];
        [FieldOffset(0x4D0)] public fixed byte m_szSpawnTemplateParams[0x10];
        [FieldOffset(0x4E0)] public fixed byte m_szSpawnTemplateCount[0x10];
        [FieldOffset(0x4F0)] public fixed byte m_nSpawnIndex[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_hPathMover[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_flSpawnFrequencySeconds[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_flSpawnFrequencyDistToNearestMover[0x4];
        [FieldOffset(0x500)] public fixed byte m_mapSpawnedMoverTemplates[0x20];
        [FieldOffset(0x520)] public fixed byte m_nMaxActive[0x4];
        [FieldOffset(0x524)] public fixed byte m_nSpawnNum[0x4];
        [FieldOffset(0x528)] public fixed byte m_flLastSpawnTime[0x4];
        [FieldOffset(0x52C)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x52D)] public fixed byte m_bDestroyMoverOnArrivedAtEnd[0x3];
        [FieldOffset(0x530)] public fixed byte m_vecQueuedRemovals[0x18];
        [FieldOffset(0x548)] public fixed byte m_OnTemplateSpawned[0x18];
        [FieldOffset(0x560)] public fixed byte m_OnTemplateGroupSpawned[0x18];
        [FieldOffset(0x578)] public fixed byte m_iszPathMoverName[0x8];
        [FieldOffset(0x580)] public fixed byte m_bPrepopulateOnSpawn[0x8];
        [FieldOffset(0x588)] public fixed byte m_iszPathNodeStartName[0x14];
        [FieldOffset(0x59C)] public fixed byte m_vMoverSpawnPos[0xC];
        [FieldOffset(0x5A8)] public fixed byte m_bRunningDebugThink[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct CModelState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
        [FieldOffset(0xA0)] public fixed byte m_hModel[0x8];
        [FieldOffset(0xA8)] public fixed byte m_ModelName[0x38];
        [FieldOffset(0xE0)] public fixed byte m_pVPhysicsAggregate[0x8];
        [FieldOffset(0xE8)] public fixed byte m_flRootBoneOffset_x[0x4];
        [FieldOffset(0xEC)] public fixed byte m_flRootBoneOffset_y[0x4];
        [FieldOffset(0xF0)] public fixed byte m_flRootBoneOffset_z[0x4];
        [FieldOffset(0xF4)] public fixed byte m_nRootBoneOffsetResetSerialNumber[0x1];
        [FieldOffset(0xF5)] public fixed byte m_bClientClothCreationSuppressed[0xEB];
        [FieldOffset(0x1E0)] public fixed byte m_nAnimStateNoInterpSerialNumber[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_MeshGroupMask[0x50];
        [FieldOffset(0x238)] public fixed byte m_nBodyGroupChoices[0x4A];
        [FieldOffset(0x282)] public fixed byte m_nIdealMotionType[0x1];
        [FieldOffset(0x283)] public fixed byte m_nForceLOD[0x1];
        [FieldOffset(0x284)] public fixed byte m_nClothUpdateFlags[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CBaseModelEntity__BodyGroupRequest_t {
        [FieldOffset(0x0)] public fixed byte m_uRequestID[0x4];
        [FieldOffset(0x4)] public fixed byte m_nGroupName[0x4];
        [FieldOffset(0x8)] public fixed byte m_sChoiceName[0x8];
        [FieldOffset(0x10)] public fixed byte m_nGroup[0x4];
        [FieldOffset(0x14)] public fixed byte m_uChoice[0x2];
        [FieldOffset(0x16)] public fixed byte m_uRefCount[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct CPulseCell_LerpCameraSettings__CursorState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hCamera[0x4];
        [FieldOffset(0xC)] public fixed byte m_OverlaidStart[0x10];
        [FieldOffset(0x1C)] public fixed byte m_OverlaidEnd[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponGlock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB40)]
    public unsafe struct CHEGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CTriggerGravity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CCollisionProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_collisionAttribute[0x30];
        [FieldOffset(0x40)] public fixed byte m_vecMins[0xC];
        [FieldOffset(0x4C)] public fixed byte m_vecMaxs[0xE];
        [FieldOffset(0x5A)] public fixed byte m_usSolidFlags[0x1];
        [FieldOffset(0x5B)] public fixed byte m_nSolidType[0x1];
        [FieldOffset(0x5C)] public fixed byte m_triggerBloat[0x1];
        [FieldOffset(0x5D)] public fixed byte m_nSurroundType[0x1];
        [FieldOffset(0x5E)] public fixed byte m_CollisionGroup[0x1];
        [FieldOffset(0x5F)] public fixed byte m_nEnablePhysics[0x1];
        [FieldOffset(0x60)] public fixed byte m_flBoundingRadius[0x4];
        [FieldOffset(0x64)] public fixed byte m_vecSpecifiedSurroundingMins[0xC];
        [FieldOffset(0x70)] public fixed byte m_vecSpecifiedSurroundingMaxs[0xC];
        [FieldOffset(0x7C)] public fixed byte m_vecSurroundingMaxs[0xC];
        [FieldOffset(0x88)] public fixed byte m_vecSurroundingMins[0xC];
        [FieldOffset(0x94)] public fixed byte m_vCapsuleCenter1[0xC];
        [FieldOffset(0xA0)] public fixed byte m_vCapsuleCenter2[0xC];
        [FieldOffset(0xAC)] public fixed byte m_flCapsuleRadius[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponGalilAR {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterMassGreater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_fFilterMass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponMP7 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CCSWeaponBaseGun {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
        [FieldOffset(0x1280)] public fixed byte m_zoomLevel[0x4];
        [FieldOffset(0x1284)] public fixed byte m_iBurstShotsRemaining[0xC];
        [FieldOffset(0x1290)] public fixed byte m_silencedModelIndex[0x4];
        [FieldOffset(0x1294)] public fixed byte m_inPrecache[0x1];
        [FieldOffset(0x1295)] public fixed byte m_bNeedsBoltAction[0x3];
        [FieldOffset(0x1298)] public fixed byte m_nRevolverCylinderIdx[0x4];
        [FieldOffset(0x129C)] public fixed byte m_bSkillReloadAvailable[0x1];
        [FieldOffset(0x129D)] public fixed byte m_bSkillReloadLiftedReloadKey[0x1];
        [FieldOffset(0x129E)] public fixed byte m_bSkillBoltInterruptAvailable[0x1];
        [FieldOffset(0x129F)] public fixed byte m_bSkillBoltLiftedFireKey[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CEnableMotionFixup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CLogicActiveAutosave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
        [FieldOffset(0x4B8)] public fixed byte m_TriggerHitPoints[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flTimeToTrigger[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flDangerousTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x558)]
    public unsafe struct CMathCounter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flMax[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_bHitMin[0x1];
        [FieldOffset(0x4B1)] public fixed byte m_bHitMax[0x1];
        [FieldOffset(0x4B2)] public fixed byte m_bDisabled[0x6];
        [FieldOffset(0x4B8)] public fixed byte m_OutValue[0x20];
        [FieldOffset(0x4D8)] public fixed byte m_OnGetValue[0x20];
        [FieldOffset(0x4F8)] public fixed byte m_OnHitMin[0x18];
        [FieldOffset(0x510)] public fixed byte m_OnHitMax[0x18];
        [FieldOffset(0x528)] public fixed byte m_OnChangedFromMin[0x18];
        [FieldOffset(0x540)] public fixed byte m_OnChangedFromMax[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CCSCustomPlayerCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hPawn[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_nCameraMode[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_hFollowEntity[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bFollowEyes[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_vecFollowOffset[0xC];
        [FieldOffset(0x4C4)] public fixed byte m_vecCameraOffset[0xC];
        [FieldOffset(0x4D0)] public fixed byte m_bClipCameraOffset[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flCameraOffsetReturnStrength[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CCSGameModeRules_ArmsRace {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_WeaponSequence[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x518)]
    public unsafe struct CLogicPlayerProxyBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_PlayerHasAmmo[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_PlayerHasNoAmmo[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_PlayerDied[0x18];
        [FieldOffset(0x4F0)] public fixed byte m_RequestedPlayerHealth[0x20];
        [FieldOffset(0x510)] public fixed byte m_hPlayer[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x438)]
    public unsafe struct CAttributeContainer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_Item[0x3E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CCSPlace {
        [FieldOffset(0x0)] public fixed byte pad_0[0x868];
        [FieldOffset(0x868)] public fixed byte m_name[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyParent {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseSelectorOutflowList_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterContext {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iFilterContext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CLightEnvironmentEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CEnvDecal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_hDecalMaterial[0x8];
        [FieldOffset(0x858)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x860)] public fixed byte m_flDepth[0x4];
        [FieldOffset(0x864)] public fixed byte m_nRenderOrder[0x4];
        [FieldOffset(0x868)] public fixed byte m_bProjectOnWorld[0x1];
        [FieldOffset(0x869)] public fixed byte m_bProjectOnCharacters[0x1];
        [FieldOffset(0x86A)] public fixed byte m_bProjectOnWater[0x2];
        [FieldOffset(0x86C)] public fixed byte m_flDepthSortBias[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct CEnvVolumetricFogVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x4B8)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x4C4)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x4C5)] public fixed byte m_bIndirectUseLPVs[0x3];
        [FieldOffset(0x4C8)] public fixed byte m_flStrength[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_nFalloffShape[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_flFalloffExponent[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flHeightFogDepth[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_fHeightFogEdgeWidth[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_fIndirectLightStrength[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_fSunLightStrength[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_fNoiseStrength[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_TintColor[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_bOverrideTintColor[0x1];
        [FieldOffset(0x4ED)] public fixed byte m_bOverrideIndirectLightStrength[0x1];
        [FieldOffset(0x4EE)] public fixed byte m_bOverrideSunLightStrength[0x1];
        [FieldOffset(0x4EF)] public fixed byte m_bOverrideNoiseStrength[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CServerOnlyEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_PlaySequence__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_hTarget[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CBodyComponentSkeletonInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_skeletonInstance[0x460];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC10)]
    public unsafe struct CItemGeneric {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAF4];
        [FieldOffset(0xAF4)] public fixed byte m_bHasTriggerRadius[0x1];
        [FieldOffset(0xAF5)] public fixed byte m_bHasPickupRadius[0x3];
        [FieldOffset(0xAF8)] public fixed byte m_flPickupRadiusSqr[0x4];
        [FieldOffset(0xAFC)] public fixed byte m_flTriggerRadiusSqr[0x4];
        [FieldOffset(0xB00)] public fixed byte m_flLastPickupCheck[0x4];
        [FieldOffset(0xB04)] public fixed byte m_bPlayerCounterListenerAdded[0x1];
        [FieldOffset(0xB05)] public fixed byte m_bPlayerInTriggerRadius[0x3];
        [FieldOffset(0xB08)] public fixed byte m_hSpawnParticleEffect[0x8];
        [FieldOffset(0xB10)] public fixed byte m_pAmbientSoundEffect[0x8];
        [FieldOffset(0xB18)] public fixed byte m_bAutoStartAmbientSound[0x8];
        [FieldOffset(0xB20)] public fixed byte m_pSpawnScriptFunction[0x8];
        [FieldOffset(0xB28)] public fixed byte m_hPickupParticleEffect[0x8];
        [FieldOffset(0xB30)] public fixed byte m_pPickupSoundEffect[0x8];
        [FieldOffset(0xB38)] public fixed byte m_pPickupScriptFunction[0x8];
        [FieldOffset(0xB40)] public fixed byte m_hTimeoutParticleEffect[0x8];
        [FieldOffset(0xB48)] public fixed byte m_pTimeoutSoundEffect[0x8];
        [FieldOffset(0xB50)] public fixed byte m_pTimeoutScriptFunction[0x8];
        [FieldOffset(0xB58)] public fixed byte m_pPickupFilterName[0x8];
        [FieldOffset(0xB60)] public fixed byte m_hPickupFilter[0x8];
        [FieldOffset(0xB68)] public fixed byte m_OnPickup[0x18];
        [FieldOffset(0xB80)] public fixed byte m_OnTimeout[0x18];
        [FieldOffset(0xB98)] public fixed byte m_OnTriggerStartTouch[0x18];
        [FieldOffset(0xBB0)] public fixed byte m_OnTriggerTouch[0x18];
        [FieldOffset(0xBC8)] public fixed byte m_OnTriggerEndTouch[0x18];
        [FieldOffset(0xBE0)] public fixed byte m_pAllowPickupScriptFunction[0x8];
        [FieldOffset(0xBE8)] public fixed byte m_flPickupRadius[0x4];
        [FieldOffset(0xBEC)] public fixed byte m_flTriggerRadius[0x4];
        [FieldOffset(0xBF0)] public fixed byte m_pTriggerSoundEffect[0x8];
        [FieldOffset(0xBF8)] public fixed byte m_bGlowWhenInTrigger[0x4];
        [FieldOffset(0xBFC)] public fixed byte m_glowColor[0x4];
        [FieldOffset(0xC00)] public fixed byte m_bUseable[0x4];
        [FieldOffset(0xC04)] public fixed byte m_hTriggerHelper[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct CPointValueRemapper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bUpdateOnClient[0x3];
        [FieldOffset(0x4AC)] public fixed byte m_nInputType[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_iszRemapLineStartName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszRemapLineEndName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_hRemapLineStart[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hRemapLineEnd[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flMaximumChangePerSecond[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_flDisengageDistance[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_flEngageDistance[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_bRequiresUseKey[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_nOutputType[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iszOutputEntityName[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_iszOutputEntity2Name[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_iszOutputEntity3Name[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_iszOutputEntity4Name[0x8];
        [FieldOffset(0x500)] public fixed byte m_hOutputEntities[0x18];
        [FieldOffset(0x518)] public fixed byte m_nHapticsType[0x4];
        [FieldOffset(0x51C)] public fixed byte m_nMomentumType[0x4];
        [FieldOffset(0x520)] public fixed byte m_flMomentumModifier[0x4];
        [FieldOffset(0x524)] public fixed byte m_flSnapValue[0x4];
        [FieldOffset(0x528)] public fixed byte m_flCurrentMomentum[0x4];
        [FieldOffset(0x52C)] public fixed byte m_nRatchetType[0x4];
        [FieldOffset(0x530)] public fixed byte m_flRatchetOffset[0x4];
        [FieldOffset(0x534)] public fixed byte m_flInputOffset[0x4];
        [FieldOffset(0x538)] public fixed byte m_bEngaged[0x1];
        [FieldOffset(0x539)] public fixed byte m_bFirstUpdate[0x3];
        [FieldOffset(0x53C)] public fixed byte m_flPreviousValue[0x4];
        [FieldOffset(0x540)] public fixed byte m_flPreviousUpdateTickTime[0x4];
        [FieldOffset(0x544)] public fixed byte m_vecPreviousTestPoint[0xC];
        [FieldOffset(0x550)] public fixed byte m_hUsingPlayer[0x4];
        [FieldOffset(0x554)] public fixed byte m_flCustomOutputValue[0x4];
        [FieldOffset(0x558)] public fixed byte m_iszSoundEngage[0x8];
        [FieldOffset(0x560)] public fixed byte m_iszSoundDisengage[0x8];
        [FieldOffset(0x568)] public fixed byte m_iszSoundReachedValueZero[0x8];
        [FieldOffset(0x570)] public fixed byte m_iszSoundReachedValueOne[0x8];
        [FieldOffset(0x578)] public fixed byte m_iszSoundMovingLoop[0x20];
        [FieldOffset(0x598)] public fixed byte m_Position[0x20];
        [FieldOffset(0x5B8)] public fixed byte m_PositionDelta[0x20];
        [FieldOffset(0x5D8)] public fixed byte m_OnReachedValueZero[0x18];
        [FieldOffset(0x5F0)] public fixed byte m_OnReachedValueOne[0x18];
        [FieldOffset(0x608)] public fixed byte m_OnReachedValueCustom[0x18];
        [FieldOffset(0x620)] public fixed byte m_OnEngage[0x18];
        [FieldOffset(0x638)] public fixed byte m_OnDisengage[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CBtNodeConditionInactive {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_flRoundStartThresholdSeconds[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flSensorInactivityThresholdSeconds[0x4];
        [FieldOffset(0x80)] public fixed byte m_SensorInactivityTimer[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC00)]
    public unsafe struct CRagdollProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA50];
        [FieldOffset(0xA50)] public fixed byte m_CPropDataComponent[0x40];
        [FieldOffset(0xA90)] public fixed byte m_ragdoll[0x50];
        [FieldOffset(0xAE0)] public fixed byte m_bStartDisabled[0x4];
        [FieldOffset(0xAE4)] public fixed byte m_massScale[0x4];
        [FieldOffset(0xAE8)] public fixed byte m_buoyancyScale[0x8];
        [FieldOffset(0xAF0)] public fixed byte m_ragEnabled[0x18];
        [FieldOffset(0xB08)] public fixed byte m_ragPos[0x18];
        [FieldOffset(0xB20)] public fixed byte m_ragAngles[0x18];
        [FieldOffset(0xB38)] public fixed byte m_lastUpdateTickCount[0x4];
        [FieldOffset(0xB3C)] public fixed byte m_allAsleep[0x1];
        [FieldOffset(0xB3D)] public fixed byte m_bFirstCollisionAfterLaunch[0x3];
        [FieldOffset(0xB40)] public fixed byte m_nNavObstacleType[0x4];
        [FieldOffset(0xB44)] public fixed byte m_bUpdateNavWhenMoving[0x1];
        [FieldOffset(0xB45)] public fixed byte m_bForceNavObstacleCut[0x1];
        [FieldOffset(0xB46)] public fixed byte m_bAttachedToReferenceFrame[0x2];
        [FieldOffset(0xB48)] public fixed byte m_hDamageEntity[0x4];
        [FieldOffset(0xB4C)] public fixed byte m_hKiller[0x4];
        [FieldOffset(0xB50)] public fixed byte m_hPhysicsAttacker[0x4];
        [FieldOffset(0xB54)] public fixed byte m_flLastPhysicsInfluenceTime[0x4];
        [FieldOffset(0xB58)] public fixed byte m_flFadeOutStartTime[0x4];
        [FieldOffset(0xB5C)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0xB60)] public fixed byte m_vecLastOrigin[0xC];
        [FieldOffset(0xB6C)] public fixed byte m_flAwakeTime[0x4];
        [FieldOffset(0xB70)] public fixed byte m_flLastOriginChangeTime[0x8];
        [FieldOffset(0xB78)] public fixed byte m_strOriginClassName[0x8];
        [FieldOffset(0xB80)] public fixed byte m_strSourceClassName[0x8];
        [FieldOffset(0xB88)] public fixed byte m_bHasBeenPhysgunned[0x1];
        [FieldOffset(0xB89)] public fixed byte m_bAllowStretch[0x3];
        [FieldOffset(0xB8C)] public fixed byte m_flBlendWeight[0x4];
        [FieldOffset(0xB90)] public fixed byte m_flDefaultFadeScale[0x8];
        [FieldOffset(0xB98)] public fixed byte m_ragdollMins[0x18];
        [FieldOffset(0xBB0)] public fixed byte m_ragdollMaxs[0x18];
        [FieldOffset(0xBC8)] public fixed byte m_bShouldDeleteActivationRecord[0x18];
        [FieldOffset(0xBE0)] public fixed byte m_vecNavObstacles[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_scriptClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x920)]
    public unsafe struct CFuncTrain {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8F8];
        [FieldOffset(0x8F8)] public fixed byte m_hCurrentTarget[0x4];
        [FieldOffset(0x8FC)] public fixed byte m_activated[0x4];
        [FieldOffset(0x900)] public fixed byte m_hEnemy[0x4];
        [FieldOffset(0x904)] public fixed byte m_flBlockDamage[0x4];
        [FieldOffset(0x908)] public fixed byte m_flNextBlockTime[0x8];
        [FieldOffset(0x910)] public fixed byte m_iszLastTarget[0x8];
        [FieldOffset(0x918)] public fixed byte m_flSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CAI_ChangeHintGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iSearchType[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_strSearchName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_strNewHintGroup[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct CCSPlayer_BuyServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_vecSellbackPurchaseEntries[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponAug {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x678)]
    public unsafe struct CPhysHinge {
        [FieldOffset(0x0)] public fixed byte pad_0[0x510];
        [FieldOffset(0x510)] public fixed byte m_soundInfo[0x98];
        [FieldOffset(0x5A8)] public fixed byte m_NotifyMinLimitReached[0x18];
        [FieldOffset(0x5C0)] public fixed byte m_NotifyMaxLimitReached[0x18];
        [FieldOffset(0x5D8)] public fixed byte m_bAtMinLimit[0x1];
        [FieldOffset(0x5D9)] public fixed byte m_bAtMaxLimit[0x3];
        [FieldOffset(0x5DC)] public fixed byte m_hinge[0x40];
        [FieldOffset(0x61C)] public fixed byte m_hingeFriction[0x4];
        [FieldOffset(0x620)] public fixed byte m_systemLoadScale[0x4];
        [FieldOffset(0x624)] public fixed byte m_bIsAxisLocal[0x4];
        [FieldOffset(0x628)] public fixed byte m_flMinRotation[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flMaxRotation[0x4];
        [FieldOffset(0x630)] public fixed byte m_flInitialRotation[0x4];
        [FieldOffset(0x634)] public fixed byte m_flMotorFrequency[0x4];
        [FieldOffset(0x638)] public fixed byte m_flMotorDampingRatio[0x4];
        [FieldOffset(0x63C)] public fixed byte m_flAngleSpeed[0x4];
        [FieldOffset(0x640)] public fixed byte m_flAngleSpeedThreshold[0x4];
        [FieldOffset(0x644)] public fixed byte m_flLimitsDebugVisRotation[0x4];
        [FieldOffset(0x648)] public fixed byte m_OnStartMoving[0x18];
        [FieldOffset(0x660)] public fixed byte m_OnStopMoving[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D0)]
    public unsafe struct CBuyZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_LegacyTeamNum[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CInfoChoreoAnchor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vecTargetEntries[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_vecTargetWarps[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponSSG08 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CInfoWorldLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pOutputOnEntitiesSpawned[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_worldName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_layerName[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_bWorldLayerVisible[0x1];
        [FieldOffset(0x4D1)] public fixed byte m_bEntitiesSpawned[0x1];
        [FieldOffset(0x4D2)] public fixed byte m_bCreateAsChildSpawnGroup[0x2];
        [FieldOffset(0x4D4)] public fixed byte m_hLayerSpawnGroup[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CBodyComponentBaseModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CLogicProximity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CPointGiveAmmo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_pActivator[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CCSGO_EndOfMatchLineupStart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct FilterDamageType {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iDamageType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x508)]
    public unsafe struct CPointCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_FOV[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_Resolution[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_bFogEnable[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_FogColor[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flFogStart[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flFogEnd[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flFogMaxDensity[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x4C5)] public fixed byte m_bUseScreenAspectRatio[0x3];
        [FieldOffset(0x4C8)] public fixed byte m_flAspectRatio[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_bNoSky[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_fBrightness[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flZFar[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_flZNear[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_bCanHLTVUse[0x1];
        [FieldOffset(0x4DD)] public fixed byte m_bAlignWithParent[0x1];
        [FieldOffset(0x4DE)] public fixed byte m_bDofEnabled[0x2];
        [FieldOffset(0x4E0)] public fixed byte m_flDofNearBlurry[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_flDofNearCrisp[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_flDofFarCrisp[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_flDofFarBlurry[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_flDofTiltToGround[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_TargetFOV[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_DegreesPerSecond[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_bIsOn[0x4];
        [FieldOffset(0x500)] public fixed byte m_pNext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAttributeList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Attributes[0x68];
        [FieldOffset(0x70)] public fixed byte m_pManager[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterProximity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5C0)]
    public unsafe struct CCS2WeaponGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_action[0x18];
        [FieldOffset(0xD8)] public fixed byte m_bActionReset[0x18];
        [FieldOffset(0xF0)] public fixed byte m_flWeaponActionSpeedScale[0x18];
        [FieldOffset(0x108)] public fixed byte m_weaponCategory[0x18];
        [FieldOffset(0x120)] public fixed byte m_weaponType[0x18];
        [FieldOffset(0x138)] public fixed byte m_weaponExtraInfo[0x18];
        [FieldOffset(0x150)] public fixed byte m_flWeaponAmmo[0x18];
        [FieldOffset(0x168)] public fixed byte m_flWeaponAmmoMax[0x18];
        [FieldOffset(0x180)] public fixed byte m_flWeaponAmmoReserve[0x18];
        [FieldOffset(0x198)] public fixed byte m_bWeaponIsSilenced[0x18];
        [FieldOffset(0x1B0)] public fixed byte m_flWeaponIronsightAmount[0x18];
        [FieldOffset(0x1C8)] public fixed byte m_bIsUsingLegacyModel[0x18];
        [FieldOffset(0x1E0)] public fixed byte m_idleVariation[0x18];
        [FieldOffset(0x1F8)] public fixed byte m_deployVariation[0x18];
        [FieldOffset(0x210)] public fixed byte m_attackType[0x18];
        [FieldOffset(0x228)] public fixed byte m_attackThrowStrength[0x18];
        [FieldOffset(0x240)] public fixed byte m_flAttackVariation[0x18];
        [FieldOffset(0x258)] public fixed byte m_inspectVariation[0x18];
        [FieldOffset(0x270)] public fixed byte m_inspectExtraInfo[0x18];
        [FieldOffset(0x288)] public fixed byte m_reloadStage[0x338];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEffectData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vOrigin[0xC];
        [FieldOffset(0x14)] public fixed byte m_vStart[0xC];
        [FieldOffset(0x20)] public fixed byte m_vNormal[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vAngles[0xC];
        [FieldOffset(0x38)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hOtherEntity[0x4];
        [FieldOffset(0x40)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x44)] public fixed byte m_flMagnitude[0x4];
        [FieldOffset(0x48)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nSurfaceProp[0x4];
        [FieldOffset(0x50)] public fixed byte m_nEffectIndex[0x8];
        [FieldOffset(0x58)] public fixed byte m_nDamageType[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nPenetrate[0x2];
        [FieldOffset(0x5E)] public fixed byte m_nMaterial[0x2];
        [FieldOffset(0x60)] public fixed byte m_nHitBox[0x2];
        [FieldOffset(0x62)] public fixed byte m_nColor[0x1];
        [FieldOffset(0x63)] public fixed byte m_fFlags[0x1];
        [FieldOffset(0x64)] public fixed byte m_nAttachmentIndex[0x4];
        [FieldOffset(0x68)] public fixed byte m_nAttachmentName[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iEffectName[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x880)]
    public unsafe struct CEntityDissolve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_flFadeInStart[0x4];
        [FieldOffset(0x854)] public fixed byte m_flFadeInLength[0x4];
        [FieldOffset(0x858)] public fixed byte m_flFadeOutModelStart[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flFadeOutModelLength[0x4];
        [FieldOffset(0x860)] public fixed byte m_flFadeOutStart[0x4];
        [FieldOffset(0x864)] public fixed byte m_flFadeOutLength[0x4];
        [FieldOffset(0x868)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x86C)] public fixed byte m_nDissolveType[0x4];
        [FieldOffset(0x870)] public fixed byte m_vDissolverOrigin[0xC];
        [FieldOffset(0x87C)] public fixed byte m_nMagnitude[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11450)]
    public unsafe struct CCSGameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_bFreezePeriod[0x1];
        [FieldOffset(0xD9)] public fixed byte m_bWarmupPeriod[0x3];
        [FieldOffset(0xDC)] public fixed byte m_fWarmupPeriodEnd[0x4];
        [FieldOffset(0xE0)] public fixed byte m_fWarmupPeriodStart[0x4];
        [FieldOffset(0xE4)] public fixed byte m_bTerroristTimeOutActive[0x1];
        [FieldOffset(0xE5)] public fixed byte m_bCTTimeOutActive[0x3];
        [FieldOffset(0xE8)] public fixed byte m_flTerroristTimeOutRemaining[0x4];
        [FieldOffset(0xEC)] public fixed byte m_flCTTimeOutRemaining[0x4];
        [FieldOffset(0xF0)] public fixed byte m_nTerroristTimeOuts[0x4];
        [FieldOffset(0xF4)] public fixed byte m_nCTTimeOuts[0x4];
        [FieldOffset(0xF8)] public fixed byte m_bTechnicalTimeOut[0x1];
        [FieldOffset(0xF9)] public fixed byte m_bMatchWaitingForResume[0x3];
        [FieldOffset(0xFC)] public fixed byte m_iFreezeTime[0x4];
        [FieldOffset(0x100)] public fixed byte m_iRoundTime[0x4];
        [FieldOffset(0x104)] public fixed byte m_fMatchStartTime[0x4];
        [FieldOffset(0x108)] public fixed byte m_fRoundStartTime[0x4];
        [FieldOffset(0x10C)] public fixed byte m_flRestartRoundTime[0x4];
        [FieldOffset(0x110)] public fixed byte m_bGameRestart[0x4];
        [FieldOffset(0x114)] public fixed byte m_flGameStartTime[0x4];
        [FieldOffset(0x118)] public fixed byte m_timeUntilNextPhaseStarts[0x4];
        [FieldOffset(0x11C)] public fixed byte m_gamePhase[0x4];
        [FieldOffset(0x120)] public fixed byte m_totalRoundsPlayed[0x4];
        [FieldOffset(0x124)] public fixed byte m_nRoundsPlayedThisPhase[0x4];
        [FieldOffset(0x128)] public fixed byte m_nOvertimePlaying[0x4];
        [FieldOffset(0x12C)] public fixed byte m_iHostagesRemaining[0x4];
        [FieldOffset(0x130)] public fixed byte m_bAnyHostageReached[0x1];
        [FieldOffset(0x131)] public fixed byte m_bMapHasBombTarget[0x1];
        [FieldOffset(0x132)] public fixed byte m_bMapHasRescueZone[0x1];
        [FieldOffset(0x133)] public fixed byte m_bMapHasBuyZone[0x1];
        [FieldOffset(0x134)] public fixed byte m_bIsQueuedMatchmaking[0x4];
        [FieldOffset(0x138)] public fixed byte m_nQueuedMatchmakingMode[0x4];
        [FieldOffset(0x13C)] public fixed byte m_bIsValveDS[0x1];
        [FieldOffset(0x13D)] public fixed byte m_bLogoMap[0x1];
        [FieldOffset(0x13E)] public fixed byte m_bPlayAllStepSoundsOnServer[0x2];
        [FieldOffset(0x140)] public fixed byte m_iSpectatorSlotCount[0x4];
        [FieldOffset(0x144)] public fixed byte m_MatchDevice[0x4];
        [FieldOffset(0x148)] public fixed byte m_bHasMatchStarted[0x4];
        [FieldOffset(0x14C)] public fixed byte m_nNextMapInMapgroup[0x4];
        [FieldOffset(0x150)] public fixed byte m_szTournamentEventName[0x200];
        [FieldOffset(0x350)] public fixed byte m_szTournamentEventStage[0x200];
        [FieldOffset(0x550)] public fixed byte m_szMatchStatTxt[0x200];
        [FieldOffset(0x750)] public fixed byte m_szTournamentPredictionsTxt[0x200];
        [FieldOffset(0x950)] public fixed byte m_nTournamentPredictionsPct[0x4];
        [FieldOffset(0x954)] public fixed byte m_flCMMItemDropRevealStartTime[0x4];
        [FieldOffset(0x958)] public fixed byte m_flCMMItemDropRevealEndTime[0x4];
        [FieldOffset(0x95C)] public fixed byte m_bIsDroppingItems[0x1];
        [FieldOffset(0x95D)] public fixed byte m_bIsQuestEligible[0x1];
        [FieldOffset(0x95E)] public fixed byte m_bIsHltvActive[0x1];
        [FieldOffset(0x95F)] public fixed byte m_bBombPlanted[0x1];
        [FieldOffset(0x960)] public fixed byte m_arrProhibitedItemIndices[0xC8];
        [FieldOffset(0xA28)] public fixed byte m_arrTournamentActiveCasterAccounts[0x10];
        [FieldOffset(0xA38)] public fixed byte m_numBestOfMaps[0x4];
        [FieldOffset(0xA3C)] public fixed byte m_nHalloweenMaskListSeed[0x4];
        [FieldOffset(0xA40)] public fixed byte m_bBombDropped[0x4];
        [FieldOffset(0xA44)] public fixed byte m_iRoundWinStatus[0x4];
        [FieldOffset(0xA48)] public fixed byte m_eRoundWinReason[0x4];
        [FieldOffset(0xA4C)] public fixed byte m_bTCantBuy[0x1];
        [FieldOffset(0xA4D)] public fixed byte m_bCTCantBuy[0x3];
        [FieldOffset(0xA50)] public fixed byte m_iMatchStats_RoundResults[0x78];
        [FieldOffset(0xAC8)] public fixed byte m_iMatchStats_PlayersAlive_CT[0x78];
        [FieldOffset(0xB40)] public fixed byte m_iMatchStats_PlayersAlive_T[0x78];
        [FieldOffset(0xBB8)] public fixed byte m_TeamRespawnWaveTimes[0x80];
        [FieldOffset(0xC38)] public fixed byte m_nActiveMutators[0x4];
        [FieldOffset(0xC3C)] public fixed byte m_flNextRespawnWave[0x80];
        [FieldOffset(0xCBC)] public fixed byte m_vMinimapMins[0xC];
        [FieldOffset(0xCC8)] public fixed byte m_vMinimapMaxs[0xC];
        [FieldOffset(0xCD4)] public fixed byte m_MinimapVerticalSectionHeights[0x24];
        [FieldOffset(0xCF8)] public fixed byte m_ullLocalMatchID[0x8];
        [FieldOffset(0xD00)] public fixed byte m_nEndMatchMapGroupVoteTypes[0x28];
        [FieldOffset(0xD28)] public fixed byte m_nEndMatchMapGroupVoteOptions[0x28];
        [FieldOffset(0xD50)] public fixed byte m_nEndMatchMapVoteWinner[0x4];
        [FieldOffset(0xD54)] public fixed byte m_iNumConsecutiveCTLoses[0x4];
        [FieldOffset(0xD58)] public fixed byte m_iNumConsecutiveTerroristLoses[0x20];
        [FieldOffset(0xD78)] public fixed byte m_bHasHostageBeenTouched[0x4];
        [FieldOffset(0xD7C)] public fixed byte m_flIntermissionStartTime[0x4];
        [FieldOffset(0xD80)] public fixed byte m_flIntermissionEndTime[0x4];
        [FieldOffset(0xD84)] public fixed byte m_bLevelInitialized[0x4];
        [FieldOffset(0xD88)] public fixed byte m_iTotalRoundsPlayed[0x4];
        [FieldOffset(0xD8C)] public fixed byte m_iUnBalancedRounds[0x4];
        [FieldOffset(0xD90)] public fixed byte m_endMatchOnRoundReset[0x1];
        [FieldOffset(0xD91)] public fixed byte m_endMatchOnThink[0x3];
        [FieldOffset(0xD94)] public fixed byte m_iNumTerrorist[0x4];
        [FieldOffset(0xD98)] public fixed byte m_iNumCT[0x4];
        [FieldOffset(0xD9C)] public fixed byte m_iNumSpawnableTerrorist[0x4];
        [FieldOffset(0xDA0)] public fixed byte m_iNumSpawnableCT[0x8];
        [FieldOffset(0xDA8)] public fixed byte m_arrSelectedHostageSpawnIndices[0x18];
        [FieldOffset(0xDC0)] public fixed byte m_nSpawnPointsRandomSeed[0x4];
        [FieldOffset(0xDC4)] public fixed byte m_bFirstConnected[0x1];
        [FieldOffset(0xDC5)] public fixed byte m_bCompleteReset[0x1];
        [FieldOffset(0xDC6)] public fixed byte m_bPickNewTeamsOnReset[0x1];
        [FieldOffset(0xDC7)] public fixed byte m_bScrambleTeamsOnRestart[0x1];
        [FieldOffset(0xDC8)] public fixed byte m_bSwapTeamsOnRestart[0x8];
        [FieldOffset(0xDD0)] public fixed byte m_nEndMatchTiedVotes[0x1C];
        [FieldOffset(0xDEC)] public fixed byte m_bNeedToAskPlayersForContinueVote[0x4];
        [FieldOffset(0xDF0)] public fixed byte m_numQueuedMatchmakingAccounts[0x4];
        [FieldOffset(0xDF4)] public fixed byte m_fAvgPlayerRank[0x4];
        [FieldOffset(0xDF8)] public fixed byte m_pQueuedMatchmakingReservationString[0x8];
        [FieldOffset(0xE00)] public fixed byte m_numTotalTournamentDrops[0x4];
        [FieldOffset(0xE04)] public fixed byte m_numSpectatorsCountMax[0x4];
        [FieldOffset(0xE08)] public fixed byte m_numSpectatorsCountMaxTV[0x4];
        [FieldOffset(0xE0C)] public fixed byte m_numSpectatorsCountMaxLnk[0xC];
        [FieldOffset(0xE18)] public fixed byte m_bQueuedMatchmakingReportedRoundStatsPendingSend[0x4];
        [FieldOffset(0xE1C)] public fixed byte m_nCTsAliveAtFreezetimeEnd[0x4];
        [FieldOffset(0xE20)] public fixed byte m_nTerroristsAliveAtFreezetimeEnd[0x4];
        [FieldOffset(0xE24)] public fixed byte m_bForceTeamChangeSilent[0x1];
        [FieldOffset(0xE25)] public fixed byte m_bLoadingRoundBackupData[0x33];
        [FieldOffset(0xE58)] public fixed byte m_nMatchInfoShowType[0x4];
        [FieldOffset(0xE5C)] public fixed byte m_flMatchInfoDecidedTime[0x1C];
        [FieldOffset(0xE78)] public fixed byte mTeamDMLastWinningTeamNumber[0x4];
        [FieldOffset(0xE7C)] public fixed byte mTeamDMLastThinkTime[0x4];
        [FieldOffset(0xE80)] public fixed byte m_flTeamDMLastAnnouncementTime[0x4];
        [FieldOffset(0xE84)] public fixed byte m_iAccountTerrorist[0x4];
        [FieldOffset(0xE88)] public fixed byte m_iAccountCT[0x4];
        [FieldOffset(0xE8C)] public fixed byte m_iSpawnPointCount_Terrorist[0x4];
        [FieldOffset(0xE90)] public fixed byte m_iSpawnPointCount_CT[0x4];
        [FieldOffset(0xE94)] public fixed byte m_iMaxNumTerrorists[0x4];
        [FieldOffset(0xE98)] public fixed byte m_iMaxNumCTs[0x4];
        [FieldOffset(0xE9C)] public fixed byte m_iLoserBonusMostRecentTeam[0x4];
        [FieldOffset(0xEA0)] public fixed byte m_tmNextPeriodicThink[0x4];
        [FieldOffset(0xEA4)] public fixed byte m_bVoiceWonMatchBragFired[0x4];
        [FieldOffset(0xEA8)] public fixed byte m_fWarmupNextChatNoticeTime[0x8];
        [FieldOffset(0xEB0)] public fixed byte m_iHostagesRescued[0x4];
        [FieldOffset(0xEB4)] public fixed byte m_iHostagesTouched[0x4];
        [FieldOffset(0xEB8)] public fixed byte m_flNextHostageAnnouncement[0x4];
        [FieldOffset(0xEBC)] public fixed byte m_bNoTerroristsKilled[0x1];
        [FieldOffset(0xEBD)] public fixed byte m_bNoCTsKilled[0x1];
        [FieldOffset(0xEBE)] public fixed byte m_bNoEnemiesKilled[0x1];
        [FieldOffset(0xEBF)] public fixed byte m_bCanDonateWeapons[0x5];
        [FieldOffset(0xEC4)] public fixed byte m_firstKillTime[0x8];
        [FieldOffset(0xECC)] public fixed byte m_firstBloodTime[0x1C];
        [FieldOffset(0xEE8)] public fixed byte m_hostageWasInjured[0x1];
        [FieldOffset(0xEE9)] public fixed byte m_hostageWasKilled[0xF];
        [FieldOffset(0xEF8)] public fixed byte m_bVoteCalled[0x1];
        [FieldOffset(0xEF9)] public fixed byte m_bServerVoteOnReset[0x3];
        [FieldOffset(0xEFC)] public fixed byte m_flVoteCheckThrottle[0x4];
        [FieldOffset(0xF00)] public fixed byte m_bBuyTimeEnded[0x4];
        [FieldOffset(0xF04)] public fixed byte m_nLastFreezeEndBeep[0x4];
        [FieldOffset(0xF08)] public fixed byte m_bTargetBombed[0x1];
        [FieldOffset(0xF09)] public fixed byte m_bBombDefused[0x1];
        [FieldOffset(0xF0A)] public fixed byte m_bMapHasBombZone[0x4E];
        [FieldOffset(0xF58)] public fixed byte m_vecMainCTSpawnPos[0x10];
        [FieldOffset(0xF68)] public fixed byte m_CTSpawnPointsMasterList[0x18];
        [FieldOffset(0xF80)] public fixed byte m_TerroristSpawnPointsMasterList[0x18];
        [FieldOffset(0xF98)] public fixed byte m_bRespawningAllRespawnablePlayers[0x4];
        [FieldOffset(0xF9C)] public fixed byte m_iNextCTSpawnPoint[0x4];
        [FieldOffset(0xFA0)] public fixed byte m_flCTSpawnPointUsedTime[0x4];
        [FieldOffset(0xFA4)] public fixed byte m_iNextTerroristSpawnPoint[0x4];
        [FieldOffset(0xFA8)] public fixed byte m_flTerroristSpawnPointUsedTime[0x8];
        [FieldOffset(0xFB0)] public fixed byte m_CTSpawnPoints[0x18];
        [FieldOffset(0xFC8)] public fixed byte m_TerroristSpawnPoints[0x18];
        [FieldOffset(0xFE0)] public fixed byte m_bIsUnreservedGameServer[0x4];
        [FieldOffset(0xFE4)] public fixed byte m_fAutobalanceDisplayTime[0x3C];
        [FieldOffset(0x1020)] public fixed byte m_bAllowWeaponSwitch[0x1];
        [FieldOffset(0x1021)] public fixed byte m_bRoundTimeWarningTriggered[0x3];
        [FieldOffset(0x1024)] public fixed byte m_phaseChangeAnnouncementTime[0x4];
        [FieldOffset(0x1028)] public fixed byte m_fNextUpdateTeamClanNamesTime[0x4];
        [FieldOffset(0x102C)] public fixed byte m_flLastThinkTime[0x4];
        [FieldOffset(0x1030)] public fixed byte m_fAccumulatedRoundOffDamage[0x4];
        [FieldOffset(0x1034)] public fixed byte m_nShorthandedBonusLastEvalRound[0x4C];
        [FieldOffset(0x1080)] public fixed byte m_nMatchAbortedEarlyReason[0x4];
        [FieldOffset(0x1084)] public fixed byte m_bHasTriggeredRoundStartMusic[0x1];
        [FieldOffset(0x1085)] public fixed byte m_bSwitchingTeamsAtRoundReset[0x1B];
        [FieldOffset(0x10A0)] public fixed byte m_pGameModeRules[0x8];
        [FieldOffset(0x10A8)] public fixed byte m_BtGlobalBlackboard[0x98];
        [FieldOffset(0x1140)] public fixed byte m_hPlayerResource[0x8];
        [FieldOffset(0x1148)] public fixed byte m_RetakeRules[0x1F0];
        [FieldOffset(0x1338)] public fixed byte m_arrTeamUniqueKillWeaponsMatch[0x60];
        [FieldOffset(0x1398)] public fixed byte m_bTeamLastKillUsedUniqueWeaponMatch[0x28];
        [FieldOffset(0x13C0)] public fixed byte m_nMatchEndCount[0x4];
        [FieldOffset(0x13C4)] public fixed byte m_nTTeamIntroVariant[0x4];
        [FieldOffset(0x13C8)] public fixed byte m_nCTTeamIntroVariant[0x4];
        [FieldOffset(0x13CC)] public fixed byte m_bTeamIntroPeriod[0x4];
        [FieldOffset(0x13D0)] public fixed byte m_fTeamIntroPeriodEnd[0x4];
        [FieldOffset(0x13D4)] public fixed byte m_bPlayedTeamIntroVO[0x4];
        [FieldOffset(0x13D8)] public fixed byte m_iRoundEndWinnerTeam[0x4];
        [FieldOffset(0x13DC)] public fixed byte m_eRoundEndReason[0x4];
        [FieldOffset(0x13E0)] public fixed byte m_bRoundEndShowTimerDefend[0x4];
        [FieldOffset(0x13E4)] public fixed byte m_iRoundEndTimerTime[0x4];
        [FieldOffset(0x13E8)] public fixed byte m_sRoundEndFunFactToken[0x8];
        [FieldOffset(0x13F0)] public fixed byte m_iRoundEndFunFactPlayerSlot[0x4];
        [FieldOffset(0x13F4)] public fixed byte m_iRoundEndFunFactData1[0x4];
        [FieldOffset(0x13F8)] public fixed byte m_iRoundEndFunFactData2[0x4];
        [FieldOffset(0x13FC)] public fixed byte m_iRoundEndFunFactData3[0x4];
        [FieldOffset(0x1400)] public fixed byte m_sRoundEndMessage[0x8];
        [FieldOffset(0x1408)] public fixed byte m_iRoundEndPlayerCount[0x4];
        [FieldOffset(0x140C)] public fixed byte m_bRoundEndNoMusic[0x4];
        [FieldOffset(0x1410)] public fixed byte m_iRoundEndLegacy[0x4];
        [FieldOffset(0x1414)] public fixed byte m_nRoundEndCount[0x4];
        [FieldOffset(0x1418)] public fixed byte m_iRoundStartRoundNumber[0x4];
        [FieldOffset(0x141C)] public fixed byte m_nRoundStartCount[0x400C];
        [FieldOffset(0x5428)] public fixed byte m_flLastPerfSampleTime[0xC028];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_ApplyEntityFlags__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x4)] public fixed byte m_uFlags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB40)]
    public unsafe struct CBaseCSGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAD0];
        [FieldOffset(0xAD0)] public fixed byte m_vInitialPosition[0xC];
        [FieldOffset(0xADC)] public fixed byte m_vInitialVelocity[0xC];
        [FieldOffset(0xAE8)] public fixed byte m_nBounces[0x8];
        [FieldOffset(0xAF0)] public fixed byte m_nExplodeEffectIndex[0x8];
        [FieldOffset(0xAF8)] public fixed byte m_nExplodeEffectTickBegin[0x4];
        [FieldOffset(0xAFC)] public fixed byte m_vecExplodeEffectOrigin[0xC];
        [FieldOffset(0xB08)] public fixed byte m_flSpawnTime[0x4];
        [FieldOffset(0xB0C)] public fixed byte m_unOGSExtraFlags[0x1];
        [FieldOffset(0xB0D)] public fixed byte m_bDetonationRecorded[0x1];
        [FieldOffset(0xB0E)] public fixed byte m_nItemIndex[0x2];
        [FieldOffset(0xB10)] public fixed byte m_vecOriginalSpawnLocation[0xC];
        [FieldOffset(0xB1C)] public fixed byte m_flLastBounceSoundTime[0x4];
        [FieldOffset(0xB20)] public fixed byte m_vecGrenadeSpin[0xC];
        [FieldOffset(0xB2C)] public fixed byte m_vecLastHitSurfaceNormal[0xC];
        [FieldOffset(0xB38)] public fixed byte m_nTicksAtZeroVelocity[0x4];
        [FieldOffset(0xB3C)] public fixed byte m_bHasEverHitEnemy[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x508)]
    public unsafe struct CPhysConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hJoint[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_nameAttach1[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_nameAttach2[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_hAttach1[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_hAttach2[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_nameAttachment1[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_nameAttachment2[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_breakSound[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_forceLimit[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_torqueLimit[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_minTeleportDistance[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_bSnapObjectPositions[0x1];
        [FieldOffset(0x4ED)] public fixed byte m_bTreatEntity1AsInfiniteMass[0x3];
        [FieldOffset(0x4F0)] public fixed byte m_OnBreak[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CLogicAchievement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszAchievementEventID[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_OnFired[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        [FieldOffset(0x0)] public fixed byte pItem[0x8];
        [FieldOffset(0x8)] public fixed byte team[0x2];
        [FieldOffset(0xA)] public fixed byte slot[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C0)]
    public unsafe struct CLightComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte __m_pChainEntity[0x40];
        [FieldOffset(0x78)] public fixed byte m_Color[0x4];
        [FieldOffset(0x7C)] public fixed byte m_SecondaryColor[0x4];
        [FieldOffset(0x80)] public fixed byte m_flBrightness[0x4];
        [FieldOffset(0x84)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x88)] public fixed byte m_flBrightnessMult[0x4];
        [FieldOffset(0x8C)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x90)] public fixed byte m_flFalloff[0x4];
        [FieldOffset(0x94)] public fixed byte m_flAttenuation0[0x4];
        [FieldOffset(0x98)] public fixed byte m_flAttenuation1[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flAttenuation2[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flTheta[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flPhi[0x4];
        [FieldOffset(0xA8)] public fixed byte m_hLightCookie[0x8];
        [FieldOffset(0xB0)] public fixed byte m_nCascades[0x4];
        [FieldOffset(0xB4)] public fixed byte m_nCastShadows[0x4];
        [FieldOffset(0xB8)] public fixed byte m_nShadowWidth[0x4];
        [FieldOffset(0xBC)] public fixed byte m_nShadowHeight[0x4];
        [FieldOffset(0xC0)] public fixed byte m_bRenderDiffuse[0x4];
        [FieldOffset(0xC4)] public fixed byte m_nRenderSpecular[0x4];
        [FieldOffset(0xC8)] public fixed byte m_bRenderTransmissive[0x4];
        [FieldOffset(0xCC)] public fixed byte m_flOrthoLightWidth[0x4];
        [FieldOffset(0xD0)] public fixed byte m_flOrthoLightHeight[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nStyle[0x4];
        [FieldOffset(0xD8)] public fixed byte m_Pattern[0x8];
        [FieldOffset(0xE0)] public fixed byte m_nCascadeRenderStaticObjects[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flShadowCascadeCrossFade[0x4];
        [FieldOffset(0xE8)] public fixed byte m_flShadowCascadeDistanceFade[0x4];
        [FieldOffset(0xEC)] public fixed byte m_flShadowCascadeDistance0[0x4];
        [FieldOffset(0xF0)] public fixed byte m_flShadowCascadeDistance1[0x4];
        [FieldOffset(0xF4)] public fixed byte m_flShadowCascadeDistance2[0x4];
        [FieldOffset(0xF8)] public fixed byte m_flShadowCascadeDistance3[0x4];
        [FieldOffset(0xFC)] public fixed byte m_nShadowCascadeResolution0[0x4];
        [FieldOffset(0x100)] public fixed byte m_nShadowCascadeResolution1[0x4];
        [FieldOffset(0x104)] public fixed byte m_nShadowCascadeResolution2[0x4];
        [FieldOffset(0x108)] public fixed byte m_nShadowCascadeResolution3[0x4];
        [FieldOffset(0x10C)] public fixed byte m_bUsesBakedShadowing[0x4];
        [FieldOffset(0x110)] public fixed byte m_nShadowPriority[0x4];
        [FieldOffset(0x114)] public fixed byte m_nBakedShadowIndex[0x4];
        [FieldOffset(0x118)] public fixed byte m_nLightPathUniqueId[0x4];
        [FieldOffset(0x11C)] public fixed byte m_nLightMapUniqueId[0x4];
        [FieldOffset(0x120)] public fixed byte m_bRenderToCubemaps[0x1];
        [FieldOffset(0x121)] public fixed byte m_bAllowSSTGeneration[0x3];
        [FieldOffset(0x124)] public fixed byte m_nDirectLight[0x4];
        [FieldOffset(0x128)] public fixed byte m_nBounceLight[0x4];
        [FieldOffset(0x12C)] public fixed byte m_flBounceScale[0x4];
        [FieldOffset(0x130)] public fixed byte m_flFadeMinDist[0x4];
        [FieldOffset(0x134)] public fixed byte m_flFadeMaxDist[0x4];
        [FieldOffset(0x138)] public fixed byte m_flShadowFadeMinDist[0x4];
        [FieldOffset(0x13C)] public fixed byte m_flShadowFadeMaxDist[0x4];
        [FieldOffset(0x140)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x141)] public fixed byte m_bFlicker[0x1];
        [FieldOffset(0x142)] public fixed byte m_bPrecomputedFieldsValid[0x2];
        [FieldOffset(0x144)] public fixed byte m_vPrecomputedBoundsMins[0xC];
        [FieldOffset(0x150)] public fixed byte m_vPrecomputedBoundsMaxs[0xC];
        [FieldOffset(0x15C)] public fixed byte m_vPrecomputedOBBOrigin[0xC];
        [FieldOffset(0x168)] public fixed byte m_vPrecomputedOBBAngles[0xC];
        [FieldOffset(0x174)] public fixed byte m_vPrecomputedOBBExtent[0xC];
        [FieldOffset(0x180)] public fixed byte m_flPrecomputedMaxRange[0x4];
        [FieldOffset(0x184)] public fixed byte m_nFogLightingMode[0x4];
        [FieldOffset(0x188)] public fixed byte m_flFogContributionStength[0x4];
        [FieldOffset(0x18C)] public fixed byte m_flNearClipPlane[0x4];
        [FieldOffset(0x190)] public fixed byte m_SkyColor[0x4];
        [FieldOffset(0x194)] public fixed byte m_flSkyIntensity[0x4];
        [FieldOffset(0x198)] public fixed byte m_SkyAmbientBounce[0x4];
        [FieldOffset(0x19C)] public fixed byte m_bUseSecondaryColor[0x1];
        [FieldOffset(0x19D)] public fixed byte m_bMixedShadows[0x3];
        [FieldOffset(0x1A0)] public fixed byte m_flLightStyleStartTime[0x4];
        [FieldOffset(0x1A4)] public fixed byte m_flCapsuleLength[0x4];
        [FieldOffset(0x1A8)] public fixed byte m_flMinRoughness[0x10];
        [FieldOffset(0x1B8)] public fixed byte m_bPvsModifyEntity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1280)]
    public unsafe struct CCSWeaponBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xEF8];
        [FieldOffset(0xEF8)] public fixed byte m_bRemoveable[0x1];
        [FieldOffset(0xEF9)] public fixed byte m_bPlayerAmmoStockOnPickup[0x1];
        [FieldOffset(0xEFA)] public fixed byte m_bRequireUseToTouch[0x2];
        [FieldOffset(0xEFC)] public fixed byte m_iWeaponGameplayAnimState[0x4];
        [FieldOffset(0xF00)] public fixed byte m_flWeaponGameplayAnimStateTimestamp[0x4];
        [FieldOffset(0xF04)] public fixed byte m_flInspectCancelCompleteTime[0x4];
        [FieldOffset(0xF08)] public fixed byte m_bInspectPending[0x1];
        [FieldOffset(0xF09)] public fixed byte m_bInspectShouldLoop[0x2B];
        [FieldOffset(0xF34)] public fixed byte m_nLastEmptySoundCmdNum[0x1C];
        [FieldOffset(0xF50)] public fixed byte m_bFireOnEmpty[0x8];
        [FieldOffset(0xF58)] public fixed byte m_OnPlayerPickup[0x18];
        [FieldOffset(0xF70)] public fixed byte m_weaponMode[0x4];
        [FieldOffset(0xF74)] public fixed byte m_flTurningInaccuracyDelta[0x4];
        [FieldOffset(0xF78)] public fixed byte m_vecTurningInaccuracyEyeDirLast[0xC];
        [FieldOffset(0xF84)] public fixed byte m_flTurningInaccuracy[0x4];
        [FieldOffset(0xF88)] public fixed byte m_fAccuracyPenalty[0x4];
        [FieldOffset(0xF8C)] public fixed byte m_flLastAccuracyUpdateTime[0x4];
        [FieldOffset(0xF90)] public fixed byte m_fAccuracySmoothedForZoom[0x4];
        [FieldOffset(0xF94)] public fixed byte m_iRecoilIndex[0x4];
        [FieldOffset(0xF98)] public fixed byte m_flRecoilIndex[0x4];
        [FieldOffset(0xF9C)] public fixed byte m_bBurstMode[0x4];
        [FieldOffset(0xFA0)] public fixed byte m_nPostponeFireReadyTicks[0x4];
        [FieldOffset(0xFA4)] public fixed byte m_flPostponeFireReadyFrac[0x4];
        [FieldOffset(0xFA8)] public fixed byte m_bInReload[0x4];
        [FieldOffset(0xFAC)] public fixed byte m_nDeployTick[0x4];
        [FieldOffset(0xFB0)] public fixed byte m_flAttackHoldStartTime[0x4];
        [FieldOffset(0xFB4)] public fixed byte m_flDroppedAtTime[0x8];
        [FieldOffset(0xFBC)] public fixed byte m_bIsHauledBack[0x1];
        [FieldOffset(0xFBD)] public fixed byte m_bSilencerOn[0x3];
        [FieldOffset(0xFC0)] public fixed byte m_flTimeSilencerSwitchComplete[0x4];
        [FieldOffset(0xFC4)] public fixed byte m_bIsInStealthReload[0x1];
        [FieldOffset(0xFC5)] public fixed byte m_bInSilentReloadSection[0x1];
        [FieldOffset(0xFC6)] public fixed byte m_bSilentReloadStatPending[0x2];
        [FieldOffset(0xFC8)] public fixed byte m_flStealthReloadHoldStartTime[0x4];
        [FieldOffset(0xFCC)] public fixed byte m_bReloadHeldSinceStart[0x4];
        [FieldOffset(0xFD0)] public fixed byte m_flWeaponActionPlaybackRate[0x4];
        [FieldOffset(0xFD4)] public fixed byte m_iOriginalTeamNumber[0x4];
        [FieldOffset(0xFD8)] public fixed byte m_iMostRecentTeamNumber[0x4];
        [FieldOffset(0xFDC)] public fixed byte m_bDroppedNearBuyZone[0x4];
        [FieldOffset(0xFE0)] public fixed byte m_flNextAttackRenderTimeOffset[0x18];
        [FieldOffset(0xFF8)] public fixed byte m_bCanBePickedUp[0x1];
        [FieldOffset(0xFF9)] public fixed byte m_bUseCanOverrideNextOwnerTouchTime[0x3];
        [FieldOffset(0xFFC)] public fixed byte m_nextOwnerTouchTime[0x4];
        [FieldOffset(0x1000)] public fixed byte m_nextPrevOwnerTouchTime[0x8];
        [FieldOffset(0x1008)] public fixed byte m_nextPrevOwnerUseTime[0x4];
        [FieldOffset(0x100C)] public fixed byte m_hPrevOwner[0x4];
        [FieldOffset(0x1010)] public fixed byte m_nDropTick[0x4];
        [FieldOffset(0x1014)] public fixed byte m_bWasActiveWeaponWhenDropped[0x20];
        [FieldOffset(0x1034)] public fixed byte m_donated[0x4];
        [FieldOffset(0x1038)] public fixed byte m_fLastShotTime[0x4];
        [FieldOffset(0x103C)] public fixed byte m_bWasOwnedByCT[0x1];
        [FieldOffset(0x103D)] public fixed byte m_bWasOwnedByTerrorist[0x3];
        [FieldOffset(0x1040)] public fixed byte m_numRemoveUnownedWeaponThink[0x60];
        [FieldOffset(0x10A0)] public fixed byte m_IronSightController[0x18];
        [FieldOffset(0x10B8)] public fixed byte m_iIronSightMode[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_flLastLOSTraceFailureTime[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_flWatTickOffset[0x10];
        [FieldOffset(0x10D0)] public fixed byte m_flLastShakeTime[0x1B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9B8)]
    public unsafe struct CPointClientUIDialog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9B0];
        [FieldOffset(0x9B0)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0x9B4)] public fixed byte m_bStartEnabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CLogicLineToEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_Line[0x28];
        [FieldOffset(0x4D0)] public fixed byte m_SourceName[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_StartEntity[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_EndEntity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CSoundAreaEntitySphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C8];
        [FieldOffset(0x4C8)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct CCSPlayer_ActionTrackingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F8];
        [FieldOffset(0x1F8)] public fixed byte m_hLastWeaponBeforeC4AutoSwitch[0x2C];
        [FieldOffset(0x224)] public fixed byte m_bIsRescuing[0x4];
        [FieldOffset(0x228)] public fixed byte m_weaponPurchasesThisMatch[0x70];
        [FieldOffset(0x298)] public fixed byte m_weaponPurchasesThisRound[0x70];
        [FieldOffset(0x308)] public fixed byte m_weaponCarryOverIntoThisRound[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CBrokenGlassTrap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x870];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D0)]
    public unsafe struct CPhysicalButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x580)]
    public unsafe struct CInfoSpawnGroupLoadUnload {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_OnSpawnGroupLoadStarted[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_OnSpawnGroupLoadFinished[0x18];
        [FieldOffset(0x4D8)] public fixed byte m_OnSpawnGroupUnloadStarted[0x18];
        [FieldOffset(0x4F0)] public fixed byte m_OnSpawnGroupUnloadFinished[0x18];
        [FieldOffset(0x508)] public fixed byte m_iszSpawnGroupName[0x8];
        [FieldOffset(0x510)] public fixed byte m_iszSpawnGroupFilterName[0x8];
        [FieldOffset(0x518)] public fixed byte m_iszLandmarkName[0x8];
        [FieldOffset(0x520)] public fixed byte m_sFixedSpawnGroupName[0x8];
        [FieldOffset(0x528)] public fixed byte m_flTimeoutInterval[0x4];
        [FieldOffset(0x52C)] public fixed byte m_bAutoActivate[0x1];
        [FieldOffset(0x52D)] public fixed byte m_bUnloadingStarted[0x1];
        [FieldOffset(0x52E)] public fixed byte m_bQueueActiveSpawnGroupChange[0x1];
        [FieldOffset(0x52F)] public fixed byte m_bQueueFinishLoading[0x51];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CSoundAreaEntityOrientedBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C8];
        [FieldOffset(0x4C8)] public fixed byte m_vMin[0xC];
        [FieldOffset(0x4D4)] public fixed byte m_vMax[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CCSObserver_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x258];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x170)]
    public unsafe struct CPulseCell_Outflow_ListenForAnimgraphTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_OnStart[0x48];
        [FieldOffset(0x120)] public fixed byte m_OnEnd[0x48];
        [FieldOffset(0x168)] public fixed byte m_TagName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CBodyComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pSceneNode[0x40];
        [FieldOffset(0x48)] public fixed byte __m_pChainEntity[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CPulseCell_Inflow_Method {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0x90)] public fixed byte m_Description[0x8];
        [FieldOffset(0x98)] public fixed byte m_bIsPublic[0x8];
        [FieldOffset(0xA0)] public fixed byte m_Args[0x10];
        [FieldOffset(0xB0)] public fixed byte m_ReturnValues[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CDecoyGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3E8)]
    public unsafe struct CEconItemView {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_iItemDefinitionIndex[0x4];
        [FieldOffset(0x3C)] public fixed byte m_iEntityQuality[0x4];
        [FieldOffset(0x40)] public fixed byte m_iEntityLevel[0x8];
        [FieldOffset(0x48)] public fixed byte m_iItemID[0x8];
        [FieldOffset(0x50)] public fixed byte m_iItemIDHigh[0x4];
        [FieldOffset(0x54)] public fixed byte m_iItemIDLow[0x4];
        [FieldOffset(0x58)] public fixed byte m_iAccountID[0x4];
        [FieldOffset(0x5C)] public fixed byte m_iInventoryPosition[0xC];
        [FieldOffset(0x68)] public fixed byte m_bInitialized[0x8];
        [FieldOffset(0x70)] public fixed byte m_AttributeList[0x78];
        [FieldOffset(0xE8)] public fixed byte m_NetworkedDynamicAttributes[0x78];
        [FieldOffset(0x160)] public fixed byte m_szCustomName[0xA1];
        [FieldOffset(0x201)] public fixed byte m_szCustomNameOverride[0xA1];
        [FieldOffset(0x2A2)] public fixed byte m_szCustomNameOverride2[0xA1];
        [FieldOffset(0x343)] public fixed byte m_szCustomNameOverride3[0xA5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C0)]
    public unsafe struct CIncendiaryGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CBaseDMStart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_Master[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x850)]
    public unsafe struct CBaseModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_CRenderComponent[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_CHitboxComponent[0x18];
        [FieldOffset(0x4C8)] public fixed byte m_pChoreoComponent[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_nDestructiblePartInitialStateDestructed0[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_nDestructiblePartInitialStateDestructed1[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_nDestructiblePartInitialStateDestructed2[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_nDestructiblePartInitialStateDestructed3[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_nDestructiblePartInitialStateDestructed4[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_nDestructiblePartInitialStateDestructed0_PartIndex[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_nDestructiblePartInitialStateDestructed1_PartIndex[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_nDestructiblePartInitialStateDestructed2_PartIndex[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_nDestructiblePartInitialStateDestructed3_PartIndex[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_nDestructiblePartInitialStateDestructed4_PartIndex[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces[0x1];
        [FieldOffset(0x4F9)] public fixed byte m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces[0x1];
        [FieldOffset(0x4FA)] public fixed byte m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces[0x1];
        [FieldOffset(0x4FB)] public fixed byte m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces[0x1];
        [FieldOffset(0x4FC)] public fixed byte m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces[0x4];
        [FieldOffset(0x500)] public fixed byte m_pDestructiblePartsSystemComponent[0x8];
        [FieldOffset(0x508)] public fixed byte m_OnDestructibleHitGroupDamageLevelChanged[0x28];
        [FieldOffset(0x530)] public fixed byte m_flDissolveStartTime[0x8];
        [FieldOffset(0x538)] public fixed byte m_OnIgnite[0x18];
        [FieldOffset(0x550)] public fixed byte m_nRenderMode[0x1];
        [FieldOffset(0x551)] public fixed byte m_nRenderFX[0x1];
        [FieldOffset(0x552)] public fixed byte m_bAllowFadeInView[0x1E];
        [FieldOffset(0x570)] public fixed byte m_clrRender[0x8];
        [FieldOffset(0x578)] public fixed byte m_vecRenderAttributes[0x68];
        [FieldOffset(0x5E0)] public fixed byte m_bRenderToCubemaps[0x1];
        [FieldOffset(0x5E1)] public fixed byte m_bExpandRenderBoundsToIncludeCloth[0x1];
        [FieldOffset(0x5E2)] public fixed byte m_bNoInterpolate[0x6];
        [FieldOffset(0x5E8)] public fixed byte m_Collision[0xB8];
        [FieldOffset(0x6A0)] public fixed byte m_Glow[0x58];
        [FieldOffset(0x6F8)] public fixed byte m_flGlowBackfaceMult[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_fadeMinDist[0x4];
        [FieldOffset(0x700)] public fixed byte m_fadeMaxDist[0x4];
        [FieldOffset(0x704)] public fixed byte m_flFadeScale[0x4];
        [FieldOffset(0x708)] public fixed byte m_flShadowStrength[0x4];
        [FieldOffset(0x70C)] public fixed byte m_nObjectCulling[0x4];
        [FieldOffset(0x710)] public fixed byte m_bodyGroupTotalRequestCount[0x8];
        [FieldOffset(0x718)] public fixed byte m_bodyGroupRequests[0xD8];
        [FieldOffset(0x7F0)] public fixed byte m_bodyGroupChoices[0x28];
        [FieldOffset(0x818)] public fixed byte m_vecViewOffset[0x30];
        [FieldOffset(0x848)] public fixed byte m_bvDisabledHitGroups[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct fogplayerparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hCtrl[0x4];
        [FieldOffset(0xC)] public fixed byte m_flTransitionTime[0x4];
        [FieldOffset(0x10)] public fixed byte m_OldColor[0x4];
        [FieldOffset(0x14)] public fixed byte m_flOldStart[0x4];
        [FieldOffset(0x18)] public fixed byte m_flOldEnd[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flOldMaxDensity[0x4];
        [FieldOffset(0x20)] public fixed byte m_flOldHDRColorScale[0x4];
        [FieldOffset(0x24)] public fixed byte m_flOldFarZ[0x4];
        [FieldOffset(0x28)] public fixed byte m_NewColor[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flNewStart[0x4];
        [FieldOffset(0x30)] public fixed byte m_flNewEnd[0x4];
        [FieldOffset(0x34)] public fixed byte m_flNewMaxDensity[0x4];
        [FieldOffset(0x38)] public fixed byte m_flNewHDRColorScale[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flNewFarZ[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CGlowProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_fGlowColor[0x28];
        [FieldOffset(0x30)] public fixed byte m_iGlowType[0x4];
        [FieldOffset(0x34)] public fixed byte m_iGlowTeam[0x4];
        [FieldOffset(0x38)] public fixed byte m_nGlowRange[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nGlowRangeMin[0x4];
        [FieldOffset(0x40)] public fixed byte m_glowColorOverride[0x4];
        [FieldOffset(0x44)] public fixed byte m_bFlashing[0x4];
        [FieldOffset(0x48)] public fixed byte m_flGlowTime[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flGlowStartTime[0x4];
        [FieldOffset(0x50)] public fixed byte m_bEligibleForScreenHighlight[0x1];
        [FieldOffset(0x51)] public fixed byte m_bGlowing[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x818)]
    public unsafe struct CInstancedSceneEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x800];
        [FieldOffset(0x800)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x804)] public fixed byte m_bHadOwner[0x4];
        [FieldOffset(0x808)] public fixed byte m_flPostSpeakDelay[0x4];
        [FieldOffset(0x80C)] public fixed byte m_flPreDelay[0x4];
        [FieldOffset(0x810)] public fixed byte m_bIsBackground[0x4];
        [FieldOffset(0x814)] public fixed byte m_hTarget[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F8)]
    public unsafe struct CCitadelSoundOpvarSetOBB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszStackName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszOperatorName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszOpvarName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_vDistanceInnerMins[0xC];
        [FieldOffset(0x4CC)] public fixed byte m_vDistanceInnerMaxs[0xC];
        [FieldOffset(0x4D8)] public fixed byte m_vDistanceOuterMins[0xC];
        [FieldOffset(0x4E4)] public fixed byte m_vDistanceOuterMaxs[0xC];
        [FieldOffset(0x4F0)] public fixed byte m_nAABBDirection[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CSoundEventParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_iszParamName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_flFloatValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_WaterServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct CPulseCell_BooleanSwitchState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_WhenTrue[0x48];
        [FieldOffset(0x1B0)] public fixed byte m_WhenFalse[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D0)]
    public unsafe struct CRotButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CEnvViewPunch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_angViewPunch[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CDamageRecord {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_PlayerDamager[0x4];
        [FieldOffset(0x34)] public fixed byte m_PlayerRecipient[0x4];
        [FieldOffset(0x38)] public fixed byte m_hPlayerControllerDamager[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hPlayerControllerRecipient[0x4];
        [FieldOffset(0x40)] public fixed byte m_szPlayerDamagerName[0x8];
        [FieldOffset(0x48)] public fixed byte m_szPlayerRecipientName[0x8];
        [FieldOffset(0x50)] public fixed byte m_DamagerXuid[0x8];
        [FieldOffset(0x58)] public fixed byte m_RecipientXuid[0x8];
        [FieldOffset(0x60)] public fixed byte m_flBulletsDamage[0x4];
        [FieldOffset(0x64)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x68)] public fixed byte m_flActualHealthRemoved[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iNumHits[0x4];
        [FieldOffset(0x70)] public fixed byte m_iLastBulletUpdate[0x4];
        [FieldOffset(0x74)] public fixed byte m_bIsOtherEnemy[0x1];
        [FieldOffset(0x75)] public fixed byte m_killType[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VPhysicsCollisionAttribute_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nInteractsAs[0x8];
        [FieldOffset(0x10)] public fixed byte m_nInteractsWith[0x8];
        [FieldOffset(0x18)] public fixed byte m_nInteractsExclude[0x8];
        [FieldOffset(0x20)] public fixed byte m_nEntityId[0x4];
        [FieldOffset(0x24)] public fixed byte m_nOwnerId[0x4];
        [FieldOffset(0x28)] public fixed byte m_nHierarchyId[0x2];
        [FieldOffset(0x2A)] public fixed byte m_nDetailLayerMask[0x2];
        [FieldOffset(0x2C)] public fixed byte m_nDetailLayerMaskType[0x1];
        [FieldOffset(0x2D)] public fixed byte m_nTargetDetailLayer[0x1];
        [FieldOffset(0x2E)] public fixed byte m_nCollisionGroup[0x1];
        [FieldOffset(0x2F)] public fixed byte m_nCollisionFunctionMask[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAE0)]
    public unsafe struct CItemKevlar {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x980)]
    public unsafe struct CFuncShatterglass {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_matPanelTransform[0x30];
        [FieldOffset(0x880)] public fixed byte m_matPanelTransformWsTemp[0x30];
        [FieldOffset(0x8B0)] public fixed byte m_vecShatterGlassShards[0x18];
        [FieldOffset(0x8C8)] public fixed byte m_PanelSize[0x8];
        [FieldOffset(0x8D0)] public fixed byte m_flLastShatterSoundEmitTime[0x4];
        [FieldOffset(0x8D4)] public fixed byte m_flLastCleanupTime[0x4];
        [FieldOffset(0x8D8)] public fixed byte m_flInitAtTime[0x4];
        [FieldOffset(0x8DC)] public fixed byte m_flGlassThickness[0x4];
        [FieldOffset(0x8E0)] public fixed byte m_flSpawnInvulnerability[0x4];
        [FieldOffset(0x8E4)] public fixed byte m_bBreakSilent[0x1];
        [FieldOffset(0x8E5)] public fixed byte m_bBreakShardless[0x1];
        [FieldOffset(0x8E6)] public fixed byte m_bBroken[0x1];
        [FieldOffset(0x8E7)] public fixed byte m_bGlassNavIgnore[0x1];
        [FieldOffset(0x8E8)] public fixed byte m_bGlassInFrame[0x1];
        [FieldOffset(0x8E9)] public fixed byte m_bStartBroken[0x1];
        [FieldOffset(0x8EA)] public fixed byte m_iInitialDamageType[0x6];
        [FieldOffset(0x8F0)] public fixed byte m_szDamagePositioningEntityName01[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_szDamagePositioningEntityName02[0x8];
        [FieldOffset(0x900)] public fixed byte m_szDamagePositioningEntityName03[0x8];
        [FieldOffset(0x908)] public fixed byte m_szDamagePositioningEntityName04[0x8];
        [FieldOffset(0x910)] public fixed byte m_vInitialDamagePositions[0x18];
        [FieldOffset(0x928)] public fixed byte m_vExtraDamagePositions[0x18];
        [FieldOffset(0x940)] public fixed byte m_vInitialPanelVertices[0x18];
        [FieldOffset(0x958)] public fixed byte m_OnBroken[0x18];
        [FieldOffset(0x970)] public fixed byte m_iSurfaceType[0x8];
        [FieldOffset(0x978)] public fixed byte m_hMaterialDamageBase[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CNavWalkable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFA0)]
    public unsafe struct CPlantedC4 {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA98];
        [FieldOffset(0xA98)] public fixed byte m_bBombTicking[0x4];
        [FieldOffset(0xA9C)] public fixed byte m_flC4Blow[0x4];
        [FieldOffset(0xAA0)] public fixed byte m_nBombSite[0x4];
        [FieldOffset(0xAA4)] public fixed byte m_nSourceSoundscapeHash[0x4];
        [FieldOffset(0xAA8)] public fixed byte m_bAbortDetonationBecauseWorldIsFrozen[0x8];
        [FieldOffset(0xAB0)] public fixed byte m_AttributeManager[0x438];
        [FieldOffset(0xEE8)] public fixed byte m_OnBombDefused[0x18];
        [FieldOffset(0xF00)] public fixed byte m_OnBombBeginDefuse[0x18];
        [FieldOffset(0xF18)] public fixed byte m_OnBombDefuseAborted[0x18];
        [FieldOffset(0xF30)] public fixed byte m_bCannotBeDefused[0x8];
        [FieldOffset(0xF38)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0xF50)] public fixed byte m_nSpotRules[0x4];
        [FieldOffset(0xF54)] public fixed byte m_bHasExploded[0x1];
        [FieldOffset(0xF55)] public fixed byte m_bBombDefused[0x1];
        [FieldOffset(0xF56)] public fixed byte m_bTrainingPlacedByPlayer[0x2];
        [FieldOffset(0xF58)] public fixed byte m_flTimerLength[0x4];
        [FieldOffset(0xF5C)] public fixed byte m_bBeingDefused[0x8];
        [FieldOffset(0xF64)] public fixed byte m_fLastDefuseTime[0x8];
        [FieldOffset(0xF6C)] public fixed byte m_flDefuseLength[0x4];
        [FieldOffset(0xF70)] public fixed byte m_flDefuseCountDown[0x4];
        [FieldOffset(0xF74)] public fixed byte m_hBombDefuser[0x4];
        [FieldOffset(0xF78)] public fixed byte m_iProgressBarTime[0x4];
        [FieldOffset(0xF7C)] public fixed byte m_bVoiceAlertFired[0x1];
        [FieldOffset(0xF7D)] public fixed byte m_bVoiceAlertPlayed[0x7];
        [FieldOffset(0xF84)] public fixed byte m_flNextBotBeepTime[0x8];
        [FieldOffset(0xF8C)] public fixed byte m_angCatchUpToPlayerEye[0xC];
        [FieldOffset(0xF98)] public fixed byte m_flLastSpinDetectionTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x540];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct CVoteController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iActiveIssueIndex[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_iOnlyTeamToVote[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_nVoteOptionCount[0x14];
        [FieldOffset(0x4C4)] public fixed byte m_nPotentialVotes[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_bIsYesNoVote[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_acceptingVotesTimer[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_executeCommandTimer[0x18];
        [FieldOffset(0x500)] public fixed byte m_resetVoteTimer[0x18];
        [FieldOffset(0x518)] public fixed byte m_nVotesCast[0x100];
        [FieldOffset(0x618)] public fixed byte m_playerHoldingVote[0x4];
        [FieldOffset(0x61C)] public fixed byte m_playerOverrideForVote[0x4];
        [FieldOffset(0x620)] public fixed byte m_nHighestCountIndex[0x8];
        [FieldOffset(0x628)] public fixed byte m_potentialIssues[0x18];
        [FieldOffset(0x640)] public fixed byte m_VoteOptions[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Yield {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_UnyieldResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CPhysImpact {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_damage[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_distance[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_directionEntityName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CBaseEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_CBodyComponent[0x8];
        [FieldOffset(0x38)] public fixed byte m_NetworkTransmitComponent[0x210];
        [FieldOffset(0x248)] public fixed byte m_aThinkFunctions[0x18];
        [FieldOffset(0x260)] public fixed byte m_iCurrentThinkContext[0x4];
        [FieldOffset(0x264)] public fixed byte m_nLastThinkTick[0x4];
        [FieldOffset(0x268)] public fixed byte m_bDisabledContextThinks[0x10];
        [FieldOffset(0x278)] public fixed byte m_isSteadyState[0x8];
        [FieldOffset(0x280)] public fixed byte m_lastNetworkChange[0x8];
        [FieldOffset(0x288)] public fixed byte m_think[0x8];
        [FieldOffset(0x290)] public fixed byte m_ResponseContexts[0x18];
        [FieldOffset(0x2A8)] public fixed byte m_iszResponseContext[0x8];
        [FieldOffset(0x2B0)] public fixed byte m_pfnTouch[0x8];
        [FieldOffset(0x2B8)] public fixed byte m_pfnUse[0x8];
        [FieldOffset(0x2C0)] public fixed byte m_pfnBlocked[0x8];
        [FieldOffset(0x2C8)] public fixed byte m_pfnMoveDone[0x8];
        [FieldOffset(0x2D0)] public fixed byte m_iHealth[0x4];
        [FieldOffset(0x2D4)] public fixed byte m_iMaxHealth[0x4];
        [FieldOffset(0x2D8)] public fixed byte m_lifeState[0x4];
        [FieldOffset(0x2DC)] public fixed byte m_flDamageAccumulator[0x4];
        [FieldOffset(0x2E0)] public fixed byte m_bTakesDamage[0x8];
        [FieldOffset(0x2E8)] public fixed byte m_nTakeDamageFlags[0x8];
        [FieldOffset(0x2F0)] public fixed byte m_nPlatformType[0x2];
        [FieldOffset(0x2F2)] public fixed byte m_MoveCollide[0x1];
        [FieldOffset(0x2F3)] public fixed byte m_MoveType[0x1];
        [FieldOffset(0x2F4)] public fixed byte m_nPreviouslySetMoveType[0x1];
        [FieldOffset(0x2F5)] public fixed byte m_nActualMoveType[0x1];
        [FieldOffset(0x2F6)] public fixed byte m_nWaterTouch[0x1];
        [FieldOffset(0x2F7)] public fixed byte m_nSlimeTouch[0x1];
        [FieldOffset(0x2F8)] public fixed byte m_bRestoreInHierarchy[0x8];
        [FieldOffset(0x300)] public fixed byte m_target[0x8];
        [FieldOffset(0x308)] public fixed byte m_hDamageFilter[0x8];
        [FieldOffset(0x310)] public fixed byte m_iszDamageFilterName[0x8];
        [FieldOffset(0x318)] public fixed byte m_flMoveDoneTime[0x4];
        [FieldOffset(0x31C)] public fixed byte m_nSubclassID[0xC];
        [FieldOffset(0x328)] public fixed byte m_flAnimTime[0x4];
        [FieldOffset(0x32C)] public fixed byte m_flSimulationTime[0x4];
        [FieldOffset(0x330)] public fixed byte m_flCreateTime[0x4];
        [FieldOffset(0x334)] public fixed byte m_bClientSideRagdoll[0x1];
        [FieldOffset(0x335)] public fixed byte m_ubInterpolationFrame[0x3];
        [FieldOffset(0x338)] public fixed byte m_vPrevVPhysicsUpdatePos[0xC];
        [FieldOffset(0x344)] public fixed byte m_iTeamNum[0x4];
        [FieldOffset(0x348)] public fixed byte m_iGlobalname[0x8];
        [FieldOffset(0x350)] public fixed byte m_iSentToClients[0x8];
        [FieldOffset(0x358)] public fixed byte m_sUniqueHammerID[0x8];
        [FieldOffset(0x360)] public fixed byte m_spawnflags[0x4];
        [FieldOffset(0x364)] public fixed byte m_nNextThinkTick[0x4];
        [FieldOffset(0x368)] public fixed byte m_nSimulationTick[0x8];
        [FieldOffset(0x370)] public fixed byte m_OnKilled[0x18];
        [FieldOffset(0x388)] public fixed byte m_fFlags[0x4];
        [FieldOffset(0x38C)] public fixed byte m_vecAbsVelocity[0xC];
        [FieldOffset(0x398)] public fixed byte m_vecVelocity[0x30];
        [FieldOffset(0x3C8)] public fixed byte m_vecBaseVelocity[0xC];
        [FieldOffset(0x3D4)] public fixed byte m_nPushEnumCount[0x4];
        [FieldOffset(0x3D8)] public fixed byte m_pCollision[0x8];
        [FieldOffset(0x3E0)] public fixed byte m_hEffectEntity[0x4];
        [FieldOffset(0x3E4)] public fixed byte m_hOwnerEntity[0x4];
        [FieldOffset(0x3E8)] public fixed byte m_fEffects[0x4];
        [FieldOffset(0x3EC)] public fixed byte m_hGroundEntity[0x4];
        [FieldOffset(0x3F0)] public fixed byte m_nGroundBodyIndex[0x4];
        [FieldOffset(0x3F4)] public fixed byte m_flFriction[0x4];
        [FieldOffset(0x3F8)] public fixed byte m_flElasticity[0x4];
        [FieldOffset(0x3FC)] public fixed byte m_flGravityScale[0x4];
        [FieldOffset(0x400)] public fixed byte m_flTimeScale[0x4];
        [FieldOffset(0x404)] public fixed byte m_flWaterLevel[0x4];
        [FieldOffset(0x408)] public fixed byte m_bGravityDisabled[0x1];
        [FieldOffset(0x409)] public fixed byte m_bAnimatedEveryTick[0x3];
        [FieldOffset(0x40C)] public fixed byte m_flActualGravityScale[0x4];
        [FieldOffset(0x410)] public fixed byte m_bGravityActuallyDisabled[0x1];
        [FieldOffset(0x411)] public fixed byte m_bDisableLowViolence[0x1];
        [FieldOffset(0x412)] public fixed byte m_nWaterType[0x2];
        [FieldOffset(0x414)] public fixed byte m_iEFlags[0x4];
        [FieldOffset(0x418)] public fixed byte m_OnUser1[0x18];
        [FieldOffset(0x430)] public fixed byte m_OnUser2[0x18];
        [FieldOffset(0x448)] public fixed byte m_OnUser3[0x18];
        [FieldOffset(0x460)] public fixed byte m_OnUser4[0x18];
        [FieldOffset(0x478)] public fixed byte m_iInitialTeamNum[0x4];
        [FieldOffset(0x47C)] public fixed byte m_flNavIgnoreUntilTime[0x4];
        [FieldOffset(0x480)] public fixed byte m_vecAngVelocity[0xC];
        [FieldOffset(0x48C)] public fixed byte m_bNetworkQuantizeOriginAndAngles[0x1];
        [FieldOffset(0x48D)] public fixed byte m_bLagCompensate[0x3];
        [FieldOffset(0x490)] public fixed byte m_pBlocker[0x4];
        [FieldOffset(0x494)] public fixed byte m_flLocalTime[0x4];
        [FieldOffset(0x498)] public fixed byte m_flVPhysicsUpdateLocalTime[0x4];
        [FieldOffset(0x49C)] public fixed byte m_nBloodType[0x4];
        [FieldOffset(0x4A0)] public fixed byte m_pPulseGraphInstance[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_ApplyAnimGraphParam {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_value[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CGameSceneNodeHandle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0xC)] public fixed byte m_name[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8B8)]
    public unsafe struct CMarkupVolumeWithRef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x898];
        [FieldOffset(0x898)] public fixed byte m_bUseRef[0x4];
        [FieldOffset(0x89C)] public fixed byte m_vRefPosEntitySpace[0xC];
        [FieldOffset(0x8A8)] public fixed byte m_vRefPosWorldSpace[0xC];
        [FieldOffset(0x8B4)] public fixed byte m_flRefDot[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_TeamSelectCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Unknown {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_UnknownKeys[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x920)]
    public unsafe struct CFuncPlatRot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x908];
        [FieldOffset(0x908)] public fixed byte m_end[0xC];
        [FieldOffset(0x914)] public fixed byte m_start[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CRagdollMagnet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_radius[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_force[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_axis[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoInstructorHintTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyEntityFlags {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CSpriteAlias_env_glow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14D8)]
    public unsafe struct CFireCrackerBlast {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CSpotlightEnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_flLightScale[0x4];
        [FieldOffset(0x854)] public fixed byte m_Radius[0x4];
        [FieldOffset(0x858)] public fixed byte m_vSpotlightDir[0xC];
        [FieldOffset(0x864)] public fixed byte m_vSpotlightOrg[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8B0)]
    public unsafe struct CEnvSky {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_hSkyMaterial[0x8];
        [FieldOffset(0x858)] public fixed byte m_hSkyMaterialLightingOnly[0x8];
        [FieldOffset(0x860)] public fixed byte m_bStartDisabled[0x4];
        [FieldOffset(0x864)] public fixed byte m_vTintColor[0x4];
        [FieldOffset(0x868)] public fixed byte m_vTintColorLightingOnly[0x4];
        [FieldOffset(0x86C)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x870)] public fixed byte m_nFogType[0x4];
        [FieldOffset(0x874)] public fixed byte m_flFogMinStart[0x4];
        [FieldOffset(0x878)] public fixed byte m_flFogMinEnd[0x4];
        [FieldOffset(0x87C)] public fixed byte m_flFogMaxStart[0x4];
        [FieldOffset(0x880)] public fixed byte m_flFogMaxEnd[0x4];
        [FieldOffset(0x884)] public fixed byte m_bEnabled[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoSpawnGroupLandmark {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x548)]
    public unsafe struct CPointAngleSensor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_nLookAtName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hTargetEntity[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_hLookAtEntity[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flDotTolerance[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flFacingTime[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_bFired[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_OnFacingLookat[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_OnNotFacingLookat[0x18];
        [FieldOffset(0x500)] public fixed byte m_TargetDir[0x28];
        [FieldOffset(0x528)] public fixed byte m_FacingPercentage[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CSPerRoundStats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_iKills[0x4];
        [FieldOffset(0x34)] public fixed byte m_iDeaths[0x4];
        [FieldOffset(0x38)] public fixed byte m_iAssists[0x4];
        [FieldOffset(0x3C)] public fixed byte m_iDamage[0x4];
        [FieldOffset(0x40)] public fixed byte m_iEquipmentValue[0x4];
        [FieldOffset(0x44)] public fixed byte m_iMoneySaved[0x4];
        [FieldOffset(0x48)] public fixed byte m_iKillReward[0x4];
        [FieldOffset(0x4C)] public fixed byte m_iLiveTime[0x4];
        [FieldOffset(0x50)] public fixed byte m_iHeadShotKills[0x4];
        [FieldOffset(0x54)] public fixed byte m_iObjective[0x4];
        [FieldOffset(0x58)] public fixed byte m_iCashEarned[0x4];
        [FieldOffset(0x5C)] public fixed byte m_iUtilityDamage[0x4];
        [FieldOffset(0x60)] public fixed byte m_iEnemiesFlashed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct CGenericConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x510];
        [FieldOffset(0x510)] public fixed byte m_bPlaceAnchorsAtConstraintTransform[0x4];
        [FieldOffset(0x514)] public fixed byte m_nLinearMotionX[0x4];
        [FieldOffset(0x518)] public fixed byte m_nLinearMotionY[0x4];
        [FieldOffset(0x51C)] public fixed byte m_nLinearMotionZ[0x4];
        [FieldOffset(0x520)] public fixed byte m_flLinearFrequencyX[0x4];
        [FieldOffset(0x524)] public fixed byte m_flLinearFrequencyY[0x4];
        [FieldOffset(0x528)] public fixed byte m_flLinearFrequencyZ[0x4];
        [FieldOffset(0x52C)] public fixed byte m_flLinearDampingRatioX[0x4];
        [FieldOffset(0x530)] public fixed byte m_flLinearDampingRatioY[0x4];
        [FieldOffset(0x534)] public fixed byte m_flLinearDampingRatioZ[0x4];
        [FieldOffset(0x538)] public fixed byte m_flMaxLinearImpulseX[0x4];
        [FieldOffset(0x53C)] public fixed byte m_flMaxLinearImpulseY[0x4];
        [FieldOffset(0x540)] public fixed byte m_flMaxLinearImpulseZ[0x4];
        [FieldOffset(0x544)] public fixed byte m_flBreakAfterTimeX[0x4];
        [FieldOffset(0x548)] public fixed byte m_flBreakAfterTimeY[0x4];
        [FieldOffset(0x54C)] public fixed byte m_flBreakAfterTimeZ[0x4];
        [FieldOffset(0x550)] public fixed byte m_flBreakAfterTimeStartTimeX[0x4];
        [FieldOffset(0x554)] public fixed byte m_flBreakAfterTimeStartTimeY[0x4];
        [FieldOffset(0x558)] public fixed byte m_flBreakAfterTimeStartTimeZ[0x4];
        [FieldOffset(0x55C)] public fixed byte m_flBreakAfterTimeThresholdX[0x4];
        [FieldOffset(0x560)] public fixed byte m_flBreakAfterTimeThresholdY[0x4];
        [FieldOffset(0x564)] public fixed byte m_flBreakAfterTimeThresholdZ[0x4];
        [FieldOffset(0x568)] public fixed byte m_flNotifyForceX[0x4];
        [FieldOffset(0x56C)] public fixed byte m_flNotifyForceY[0x4];
        [FieldOffset(0x570)] public fixed byte m_flNotifyForceZ[0x4];
        [FieldOffset(0x574)] public fixed byte m_flNotifyForceMinTimeX[0x4];
        [FieldOffset(0x578)] public fixed byte m_flNotifyForceMinTimeY[0x4];
        [FieldOffset(0x57C)] public fixed byte m_flNotifyForceMinTimeZ[0x4];
        [FieldOffset(0x580)] public fixed byte m_flNotifyForceLastTimeX[0x4];
        [FieldOffset(0x584)] public fixed byte m_flNotifyForceLastTimeY[0x4];
        [FieldOffset(0x588)] public fixed byte m_flNotifyForceLastTimeZ[0x4];
        [FieldOffset(0x58C)] public fixed byte m_bAxisNotifiedX[0x1];
        [FieldOffset(0x58D)] public fixed byte m_bAxisNotifiedY[0x1];
        [FieldOffset(0x58E)] public fixed byte m_bAxisNotifiedZ[0x2];
        [FieldOffset(0x590)] public fixed byte m_nAngularMotionX[0x4];
        [FieldOffset(0x594)] public fixed byte m_nAngularMotionY[0x4];
        [FieldOffset(0x598)] public fixed byte m_nAngularMotionZ[0x4];
        [FieldOffset(0x59C)] public fixed byte m_flAngularFrequencyX[0x4];
        [FieldOffset(0x5A0)] public fixed byte m_flAngularFrequencyY[0x4];
        [FieldOffset(0x5A4)] public fixed byte m_flAngularFrequencyZ[0x4];
        [FieldOffset(0x5A8)] public fixed byte m_flAngularDampingRatioX[0x4];
        [FieldOffset(0x5AC)] public fixed byte m_flAngularDampingRatioY[0x4];
        [FieldOffset(0x5B0)] public fixed byte m_flAngularDampingRatioZ[0x4];
        [FieldOffset(0x5B4)] public fixed byte m_flMaxAngularImpulseX[0x4];
        [FieldOffset(0x5B8)] public fixed byte m_flMaxAngularImpulseY[0x4];
        [FieldOffset(0x5BC)] public fixed byte m_flMaxAngularImpulseZ[0x4];
        [FieldOffset(0x5C0)] public fixed byte m_NotifyForceReachedX[0x18];
        [FieldOffset(0x5D8)] public fixed byte m_NotifyForceReachedY[0x18];
        [FieldOffset(0x5F0)] public fixed byte m_NotifyForceReachedZ[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_PublicOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_OutputIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x918)]
    public unsafe struct CEnvLaser {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8F0];
        [FieldOffset(0x8F0)] public fixed byte m_iszLaserTarget[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_pSprite[0x8];
        [FieldOffset(0x900)] public fixed byte m_iszSpriteName[0x8];
        [FieldOffset(0x908)] public fixed byte m_firePosition[0xC];
        [FieldOffset(0x914)] public fixed byte m_flStartFrame[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CSoundOpvarSetEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_iszStackName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_iszOperatorName[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_iszOpvarName[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_nOpvarType[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_nOpvarIndex[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_flOpvarValue[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_OpvarValueString[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_bSetOnSpawn[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CEnvBeverage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_CanInDispenser[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_nBeverageType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct CPhysMotor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nameAttach[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_nameAnchor[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hAttachedObject[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_hAnchorObject[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_spinUp[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_spinDown[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flMotorFriction[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_additionalAcceleration[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_angularAcceleration[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flTorqueScale[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_flTargetSpeed[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_flSpeedWhenSpinUpOrSpinDownStarted[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_pFixedWorldBody[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_pMotorJoint[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_motor[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CLogicGameEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszEventName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD10)]
    public unsafe struct CPhysicsPropMultiplayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct CPhysExplosion {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bExplodeOnSpawn[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flMagnitude[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_radius[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_targetEntityName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_ignoreEntityName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_flInnerRadius[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_flPushScale[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_bConvertToDebrisWhenPossible[0x1];
        [FieldOffset(0x4D1)] public fixed byte m_bAffectInvulnerableEnts[0x1];
        [FieldOffset(0x4D2)] public fixed byte m_bDisablePushClamp[0x6];
        [FieldOffset(0x4D8)] public fixed byte m_OnPushedPlayer[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5B8)]
    public unsafe struct CSplineConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x558];
        [FieldOffset(0x558)] public fixed byte m_vAnchorOffsetRestore[0xC];
        [FieldOffset(0x564)] public fixed byte m_hSplineEntity[0x4];
        [FieldOffset(0x568)] public fixed byte m_pSplineBody[0x8];
        [FieldOffset(0x570)] public fixed byte m_bEnableLateralConstraint[0x1];
        [FieldOffset(0x571)] public fixed byte m_bEnableVerticalConstraint[0x1];
        [FieldOffset(0x572)] public fixed byte m_bEnableAngularConstraint[0x1];
        [FieldOffset(0x573)] public fixed byte m_bEnableLimit[0x1];
        [FieldOffset(0x574)] public fixed byte m_bFireEventsOnPath[0x4];
        [FieldOffset(0x578)] public fixed byte m_flLinearFrequency[0x4];
        [FieldOffset(0x57C)] public fixed byte m_flLinarDampingRatio[0x4];
        [FieldOffset(0x580)] public fixed byte m_flJointFriction[0x4];
        [FieldOffset(0x584)] public fixed byte m_flTransitionTime[0x14];
        [FieldOffset(0x598)] public fixed byte m_vPreSolveAnchorPos[0xC];
        [FieldOffset(0x5A4)] public fixed byte m_StartTransitionTime[0x4];
        [FieldOffset(0x5A8)] public fixed byte m_vTangentSpaceAnchorAtTransitionStart[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct CLogicCompare {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flInValue[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flCompareValue[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_OnLessThan[0x20];
        [FieldOffset(0x4D0)] public fixed byte m_OnEqualTo[0x20];
        [FieldOffset(0x4F0)] public fixed byte m_OnNotEqualTo[0x20];
        [FieldOffset(0x510)] public fixed byte m_OnGreaterThan[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct CSoundEventBoxEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5A0];
        [FieldOffset(0x5A0)] public fixed byte m_iszBoxEntities[0x98];
        [FieldOffset(0x638)] public fixed byte m_vecBoxHelpersNetworked[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CCSGameModeRules_Noop {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_BlackboardReference {
        [FieldOffset(0x0)] public fixed byte m_hBlackboardResource[0x8];
        [FieldOffset(0x8)] public fixed byte m_BlackboardResource[0x10];
        [FieldOffset(0x18)] public fixed byte m_nNodeID[0x8];
        [FieldOffset(0x20)] public fixed byte m_NodeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x990)]
    public unsafe struct CFuncTankTrain {
        [FieldOffset(0x0)] public fixed byte pad_0[0x978];
        [FieldOffset(0x978)] public fixed byte m_OnDeath[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA10)]
    public unsafe struct CPointClientUIWorldPanel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9B0];
        [FieldOffset(0x9B0)] public fixed byte m_bIgnoreInput[0x1];
        [FieldOffset(0x9B1)] public fixed byte m_bLit[0x1];
        [FieldOffset(0x9B2)] public fixed byte m_bFollowPlayerAcrossTeleport[0x2];
        [FieldOffset(0x9B4)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x9B8)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x9BC)] public fixed byte m_flDPI[0x4];
        [FieldOffset(0x9C0)] public fixed byte m_flWindowUIScale[0x4];
        [FieldOffset(0x9C4)] public fixed byte m_flInteractDistance[0x4];
        [FieldOffset(0x9C8)] public fixed byte m_flDepthOffset[0x4];
        [FieldOffset(0x9CC)] public fixed byte m_unOwnerContext[0x4];
        [FieldOffset(0x9D0)] public fixed byte m_unHorizontalAlign[0x4];
        [FieldOffset(0x9D4)] public fixed byte m_unVerticalAlign[0x4];
        [FieldOffset(0x9D8)] public fixed byte m_unOrientation[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_bAllowInteractionFromAllSceneWorlds[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_vecCSSClasses[0x18];
        [FieldOffset(0x9F8)] public fixed byte m_bOpaque[0x1];
        [FieldOffset(0x9F9)] public fixed byte m_bNoDepth[0x1];
        [FieldOffset(0x9FA)] public fixed byte m_bVisibleWhenParentNoDraw[0x1];
        [FieldOffset(0x9FB)] public fixed byte m_bRenderBackface[0x1];
        [FieldOffset(0x9FC)] public fixed byte m_bUseOffScreenIndicator[0x1];
        [FieldOffset(0x9FD)] public fixed byte m_bExcludeFromSaveGames[0x1];
        [FieldOffset(0x9FE)] public fixed byte m_bGrabbable[0x1];
        [FieldOffset(0x9FF)] public fixed byte m_bOnlyRenderToTexture[0x1];
        [FieldOffset(0xA00)] public fixed byte m_bDisableMipGen[0x4];
        [FieldOffset(0xA04)] public fixed byte m_nExplicitImageLayout[0x4];
        [FieldOffset(0xA08)] public fixed byte m_bIgnoreParentOrientation[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CSoundEventBoxHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_vMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x570)]
    public unsafe struct CSoundEventSphereEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
        [FieldOffset(0x568)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_RushIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ReturnValues {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CCSPlayerController_InGameMoneyServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_bReceivesMoneyNextRound[0x4];
        [FieldOffset(0x44)] public fixed byte m_iMoneyEarnedForNextRound[0x4];
        [FieldOffset(0x48)] public fixed byte m_iAccount[0x4];
        [FieldOffset(0x4C)] public fixed byte m_iStartAccount[0x4];
        [FieldOffset(0x50)] public fixed byte m_iTotalCashSpent[0x4];
        [FieldOffset(0x54)] public fixed byte m_iCashSpentThisRound[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct CCSPlayer_AimPunchServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_predictableBaseTick[0x4];
        [FieldOffset(0x4C)] public fixed byte m_predictableBaseTickInterpAmount[0x4];
        [FieldOffset(0x50)] public fixed byte m_predictableBaseAngle[0xC];
        [FieldOffset(0x5C)] public fixed byte m_predictableBaseAngleVel[0x44];
        [FieldOffset(0xA0)] public fixed byte m_unpredictableBaseTick[0x4];
        [FieldOffset(0xA4)] public fixed byte m_unpredictableBaseAngle[0x44];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CRuleBrushEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xEA8)]
    public unsafe struct CMapVetoPickController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bPlayedIntroVcd[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bNeedToPlayFiveSecondsRemaining[0x1F];
        [FieldOffset(0x4C8)] public fixed byte m_dblPreMatchDraftSequenceTime[0x8];
        [FieldOffset(0x4D0)] public fixed byte m_bPreMatchDraftStateChanged[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_nDraftType[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_nTeamWinningCoinToss[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_nTeamWithFirstChoice[0x100];
        [FieldOffset(0x5DC)] public fixed byte m_nVoteMapIdsList[0x1C];
        [FieldOffset(0x5F8)] public fixed byte m_nAccountIDs[0x100];
        [FieldOffset(0x6F8)] public fixed byte m_nMapId0[0x100];
        [FieldOffset(0x7F8)] public fixed byte m_nMapId1[0x100];
        [FieldOffset(0x8F8)] public fixed byte m_nMapId2[0x100];
        [FieldOffset(0x9F8)] public fixed byte m_nMapId3[0x100];
        [FieldOffset(0xAF8)] public fixed byte m_nMapId4[0x100];
        [FieldOffset(0xBF8)] public fixed byte m_nMapId5[0x100];
        [FieldOffset(0xCF8)] public fixed byte m_nStartingSide0[0x100];
        [FieldOffset(0xDF8)] public fixed byte m_nCurrentPhase[0x4];
        [FieldOffset(0xDFC)] public fixed byte m_nPhaseStartTick[0x4];
        [FieldOffset(0xE00)] public fixed byte m_nPhaseDurationTicks[0x8];
        [FieldOffset(0xE08)] public fixed byte m_OnMapVetoed[0x20];
        [FieldOffset(0xE28)] public fixed byte m_OnMapPicked[0x20];
        [FieldOffset(0xE48)] public fixed byte m_OnSidesPicked[0x20];
        [FieldOffset(0xE68)] public fixed byte m_OnNewPhaseStarted[0x20];
        [FieldOffset(0xE88)] public fixed byte m_OnLevelTransition[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CFuncPropRespawnZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iFilterModel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponP90 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CNavSpaceInfo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5D0)]
    public unsafe struct CPhysSlideConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x510];
        [FieldOffset(0x510)] public fixed byte m_axisEnd[0xC];
        [FieldOffset(0x51C)] public fixed byte m_slideFriction[0x4];
        [FieldOffset(0x520)] public fixed byte m_systemLoadScale[0x4];
        [FieldOffset(0x524)] public fixed byte m_initialOffset[0x4];
        [FieldOffset(0x528)] public fixed byte m_bEnableLinearConstraint[0x1];
        [FieldOffset(0x529)] public fixed byte m_bEnableAngularConstraint[0x3];
        [FieldOffset(0x52C)] public fixed byte m_flMotorFrequency[0x4];
        [FieldOffset(0x530)] public fixed byte m_flMotorDampingRatio[0x4];
        [FieldOffset(0x534)] public fixed byte m_bUseEntityPivot[0x4];
        [FieldOffset(0x538)] public fixed byte m_soundInfo[0x98];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CPulseGameBlackboard {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_strGraphName[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_strStateBlob[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x568)]
    public unsafe struct CSoundEventEntityAlias_snd_event_point {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CChoreoComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
        [FieldOffset(0x30)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x34)] public fixed byte m_nExernalChoreoGraphCount[0x4];
        [FieldOffset(0x38)] public fixed byte m_sActiveExternalChoreoGraphSlotID[0x38];
        [FieldOffset(0x70)] public fixed byte m_nNextSceneEventId[0x4];
        [FieldOffset(0x74)] public fixed byte m_flAllowResponsesEndTime[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CPointGamestatsCounter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_strStatisticName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_bDisabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x888)]
    public unsafe struct CTextureBasedAnimatable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bLoop[0x4];
        [FieldOffset(0x854)] public fixed byte m_flFPS[0x4];
        [FieldOffset(0x858)] public fixed byte m_hPositionKeys[0x8];
        [FieldOffset(0x860)] public fixed byte m_hRotationKeys[0x8];
        [FieldOffset(0x868)] public fixed byte m_vAnimationBoundsMin[0xC];
        [FieldOffset(0x874)] public fixed byte m_vAnimationBoundsMax[0xC];
        [FieldOffset(0x880)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x884)] public fixed byte m_flStartFrame[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct CSprite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_hSpriteMaterial[0x8];
        [FieldOffset(0x858)] public fixed byte m_hAttachedToEntity[0x4];
        [FieldOffset(0x85C)] public fixed byte m_nAttachment[0x4];
        [FieldOffset(0x860)] public fixed byte m_flSpriteFramerate[0x4];
        [FieldOffset(0x864)] public fixed byte m_flFrame[0x4];
        [FieldOffset(0x868)] public fixed byte m_flDieTime[0x10];
        [FieldOffset(0x878)] public fixed byte m_nBrightness[0x4];
        [FieldOffset(0x87C)] public fixed byte m_flBrightnessDuration[0x4];
        [FieldOffset(0x880)] public fixed byte m_flSpriteScale[0x4];
        [FieldOffset(0x884)] public fixed byte m_flScaleDuration[0x4];
        [FieldOffset(0x888)] public fixed byte m_bWorldSpaceScale[0x4];
        [FieldOffset(0x88C)] public fixed byte m_flGlowProxySize[0x4];
        [FieldOffset(0x890)] public fixed byte m_flHDRColorScale[0x4];
        [FieldOffset(0x894)] public fixed byte m_flLastTime[0x4];
        [FieldOffset(0x898)] public fixed byte m_flMaxFrame[0x4];
        [FieldOffset(0x89C)] public fixed byte m_flStartScale[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_flDestScale[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_flScaleTimeStart[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_nStartBrightness[0x4];
        [FieldOffset(0x8AC)] public fixed byte m_nDestBrightness[0x4];
        [FieldOffset(0x8B0)] public fixed byte m_flBrightnessTimeStart[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_nSpriteWidth[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_nSpriteHeight[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_flSpeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x868)]
    public unsafe struct CDynamicLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_ActualFlags[0x1];
        [FieldOffset(0x851)] public fixed byte m_Flags[0x1];
        [FieldOffset(0x852)] public fixed byte m_LightStyle[0x1];
        [FieldOffset(0x853)] public fixed byte m_On[0x1];
        [FieldOffset(0x854)] public fixed byte m_Radius[0x4];
        [FieldOffset(0x858)] public fixed byte m_Exponent[0x4];
        [FieldOffset(0x85C)] public fixed byte m_InnerAngle[0x4];
        [FieldOffset(0x860)] public fixed byte m_OuterAngle[0x4];
        [FieldOffset(0x864)] public fixed byte m_SpotRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12B0)]
    public unsafe struct CWeaponTaser {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
        [FieldOffset(0x12A0)] public fixed byte m_fFireTime[0x4];
        [FieldOffset(0x12A4)] public fixed byte m_nLastAttackTick[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CEnvCubemapBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x590];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA60)]
    public unsafe struct CRotDoor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA58];
        [FieldOffset(0xA58)] public fixed byte m_bSolidBsp[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct CPathMover {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_vecMovers[0x18];
        [FieldOffset(0x618)] public fixed byte m_vecSpawners[0x18];
        [FieldOffset(0x630)] public fixed byte m_iszMoverSpawnerName[0x8];
        [FieldOffset(0x638)] public fixed byte m_hMoverRouter[0x8];
        [FieldOffset(0x640)] public fixed byte m_iszMoverRouterName[0x8];
        [FieldOffset(0x648)] public fixed byte m_flSampleSpacing[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CFuncVPhysicsClip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bDisabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CCSRadarElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_nElementType[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_nElementColor[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_nTeamFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct CPhysFixed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_flLinearFrequency[0x4];
        [FieldOffset(0x50C)] public fixed byte m_flLinearDampingRatio[0x4];
        [FieldOffset(0x510)] public fixed byte m_flAngularFrequency[0x4];
        [FieldOffset(0x514)] public fixed byte m_flAngularDampingRatio[0x4];
        [FieldOffset(0x518)] public fixed byte m_bEnableLinearConstraint[0x1];
        [FieldOffset(0x519)] public fixed byte m_bEnableAngularConstraint[0x7];
        [FieldOffset(0x520)] public fixed byte m_sBoneName1[0x8];
        [FieldOffset(0x528)] public fixed byte m_sBoneName2[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CLogicNavigation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_isOn[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_navProperty[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5B0)]
    public unsafe struct CPathSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_CPathQueryComponent[0xF0];
        [FieldOffset(0x5A0)] public fixed byte m_pathString[0x8];
        [FieldOffset(0x5A8)] public fixed byte m_bClosedLoop[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CPathParticleRopeAlias_path_particle_rope_clientside {
        [FieldOffset(0x0)] public fixed byte pad_0[0x590];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A8)]
    public unsafe struct CFuncElectrifiedVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x870];
        [FieldOffset(0x870)] public fixed byte m_EffectName[0x8];
        [FieldOffset(0x878)] public fixed byte m_EffectInterpenetrateName[0x8];
        [FieldOffset(0x880)] public fixed byte m_EffectZapName[0x8];
        [FieldOffset(0x888)] public fixed byte m_iszEffectSource[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CCSMinimapBoundary {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct EntitySpottedState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bSpotted[0x4];
        [FieldOffset(0xC)] public fixed byte m_bSpottedByMask[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct fogparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte dirPrimary[0xC];
        [FieldOffset(0x14)] public fixed byte colorPrimary[0x4];
        [FieldOffset(0x18)] public fixed byte colorSecondary[0x4];
        [FieldOffset(0x1C)] public fixed byte colorPrimaryLerpTo[0x4];
        [FieldOffset(0x20)] public fixed byte colorSecondaryLerpTo[0x4];
        [FieldOffset(0x24)] public fixed byte start[0x4];
        [FieldOffset(0x28)] public fixed byte end[0x4];
        [FieldOffset(0x2C)] public fixed byte farz[0x4];
        [FieldOffset(0x30)] public fixed byte maxdensity[0x4];
        [FieldOffset(0x34)] public fixed byte exponent[0x4];
        [FieldOffset(0x38)] public fixed byte HDRColorScale[0x4];
        [FieldOffset(0x3C)] public fixed byte skyboxFogFactor[0x4];
        [FieldOffset(0x40)] public fixed byte skyboxFogFactorLerpTo[0x4];
        [FieldOffset(0x44)] public fixed byte startLerpTo[0x4];
        [FieldOffset(0x48)] public fixed byte endLerpTo[0x4];
        [FieldOffset(0x4C)] public fixed byte maxdensityLerpTo[0x4];
        [FieldOffset(0x50)] public fixed byte lerptime[0x4];
        [FieldOffset(0x54)] public fixed byte duration[0x4];
        [FieldOffset(0x58)] public fixed byte blendtobackground[0x4];
        [FieldOffset(0x5C)] public fixed byte scattering[0x4];
        [FieldOffset(0x60)] public fixed byte locallightscale[0x4];
        [FieldOffset(0x64)] public fixed byte enable[0x1];
        [FieldOffset(0x65)] public fixed byte blend[0x1];
        [FieldOffset(0x66)] public fixed byte m_bPadding2[0x1];
        [FieldOffset(0x67)] public fixed byte m_bPadding[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CSoundEventOBBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x568];
        [FieldOffset(0x568)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x574)] public fixed byte m_vMaxs[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB50)]
    public unsafe struct CFlashbangProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB40];
        [FieldOffset(0xB40)] public fixed byte m_flTimeToDetonate[0x4];
        [FieldOffset(0xB44)] public fixed byte m_numOpponentsHit[0x1];
        [FieldOffset(0xB45)] public fixed byte m_numTeammatesHit[0xB];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9E0)]
    public unsafe struct CTriggerMultiple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_OnTrigger[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x520)]
    public unsafe struct CPhysBallSocket {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_flJointFriction[0x4];
        [FieldOffset(0x50C)] public fixed byte m_bEnableSwingLimit[0x4];
        [FieldOffset(0x510)] public fixed byte m_flSwingLimit[0x4];
        [FieldOffset(0x514)] public fixed byte m_bEnableTwistLimit[0x4];
        [FieldOffset(0x518)] public fixed byte m_flMinTwistAngle[0x4];
        [FieldOffset(0x51C)] public fixed byte m_flMaxTwistAngle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3E9490)]
    public unsafe struct CDebugHistory {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3E84E8];
        [FieldOffset(0x3E84E8)] public fixed byte m_nNpcEvents[0xFA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x550)]
    public unsafe struct CSoundOpvarSetPointBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_hSource[0x1C];
        [FieldOffset(0x4C8)] public fixed byte m_iszSourceEntityName[0x58];
        [FieldOffset(0x520)] public fixed byte m_vLastPosition[0xC];
        [FieldOffset(0x52C)] public fixed byte m_flRefreshTime[0x4];
        [FieldOffset(0x530)] public fixed byte m_iszStackName[0x8];
        [FieldOffset(0x538)] public fixed byte m_iszOperatorName[0x8];
        [FieldOffset(0x540)] public fixed byte m_iszOpvarName[0x8];
        [FieldOffset(0x548)] public fixed byte m_iOpvarIndex[0x4];
        [FieldOffset(0x54C)] public fixed byte m_bUseAutoCompare[0x1];
        [FieldOffset(0x54D)] public fixed byte m_bFastRefresh[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CExplosionTypeData {
        [FieldOffset(0x0)] public fixed byte m_SoundName[0x10];
        [FieldOffset(0x10)] public fixed byte m_ParticleEffect[0xE0];
        [FieldOffset(0xF0)] public fixed byte m_bIsIncindiary[0x1];
        [FieldOffset(0xF1)] public fixed byte m_bHasForces[0x7];
        [FieldOffset(0xF8)] public fixed byte m_DecalType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct CPathKeyFrame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_Origin[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_Angles[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_qAngle[0x10];
        [FieldOffset(0x4D0)] public fixed byte m_iNextKey[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_flNextTime[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_pNextKey[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_pPrevKey[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_flMoveSpeed[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12B0)]
    public unsafe struct CWeaponCZ75a {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
        [FieldOffset(0x12A0)] public fixed byte m_bMagazineRemoved[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA10)]
    public unsafe struct CScriptTriggerPush {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA00];
        [FieldOffset(0xA00)] public fixed byte m_vExtent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x860)]
    public unsafe struct CRevertSaved {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_loadTime[0x4];
        [FieldOffset(0x854)] public fixed byte m_Duration[0x4];
        [FieldOffset(0x858)] public fixed byte m_HoldTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CTriggerBombReset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA50)]
    public unsafe struct CTriggerHurt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_flOriginalDamage[0x4];
        [FieldOffset(0x9CC)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x9D0)] public fixed byte m_flDamageCap[0x4];
        [FieldOffset(0x9D4)] public fixed byte m_flLastDmgTime[0x4];
        [FieldOffset(0x9D8)] public fixed byte m_flForgivenessDelay[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_bitsDamageInflict[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_damageModel[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_bNoDmgForce[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_vDamageForce[0xC];
        [FieldOffset(0x9F4)] public fixed byte m_thinkAlways[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_hurtThinkPeriod[0x8];
        [FieldOffset(0xA00)] public fixed byte m_OnHurt[0x18];
        [FieldOffset(0xA18)] public fixed byte m_OnHurtPlayer[0x18];
        [FieldOffset(0xA30)] public fixed byte m_hurtEntities[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18B8)]
    public unsafe struct CCSPlayer_WeaponServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_flNextAttack[0x4];
        [FieldOffset(0xC4)] public fixed byte m_hSavedWeapon[0x4];
        [FieldOffset(0xC8)] public fixed byte m_nTimeToMelee[0x4];
        [FieldOffset(0xCC)] public fixed byte m_nTimeToSecondary[0x4];
        [FieldOffset(0xD0)] public fixed byte m_nTimeToPrimary[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nTimeToSniperRifle[0x4];
        [FieldOffset(0xD8)] public fixed byte m_bIsBeingGivenItem[0x1];
        [FieldOffset(0xD9)] public fixed byte m_bIsPickingUpItemWithUse[0x1];
        [FieldOffset(0xDA)] public fixed byte m_bPickedUpWeapon[0x1];
        [FieldOffset(0xDB)] public fixed byte m_bDisableAutoDeploy[0x1];
        [FieldOffset(0xDC)] public fixed byte m_bIsPickingUpGroundWeapon[0x17BC];
        [FieldOffset(0x1898)] public fixed byte m_networkAnimTiming[0x18];
        [FieldOffset(0x18B0)] public fixed byte m_bBlockInspectUntilNextGraphUpdate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct CSkyCameraVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C0];
        [FieldOffset(0x4C0)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x4CC)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x4D8)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_bIsEnabled[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bSkyboxBlurEffect[0x3];
        [FieldOffset(0x4E4)] public fixed byte m_vBlurOrigin[0xC];
        [FieldOffset(0x4F0)] public fixed byte m_bSkyboxReceivesWorldCsm[0x1];
        [FieldOffset(0x4F1)] public fixed byte m_bWorldReceivesSkyboxCsm[0x1];
        [FieldOffset(0x4F2)] public fixed byte m_bStartDisabled[0x6];
        [FieldOffset(0x4F8)] public fixed byte m_iszTargetName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct CRetakeGameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
        [FieldOffset(0x138)] public fixed byte m_nMatchSeed[0x4];
        [FieldOffset(0x13C)] public fixed byte m_bBlockersPresent[0x1];
        [FieldOffset(0x13D)] public fixed byte m_bRoundInProgress[0x3];
        [FieldOffset(0x140)] public fixed byte m_iFirstSecondHalfRound[0x4];
        [FieldOffset(0x144)] public fixed byte m_iBombSite[0x4];
        [FieldOffset(0x148)] public fixed byte m_hBombPlanter[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x538];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoInstructorHintBombTargetA {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CTeamplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA60)]
    public unsafe struct CScriptTriggerHurt {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA50];
        [FieldOffset(0xA50)] public fixed byte m_vExtent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x198)]
    public unsafe struct CCSCustomHudLayoutState {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_playerSlot[0x4];
        [FieldOffset(0x34)] public fixed byte m_bInputCaptureEnabled[0x4];
        [FieldOffset(0x38)] public fixed byte m_vecHasClasses[0x60];
        [FieldOffset(0x98)] public fixed byte m_vecDialogVariableStrings[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_WingmanIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponMP9 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA08)]
    public unsafe struct CTriggerDetectExplosion {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9F0];
        [FieldOffset(0x9F0)] public fixed byte m_OnDetectedExplosion[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iFilterName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_ApplyDynamicAttributeString {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2E50)]
    public unsafe struct CSmokeGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB68];
        [FieldOffset(0xB68)] public fixed byte m_nSmokeEffectTickBegin[0x4];
        [FieldOffset(0xB6C)] public fixed byte m_bDidSmokeEffect[0x4];
        [FieldOffset(0xB70)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0xB74)] public fixed byte m_vSmokeColor[0xC];
        [FieldOffset(0xB80)] public fixed byte m_vSmokeDetonationPos[0x10];
        [FieldOffset(0xB90)] public fixed byte m_VoxelFrameData[0x18];
        [FieldOffset(0xBA8)] public fixed byte m_nVoxelFrameDataSize[0x4];
        [FieldOffset(0xBAC)] public fixed byte m_nVoxelUpdate[0x4];
        [FieldOffset(0xBB0)] public fixed byte m_nSmokeLightProbeRegen[0x4];
        [FieldOffset(0xBB4)] public fixed byte m_flLastBounce[0x4];
        [FieldOffset(0xBB8)] public fixed byte m_fllastSimulationTime[0x2288];
        [FieldOffset(0x2E40)] public fixed byte m_bExplodeFromInferno[0x1];
        [FieldOffset(0x2E41)] public fixed byte m_bDidGroundScorch[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CBlood {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_vecSprayAngles[0xC];
        [FieldOffset(0x4B4)] public fixed byte m_vecSprayDir[0xC];
        [FieldOffset(0x4C0)] public fixed byte m_flAmount[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_Color[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x820)]
    public unsafe struct CCSTeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x560];
        [FieldOffset(0x560)] public fixed byte m_nLastRecievedShorthandedRoundBonus[0x4];
        [FieldOffset(0x564)] public fixed byte m_nShorthandedRoundBonusStartRound[0x4];
        [FieldOffset(0x568)] public fixed byte m_bSurrendered[0x1];
        [FieldOffset(0x569)] public fixed byte m_szTeamMatchStat[0x203];
        [FieldOffset(0x76C)] public fixed byte m_numMapVictories[0x4];
        [FieldOffset(0x770)] public fixed byte m_scoreFirstHalf[0x4];
        [FieldOffset(0x774)] public fixed byte m_scoreSecondHalf[0x4];
        [FieldOffset(0x778)] public fixed byte m_scoreOvertime[0x4];
        [FieldOffset(0x77C)] public fixed byte m_szClanTeamname[0x84];
        [FieldOffset(0x800)] public fixed byte m_iClanID[0x4];
        [FieldOffset(0x804)] public fixed byte m_szTeamFlagImage[0x8];
        [FieldOffset(0x80C)] public fixed byte m_szTeamLogoImage[0x8];
        [FieldOffset(0x814)] public fixed byte m_flNextResourceTime[0x4];
        [FieldOffset(0x818)] public fixed byte m_iLastUpdateSentAt[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x860)]
    public unsafe struct CRulePointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_Score[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_CallInfo {
        [FieldOffset(0x0)] public fixed byte m_PortName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nEditorNodeID[0x8];
        [FieldOffset(0x18)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x48)] public fixed byte m_CallMethodID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x50)] public fixed byte m_nSrcInstruction[0x4];
        [FieldOffset(0x54)] public fixed byte m_nBreakDestChunk[0x4];
        [FieldOffset(0x58)] public fixed byte m_nBreakDestInstruction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x958)]
    public unsafe struct CFuncMoveLinearAlias_momentary_door {
        [FieldOffset(0x0)] public fixed byte pad_0[0x958];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct CBaseAnimGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_graphControllerManager[0x98];
        [FieldOffset(0x8E8)] public fixed byte m_pMainGraphController[0x8];
        [FieldOffset(0x8F0)] public fixed byte m_bInitiallyPopulateInterpHistory[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_OnLayerCycleUpdated[0x20];
        [FieldOffset(0x918)] public fixed byte m_OnExternalChoreoGraphChanged[0x18];
        [FieldOffset(0x930)] public fixed byte m_pChoreoServices[0x8];
        [FieldOffset(0x938)] public fixed byte m_bAnimGraphUpdateEnabled[0x1];
        [FieldOffset(0x939)] public fixed byte m_bAnimationUpdateScheduled[0x3];
        [FieldOffset(0x93C)] public fixed byte m_vecForce[0xC];
        [FieldOffset(0x948)] public fixed byte m_nForceBone[0x10];
        [FieldOffset(0x958)] public fixed byte m_pRagdollControl[0x8];
        [FieldOffset(0x960)] public fixed byte m_RagdollPose[0x28];
        [FieldOffset(0x988)] public fixed byte m_bRagdollEnabled[0x1];
        [FieldOffset(0x989)] public fixed byte m_bRagdollClientSide[0x1];
        [FieldOffset(0x98A)] public fixed byte m_bShouldUpdateTransformations[0x6];
        [FieldOffset(0x990)] public fixed byte m_xParentedRagdollRootInEntitySpace[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5A8)]
    public unsafe struct CEnvCubemapFog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flEndDistance[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flStartDistance[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flFogFalloffExponent[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bHeightFogEnabled[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flFogHeightWidth[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flFogHeightEnd[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flFogHeightStart[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flFogHeightExponent[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flLODBias[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x4CD)] public fixed byte m_bStartDisabled[0x3];
        [FieldOffset(0x4D0)] public fixed byte m_flFogMaxOpacity[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_nCubemapSourceType[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_hSkyMaterial[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_iszSkyEntity[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_nHeightFogType[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_nFogHeightBlendMode[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_nFogHeightCoordinateSpace[0x4];
        [FieldOffset(0x4F4)] public fixed byte m_nDistanceFogType[0x4];
        [FieldOffset(0x4F8)] public fixed byte m_DistanceFogCurveString[0x8];
        [FieldOffset(0x500)] public fixed byte m_HeightFogCurveString[0x98];
        [FieldOffset(0x598)] public fixed byte m_hFogCubemapTexture[0x8];
        [FieldOffset(0x5A0)] public fixed byte m_bHasHeightFogEnd[0x1];
        [FieldOffset(0x5A1)] public fixed byte m_bFirstTime[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulseCell_InlineNodeSkipSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nFlowNodeID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bAnd[0x4];
        [FieldOffset(0x50)] public fixed byte m_PassOutflow[0x18];
        [FieldOffset(0x68)] public fixed byte m_FailOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA58)]
    public unsafe struct CBaseDoor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8E0];
        [FieldOffset(0x8E0)] public fixed byte m_angMoveEntitySpace[0xC];
        [FieldOffset(0x8EC)] public fixed byte m_vecMoveDirParentSpace[0xC];
        [FieldOffset(0x8F8)] public fixed byte m_ls[0x20];
        [FieldOffset(0x918)] public fixed byte m_bForceClosed[0x1];
        [FieldOffset(0x919)] public fixed byte m_bDoorGroup[0x1];
        [FieldOffset(0x91A)] public fixed byte m_bLocked[0x1];
        [FieldOffset(0x91B)] public fixed byte m_bIgnoreDebris[0x1];
        [FieldOffset(0x91C)] public fixed byte m_bNoNPCs[0x4];
        [FieldOffset(0x920)] public fixed byte m_eSpawnPosition[0x4];
        [FieldOffset(0x924)] public fixed byte m_flBlockDamage[0x4];
        [FieldOffset(0x928)] public fixed byte m_NoiseMoving[0x8];
        [FieldOffset(0x930)] public fixed byte m_NoiseArrived[0x8];
        [FieldOffset(0x938)] public fixed byte m_NoiseMovingClosed[0x8];
        [FieldOffset(0x940)] public fixed byte m_NoiseArrivedClosed[0x8];
        [FieldOffset(0x948)] public fixed byte m_ChainTarget[0x8];
        [FieldOffset(0x950)] public fixed byte m_OnBlockedClosing[0x18];
        [FieldOffset(0x968)] public fixed byte m_OnBlockedOpening[0x18];
        [FieldOffset(0x980)] public fixed byte m_OnUnblockedClosing[0x18];
        [FieldOffset(0x998)] public fixed byte m_OnUnblockedOpening[0x18];
        [FieldOffset(0x9B0)] public fixed byte m_OnFullyClosed[0x18];
        [FieldOffset(0x9C8)] public fixed byte m_OnFullyOpen[0x18];
        [FieldOffset(0x9E0)] public fixed byte m_OnClose[0x18];
        [FieldOffset(0x9F8)] public fixed byte m_OnOpen[0x18];
        [FieldOffset(0xA10)] public fixed byte m_OnLockedUse[0x18];
        [FieldOffset(0xA28)] public fixed byte m_bLoopMoveSound[0x20];
        [FieldOffset(0xA48)] public fixed byte m_bCreateNavObstacle[0x4];
        [FieldOffset(0xA4C)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0xA50)] public fixed byte m_isChaining[0x1];
        [FieldOffset(0xA51)] public fixed byte m_bIsUsable[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CServerOnlyPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A0)]
    public unsafe struct CGameMoney {
        [FieldOffset(0x0)] public fixed byte pad_0[0x860];
        [FieldOffset(0x860)] public fixed byte m_OnMoneySpent[0x18];
        [FieldOffset(0x878)] public fixed byte m_OnMoneySpentFail[0x18];
        [FieldOffset(0x890)] public fixed byte m_nMoney[0x8];
        [FieldOffset(0x898)] public fixed byte m_strAwardText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CEnvHudHint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszMessage[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CNullEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CLogicalEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB00)]
    public unsafe struct CItemDefuser {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAE0];
        [FieldOffset(0xAE0)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0xAF8)] public fixed byte m_nSpotRules[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CItemGenericTriggerHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_hParentItem[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPlayer_WeaponServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hMyWeapons[0x18];
        [FieldOffset(0x60)] public fixed byte m_hActiveWeapon[0x4];
        [FieldOffset(0x64)] public fixed byte m_hLastWeapon[0x4];
        [FieldOffset(0x68)] public fixed byte m_iAmmo[0x40];
        [FieldOffset(0xA8)] public fixed byte m_bPreventWeaponPickup[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC40)]
    public unsafe struct CRagdollPropAttached {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC00];
        [FieldOffset(0xC00)] public fixed byte m_boneIndexAttached[0x4];
        [FieldOffset(0xC04)] public fixed byte m_ragdollAttachedObjectIndex[0x4];
        [FieldOffset(0xC08)] public fixed byte m_attachmentPointBoneSpace[0xC];
        [FieldOffset(0xC14)] public fixed byte m_attachmentPointRagdollSpace[0xC];
        [FieldOffset(0xC20)] public fixed byte m_bShouldDetach[0x10];
        [FieldOffset(0xC30)] public fixed byte m_bShouldDeleteAttachedActivationRecord[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAF0)]
    public unsafe struct CItemDogtags {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAE0];
        [FieldOffset(0xAE0)] public fixed byte m_OwningPlayer[0x4];
        [FieldOffset(0xAE4)] public fixed byte m_KillingPlayer[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x908)]
    public unsafe struct CFuncPlat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8F8];
        [FieldOffset(0x8F8)] public fixed byte m_flSpeed[0x8];
        [FieldOffset(0x900)] public fixed byte m_sNoise[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB38)]
    public unsafe struct CBarnLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x854)] public fixed byte m_nColorMode[0x4];
        [FieldOffset(0x858)] public fixed byte m_Color[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flColorTemperature[0x4];
        [FieldOffset(0x860)] public fixed byte m_flBrightness[0x4];
        [FieldOffset(0x864)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x868)] public fixed byte m_nDirectLight[0x4];
        [FieldOffset(0x86C)] public fixed byte m_nBakedShadowIndex[0x4];
        [FieldOffset(0x870)] public fixed byte m_nLightPathUniqueId[0x4];
        [FieldOffset(0x874)] public fixed byte m_nLightMapUniqueId[0x4];
        [FieldOffset(0x878)] public fixed byte m_nLuminaireShape[0x4];
        [FieldOffset(0x87C)] public fixed byte m_flLuminaireSize[0x4];
        [FieldOffset(0x880)] public fixed byte m_flLuminaireAnisotropy[0x8];
        [FieldOffset(0x888)] public fixed byte m_LightStyleString[0x8];
        [FieldOffset(0x890)] public fixed byte m_flLightStyleStartTime[0x8];
        [FieldOffset(0x898)] public fixed byte m_QueuedLightStyleStrings[0x18];
        [FieldOffset(0x8B0)] public fixed byte m_LightStyleEvents[0x18];
        [FieldOffset(0x8C8)] public fixed byte m_LightStyleTargets[0x18];
        [FieldOffset(0x8E0)] public fixed byte m_StyleEvent[0x80];
        [FieldOffset(0x960)] public fixed byte m_hLightCookie[0x8];
        [FieldOffset(0x968)] public fixed byte m_flShape[0x4];
        [FieldOffset(0x96C)] public fixed byte m_flSoftX[0x4];
        [FieldOffset(0x970)] public fixed byte m_flSoftY[0x4];
        [FieldOffset(0x974)] public fixed byte m_flSkirt[0x4];
        [FieldOffset(0x978)] public fixed byte m_flSkirtNear[0x4];
        [FieldOffset(0x97C)] public fixed byte m_vSizeParams[0xC];
        [FieldOffset(0x988)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x98C)] public fixed byte m_vShear[0xC];
        [FieldOffset(0x998)] public fixed byte m_nBakeSpecularToCubemaps[0x4];
        [FieldOffset(0x99C)] public fixed byte m_vBakeSpecularToCubemapsSize[0xC];
        [FieldOffset(0x9A8)] public fixed byte m_flBakeSpecularToCubemapsScale[0x4];
        [FieldOffset(0x9AC)] public fixed byte m_nCastShadows[0x4];
        [FieldOffset(0x9B0)] public fixed byte m_nShadowMapSize[0x4];
        [FieldOffset(0x9B4)] public fixed byte m_nShadowPriority[0x4];
        [FieldOffset(0x9B8)] public fixed byte m_bContactShadow[0x1];
        [FieldOffset(0x9B9)] public fixed byte m_bForceShadowsEnabled[0x3];
        [FieldOffset(0x9BC)] public fixed byte m_nBounceLight[0x4];
        [FieldOffset(0x9C0)] public fixed byte m_flBounceScale[0x4];
        [FieldOffset(0x9C4)] public fixed byte m_flMinRoughness[0x4];
        [FieldOffset(0x9C8)] public fixed byte m_vAlternateColor[0xC];
        [FieldOffset(0x9D4)] public fixed byte m_fAlternateColorBrightness[0x4];
        [FieldOffset(0x9D8)] public fixed byte m_nFog[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_flFogStrength[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_nFogShadows[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_flFogScale[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_flFadeSizeStart[0x4];
        [FieldOffset(0x9EC)] public fixed byte m_flFadeSizeEnd[0x4];
        [FieldOffset(0x9F0)] public fixed byte m_flShadowFadeSizeStart[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_flShadowFadeSizeEnd[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_bPrecomputedFieldsValid[0x4];
        [FieldOffset(0x9FC)] public fixed byte m_vPrecomputedBoundsMins[0xC];
        [FieldOffset(0xA08)] public fixed byte m_vPrecomputedBoundsMaxs[0xC];
        [FieldOffset(0xA14)] public fixed byte m_vPrecomputedOBBOrigin[0xC];
        [FieldOffset(0xA20)] public fixed byte m_vPrecomputedOBBAngles[0xC];
        [FieldOffset(0xA2C)] public fixed byte m_vPrecomputedOBBExtent[0xC];
        [FieldOffset(0xA38)] public fixed byte m_nPrecomputedSubFrusta[0x4];
        [FieldOffset(0xA3C)] public fixed byte m_vPrecomputedOBBOrigin0[0xC];
        [FieldOffset(0xA48)] public fixed byte m_vPrecomputedOBBAngles0[0xC];
        [FieldOffset(0xA54)] public fixed byte m_vPrecomputedOBBExtent0[0xC];
        [FieldOffset(0xA60)] public fixed byte m_vPrecomputedOBBOrigin1[0xC];
        [FieldOffset(0xA6C)] public fixed byte m_vPrecomputedOBBAngles1[0xC];
        [FieldOffset(0xA78)] public fixed byte m_vPrecomputedOBBExtent1[0xC];
        [FieldOffset(0xA84)] public fixed byte m_vPrecomputedOBBOrigin2[0xC];
        [FieldOffset(0xA90)] public fixed byte m_vPrecomputedOBBAngles2[0xC];
        [FieldOffset(0xA9C)] public fixed byte m_vPrecomputedOBBExtent2[0xC];
        [FieldOffset(0xAA8)] public fixed byte m_vPrecomputedOBBOrigin3[0xC];
        [FieldOffset(0xAB4)] public fixed byte m_vPrecomputedOBBAngles3[0xC];
        [FieldOffset(0xAC0)] public fixed byte m_vPrecomputedOBBExtent3[0xC];
        [FieldOffset(0xACC)] public fixed byte m_vPrecomputedOBBOrigin4[0xC];
        [FieldOffset(0xAD8)] public fixed byte m_vPrecomputedOBBAngles4[0xC];
        [FieldOffset(0xAE4)] public fixed byte m_vPrecomputedOBBExtent4[0xC];
        [FieldOffset(0xAF0)] public fixed byte m_vPrecomputedOBBOrigin5[0xC];
        [FieldOffset(0xAFC)] public fixed byte m_vPrecomputedOBBAngles5[0xC];
        [FieldOffset(0xB08)] public fixed byte m_vPrecomputedOBBExtent5[0xC];
        [FieldOffset(0xB14)] public fixed byte m_bPvsModifyEntity[0x1];
        [FieldOffset(0xB15)] public fixed byte m_bTransmitAlways[0x3];
        [FieldOffset(0xB18)] public fixed byte m_VisClusters[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CInstructorEventEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iszName[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_iszHintTargetEntity[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hTargetPlayer[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CWeaponTec9 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CPathCorner {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bTriggerLocomotionStop[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bSmoothArrival[0x1];
        [FieldOffset(0x4AA)] public fixed byte m_bExactPositioning[0x2];
        [FieldOffset(0x4AC)] public fixed byte m_flWait[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flWaypointSuccessRadiusWhenBlocked[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flWaypointSuccessRadius[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flPathEndDistanceFromGoal[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flSpeed[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_OnPass[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD28)]
    public unsafe struct CTriggerSndSosOpvar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_hTouchingPlayers[0x18];
        [FieldOffset(0x9E0)] public fixed byte m_flPosition[0xC];
        [FieldOffset(0x9EC)] public fixed byte m_flCenterSize[0x4];
        [FieldOffset(0x9F0)] public fixed byte m_flMinVal[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_flMaxVal[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_opvarName[0x8];
        [FieldOffset(0xA00)] public fixed byte m_stackName[0x8];
        [FieldOffset(0xA08)] public fixed byte m_operatorName[0x8];
        [FieldOffset(0xA10)] public fixed byte m_bVolIs2D[0x1];
        [FieldOffset(0xA11)] public fixed byte m_opvarNameChar[0x100];
        [FieldOffset(0xB11)] public fixed byte m_stackNameChar[0x100];
        [FieldOffset(0xC11)] public fixed byte m_operatorNameChar[0x103];
        [FieldOffset(0xD14)] public fixed byte m_VecNormPos[0xC];
        [FieldOffset(0xD20)] public fixed byte m_flNormCenterSize[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_LimitCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nLimitCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CPulseCell_Step_CallExternalMethod {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0xE8)] public fixed byte m_nBlackboardIndex[0x8];
        [FieldOffset(0xF0)] public fixed byte m_ExpectedArgs[0x10];
        [FieldOffset(0x100)] public fixed byte m_nAsyncCallMode[0x8];
        [FieldOffset(0x108)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB20)]
    public unsafe struct CPointCommentaryNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
        [FieldOffset(0xA40)] public fixed byte m_iszPreCommands[0x8];
        [FieldOffset(0xA48)] public fixed byte m_iszPostCommands[0x8];
        [FieldOffset(0xA50)] public fixed byte m_iszCommentaryFile[0x8];
        [FieldOffset(0xA58)] public fixed byte m_iszViewTarget[0x8];
        [FieldOffset(0xA60)] public fixed byte m_hViewTarget[0x4];
        [FieldOffset(0xA64)] public fixed byte m_hViewTargetAngles[0x4];
        [FieldOffset(0xA68)] public fixed byte m_iszViewPosition[0x8];
        [FieldOffset(0xA70)] public fixed byte m_hViewPosition[0x4];
        [FieldOffset(0xA74)] public fixed byte m_hViewPositionMover[0x4];
        [FieldOffset(0xA78)] public fixed byte m_bPreventMovement[0x1];
        [FieldOffset(0xA79)] public fixed byte m_bUnderCrosshair[0x1];
        [FieldOffset(0xA7A)] public fixed byte m_bUnstoppable[0x2];
        [FieldOffset(0xA7C)] public fixed byte m_flFinishedTime[0x4];
        [FieldOffset(0xA80)] public fixed byte m_vecFinishOrigin[0xC];
        [FieldOffset(0xA8C)] public fixed byte m_vecOriginalAngles[0xC];
        [FieldOffset(0xA98)] public fixed byte m_vecFinishAngles[0xC];
        [FieldOffset(0xAA4)] public fixed byte m_bPreventChangesWhileMoving[0x1];
        [FieldOffset(0xAA5)] public fixed byte m_bDisabled[0x3];
        [FieldOffset(0xAA8)] public fixed byte m_vecTeleportOrigin[0xC];
        [FieldOffset(0xAB4)] public fixed byte m_flAbortedPlaybackAt[0x4];
        [FieldOffset(0xAB8)] public fixed byte m_pOnCommentaryStarted[0x18];
        [FieldOffset(0xAD0)] public fixed byte m_pOnCommentaryStopped[0x18];
        [FieldOffset(0xAE8)] public fixed byte m_bActive[0x4];
        [FieldOffset(0xAEC)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xAF0)] public fixed byte m_flStartTimeInCommentary[0x8];
        [FieldOffset(0xAF8)] public fixed byte m_iszTitle[0x8];
        [FieldOffset(0xB00)] public fixed byte m_iszSpeakers[0x8];
        [FieldOffset(0xB08)] public fixed byte m_iNodeNumber[0x4];
        [FieldOffset(0xB0C)] public fixed byte m_iNodeNumberMax[0x4];
        [FieldOffset(0xB10)] public fixed byte m_bListenedTo[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA88)]
    public unsafe struct CMomentaryRotButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D0];
        [FieldOffset(0x9D0)] public fixed byte m_Position[0x20];
        [FieldOffset(0x9F0)] public fixed byte m_OnUnpressed[0x18];
        [FieldOffset(0xA08)] public fixed byte m_OnFullyOpen[0x18];
        [FieldOffset(0xA20)] public fixed byte m_OnFullyClosed[0x18];
        [FieldOffset(0xA38)] public fixed byte m_OnReachedPosition[0x18];
        [FieldOffset(0xA50)] public fixed byte m_lastUsed[0x4];
        [FieldOffset(0xA54)] public fixed byte m_start[0xC];
        [FieldOffset(0xA60)] public fixed byte m_end[0xC];
        [FieldOffset(0xA6C)] public fixed byte m_IdealYaw[0x4];
        [FieldOffset(0xA70)] public fixed byte m_sNoise[0x8];
        [FieldOffset(0xA78)] public fixed byte m_bUpdateTarget[0x4];
        [FieldOffset(0xA7C)] public fixed byte m_direction[0x4];
        [FieldOffset(0xA80)] public fixed byte m_returnSpeed[0x4];
        [FieldOffset(0xA84)] public fixed byte m_flStartPosition[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x580)]
    public unsafe struct CSceneListManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hListManagers[0x18];
        [FieldOffset(0x4C0)] public fixed byte m_iszScenes[0x80];
        [FieldOffset(0x540)] public fixed byte m_hScenes[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CEnvTilt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_Duration[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_Radius[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_TiltTime[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_stopTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x538)]
    public unsafe struct CEnvSoundscapeTriggerable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x538];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB40)]
    public unsafe struct CFuncMover {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_iszPathName[0x8];
        [FieldOffset(0x858)] public fixed byte m_hPathMover[0x4];
        [FieldOffset(0x85C)] public fixed byte m_hPrevPathMover[0x4];
        [FieldOffset(0x860)] public fixed byte m_iszPathNodeStart[0x8];
        [FieldOffset(0x868)] public fixed byte m_iszPathNodeEnd[0x8];
        [FieldOffset(0x870)] public fixed byte m_bIgnoreEndNode[0x4];
        [FieldOffset(0x874)] public fixed byte m_eMoveType[0x4];
        [FieldOffset(0x878)] public fixed byte m_bIsReversing[0x4];
        [FieldOffset(0x87C)] public fixed byte m_flStartSpeed[0x4];
        [FieldOffset(0x880)] public fixed byte m_flPathLocation[0x4];
        [FieldOffset(0x884)] public fixed byte m_flT[0x4];
        [FieldOffset(0x888)] public fixed byte m_nCurrentNodeIndex[0x4];
        [FieldOffset(0x88C)] public fixed byte m_nPreviousNodeIndex[0x4];
        [FieldOffset(0x890)] public fixed byte m_eSolidType[0x1];
        [FieldOffset(0x891)] public fixed byte m_bIsMoving[0x3];
        [FieldOffset(0x894)] public fixed byte m_flTimeToReachMaxSpeed[0x4];
        [FieldOffset(0x898)] public fixed byte m_flDistanceToReachMaxSpeed[0x4];
        [FieldOffset(0x89C)] public fixed byte m_flTimeToReachZeroSpeed[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_flComputedDistanceToReachMaxSpeed[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_flComputedDistanceToReachZeroSpeed[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_flStartCurveScale[0x4];
        [FieldOffset(0x8AC)] public fixed byte m_flStopCurveScale[0x4];
        [FieldOffset(0x8B0)] public fixed byte m_flDistanceToReachZeroSpeed[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_flTimeMovementStart[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_flTimeMovementStop[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_hStopAtNode[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_flPathLocationToBeginStop[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_flPathLocationStart[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_flBeginStopT[0x8];
        [FieldOffset(0x8D0)] public fixed byte m_iszStartForwardSound[0x8];
        [FieldOffset(0x8D8)] public fixed byte m_iszLoopForwardSound[0x8];
        [FieldOffset(0x8E0)] public fixed byte m_iszStopForwardSound[0x8];
        [FieldOffset(0x8E8)] public fixed byte m_iszStartReverseSound[0x8];
        [FieldOffset(0x8F0)] public fixed byte m_iszLoopReverseSound[0x8];
        [FieldOffset(0x8F8)] public fixed byte m_iszStopReverseSound[0x8];
        [FieldOffset(0x900)] public fixed byte m_iszArriveAtDestinationSound[0x20];
        [FieldOffset(0x920)] public fixed byte m_OnMovementEnd[0x18];
        [FieldOffset(0x938)] public fixed byte m_bStartAtClosestPoint[0x1];
        [FieldOffset(0x939)] public fixed byte m_bStartAtEnd[0x1];
        [FieldOffset(0x93A)] public fixed byte m_bStartFollowingClosestMover[0x2];
        [FieldOffset(0x93C)] public fixed byte m_flStartFollowingClosestMoverWhenWithinDistance[0x4];
        [FieldOffset(0x940)] public fixed byte m_flStartFollowingClosestMoverWhenOutsideDistance[0x4];
        [FieldOffset(0x944)] public fixed byte m_eOrientationUpdate[0x4];
        [FieldOffset(0x948)] public fixed byte m_flTimeStartOrientationChange[0x4];
        [FieldOffset(0x94C)] public fixed byte m_flTimeToBlendToNewOrientation[0x4];
        [FieldOffset(0x950)] public fixed byte m_flDurationBlendToNewOrientationRan[0x4];
        [FieldOffset(0x954)] public fixed byte m_bCreateMovableNavMesh[0x1];
        [FieldOffset(0x955)] public fixed byte m_bCreateMovableSurfaceGraph[0x1];
        [FieldOffset(0x956)] public fixed byte m_bAllowMovableNavMeshDockingOnEntireEntity[0x2];
        [FieldOffset(0x958)] public fixed byte m_OnNodePassed[0x20];
        [FieldOffset(0x978)] public fixed byte m_iszOrientationMatchEntityName[0x8];
        [FieldOffset(0x980)] public fixed byte m_hOrientationMatchEntity[0x4];
        [FieldOffset(0x984)] public fixed byte m_vLerpToNewPosStartWS[0xC];
        [FieldOffset(0x990)] public fixed byte m_flLerpToPositionTargetT[0x4];
        [FieldOffset(0x994)] public fixed byte m_flLerpToPositionT[0x4];
        [FieldOffset(0x998)] public fixed byte m_flLerpToPositionDeltaT[0x4];
        [FieldOffset(0x99C)] public fixed byte m_hTransitionSourcePath[0x4];
        [FieldOffset(0x9A0)] public fixed byte m_flTransitionSourceT[0x4];
        [FieldOffset(0x9A4)] public fixed byte m_flTransitionSourcePathLocation[0x4];
        [FieldOffset(0x9A8)] public fixed byte m_iszTransitionSourcePathNodeStart[0x8];
        [FieldOffset(0x9B0)] public fixed byte m_bStoppedDuringTransition[0x8];
        [FieldOffset(0x9B8)] public fixed byte m_OnLerpToPositionComplete[0x18];
        [FieldOffset(0x9D0)] public fixed byte m_bIsPaused[0x4];
        [FieldOffset(0x9D4)] public fixed byte m_eTransitionedToPathNodeAction[0xC];
        [FieldOffset(0x9E0)] public fixed byte m_qTransitionSourceOrientation[0x10];
        [FieldOffset(0x9F0)] public fixed byte m_nDelayedTeleportToNode[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_bIsImGuiLogging[0x1];
        [FieldOffset(0x9F5)] public fixed byte m_bIsImGuiEntTextLogging[0x3];
        [FieldOffset(0x9F8)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x9FC)] public fixed byte m_hFollowEntity[0x4];
        [FieldOffset(0xA00)] public fixed byte m_flFollowDistance[0x4];
        [FieldOffset(0xA04)] public fixed byte m_flFollowMinimumSpeed[0x4];
        [FieldOffset(0xA08)] public fixed byte m_flCurFollowEntityT[0x4];
        [FieldOffset(0xA0C)] public fixed byte m_flCurFollowSpeed[0x4];
        [FieldOffset(0xA10)] public fixed byte m_strOrientationFaceEntityName[0x8];
        [FieldOffset(0xA18)] public fixed byte m_hOrientationFaceEntity[0x8];
        [FieldOffset(0xA20)] public fixed byte m_OnStart[0x18];
        [FieldOffset(0xA38)] public fixed byte m_OnStartForward[0x18];
        [FieldOffset(0xA50)] public fixed byte m_OnStartReverse[0x18];
        [FieldOffset(0xA68)] public fixed byte m_OnStop[0x18];
        [FieldOffset(0xA80)] public fixed byte m_OnStopped[0x18];
        [FieldOffset(0xA98)] public fixed byte m_bNextNodeReturnsCurrent[0x1];
        [FieldOffset(0xA99)] public fixed byte m_bStartedMoving[0x1F];
        [FieldOffset(0xAB8)] public fixed byte m_eFollowEntityDirection[0x4];
        [FieldOffset(0xABC)] public fixed byte m_hFollowMover[0x4];
        [FieldOffset(0xAC0)] public fixed byte m_iszFollowEntityName[0x8];
        [FieldOffset(0xAC8)] public fixed byte m_iszFollowMoverEntityName[0x8];
        [FieldOffset(0xAD0)] public fixed byte m_flFollowMoverDistance[0x4];
        [FieldOffset(0xAD4)] public fixed byte m_flFollowMoverRatio[0x4];
        [FieldOffset(0xAD8)] public fixed byte m_flFollowMoverCalculatedDistance[0x4];
        [FieldOffset(0xADC)] public fixed byte m_flFollowMoverSpringStrength[0x4];
        [FieldOffset(0xAE0)] public fixed byte m_nFollowMoverConstraintPriority[0x4];
        [FieldOffset(0xAE4)] public fixed byte m_vecFollowMoverCouplerRange[0x8];
        [FieldOffset(0xAEC)] public fixed byte m_bFollowConstraintsInitialized[0x4];
        [FieldOffset(0xAF0)] public fixed byte m_eFollowConstraint[0x4];
        [FieldOffset(0xAF4)] public fixed byte m_flFollowMoverSpeed[0x4];
        [FieldOffset(0xAF8)] public fixed byte m_flFollowMoverVelocity[0x4];
        [FieldOffset(0xAFC)] public fixed byte m_nTickMovementRan[0x4];
        [FieldOffset(0xB00)] public fixed byte m_movementSummary[0x20];
        [FieldOffset(0xB20)] public fixed byte m_bStopFromBeginStopTarget[0x1];
        [FieldOffset(0xB21)] public fixed byte m_bQueueStop[0x1];
        [FieldOffset(0xB22)] public fixed byte m_bQueueStopMoving[0x1];
        [FieldOffset(0xB23)] public fixed byte m_bQueueSetupPathMover[0x1];
        [FieldOffset(0xB24)] public fixed byte m_ePathRebuildStrategy[0x4];
        [FieldOffset(0xB28)] public fixed byte m_eFindFollowMoverStrategy[0x4];
        [FieldOffset(0xB2C)] public fixed byte m_bDisableDecelerationToStop[0x4];
        [FieldOffset(0xB30)] public fixed byte m_vOffsetFromPath[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD10)]
    public unsafe struct CPhysicsProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xBE0];
        [FieldOffset(0xBE0)] public fixed byte m_MotionEnabled[0x18];
        [FieldOffset(0xBF8)] public fixed byte m_OnAwakened[0x18];
        [FieldOffset(0xC10)] public fixed byte m_OnAwake[0x18];
        [FieldOffset(0xC28)] public fixed byte m_OnAsleep[0x18];
        [FieldOffset(0xC40)] public fixed byte m_OnPlayerUse[0x18];
        [FieldOffset(0xC58)] public fixed byte m_OnOutOfWorld[0x18];
        [FieldOffset(0xC70)] public fixed byte m_OnPlayerPickup[0x18];
        [FieldOffset(0xC88)] public fixed byte m_bForceNavIgnore[0x1];
        [FieldOffset(0xC89)] public fixed byte m_bNoNavmeshBlocker[0x1];
        [FieldOffset(0xC8A)] public fixed byte m_bForceNpcExclude[0x2];
        [FieldOffset(0xC8C)] public fixed byte m_massScale[0x4];
        [FieldOffset(0xC90)] public fixed byte m_buoyancyScale[0x4];
        [FieldOffset(0xC94)] public fixed byte m_damageType[0x4];
        [FieldOffset(0xC98)] public fixed byte m_damageToEnableMotion[0x4];
        [FieldOffset(0xC9C)] public fixed byte m_flForceToEnableMotion[0x4];
        [FieldOffset(0xCA0)] public fixed byte m_bDroppedByPlayer[0x1];
        [FieldOffset(0xCA1)] public fixed byte m_bTouchedByPlayer[0x1];
        [FieldOffset(0xCA2)] public fixed byte m_bFirstCollisionAfterLaunch[0x1];
        [FieldOffset(0xCA3)] public fixed byte m_bHasBeenAwakened[0x1];
        [FieldOffset(0xCA4)] public fixed byte m_bIsOverrideProp[0x4];
        [FieldOffset(0xCA8)] public fixed byte m_flLastBurn[0x4];
        [FieldOffset(0xCAC)] public fixed byte m_nDynamicContinuousContactBehavior[0x4];
        [FieldOffset(0xCB0)] public fixed byte m_fNextCheckDisableMotionContactsTime[0x4];
        [FieldOffset(0xCB4)] public fixed byte m_iInitialGlowState[0x4];
        [FieldOffset(0xCB8)] public fixed byte m_nGlowRange[0x4];
        [FieldOffset(0xCBC)] public fixed byte m_nGlowRangeMin[0x4];
        [FieldOffset(0xCC0)] public fixed byte m_glowColor[0x4];
        [FieldOffset(0xCC4)] public fixed byte m_bShouldAutoConvertBackFromDebris[0x1];
        [FieldOffset(0xCC5)] public fixed byte m_bMuteImpactEffects[0x3];
        [FieldOffset(0xCC8)] public fixed byte m_nNavObstacleType[0x4];
        [FieldOffset(0xCCC)] public fixed byte m_bUpdateNavWhenMoving[0x1];
        [FieldOffset(0xCCD)] public fixed byte m_bForceNavObstacleCut[0x1];
        [FieldOffset(0xCCE)] public fixed byte m_bAcceptDamageFromHeldObjects[0x1];
        [FieldOffset(0xCCF)] public fixed byte m_bEnableUseOutput[0x1];
        [FieldOffset(0xCD0)] public fixed byte m_CrateType[0x8];
        [FieldOffset(0xCD8)] public fixed byte m_strItemClass[0x20];
        [FieldOffset(0xCF8)] public fixed byte m_nItemCount[0x10];
        [FieldOffset(0xD08)] public fixed byte m_bRemovableForAmmoBalancing[0x1];
        [FieldOffset(0xD09)] public fixed byte m_bAwake[0x1];
        [FieldOffset(0xD0A)] public fixed byte m_bAttachedToReferenceFrame[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x870)]
    public unsafe struct CFuncNavObstruction {
        [FieldOffset(0x0)] public fixed byte pad_0[0x868];
        [FieldOffset(0x868)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x869)] public fixed byte m_bUseAsyncObstacleUpdate[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct CPhysWheelConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x508];
        [FieldOffset(0x508)] public fixed byte m_flSuspensionFrequency[0x4];
        [FieldOffset(0x50C)] public fixed byte m_flSuspensionDampingRatio[0x4];
        [FieldOffset(0x510)] public fixed byte m_flSuspensionHeightOffset[0x4];
        [FieldOffset(0x514)] public fixed byte m_bEnableSuspensionLimit[0x4];
        [FieldOffset(0x518)] public fixed byte m_flMinSuspensionOffset[0x4];
        [FieldOffset(0x51C)] public fixed byte m_flMaxSuspensionOffset[0x4];
        [FieldOffset(0x520)] public fixed byte m_bEnableSteeringLimit[0x4];
        [FieldOffset(0x524)] public fixed byte m_flMinSteeringAngle[0x4];
        [FieldOffset(0x528)] public fixed byte m_flMaxSteeringAngle[0x4];
        [FieldOffset(0x52C)] public fixed byte m_flSteeringAxisFriction[0x4];
        [FieldOffset(0x530)] public fixed byte m_flSpinAxisFriction[0x4];
        [FieldOffset(0x534)] public fixed byte m_hSteeringMimicsEntity[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B0)]
    public unsafe struct CSkyboxReference {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_hSkyCamera[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CPointPulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC40)]
    public unsafe struct CMolotovProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB40];
        [FieldOffset(0xB40)] public fixed byte m_bIsIncGrenade[0x18];
        [FieldOffset(0xB58)] public fixed byte m_bDetonated[0x8];
        [FieldOffset(0xB60)] public fixed byte m_stillTimer[0xE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterClass {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iFilterClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CPathWithDynamicNodes {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5B0];
        [FieldOffset(0x5B0)] public fixed byte m_vecPathNodes[0x20];
        [FieldOffset(0x5D0)] public fixed byte m_xInitialPathWorldToLocal[0x20];
        [FieldOffset(0x5F0)] public fixed byte m_eDesiredDirection[0x4];
        [FieldOffset(0x5F4)] public fixed byte m_bIgnoreParentRotation[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E0)]
    public unsafe struct CColorCorrection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flFadeInDuration[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flFadeOutDuration[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flStartFadeInWeight[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flStartFadeOutWeight[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_flTimeStartFadeIn[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flTimeStartFadeOut[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flMaxWeight[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x4C5)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x4C6)] public fixed byte m_bMaster[0x1];
        [FieldOffset(0x4C7)] public fixed byte m_bClientSide[0x1];
        [FieldOffset(0x4C8)] public fixed byte m_bExclusive[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_MinFalloff[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_MaxFalloff[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flCurWeight[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_netlookupFilename[0x200];
        [FieldOffset(0x6D8)] public fixed byte m_lookupFilename[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF50)]
    public unsafe struct CPropDoorRotatingBreakable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xF30];
        [FieldOffset(0xF30)] public fixed byte m_bBreakable[0x1];
        [FieldOffset(0xF31)] public fixed byte m_isAbleToCloseAreaPortals[0x3];
        [FieldOffset(0xF34)] public fixed byte m_currentDamageState[0x4];
        [FieldOffset(0xF38)] public fixed byte m_damageStates[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x858)]
    public unsafe struct CLightDirectionalEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9B0)]
    public unsafe struct CBaseClientUIEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_bEnabled[0x8];
        [FieldOffset(0x858)] public fixed byte m_DialogXMLName[0x8];
        [FieldOffset(0x860)] public fixed byte m_PanelClassName[0x8];
        [FieldOffset(0x868)] public fixed byte m_PanelID[0x8];
        [FieldOffset(0x870)] public fixed byte m_CustomOutput0[0x20];
        [FieldOffset(0x890)] public fixed byte m_CustomOutput1[0x20];
        [FieldOffset(0x8B0)] public fixed byte m_CustomOutput2[0x20];
        [FieldOffset(0x8D0)] public fixed byte m_CustomOutput3[0x20];
        [FieldOffset(0x8F0)] public fixed byte m_CustomOutput4[0x20];
        [FieldOffset(0x910)] public fixed byte m_CustomOutput5[0x20];
        [FieldOffset(0x930)] public fixed byte m_CustomOutput6[0x20];
        [FieldOffset(0x950)] public fixed byte m_CustomOutput7[0x20];
        [FieldOffset(0x970)] public fixed byte m_CustomOutput8[0x20];
        [FieldOffset(0x990)] public fixed byte m_CustomOutput9[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x928)]
    public unsafe struct CBreakable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_CPropDataComponent[0x40];
        [FieldOffset(0x898)] public fixed byte m_Material[0x4];
        [FieldOffset(0x89C)] public fixed byte m_hBreaker[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_Explosion[0x8];
        [FieldOffset(0x8A8)] public fixed byte m_iszSpawnObject[0x8];
        [FieldOffset(0x8B0)] public fixed byte m_flPressureDelay[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_iMinHealthDmg[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_iszPropData[0x8];
        [FieldOffset(0x8C0)] public fixed byte m_impactEnergyScale[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_nOverrideBlockLOS[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_OnStartDeath[0x18];
        [FieldOffset(0x8E0)] public fixed byte m_OnBreak[0x18];
        [FieldOffset(0x8F8)] public fixed byte m_OnHealthChanged[0x20];
        [FieldOffset(0x918)] public fixed byte m_PerformanceMode[0x4];
        [FieldOffset(0x91C)] public fixed byte m_hPhysicsAttacker[0x4];
        [FieldOffset(0x920)] public fixed byte m_flLastPhysicsInfluenceTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoLandmark {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct CBaseFilter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bNegated[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_OnPass[0x18];
        [FieldOffset(0x4C8)] public fixed byte m_OnFail[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct WeaponPurchaseTracker_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_weaponPurchases[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_sceneInstance[0x4];
        [FieldOffset(0x4)] public fixed byte m_mainActor[0x4];
        [FieldOffset(0x8)] public fixed byte m_cursorIDToEventID[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct CMapInfo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_iBuyingStatus[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flBombRadius[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_iPetPopulation[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_bUseNormalSpawnsForDM[0x1];
        [FieldOffset(0x4B5)] public fixed byte m_bDisableAutoGeneratedDMSpawns[0x3];
        [FieldOffset(0x4B8)] public fixed byte m_flBotMaxVisionDistance[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_iHostageCount[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_bFadePlayerVisibilityFarZ[0x1];
        [FieldOffset(0x4C1)] public fixed byte m_bRainTraceToSkyEnabled[0x1];
        [FieldOffset(0x4C2)] public fixed byte m_bGPUCullSkybox[0x2];
        [FieldOffset(0x4C4)] public fixed byte m_flEnvRainStrength[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flEnvPuddleRippleStrength[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_flEnvPuddleRippleDirection[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_flEnvWetnessCoverage[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_flEnvWetnessDryingAmount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CGradientFog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_hGradientFogTexture[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_flFogStartDistance[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flFogEndDistance[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_bHeightFogEnabled[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flFogStartHeight[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flFogEndHeight[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_flFarZ[0x4];
        [FieldOffset(0x4C8)] public fixed byte m_flFogMaxOpacity[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_flFogFalloffExponent[0x4];
        [FieldOffset(0x4D0)] public fixed byte m_flFogVerticalExponent[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_fogColor[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_flFogStrength[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bIsEnabled[0x1];
        [FieldOffset(0x4E2)] public fixed byte m_bGradientFogNeedsTextures[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A8)]
    public unsafe struct CSoundOpvarSetAABBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_Outflow_PlaySequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
        [FieldOffset(0x138)] public fixed byte m_ParamSequenceName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_Outflow_PlayDynamicVCD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC10)]
    public unsafe struct CPointClientUIWorldTextPanel {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA10];
        [FieldOffset(0xA10)] public fixed byte m_messageText[0x200];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_nameStringTableIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_designerName[0x10];
        [FieldOffset(0x30)] public fixed byte m_flags[0x8];
        [FieldOffset(0x38)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x3C)] public fixed byte m_fDataObjectTypes[0x4];
        [FieldOffset(0x40)] public fixed byte m_PathIndex[0x8];
        [FieldOffset(0x48)] public fixed byte m_pAttributes[0x8];
        [FieldOffset(0x50)] public fixed byte m_pPrev[0x8];
        [FieldOffset(0x58)] public fixed byte m_pNext[0x8];
        [FieldOffset(0x60)] public fixed byte m_pPrevByClass[0x8];
        [FieldOffset(0x68)] public fixed byte m_pNextByClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_LimitCount__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bLimitCountPasses[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9B0)]
    public unsafe struct CFuncRotator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_eRotateType[0x4];
        [FieldOffset(0x854)] public fixed byte m_bIsRotating[0x1];
        [FieldOffset(0x855)] public fixed byte m_eSolidType[0x3];
        [FieldOffset(0x858)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flRotationDistanceDegrees[0x4];
        [FieldOffset(0x860)] public fixed byte m_flTimeToCompleteRotation[0x4];
        [FieldOffset(0x864)] public fixed byte m_hRotatorTarget[0x4];
        [FieldOffset(0x868)] public fixed byte m_strRotatorTarget[0x8];
        [FieldOffset(0x870)] public fixed byte m_OnRotationStarted[0x18];
        [FieldOffset(0x888)] public fixed byte m_OnRotationCompleted[0x18];
        [FieldOffset(0x8A0)] public fixed byte m_OnOscillate[0x18];
        [FieldOffset(0x8B8)] public fixed byte m_OnOscillateStartArrive[0x18];
        [FieldOffset(0x8D0)] public fixed byte m_OnOscillateStartDepart[0x18];
        [FieldOffset(0x8E8)] public fixed byte m_OnOscillateEndArrive[0x18];
        [FieldOffset(0x900)] public fixed byte m_OnOscillateEndDepart[0x18];
        [FieldOffset(0x918)] public fixed byte m_nTickRotateRan[0x4];
        [FieldOffset(0x91C)] public fixed byte m_bStartedRotating[0x4];
        [FieldOffset(0x920)] public fixed byte m_rotationSummary[0x8];
        [FieldOffset(0x928)] public fixed byte m_flTimeToReachMaxSpeed[0x4];
        [FieldOffset(0x92C)] public fixed byte m_flTimeToReachZeroSpeed[0x4];
        [FieldOffset(0x930)] public fixed byte m_flTimeRotationStart[0x4];
        [FieldOffset(0x934)] public fixed byte m_flTimeRotationStop[0x4];
        [FieldOffset(0x938)] public fixed byte m_flStartSpeed[0x8];
        [FieldOffset(0x940)] public fixed byte m_qSpawnOrientation[0x10];
        [FieldOffset(0x950)] public fixed byte m_bReturningToInitialRotation[0x4];
        [FieldOffset(0x954)] public fixed byte m_flMinYawRotation[0x4];
        [FieldOffset(0x958)] public fixed byte m_flMaxYawRotation[0x4];
        [FieldOffset(0x95C)] public fixed byte m_bOscillationFromStart[0x4];
        [FieldOffset(0x960)] public fixed byte m_iszStartSound[0x8];
        [FieldOffset(0x968)] public fixed byte m_iszLoopSound[0x20];
        [FieldOffset(0x988)] public fixed byte m_iszStopSound[0x8];
        [FieldOffset(0x990)] public fixed byte m_flTargetAngle[0x4];
        [FieldOffset(0x994)] public fixed byte m_flCurrentAngle[0x4];
        [FieldOffset(0x998)] public fixed byte m_eRotationAxis[0x4];
        [FieldOffset(0x99C)] public fixed byte m_flSpeedDriftFromOverRotate[0x4];
        [FieldOffset(0x9A0)] public fixed byte m_bQueueStop[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x568)]
    public unsafe struct CSoundEventEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_bStartOnSpawn[0x1];
        [FieldOffset(0x4A9)] public fixed byte m_bToLocalPlayer[0x1];
        [FieldOffset(0x4AA)] public fixed byte m_bStopOnNew[0x1];
        [FieldOffset(0x4AB)] public fixed byte m_bSaveRestore[0x1];
        [FieldOffset(0x4AC)] public fixed byte m_bSavedIsPlaying[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flSavedElapsedTime[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_iszSourceEntityName[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_iszAttachmentName[0x8];
        [FieldOffset(0x4C8)] public fixed byte m_onGUIDChanged[0x30];
        [FieldOffset(0x4F8)] public fixed byte m_onSoundFinished[0x18];
        [FieldOffset(0x510)] public fixed byte m_flClientCullRadius[0x30];
        [FieldOffset(0x540)] public fixed byte m_iszSoundName[0x1C];
        [FieldOffset(0x55C)] public fixed byte m_hSource[0x4];
        [FieldOffset(0x560)] public fixed byte m_nEntityIndexSelection[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct CInfoPlayerCounterterrorist {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct CEnvFade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_fadeColor[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_Duration[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_HoldDuration[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_OnBeginFade[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CBasePlayerVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_sModelName[0xE0];
        [FieldOffset(0x108)] public fixed byte m_sModelNameAg2Override[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_flHeadDamageMultiplier[0x10];
        [FieldOffset(0x1F8)] public fixed byte m_flChestDamageMultiplier[0x10];
        [FieldOffset(0x208)] public fixed byte m_flStomachDamageMultiplier[0x10];
        [FieldOffset(0x218)] public fixed byte m_flArmDamageMultiplier[0x10];
        [FieldOffset(0x228)] public fixed byte m_flLegDamageMultiplier[0x10];
        [FieldOffset(0x238)] public fixed byte m_flHoldBreathTime[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flDrowningDamageInterval[0x4];
        [FieldOffset(0x240)] public fixed byte m_nDrowningDamageInitial[0x4];
        [FieldOffset(0x244)] public fixed byte m_nDrowningDamageMax[0x4];
        [FieldOffset(0x248)] public fixed byte m_nWaterSpeed[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flUseRange[0x4];
        [FieldOffset(0x250)] public fixed byte m_flUseAngleTolerance[0x4];
        [FieldOffset(0x254)] public fixed byte m_flCrouchTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA18)]
    public unsafe struct CTriggerImpact {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9E0];
        [FieldOffset(0x9E0)] public fixed byte m_flMagnitude[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_flNoise[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_flViewkick[0x8];
        [FieldOffset(0x9F0)] public fixed byte m_pOutputForce[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CCSGameModeRules_Deathmatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_flDMBonusStartTime[0x4];
        [FieldOffset(0x34)] public fixed byte m_flDMBonusTimeLength[0x4];
        [FieldOffset(0x38)] public fixed byte m_sDMBonusWeapon[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CTestPulseIO__EntityHandleIntArgs_t {
        [FieldOffset(0x0)] public fixed byte handleA[0x4];
        [FieldOffset(0x4)] public fixed byte valueB[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_CursorQueue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_nCursorsAllowedToRunParallel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseExecCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE90)]
    public unsafe struct CBasePropDoor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xCA0];
        [FieldOffset(0xCA0)] public fixed byte m_flAutoReturnDelay[0x8];
        [FieldOffset(0xCA8)] public fixed byte m_hDoorList[0x18];
        [FieldOffset(0xCC0)] public fixed byte m_nHardwareType[0x4];
        [FieldOffset(0xCC4)] public fixed byte m_bNeedsHardware[0x4];
        [FieldOffset(0xCC8)] public fixed byte m_eDoorState[0x4];
        [FieldOffset(0xCCC)] public fixed byte m_bLocked[0x1];
        [FieldOffset(0xCCD)] public fixed byte m_bNoNPCs[0x3];
        [FieldOffset(0xCD0)] public fixed byte m_closedPosition[0xC];
        [FieldOffset(0xCDC)] public fixed byte m_closedAngles[0xC];
        [FieldOffset(0xCE8)] public fixed byte m_hBlocker[0x4];
        [FieldOffset(0xCEC)] public fixed byte m_bFirstBlocked[0x4];
        [FieldOffset(0xCF0)] public fixed byte m_ls[0x20];
        [FieldOffset(0xD10)] public fixed byte m_bForceClosed[0x4];
        [FieldOffset(0xD14)] public fixed byte m_vecLatchWorldPosition[0xC];
        [FieldOffset(0xD20)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0xD24)] public fixed byte m_flSpeed[0x1C];
        [FieldOffset(0xD40)] public fixed byte m_SoundMoving[0x8];
        [FieldOffset(0xD48)] public fixed byte m_SoundOpen[0x8];
        [FieldOffset(0xD50)] public fixed byte m_SoundClose[0x8];
        [FieldOffset(0xD58)] public fixed byte m_SoundLock[0x8];
        [FieldOffset(0xD60)] public fixed byte m_SoundUnlock[0x8];
        [FieldOffset(0xD68)] public fixed byte m_SoundLatch[0x8];
        [FieldOffset(0xD70)] public fixed byte m_SoundPound[0x8];
        [FieldOffset(0xD78)] public fixed byte m_SoundJiggle[0x8];
        [FieldOffset(0xD80)] public fixed byte m_SoundLockedAnim[0x8];
        [FieldOffset(0xD88)] public fixed byte m_numCloseAttempts[0x4];
        [FieldOffset(0xD8C)] public fixed byte m_nPhysicsMaterial[0x4];
        [FieldOffset(0xD90)] public fixed byte m_SlaveName[0x8];
        [FieldOffset(0xD98)] public fixed byte m_hMaster[0x8];
        [FieldOffset(0xDA0)] public fixed byte m_OnBlockedClosing[0x18];
        [FieldOffset(0xDB8)] public fixed byte m_OnBlockedOpening[0x18];
        [FieldOffset(0xDD0)] public fixed byte m_OnUnblockedClosing[0x18];
        [FieldOffset(0xDE8)] public fixed byte m_OnUnblockedOpening[0x18];
        [FieldOffset(0xE00)] public fixed byte m_OnFullyClosed[0x18];
        [FieldOffset(0xE18)] public fixed byte m_OnFullyOpen[0x18];
        [FieldOffset(0xE30)] public fixed byte m_OnClose[0x18];
        [FieldOffset(0xE48)] public fixed byte m_OnOpen[0x18];
        [FieldOffset(0xE60)] public fixed byte m_OnLockedUse[0x18];
        [FieldOffset(0xE78)] public fixed byte m_OnAjarOpen[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CLogicBranchList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nLogicBranchNames[0x80];
        [FieldOffset(0x528)] public fixed byte m_LogicBranchList[0x18];
        [FieldOffset(0x540)] public fixed byte m_eLastState[0x8];
        [FieldOffset(0x548)] public fixed byte m_OnAllTrue[0x18];
        [FieldOffset(0x560)] public fixed byte m_OnAllFalse[0x18];
        [FieldOffset(0x578)] public fixed byte m_OnMixed[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CBtActionParachutePositioning {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_ActionTimer[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CAK47 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC90)]
    public unsafe struct CDynamicProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xBD0];
        [FieldOffset(0xBD0)] public fixed byte m_bGraphControllerEnabled[0x10];
        [FieldOffset(0xBE0)] public fixed byte m_bCreateNavObstacle[0x1];
        [FieldOffset(0xBE1)] public fixed byte m_bNavObstacleUpdatesOverridden[0x1];
        [FieldOffset(0xBE2)] public fixed byte m_bUseHitboxesForRenderBox[0x1];
        [FieldOffset(0xBE3)] public fixed byte m_bUseAnimGraph[0x5];
        [FieldOffset(0xBE8)] public fixed byte m_pOutputAnimBegun[0x18];
        [FieldOffset(0xC00)] public fixed byte m_pOutputAnimOver[0x18];
        [FieldOffset(0xC18)] public fixed byte m_pOutputAnimLoopCycleOver[0x18];
        [FieldOffset(0xC30)] public fixed byte m_OnAnimReachedStart[0x18];
        [FieldOffset(0xC48)] public fixed byte m_OnAnimReachedEnd[0x18];
        [FieldOffset(0xC60)] public fixed byte m_iszIdleAnim[0x8];
        [FieldOffset(0xC68)] public fixed byte m_nIdleAnimLoopMode[0x4];
        [FieldOffset(0xC6C)] public fixed byte m_bRandomizeCycle[0x1];
        [FieldOffset(0xC6D)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0xC6E)] public fixed byte m_bFiredStartEndOutput[0x1];
        [FieldOffset(0xC6F)] public fixed byte m_bForceNpcExclude[0x1];
        [FieldOffset(0xC70)] public fixed byte m_bCreateMovableSurfaceGraph[0x1];
        [FieldOffset(0xC71)] public fixed byte m_bCreateNonSolid[0x1];
        [FieldOffset(0xC72)] public fixed byte m_bIsOverrideProp[0x2];
        [FieldOffset(0xC74)] public fixed byte m_iInitialGlowState[0x4];
        [FieldOffset(0xC78)] public fixed byte m_nGlowRange[0x4];
        [FieldOffset(0xC7C)] public fixed byte m_nGlowRangeMin[0x4];
        [FieldOffset(0xC80)] public fixed byte m_glowColor[0x4];
        [FieldOffset(0xC84)] public fixed byte m_nGlowTeam[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2DA0)]
    public unsafe struct CHostageAlias_info_hostage_spawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2DA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct CFilterTeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4E0];
        [FieldOffset(0x4E0)] public fixed byte m_iFilterTeam[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A8)]
    public unsafe struct CFuncConveyor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x850];
        [FieldOffset(0x850)] public fixed byte m_szConveyorModels[0x8];
        [FieldOffset(0x858)] public fixed byte m_flTransitionDurationSeconds[0x4];
        [FieldOffset(0x85C)] public fixed byte m_flSpeed[0x4];
        [FieldOffset(0x860)] public fixed byte m_angMoveEntitySpace[0xC];
        [FieldOffset(0x86C)] public fixed byte m_vecMoveDirEntitySpace[0xC];
        [FieldOffset(0x878)] public fixed byte m_flTargetSpeed[0x4];
        [FieldOffset(0x87C)] public fixed byte m_nTransitionStartTick[0x4];
        [FieldOffset(0x880)] public fixed byte m_nTransitionDurationTicks[0x4];
        [FieldOffset(0x884)] public fixed byte m_flTransitionStartSpeed[0x4];
        [FieldOffset(0x888)] public fixed byte m_flFrictionScale[0x8];
        [FieldOffset(0x890)] public fixed byte m_hConveyorModels[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA28)]
    public unsafe struct CTriggerPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9D0];
        [FieldOffset(0x9D0)] public fixed byte m_pController[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_gravityScale[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_linearLimit[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_linearDamping[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_angularLimit[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_angularDamping[0x4];
        [FieldOffset(0x9EC)] public fixed byte m_linearForce[0x4];
        [FieldOffset(0x9F0)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x9F4)] public fixed byte m_flDampingRatio[0x4];
        [FieldOffset(0x9F8)] public fixed byte m_vecLinearForcePointAt[0xC];
        [FieldOffset(0xA04)] public fixed byte m_bCollapseToForcePoint[0x4];
        [FieldOffset(0xA08)] public fixed byte m_vecLinearForcePointAtWorld[0xC];
        [FieldOffset(0xA14)] public fixed byte m_vecLinearForceDirection[0xC];
        [FieldOffset(0xA20)] public fixed byte m_bForceDirectionIsInLocalSpace[0x1];
        [FieldOffset(0xA21)] public fixed byte m_bConvertToDebrisWhenPossible[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoInstructorHintBombTargetB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CFuncTimescale {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_flDesiredTimescale[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_flAcceleration[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flMinBlendRate[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flBlendDeltaMultiplier[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_isStarted[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CSoundOpvarSetPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x550];
        [FieldOffset(0x550)] public fixed byte m_OnEnter[0x18];
        [FieldOffset(0x568)] public fixed byte m_OnExit[0x18];
        [FieldOffset(0x580)] public fixed byte m_bAutoDisable[0x44];
        [FieldOffset(0x5C4)] public fixed byte m_flDistanceMin[0x4];
        [FieldOffset(0x5C8)] public fixed byte m_flDistanceMax[0x4];
        [FieldOffset(0x5CC)] public fixed byte m_flDistanceMapMin[0x4];
        [FieldOffset(0x5D0)] public fixed byte m_flDistanceMapMax[0x4];
        [FieldOffset(0x5D4)] public fixed byte m_flOcclusionRadius[0x4];
        [FieldOffset(0x5D8)] public fixed byte m_flOcclusionMin[0x4];
        [FieldOffset(0x5DC)] public fixed byte m_flOcclusionMax[0x4];
        [FieldOffset(0x5E0)] public fixed byte m_flValSetOnDisable[0x4];
        [FieldOffset(0x5E4)] public fixed byte m_bSetValueOnDisable[0x1];
        [FieldOffset(0x5E5)] public fixed byte m_bReloading[0x3];
        [FieldOffset(0x5E8)] public fixed byte m_nSimulationMode[0x4];
        [FieldOffset(0x5EC)] public fixed byte m_nVisibilitySamples[0x4];
        [FieldOffset(0x5F0)] public fixed byte m_vDynamicProxyPoint[0xC];
        [FieldOffset(0x5FC)] public fixed byte m_flDynamicMaximumOcclusion[0x4];
        [FieldOffset(0x600)] public fixed byte m_hDynamicEntity[0x8];
        [FieldOffset(0x608)] public fixed byte m_iszDynamicEntityName[0x8];
        [FieldOffset(0x610)] public fixed byte m_flPathingDistanceNormFactor[0x4];
        [FieldOffset(0x614)] public fixed byte m_vPathingSourcePos[0xC];
        [FieldOffset(0x620)] public fixed byte m_vPathingListenerPos[0xC];
        [FieldOffset(0x62C)] public fixed byte m_vPathingDirection[0xC];
        [FieldOffset(0x638)] public fixed byte m_nPathingSourceIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x520)]
    public unsafe struct CBasePlayerWeaponVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_szWorldModel[0xE0];
        [FieldOffset(0x108)] public fixed byte m_szWorldModelAg2Override[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_sToolsOnlyOwnerModelName[0xE0];
        [FieldOffset(0x2C8)] public fixed byte m_bBuiltRightHanded[0x1];
        [FieldOffset(0x2C9)] public fixed byte m_bAllowFlipping[0x7];
        [FieldOffset(0x2D0)] public fixed byte m_sMuzzleAttachment[0x20];
        [FieldOffset(0x2F0)] public fixed byte m_szMuzzleFlashParticle[0xE0];
        [FieldOffset(0x3D0)] public fixed byte m_szMuzzleFlashParticleConfig[0x8];
        [FieldOffset(0x3D8)] public fixed byte m_szBarrelSmokeParticle[0xE0];
        [FieldOffset(0x4B8)] public fixed byte m_nMuzzleSmokeShotThreshold[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flMuzzleSmokeTimeout[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flMuzzleSmokeDecrementRate[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_bGenerateMuzzleLight[0x1];
        [FieldOffset(0x4C5)] public fixed byte m_bShouldAnimateInWorld[0x1];
        [FieldOffset(0x4C6)] public fixed byte m_bLinkedCooldowns[0x1];
        [FieldOffset(0x4C7)] public fixed byte m_iFlags[0x1];
        [FieldOffset(0x4C8)] public fixed byte m_iWeight[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_bAutoSwitchTo[0x1];
        [FieldOffset(0x4CD)] public fixed byte m_bAutoSwitchFrom[0x1];
        [FieldOffset(0x4CE)] public fixed byte m_nPrimaryAmmoType[0x1];
        [FieldOffset(0x4CF)] public fixed byte m_nSecondaryAmmoType[0x1];
        [FieldOffset(0x4D0)] public fixed byte m_iMaxClip1[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_iMaxClip2[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_iDefaultClip1[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_iDefaultClip2[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_bReserveAmmoAsClips[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bTreatAsSingleClip[0x1];
        [FieldOffset(0x4E2)] public fixed byte m_bKeepLoadedAmmo[0x2];
        [FieldOffset(0x4E4)] public fixed byte m_iRumbleEffect[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_flDropSpeed[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_iSlot[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_iPosition[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_aShootSounds[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoTargetServerOnly {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1468)]
    public unsafe struct CCSGO_RushIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1468];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C8)]
    public unsafe struct CServerRagdollTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC90)]
    public unsafe struct CDynamicPropAlias_dynamic_prop {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x890)]
    public unsafe struct CMarkupVolumeTagged {
        [FieldOffset(0x0)] public fixed byte pad_0[0x858];
        [FieldOffset(0x858)] public fixed byte m_GroupNames[0x18];
        [FieldOffset(0x870)] public fixed byte m_Tags[0x18];
        [FieldOffset(0x888)] public fixed byte m_bIsGroup[0x1];
        [FieldOffset(0x889)] public fixed byte m_bGroupByPrefab[0x1];
        [FieldOffset(0x88A)] public fixed byte m_bGroupByVolume[0x1];
        [FieldOffset(0x88B)] public fixed byte m_bGroupOtherGroups[0x1];
        [FieldOffset(0x88C)] public fixed byte m_bIsInGroup[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4A8)]
    public unsafe struct CInfoParticleTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CEnvCubemap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x528];
        [FieldOffset(0x528)] public fixed byte m_Entity_hCubemapTexture[0x8];
        [FieldOffset(0x530)] public fixed byte m_Entity_bCustomCubemapTexture[0x4];
        [FieldOffset(0x534)] public fixed byte m_Entity_flInfluenceRadius[0x4];
        [FieldOffset(0x538)] public fixed byte m_Entity_vBoxProjectMins[0xC];
        [FieldOffset(0x544)] public fixed byte m_Entity_vBoxProjectMaxs[0xC];
        [FieldOffset(0x550)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x554)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x558)] public fixed byte m_Entity_nEnvCubeMapArrayIndex[0x4];
        [FieldOffset(0x55C)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x560)] public fixed byte m_Entity_flEdgeFadeDist[0x4];
        [FieldOffset(0x564)] public fixed byte m_Entity_vEdgeFadeDists[0xC];
        [FieldOffset(0x570)] public fixed byte m_Entity_flDiffuseScale[0x4];
        [FieldOffset(0x574)] public fixed byte m_Entity_bStartDisabled[0x1];
        [FieldOffset(0x575)] public fixed byte m_Entity_bDefaultEnvMap[0x1];
        [FieldOffset(0x576)] public fixed byte m_Entity_bDefaultSpecEnvMap[0x1];
        [FieldOffset(0x577)] public fixed byte m_Entity_bIndoorCubeMap[0x1];
        [FieldOffset(0x578)] public fixed byte m_Entity_bCopyDiffuseFromDefaultCubemap[0x10];
        [FieldOffset(0x588)] public fixed byte m_Entity_bEnabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CCSPlayer_DamageReactServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1280)]
    public unsafe struct CWeaponXM1014 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA68)]
    public unsafe struct CTriggerLerpObject {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_iszLerpTarget[0x8];
        [FieldOffset(0x9D0)] public fixed byte m_hLerpTarget[0x8];
        [FieldOffset(0x9D8)] public fixed byte m_iszLerpTargetAttachment[0x8];
        [FieldOffset(0x9E0)] public fixed byte m_hLerpTargetAttachment[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_flLerpDuration[0x4];
        [FieldOffset(0x9E8)] public fixed byte m_bAttachedEntityWasParented[0x1];
        [FieldOffset(0x9E9)] public fixed byte m_bLerpRestoreMoveType[0x1];
        [FieldOffset(0x9EA)] public fixed byte m_bSingleLerpObject[0x6];
        [FieldOffset(0x9F0)] public fixed byte m_vecLerpingObjects[0x18];
        [FieldOffset(0xA08)] public fixed byte m_iszLerpEffect[0x8];
        [FieldOffset(0xA10)] public fixed byte m_iszLerpSound[0x8];
        [FieldOffset(0xA18)] public fixed byte m_bAttachTouchingObject[0x4];
        [FieldOffset(0xA1C)] public fixed byte m_hEntityToWaitForDisconnect[0x4];
        [FieldOffset(0xA20)] public fixed byte m_OnLerpStarted[0x18];
        [FieldOffset(0xA38)] public fixed byte m_OnLerpFinished[0x18];
        [FieldOffset(0xA50)] public fixed byte m_OnDetached[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD10)]
    public unsafe struct CPhysicsPropOverride {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9D8)]
    public unsafe struct CTriggerSave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x9C8];
        [FieldOffset(0x9C8)] public fixed byte m_bForceNewLevelUnit[0x4];
        [FieldOffset(0x9CC)] public fixed byte m_fDangerousTimer[0x4];
        [FieldOffset(0x9D0)] public fixed byte m_minHitPoints[0x4];
        [FieldOffset(0x9D4)] public fixed byte m_flRetriggerDelay[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C8)]
    public unsafe struct CPointHurt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4A8];
        [FieldOffset(0x4A8)] public fixed byte m_nDamage[0x4];
        [FieldOffset(0x4AC)] public fixed byte m_bitsDamageType[0x4];
        [FieldOffset(0x4B0)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4B4)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0x4B8)] public fixed byte m_strTarget[0x8];
        [FieldOffset(0x4C0)] public fixed byte m_pActivator[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct CBaseAnimGraphAlias_baseanimating {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D8)]
    public unsafe struct CBasePlayerController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4B0];
        [FieldOffset(0x4B0)] public fixed byte m_nInButtonsWhichAreToggles[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_nTickBase[0x28];
        [FieldOffset(0x4E0)] public fixed byte m_hPawn[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_bKnownTeamMismatch[0x8];
        [FieldOffset(0x4EC)] public fixed byte m_nSplitScreenSlot[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_hSplitOwner[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_hSplitScreenPlayers[0x18];
        [FieldOffset(0x510)] public fixed byte m_bIsHLTV[0x4];
        [FieldOffset(0x514)] public fixed byte m_iConnected[0x4];
        [FieldOffset(0x518)] public fixed byte m_iMostConnected[0x4];
        [FieldOffset(0x51C)] public fixed byte m_iszPlayerName[0x84];
        [FieldOffset(0x5A0)] public fixed byte m_szNetworkIDString[0x8];
        [FieldOffset(0x5A8)] public fixed byte m_fLerpTime[0x4];
        [FieldOffset(0x5AC)] public fixed byte m_bLagCompensation[0x1];
        [FieldOffset(0x5AD)] public fixed byte m_bPredict[0x7];
        [FieldOffset(0x5B4)] public fixed byte m_bIsLowViolence[0x1];
        [FieldOffset(0x5B5)] public fixed byte m_bGamePaused[0x13B];
        [FieldOffset(0x6F0)] public fixed byte m_iIgnoreGlobalChat[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_flLastPlayerTalkTime[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_flLastEntitySteadyState[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_nAvailableEntitySteadyState[0x4];
        [FieldOffset(0x700)] public fixed byte m_bHasAnySteadyStateEnts[0x10];
        [FieldOffset(0x710)] public fixed byte m_steamID[0x8];
        [FieldOffset(0x718)] public fixed byte m_bNoClipEnabled[0x4];
        [FieldOffset(0x71C)] public fixed byte m_iDesiredFOV[0xBC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CRangeFloat {
        [FieldOffset(0x0)] public fixed byte m_pValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CDestructiblePart {
        [FieldOffset(0x0)] public fixed byte m_DebugName[0x8];
        [FieldOffset(0x8)] public fixed byte m_nHitGroup[0x4];
        [FieldOffset(0xC)] public fixed byte m_bDisableHitGroupWhenDestroyed[0x4];
        [FieldOffset(0x10)] public fixed byte m_nOtherHitgroupsToDestroyWhenFullyDestructed[0x18];
        [FieldOffset(0x28)] public fixed byte m_bOnlyDestroyWhenGibbing[0x8];
        [FieldOffset(0x30)] public fixed byte m_sBodyGroupName[0x8];
        [FieldOffset(0x38)] public fixed byte m_DamageLevels[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PhysBlockHeader_t {
        [FieldOffset(0x0)] public fixed byte nSaved[0x8];
        [FieldOffset(0x8)] public fixed byte pWorldObject[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct RelationshipOverride_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte entity[0x4];
        [FieldOffset(0xC)] public fixed byte classType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AutoRoomDoorwayPairs_t {
        [FieldOffset(0x0)] public fixed byte vP1[0xC];
        [FieldOffset(0xC)] public fixed byte vP2[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct NavHull_t {
        [FieldOffset(0x0)] public fixed byte m_nHullIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CDebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte m_text[0x8];
        [FieldOffset(0x8)] public fixed byte m_dataType[0x4];
        [FieldOffset(0xC)] public fixed byte m_userFlags[0x4];
        [FieldOffset(0x10)] public fixed byte m_userData[0x4];
        [FieldOffset(0x14)] public fixed byte m_userVector[0xC];
        [FieldOffset(0x20)] public fixed byte m_userTransform[0x20];
        [FieldOffset(0x40)] public fixed byte m_userShape[0x98];
        [FieldOffset(0xD8)] public fixed byte m_drawColor[0x8];
        [FieldOffset(0xE0)] public fixed byte m_vecDebugOverlayData[0x18];
        [FieldOffset(0xF8)] public fixed byte m_pStructuredData[0x8];
        [FieldOffset(0x100)] public fixed byte m_hEntity[0x8];
        [FieldOffset(0x108)] public fixed byte m_sEntityName[0x8];
        [FieldOffset(0x110)] public fixed byte m_nEntityIndex[0x10];
        [FieldOffset(0x120)] public fixed byte m_children[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CRemapFloat {
        [FieldOffset(0x0)] public fixed byte m_pValue[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CHintMessage {
        [FieldOffset(0x0)] public fixed byte m_hintString[0x8];
        [FieldOffset(0x8)] public fixed byte m_args[0x18];
        [FieldOffset(0x20)] public fixed byte m_duration[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNavAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct AI_GroundRootMotionMotor_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte desired_movement_gait_set[0x8];
        [FieldOffset(0x10)] public fixed byte desired_movement_gait[0x8];
        [FieldOffset(0x18)] public fixed byte current_movement_gait_set[0x8];
        [FieldOffset(0x20)] public fixed byte current_movement_gait[0x8];
        [FieldOffset(0x28)] public fixed byte movement_setting_id[0x8];
        [FieldOffset(0x30)] public fixed byte gait_switch_blocked_reason[0x8];
        [FieldOffset(0x38)] public fixed byte b_goal_completion_allowed[0x8];
        [FieldOffset(0x40)] public fixed byte state[0x8];
        [FieldOffset(0x48)] public fixed byte n_state_active_tick_count[0x4];
        [FieldOffset(0x4C)] public fixed byte b_has_path[0x4];
        [FieldOffset(0x50)] public fixed byte f_remaining_ground_path_length[0x4];
        [FieldOffset(0x54)] public fixed byte f_current_speed[0x4];
        [FieldOffset(0x58)] public fixed byte move_type[0x8];
        [FieldOffset(0x60)] public fixed byte f_forward_strafing_angle_actual[0x4];
        [FieldOffset(0x64)] public fixed byte f_forward_strafing_angle_desired[0x4];
        [FieldOffset(0x68)] public fixed byte f_forward_strafing_angle_committed[0x4];
        [FieldOffset(0x6C)] public fixed byte f_current_lean[0x4];
        [FieldOffset(0x70)] public fixed byte f_target_lean[0x8];
        [FieldOffset(0x78)] public fixed byte vec_events[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct ParticleNode_t {
        [FieldOffset(0x0)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x4)] public fixed byte m_iIndex[0x4];
        [FieldOffset(0x8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_flGrowthDuration[0x4];
        [FieldOffset(0x10)] public fixed byte m_vecGrowthOrigin[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flEndcapTime[0x4];
        [FieldOffset(0x20)] public fixed byte m_bMarkedForDelete[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFootstepTableHandle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDecalGroupVData {
        [FieldOffset(0x0)] public fixed byte m_vecOptions[0x18];
        [FieldOffset(0x18)] public fixed byte m_flTotalProbability[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmSnapWeaponTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPlayerControllerComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CResponseQueue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_ExpresserTargets[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CodeGenAABB_t {
        [FieldOffset(0x0)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMaxBounds[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CScriptUniformRandomStream {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hScriptScope[0x94];
        [FieldOffset(0x9C)] public fixed byte m_nInitialSeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct lerpdata_t {
        [FieldOffset(0x0)] public fixed byte m_hEnt[0x4];
        [FieldOffset(0x4)] public fixed byte m_MoveType[0x4];
        [FieldOffset(0x8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_vecStartOrigin[0x14];
        [FieldOffset(0x20)] public fixed byte m_qStartRot[0x10];
        [FieldOffset(0x30)] public fixed byte m_nFXIndex[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct WrappedPhysicsJoint_t {
        [FieldOffset(0x0)] public fixed byte m_pJoint[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct SimpleConstraintSoundProfile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flKeyPointMinSoundThreshold[0x4];
        [FieldOffset(0xC)] public fixed byte m_flKeyPointMaxSoundThreshold[0x4];
        [FieldOffset(0x10)] public fixed byte m_reversalSoundThresholdSmall[0x4];
        [FieldOffset(0x14)] public fixed byte m_reversalSoundThresholdMedium[0x4];
        [FieldOffset(0x18)] public fixed byte m_reversalSoundThresholdLarge[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSimpleSimTimer {
        [FieldOffset(0x0)] public fixed byte m_flNext[0x4];
        [FieldOffset(0x4)] public fixed byte m_nWorldGroupId[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct AI_BaseNPCAnimGraph_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte ag2_update_id[0x8];
        [FieldOffset(0x8)] public fixed byte e_action_desired[0x8];
        [FieldOffset(0x10)] public fixed byte e_action_handshake_restart[0x8];
        [FieldOffset(0x18)] public fixed byte e_action_handshake_body_authority_current[0x8];
        [FieldOffset(0x20)] public fixed byte e_action_handshake_body_authority_desired[0x8];
        [FieldOffset(0x28)] public fixed byte e_movement_type_desired[0x8];
        [FieldOffset(0x30)] public fixed byte e_movement_handshake_restart[0x8];
        [FieldOffset(0x38)] public fixed byte e_movement_handshake_body_authority_current[0x8];
        [FieldOffset(0x40)] public fixed byte e_movement_handshake_body_authority_desired[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPhysicsBodyGameMarkupData {
        [FieldOffset(0x0)] public fixed byte m_PhysicsBodyMarkupByBoneName[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct SoundCommand_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_time[0x4];
        [FieldOffset(0xC)] public fixed byte m_deltaTime[0x4];
        [FieldOffset(0x10)] public fixed byte m_command[0x4];
        [FieldOffset(0x14)] public fixed byte m_value[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct modifiedconvars_t {
        [FieldOffset(0x0)] public fixed byte pszConvar[0x80];
        [FieldOffset(0x80)] public fixed byte pszCurrentValue[0x80];
        [FieldOffset(0x100)] public fixed byte pszOrgValue[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CTestPulseIOComponent_Derived {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct SAVE_HEADER {
        [FieldOffset(0x0)] public fixed byte m_saveId[0x4];
        [FieldOffset(0x4)] public fixed byte m_version[0x4];
        [FieldOffset(0x8)] public fixed byte m_nConnectionCount[0x4];
        [FieldOffset(0xC)] public fixed byte m_nMapVersion[0x4];
        [FieldOffset(0x10)] public fixed byte m_sSpawnGroupName[0x10];
        [FieldOffset(0x20)] public fixed byte m_vecWorldOffset[0x30];
        [FieldOffset(0x50)] public fixed byte m_flSaveTime[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSkillDamage {
        [FieldOffset(0x0)] public fixed byte m_flDamage[0x10];
        [FieldOffset(0x10)] public fixed byte m_flNPCDamageScalarVsNPC[0x4];
        [FieldOffset(0x14)] public fixed byte m_flPhysicsForceDamage[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct DebugSnapshotBaseStructuredData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
        [FieldOffset(0x0)] public fixed byte m_nInitialMovementId[0x8];
        [FieldOffset(0x8)] public fixed byte m_nCurrentMovementId[0x8];
        [FieldOffset(0x10)] public fixed byte m_nMode[0x8];
        [FieldOffset(0x18)] public fixed byte m_nType[0x8];
        [FieldOffset(0x20)] public fixed byte m_nState[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CFloatExponentialMovingAverage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct physics_save_sphere_t {
        [FieldOffset(0x0)] public fixed byte radius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimGraph2InstancePtr {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct GAME_HEADER {
        [FieldOffset(0x0)] public fixed byte m_sComment[0x8];
        [FieldOffset(0x8)] public fixed byte m_nSpawnGroupCount[0x8];
        [FieldOffset(0x10)] public fixed byte m_sLandmark[0x8];
        [FieldOffset(0x18)] public fixed byte m_sRequiredAddons[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ChickenPathCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x188)]
    public unsafe struct AI_BaseNPC_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte npc_state[0x8];
        [FieldOffset(0x10)] public fixed byte current_enemy[0x8];
        [FieldOffset(0x18)] public fixed byte s_current_schedule[0x8];
        [FieldOffset(0x20)] public fixed byte s_current_task[0x8];
        [FieldOffset(0x28)] public fixed byte s_prev_schedule[0x8];
        [FieldOffset(0x30)] public fixed byte s_npc_current_movement[0x8];
        [FieldOffset(0x38)] public fixed byte s_last_task_end_location[0x8];
        [FieldOffset(0x40)] public fixed byte conditions[0x18];
        [FieldOffset(0x58)] public fixed byte anim_events[0x18];
        [FieldOffset(0x70)] public fixed byte animgraph[0x48];
        [FieldOffset(0xB8)] public fixed byte navigator[0x50];
        [FieldOffset(0x108)] public fixed byte motorServices[0x38];
        [FieldOffset(0x140)] public fixed byte facingServices[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CDebugDrawHistoryData {
        [FieldOffset(0x0)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x4)] public fixed byte m_etype[0x4];
        [FieldOffset(0x8)] public fixed byte m_vectors[0x10];
        [FieldOffset(0x18)] public fixed byte m_colors[0x10];
        [FieldOffset(0x28)] public fixed byte m_dimensions[0x10];
        [FieldOffset(0x38)] public fixed byte m_times[0x10];
        [FieldOffset(0x48)] public fixed byte m_uint64s[0x10];
        [FieldOffset(0x58)] public fixed byte m_bools[0x10];
        [FieldOffset(0x68)] public fixed byte m_strings[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkViewOffsetVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x18)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct AmmoIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerContact {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CDestructiblePartsSystemData {
        [FieldOffset(0x0)] public fixed byte m_PartsDataByHitGroup[0x28];
        [FieldOffset(0x28)] public fixed byte m_nMinMaxNumberHitGroupsToDestroyWhenGibbing[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CRopeOverlapHit {
        [FieldOffset(0x0)] public fixed byte m_hEntity[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecOverlappingLinks[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ActorClipEntry_t {
        [FieldOffset(0x0)] public fixed byte m_sClipName[0x8];
        [FieldOffset(0x8)] public fixed byte m_bLooping[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNavPathCostForTests {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct ResponseContext_t {
        [FieldOffset(0x0)] public fixed byte m_iszName[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszValue[0x8];
        [FieldOffset(0x10)] public fixed byte m_fExpirationTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ApproachAreaCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CNavVolumeSphericalShell {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_flRadiusInner[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayerPawnComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
        [FieldOffset(0x30)] public fixed byte m_pComponentGraphController[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct AI_FacingServices_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte npc_position[0x10];
        [FieldOffset(0x10)] public fixed byte facing_target_source[0x8];
        [FieldOffset(0x18)] public fixed byte facing_target[0x10];
        [FieldOffset(0x28)] public fixed byte schedule_facing_priority[0x8];
        [FieldOffset(0x30)] public fixed byte strafing_source[0x8];
        [FieldOffset(0x38)] public fixed byte strafing_enabled[0x8];
        [FieldOffset(0x40)] public fixed byte movement_id[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct AI_Navigator_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte s_movement_id[0x8];
        [FieldOffset(0x8)] public fixed byte s_movement_serial_number[0x8];
        [FieldOffset(0x10)] public fixed byte s_goal_source_location[0x8];
        [FieldOffset(0x18)] public fixed byte last_waypoint_pos[0xC];
        [FieldOffset(0x24)] public fixed byte goal_location[0xC];
        [FieldOffset(0x30)] public fixed byte waypoints[0x18];
        [FieldOffset(0x48)] public fixed byte s_arrival_movement_gait_set[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x108)]
    public unsafe struct CDecalInstance {
        [FieldOffset(0x0)] public fixed byte m_sDecalGroup[0x8];
        [FieldOffset(0x8)] public fixed byte m_hMaterial[0x8];
        [FieldOffset(0x10)] public fixed byte m_sSequenceName[0x4];
        [FieldOffset(0x14)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x18)] public fixed byte m_nBoneIndex[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nTriangleIndex[0x4];
        [FieldOffset(0x20)] public fixed byte m_vPositionLS[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vPositionOS[0xC];
        [FieldOffset(0x38)] public fixed byte m_vNormalLS[0xC];
        [FieldOffset(0x44)] public fixed byte m_vNormalOS[0xC];
        [FieldOffset(0x50)] public fixed byte m_vSAxisLS[0xC];
        [FieldOffset(0x5C)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x60)] public fixed byte m_Color[0x4];
        [FieldOffset(0x64)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x68)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flDepth[0x4];
        [FieldOffset(0x70)] public fixed byte m_mTransform[0x30];
        [FieldOffset(0xA0)] public fixed byte m_mLocalToTriangle[0x30];
        [FieldOffset(0xD0)] public fixed byte m_flAnimationScale[0x4];
        [FieldOffset(0xD4)] public fixed byte m_flAnimationStartTime[0x4];
        [FieldOffset(0xD8)] public fixed byte m_flPlaceTime[0x4];
        [FieldOffset(0xDC)] public fixed byte m_flFadeStartTime[0x4];
        [FieldOffset(0xE0)] public fixed byte m_flFadeDuration[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flLightingOriginOffset[0x14];
        [FieldOffset(0xF8)] public fixed byte m_flBoundingRadiusSqr[0x4];
        [FieldOffset(0xFC)] public fixed byte m_nSequenceIndex[0x2];
        [FieldOffset(0xFE)] public fixed byte m_bIsAdjacent[0x1];
        [FieldOffset(0xFF)] public fixed byte m_bDoDecalLightmapping[0x9];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x74)]
    public unsafe struct CGameScriptedMoveData {
        [FieldOffset(0x0)] public fixed byte m_vAccumulatedRootMotion[0xC];
        [FieldOffset(0xC)] public fixed byte m_angAccumulatedRootMotionRotation[0xC];
        [FieldOffset(0x18)] public fixed byte m_vSrc[0xC];
        [FieldOffset(0x24)] public fixed byte m_angSrc[0xC];
        [FieldOffset(0x30)] public fixed byte m_angCurrent[0xC];
        [FieldOffset(0x3C)] public fixed byte m_flLockedSpeed[0x4];
        [FieldOffset(0x40)] public fixed byte m_flAngRate[0x4];
        [FieldOffset(0x44)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x48)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x4D)] public fixed byte m_bTeleportOnEnd[0x1];
        [FieldOffset(0x4E)] public fixed byte m_bIgnoreRotation[0x1];
        [FieldOffset(0x4F)] public fixed byte m_bSuccess[0x1];
        [FieldOffset(0x50)] public fixed byte m_nForcedCrouchState[0x4];
        [FieldOffset(0x54)] public fixed byte m_bIgnoreCollisions[0x4];
        [FieldOffset(0x58)] public fixed byte m_vDest[0xC];
        [FieldOffset(0x64)] public fixed byte m_angDst[0xC];
        [FieldOffset(0x70)] public fixed byte m_hDestEntity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSkeletonAnimationController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pSkeletonInstance[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct CNavVolumeMarkupVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CResponseCriteriaSet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_bOverrideOnAppend[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FuncRotatorRotationSummary_t {
        [FieldOffset(0x0)] public fixed byte nTick[0x4];
        [FieldOffset(0x4)] public fixed byte nFlags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CAI_Expresser {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_conceptCooldowns[0x28];
        [FieldOffset(0x38)] public fixed byte m_ruleCooldowns[0x28];
        [FieldOffset(0x60)] public fixed byte m_flStopTalkTime[0x4];
        [FieldOffset(0x64)] public fixed byte m_flStopTalkTimeWithoutDelay[0x4];
        [FieldOffset(0x68)] public fixed byte m_flQueuedSpeechTime[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flBlockedTalkTime[0x4];
        [FieldOffset(0x70)] public fixed byte m_voicePitch[0x4];
        [FieldOffset(0x74)] public fixed byte m_flLastTimeAcceptedSpeak[0x4];
        [FieldOffset(0x78)] public fixed byte m_bAllowSpeakingInterrupts[0x1];
        [FieldOffset(0x79)] public fixed byte m_bConsiderSceneInvolvementAsSpeech[0x1];
        [FieldOffset(0x7A)] public fixed byte m_bSceneEntityDisabled[0x2];
        [FieldOffset(0x7C)] public fixed byte m_nLastSpokenPriority[0x1C];
        [FieldOffset(0x98)] public fixed byte m_pOuter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IChoreoServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerAttributes {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CStopwatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC];
        [FieldOffset(0xC)] public fixed byte m_flInterval[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerCloth {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ResponseParams {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte odds[0x2];
        [FieldOffset(0x12)] public fixed byte flags[0x6];
        [FieldOffset(0x18)] public fixed byte m_pFollowup[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct SPAWNGROUP_HEADER {
        [FieldOffset(0x0)] public fixed byte m_sGroupName[0x8];
        [FieldOffset(0x8)] public fixed byte m_sEntityLumpName[0x8];
        [FieldOffset(0x10)] public fixed byte m_vecWorldOffset[0x30];
        [FieldOffset(0x40)] public fixed byte m_bClientSpawnGroup[0x1];
        [FieldOffset(0x41)] public fixed byte m_bSuppressAllEntities[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct globalentity_t {
        [FieldOffset(0x0)] public fixed byte name[0x2];
        [FieldOffset(0x2)] public fixed byte levelName[0x2];
        [FieldOffset(0x4)] public fixed byte state[0x4];
        [FieldOffset(0x8)] public fixed byte counter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAnimGraphControllerPtr {
        [FieldOffset(0x0)] public fixed byte m_pController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct ConstraintSoundInfo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vSampler[0x18];
        [FieldOffset(0x20)] public fixed byte m_soundProfile[0x20];
        [FieldOffset(0x40)] public fixed byte m_forwardAxis[0x10];
        [FieldOffset(0x50)] public fixed byte m_iszTravelSoundFwd[0x8];
        [FieldOffset(0x58)] public fixed byte m_iszTravelSoundBack[0x20];
        [FieldOffset(0x78)] public fixed byte m_iszReversalSoundSmall[0x8];
        [FieldOffset(0x80)] public fixed byte m_iszReversalSoundMedium[0x8];
        [FieldOffset(0x88)] public fixed byte m_iszReversalSoundLarge[0x8];
        [FieldOffset(0x90)] public fixed byte m_bPlayTravelSound[0x1];
        [FieldOffset(0x91)] public fixed byte m_bPlayReversalSound[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CPhysicsBodyGameMarkup {
        [FieldOffset(0x0)] public fixed byte m_TargetBody[0x8];
        [FieldOffset(0x8)] public fixed byte m_Tag[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PointCameraSettings_t {
        [FieldOffset(0x0)] public fixed byte m_flNearBlurryDistance[0x4];
        [FieldOffset(0x4)] public fixed byte m_flNearCrispDistance[0x4];
        [FieldOffset(0x8)] public fixed byte m_flFarCrispDistance[0x4];
        [FieldOffset(0xC)] public fixed byte m_flFarBlurryDistance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct HUDPanelHasClass_t {
        [FieldOffset(0x0)] public fixed byte m_nPanelIdIndex[0x2];
        [FieldOffset(0x2)] public fixed byte m_nClassNameIndex[0x2];
        [FieldOffset(0x4)] public fixed byte m_eClassStatus[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1030)]
    public unsafe struct DebugDrawBoneTransforms_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte vecBones[0x1020];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct INavPathCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_navHull[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CVectorMovingAverage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct HUDPanelDialogVariableString_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nPanelIdIndex[0x2];
        [FieldOffset(0xA)] public fixed byte m_nDialogVariableIndex[0x6];
        [FieldOffset(0x10)] public fixed byte m_sValue[0x8];
        [FieldOffset(0x18)] public fixed byte m_bIsSet[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSoundEnvelope {
        [FieldOffset(0x0)] public fixed byte m_current[0x4];
        [FieldOffset(0x4)] public fixed byte m_target[0x4];
        [FieldOffset(0x8)] public fixed byte m_rate[0x4];
        [FieldOffset(0xC)] public fixed byte m_forceupdate[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x64)]
    public unsafe struct dynpitchvol_base_t {
        [FieldOffset(0x0)] public fixed byte preset[0x4];
        [FieldOffset(0x4)] public fixed byte pitchrun[0x4];
        [FieldOffset(0x8)] public fixed byte pitchstart[0x4];
        [FieldOffset(0xC)] public fixed byte spinup[0x4];
        [FieldOffset(0x10)] public fixed byte spindown[0x4];
        [FieldOffset(0x14)] public fixed byte volrun[0x4];
        [FieldOffset(0x18)] public fixed byte volstart[0x4];
        [FieldOffset(0x1C)] public fixed byte fadein[0x4];
        [FieldOffset(0x20)] public fixed byte fadeout[0x4];
        [FieldOffset(0x24)] public fixed byte lfotype[0x4];
        [FieldOffset(0x28)] public fixed byte lforate[0x4];
        [FieldOffset(0x2C)] public fixed byte lfomodpitch[0x4];
        [FieldOffset(0x30)] public fixed byte lfomodvol[0x4];
        [FieldOffset(0x34)] public fixed byte cspinup[0x4];
        [FieldOffset(0x38)] public fixed byte cspincount[0x4];
        [FieldOffset(0x3C)] public fixed byte pitch[0x4];
        [FieldOffset(0x40)] public fixed byte spinupsav[0x4];
        [FieldOffset(0x44)] public fixed byte spindownsav[0x4];
        [FieldOffset(0x48)] public fixed byte pitchfrac[0x4];
        [FieldOffset(0x4C)] public fixed byte vol[0x4];
        [FieldOffset(0x50)] public fixed byte fadeinsav[0x4];
        [FieldOffset(0x54)] public fixed byte fadeoutsav[0x4];
        [FieldOffset(0x58)] public fixed byte volfrac[0x4];
        [FieldOffset(0x5C)] public fixed byte lfofrac[0x4];
        [FieldOffset(0x60)] public fixed byte lfomult[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CStopwatchBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bIsRunning[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
        [FieldOffset(0x0)] public fixed byte description[0x8];
        [FieldOffset(0x8)] public fixed byte location[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2B8)]
    public unsafe struct CMarkupSearch_PathCostAreaFilter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_searchHelper[0x2B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CNavVolumeVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_bHasBeenPreFiltered[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct NavGravity_t {
        [FieldOffset(0x0)] public fixed byte m_vGravity[0xC];
        [FieldOffset(0xC)] public fixed byte m_bDefault[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PulseScriptedSequenceData_t {
        [FieldOffset(0x0)] public fixed byte m_nActorID[0x8];
        [FieldOffset(0x8)] public fixed byte m_szPreIdleSequence[0x8];
        [FieldOffset(0x10)] public fixed byte m_szEntrySequence[0x8];
        [FieldOffset(0x18)] public fixed byte m_szSequence[0x8];
        [FieldOffset(0x20)] public fixed byte m_szExitSequence[0x8];
        [FieldOffset(0x28)] public fixed byte m_nMoveTo[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nMoveToGait[0x4];
        [FieldOffset(0x30)] public fixed byte m_nHeldWeaponBehavior[0x4];
        [FieldOffset(0x34)] public fixed byte m_bLoopPreIdleSequence[0x1];
        [FieldOffset(0x35)] public fixed byte m_bLoopActionSequence[0x1];
        [FieldOffset(0x36)] public fixed byte m_bLoopPostIdleSequence[0x1];
        [FieldOffset(0x37)] public fixed byte m_bIgnoreLookAt[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x108)]
    public unsafe struct CChoreo_GraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_eChoreoState[0x18];
        [FieldOffset(0xD8)] public fixed byte m_tChoreoTargetWarp[0x18];
        [FieldOffset(0xF0)] public fixed byte m_tChoreoExitWarp[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CBaseAnimGraphDestructibleParts_GraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ExternalAnimGraphHandle_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPhysicsShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_force[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CInfoChoreoAnchorPosition {
        [FieldOffset(0x0)] public fixed byte m_vOriginLS[0x10];
        [FieldOffset(0x10)] public fixed byte m_qAnglesLS[0x10];
        [FieldOffset(0x20)] public fixed byte m_vExtentsMin[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vExtentsMax[0xC];
        [FieldOffset(0x38)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x3C)] public fixed byte m_bOnlyWarpPosition[0x4];
        [FieldOffset(0x40)] public fixed byte m_hParent[0x4];
        [FieldOffset(0x44)] public fixed byte m_nShapeType[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VelocitySampler {
        [FieldOffset(0x0)] public fixed byte m_prevSample[0xC];
        [FieldOffset(0xC)] public fixed byte m_fPrevSampleTime[0x4];
        [FieldOffset(0x10)] public fixed byte m_fIdealSampleRate[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CTakeDamageResult {
        [FieldOffset(0x0)] public fixed byte m_pOriginatingInfo[0x8];
        [FieldOffset(0x8)] public fixed byte m_DestructibleHitGroupRequests[0x10];
        [FieldOffset(0x18)] public fixed byte m_nHealthLost[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nHealthBefore[0x4];
        [FieldOffset(0x20)] public fixed byte m_flDamageDealt[0x4];
        [FieldOffset(0x24)] public fixed byte m_flPreModifiedDamage[0x4];
        [FieldOffset(0x28)] public fixed byte m_vDamagePosition[0xC];
        [FieldOffset(0x34)] public fixed byte m_nTotalledHealthLost[0x4];
        [FieldOffset(0x38)] public fixed byte m_flTotalledDamageDealt[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flTotalledPreModifiedDamage[0x4];
        [FieldOffset(0x40)] public fixed byte m_flNewDamageAccumulatorValue[0x8];
        [FieldOffset(0x48)] public fixed byte m_nDamageFlags[0x8];
        [FieldOffset(0x50)] public fixed byte m_bWasDamageSuppressed[0x1];
        [FieldOffset(0x51)] public fixed byte m_bSuppressFlinch[0x3];
        [FieldOffset(0x54)] public fixed byte m_nOverrideFlinchHitGroup[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2B0)]
    public unsafe struct CMarkupSearchHelper {
        [FieldOffset(0x0)] public fixed byte m_navHull[0x8];
        [FieldOffset(0x8)] public fixed byte m_tagString[0x8];
        [FieldOffset(0x10)] public fixed byte m_nameString[0x8];
        [FieldOffset(0x18)] public fixed byte m_vRefPos[0xC];
        [FieldOffset(0x24)] public fixed byte m_bRefPosSet[0x1];
        [FieldOffset(0x25)] public fixed byte m_bUseStepHeight[0x1];
        [FieldOffset(0x26)] public fixed byte m_bActive[0x28A];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct SceneEventId_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CCommentarySystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12];
        [FieldOffset(0x12)] public fixed byte m_bCommentaryEnabledMidGame[0x2];
        [FieldOffset(0x14)] public fixed byte m_flNextTeleportTime[0x4];
        [FieldOffset(0x18)] public fixed byte m_iTeleportStage[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bCheatState[0x1];
        [FieldOffset(0x1D)] public fixed byte m_bIsFirstSpawnGroupToLoad[0x3];
        [FieldOffset(0x20)] public fixed byte m_ModifiedConvars[0x18];
        [FieldOffset(0x38)] public fixed byte m_hCurrentNode[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hActiveCommentaryNode[0x4];
        [FieldOffset(0x40)] public fixed byte m_hLastCommentaryNode[0x8];
        [FieldOffset(0x48)] public fixed byte m_vecNodes[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct ResponseFollowup {
        [FieldOffset(0x0)] public fixed byte followup_concept[0x8];
        [FieldOffset(0x8)] public fixed byte followup_contexts[0x8];
        [FieldOffset(0x10)] public fixed byte followup_delay[0x4];
        [FieldOffset(0x14)] public fixed byte followup_target[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct AmmoTypeInfo_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nMaxCarry[0xC];
        [FieldOffset(0x1C)] public fixed byte m_nSplashSize[0x8];
        [FieldOffset(0x24)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x28)] public fixed byte m_flMass[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flSpeed[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D0)]
    public unsafe struct CNetworkTransmitComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x184];
        [FieldOffset(0x184)] public fixed byte m_nTransmitStateOwnedCounter[0x4C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct AI_MotorServices_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte active_motor[0x8];
        [FieldOffset(0x8)] public fixed byte desired_speed[0x4];
        [FieldOffset(0xC)] public fixed byte motor_velocity[0xC];
        [FieldOffset(0x18)] public fixed byte motor_path[0x18];
        [FieldOffset(0x30)] public fixed byte ground_entity_debug_name[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPathQueryUtil {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_PathToEntityTransform[0x20];
        [FieldOffset(0x30)] public fixed byte m_vecPathSamplePositions[0x18];
        [FieldOffset(0x48)] public fixed byte m_vecPathSampleParameters[0x18];
        [FieldOffset(0x60)] public fixed byte m_vecPathSampleDistances[0x18];
        [FieldOffset(0x78)] public fixed byte m_bIsClosedLoop[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct RagdollCreationParams_t {
        [FieldOffset(0x0)] public fixed byte m_vForce[0xC];
        [FieldOffset(0xC)] public fixed byte m_nForceBone[0x4];
        [FieldOffset(0x10)] public fixed byte m_bForceCurrentWorldTransform[0x4];
        [FieldOffset(0x14)] public fixed byte m_nHealthToGrant[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CRelativeTransform {
        [FieldOffset(0x0)] public fixed byte m_bTransformIsWorldSpace[0x10];
        [FieldOffset(0x10)] public fixed byte m_transform[0x20];
        [FieldOffset(0x30)] public fixed byte m_transformWS[0x20];
        [FieldOffset(0x50)] public fixed byte m_hEntity[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CRangeInt {
        [FieldOffset(0x0)] public fixed byte m_pValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct PathCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3C];
        [FieldOffset(0x3C)] public fixed byte m_dangerFactor[0x4];
        [FieldOffset(0x40)] public fixed byte m_damagingAreasPenaltyCost[0x4];
        [FieldOffset(0x44)] public fixed byte m_flAgentMaxClimb[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct globalentitydatabase_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_list[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC8)]
    public unsafe struct CNmEventConsumerPulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNMEventPulseState_t {
        [FieldOffset(0x0)] public fixed byte m_eventID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CWorldCompositionChunkReferenceElement_t {
        [FieldOffset(0x0)] public fixed byte m_strMapToLoad[0x8];
        [FieldOffset(0x8)] public fixed byte m_strLandmarkName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CRandStopwatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC];
        [FieldOffset(0xC)] public fixed byte m_flMinInterval[0x4];
        [FieldOffset(0x10)] public fixed byte m_flMaxInterval[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CMovementStatsProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nUseCounter[0x4];
        [FieldOffset(0x14)] public fixed byte m_emaMovementDirection[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CGameChoreoServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0xC)] public fixed byte m_hScriptedSequence[0x4];
        [FieldOffset(0x10)] public fixed byte m_scriptState[0x4];
        [FieldOffset(0x14)] public fixed byte m_choreoState[0x4];
        [FieldOffset(0x18)] public fixed byte m_flTimeStartedState[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct PhysObjectHeader_t {
        [FieldOffset(0x0)] public fixed byte type[0x4];
        [FieldOffset(0x4)] public fixed byte hEntity[0x4];
        [FieldOffset(0x8)] public fixed byte fieldName[0x8];
        [FieldOffset(0x10)] public fixed byte bSaveObject[0x8];
        [FieldOffset(0x18)] public fixed byte modelName[0x8];
        [FieldOffset(0x20)] public fixed byte bbox[0x18];
        [FieldOffset(0x38)] public fixed byte sphere[0x4];
        [FieldOffset(0x3C)] public fixed byte iCollide[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CSimpleStopwatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CShatterGlassShard {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hShardHandle[0x8];
        [FieldOffset(0x10)] public fixed byte m_vecPanelVertices[0x18];
        [FieldOffset(0x28)] public fixed byte m_vLocalPanelSpaceOrigin[0x8];
        [FieldOffset(0x30)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x38)] public fixed byte m_hPhysicsEntity[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hParentPanel[0x4];
        [FieldOffset(0x40)] public fixed byte m_hParentShard[0x4];
        [FieldOffset(0x44)] public fixed byte m_ShatterStressType[0x4];
        [FieldOffset(0x48)] public fixed byte m_vecStressVelocity[0xC];
        [FieldOffset(0x54)] public fixed byte m_bCreatedModel[0x4];
        [FieldOffset(0x58)] public fixed byte m_flLongestEdge[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flShortestEdge[0x4];
        [FieldOffset(0x60)] public fixed byte m_flLongestAcross[0x4];
        [FieldOffset(0x64)] public fixed byte m_flShortestAcross[0x4];
        [FieldOffset(0x68)] public fixed byte m_flSumOfAllEdges[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flArea[0x4];
        [FieldOffset(0x70)] public fixed byte m_nOnFrameEdge[0x4];
        [FieldOffset(0x74)] public fixed byte m_nSubShardGeneration[0x4];
        [FieldOffset(0x78)] public fixed byte m_vecAverageVertPosition[0x8];
        [FieldOffset(0x80)] public fixed byte m_bAverageVertPositionIsValid[0x4];
        [FieldOffset(0x84)] public fixed byte m_vecPanelSpaceStressPositionA[0x8];
        [FieldOffset(0x8C)] public fixed byte m_vecPanelSpaceStressPositionB[0x8];
        [FieldOffset(0x94)] public fixed byte m_bStressPositionAIsValid[0x1];
        [FieldOffset(0x95)] public fixed byte m_bStressPositionBIsValid[0x1];
        [FieldOffset(0x96)] public fixed byte m_bFlaggedForRemoval[0x2];
        [FieldOffset(0x98)] public fixed byte m_flPhysicsEntitySpawnedAtTime[0x4];
        [FieldOffset(0x9C)] public fixed byte m_hEntityHittingMe[0x4];
        [FieldOffset(0xA0)] public fixed byte m_vecNeighbors[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ragdollelement_t {
        [FieldOffset(0x0)] public fixed byte originParentSpace[0x20];
        [FieldOffset(0x20)] public fixed byte parentIndex[0x4];
        [FieldOffset(0x24)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x28)] public fixed byte m_nHeight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CGameScriptedMoveDef_t {
        [FieldOffset(0x0)] public fixed byte m_vDestOffset[0xC];
        [FieldOffset(0xC)] public fixed byte m_hDestEntity[0x4];
        [FieldOffset(0x10)] public fixed byte m_angDest[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x20)] public fixed byte m_flAngRate[0x4];
        [FieldOffset(0x24)] public fixed byte m_flMoveSpeed[0x4];
        [FieldOffset(0x28)] public fixed byte m_bAimDisabled[0x1];
        [FieldOffset(0x29)] public fixed byte m_bIgnoreRotation[0x3];
        [FieldOffset(0x2C)] public fixed byte m_nForcedCrouchState[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNetworkOriginCellCoordQuantizedVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_cellX[0x2];
        [FieldOffset(0x12)] public fixed byte m_cellY[0x2];
        [FieldOffset(0x14)] public fixed byte m_cellZ[0x2];
        [FieldOffset(0x16)] public fixed byte m_nOutsideWorld[0x2];
        [FieldOffset(0x18)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x28)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CBaseAnimGraphVariationUserData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct DynamicVolumeDef_t {
        [FieldOffset(0x0)] public fixed byte m_source[0x4];
        [FieldOffset(0x4)] public fixed byte m_target[0x4];
        [FieldOffset(0x8)] public fixed byte m_nHullIdx[0x4];
        [FieldOffset(0xC)] public fixed byte m_vSourceAnchorPos[0xC];
        [FieldOffset(0x18)] public fixed byte m_vTargetAnchorPos[0xC];
        [FieldOffset(0x24)] public fixed byte m_nAreaSrc[0x4];
        [FieldOffset(0x28)] public fixed byte m_nAreaDst[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bAttached[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkOriginQuantizedVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x18)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct magnetted_objects_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte hEntity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CHintMessageQueue {
        [FieldOffset(0x0)] public fixed byte m_tmMessageEnd[0x8];
        [FieldOffset(0x8)] public fixed byte m_messages[0x18];
        [FieldOffset(0x20)] public fixed byte m_pPlayerController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSkillInt {
        [FieldOffset(0x0)] public fixed byte m_pValue[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct thinkfunc_t {
        [FieldOffset(0x0)] public fixed byte m_think[0x8];
        [FieldOffset(0x8)] public fixed byte m_hFn[0x8];
        [FieldOffset(0x10)] public fixed byte m_nContext[0x4];
        [FieldOffset(0x14)] public fixed byte m_nNextThinkTick[0x4];
        [FieldOffset(0x18)] public fixed byte m_nLastThinkTick[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNavHullPresetVData {
        [FieldOffset(0x0)] public fixed byte m_vecNavHulls[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSkillFloat {
        [FieldOffset(0x0)] public fixed byte m_pValue[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct WaterWheelFrictionScale_t {
        [FieldOffset(0x0)] public fixed byte m_flFractionOfWheelSubmerged[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFrictionScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ragdollhierarchyjoint_t {
        [FieldOffset(0x0)] public fixed byte parentIndex[0x4];
        [FieldOffset(0x4)] public fixed byte childIndex[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSceneEventInfo {
        [FieldOffset(0x0)] public fixed byte m_iLayer[0x4];
        [FieldOffset(0x4)] public fixed byte m_iPriority[0x4];
        [FieldOffset(0x8)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0xC)] public fixed byte m_flWeight[0x4];
        [FieldOffset(0x10)] public fixed byte m_flLastAccumulatedTime[0x4];
        [FieldOffset(0x14)] public fixed byte m_flLastJumpFromTime[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLastJumpToTime[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flLastCycle[0x4];
        [FieldOffset(0x20)] public fixed byte m_hAnimClip[0x8];
        [FieldOffset(0x28)] public fixed byte m_sAnimClipSlot[0x8];
        [FieldOffset(0x30)] public fixed byte m_sAnimClipSlotWeight[0x8];
        [FieldOffset(0x38)] public fixed byte m_bHasArrived[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nType[0x4];
        [FieldOffset(0x40)] public fixed byte m_flNext[0x4];
        [FieldOffset(0x44)] public fixed byte m_bIsGesture[0x1];
        [FieldOffset(0x45)] public fixed byte m_bShouldRemove[0x27];
        [FieldOffset(0x6C)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x70)] public fixed byte m_nSceneEventId[0x4];
        [FieldOffset(0x74)] public fixed byte m_bClientSide[0x1];
        [FieldOffset(0x75)] public fixed byte m_bStarted[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct SoundeventPathCornerPairNetworked_t {
        [FieldOffset(0x0)] public fixed byte vP1[0xC];
        [FieldOffset(0xC)] public fixed byte vP2[0xC];
        [FieldOffset(0x18)] public fixed byte flPathLengthSqr[0x4];
        [FieldOffset(0x1C)] public fixed byte flP1Pct[0x4];
        [FieldOffset(0x20)] public fixed byte flP2Pct[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CSoundPatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pitch[0x10];
        [FieldOffset(0x18)] public fixed byte m_volume[0x24];
        [FieldOffset(0x3C)] public fixed byte m_shutdownTime[0x4];
        [FieldOffset(0x40)] public fixed byte m_flLastTime[0x8];
        [FieldOffset(0x48)] public fixed byte m_iszSoundScriptName[0x8];
        [FieldOffset(0x50)] public fixed byte m_hEnt[0x4];
        [FieldOffset(0x54)] public fixed byte m_soundEntityIndex[0x4];
        [FieldOffset(0x58)] public fixed byte m_soundOrigin[0xC];
        [FieldOffset(0x64)] public fixed byte m_isPlaying[0x4];
        [FieldOffset(0x68)] public fixed byte m_Filter[0x38];
        [FieldOffset(0xA0)] public fixed byte m_flCloseCaptionDuration[0x4];
        [FieldOffset(0xA4)] public fixed byte m_bUpdatedSoundOrigin[0x4];
        [FieldOffset(0xA8)] public fixed byte m_iszClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct CCS2ChickenGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_action[0x18];
        [FieldOffset(0xD8)] public fixed byte m_bActionReset[0x20];
        [FieldOffset(0xF8)] public fixed byte m_actionVariation[0x18];
        [FieldOffset(0x110)] public fixed byte m_bInWater[0x18];
        [FieldOffset(0x128)] public fixed byte m_mode[0x18];
        [FieldOffset(0x140)] public fixed byte m_lifeStage[0x18];
        [FieldOffset(0x158)] public fixed byte m_idlePhase[0x18];
        [FieldOffset(0x170)] public fixed byte m_turnAngle[0x18];
        [FieldOffset(0x188)] public fixed byte m_bHasLookatTarget[0x18];
        [FieldOffset(0x1A0)] public fixed byte m_lookatTarget[0x18];
        [FieldOffset(0x1B8)] public fixed byte m_bFlinch[0x18];
        [FieldOffset(0x1D0)] public fixed byte m_flinchVariation[0x18];
        [FieldOffset(0x1E8)] public fixed byte m_bHasActionCompletedEvent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct levellist_t {
        [FieldOffset(0x0)] public fixed byte m_sMapName[0x8];
        [FieldOffset(0x8)] public fixed byte m_sLandmarkName[0x8];
        [FieldOffset(0x10)] public fixed byte m_hEntLandmark[0x4];
        [FieldOffset(0x14)] public fixed byte m_vecLandmarkOrigin[0xC];
        [FieldOffset(0x20)] public fixed byte m_vecLandmarkAngles[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct locksound_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte sLockedSound[0x8];
        [FieldOffset(0x10)] public fixed byte sUnlockedSound[0x8];
        [FieldOffset(0x18)] public fixed byte flwaitSound[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct DecalGroupOption_t {
        [FieldOffset(0x0)] public fixed byte m_hMaterial[0x8];
        [FieldOffset(0x8)] public fixed byte m_sSequenceName[0x8];
        [FieldOffset(0x10)] public fixed byte m_flProbability[0x4];
        [FieldOffset(0x14)] public fixed byte m_bEnableAngleBetweenNormalAndGravityRange[0x4];
        [FieldOffset(0x18)] public fixed byte m_flMinAngleBetweenNormalAndGravity[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flMaxAngleBetweenNormalAndGravity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBtNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CAnimGraphControllerManager {
        [FieldOffset(0x0)] public fixed byte m_controllers[0x90];
        [FieldOffset(0x90)] public fixed byte m_bGraphBindingsCreated[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFiringModeFloat {
        [FieldOffset(0x0)] public fixed byte m_flValues[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CCopyRecipientFilter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Flags[0x8];
        [FieldOffset(0x10)] public fixed byte m_Recipients[0x20];
        [FieldOffset(0x30)] public fixed byte m_slotPlayerExcludedDueToPrediction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CFloatMovingAverage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FuncMoverMovementSummary_t {
        [FieldOffset(0x0)] public fixed byte flStartT[0x4];
        [FieldOffset(0x4)] public fixed byte flEndT[0x4];
        [FieldOffset(0x8)] public fixed byte nStartNodeIndex[0x4];
        [FieldOffset(0xC)] public fixed byte nStopNodeIndex[0x4];
        [FieldOffset(0x10)] public fixed byte nMovementMode[0x4];
        [FieldOffset(0x14)] public fixed byte nFlags[0x4];
        [FieldOffset(0x18)] public fixed byte nTick[0x4];
        [FieldOffset(0x1C)] public fixed byte hPathMover[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSmoothFunc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flSmoothAmplitude[0x4];
        [FieldOffset(0xC)] public fixed byte m_flSmoothBias[0x4];
        [FieldOffset(0x10)] public fixed byte m_flSmoothDuration[0x4];
        [FieldOffset(0x14)] public fixed byte m_flSmoothRemainingTime[0x4];
        [FieldOffset(0x18)] public fixed byte m_nSmoothDir[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IHasAttributes {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct ragdoll_t {
        [FieldOffset(0x0)] public fixed byte list[0x18];
        [FieldOffset(0x18)] public fixed byte hierarchyJoints[0x18];
        [FieldOffset(0x30)] public fixed byte boneIndex[0x18];
        [FieldOffset(0x48)] public fixed byte allowStretch[0x1];
        [FieldOffset(0x49)] public fixed byte unused[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA)]
    public unsafe struct HullFlags_t {
        [FieldOffset(0x0)] public fixed byte m_bHull_Human[0x1];
        [FieldOffset(0x1)] public fixed byte m_bHull_SmallCentered[0x1];
        [FieldOffset(0x2)] public fixed byte m_bHull_WideHuman[0x1];
        [FieldOffset(0x3)] public fixed byte m_bHull_Tiny[0x1];
        [FieldOffset(0x4)] public fixed byte m_bHull_Medium[0x1];
        [FieldOffset(0x5)] public fixed byte m_bHull_TinyCentered[0x1];
        [FieldOffset(0x6)] public fixed byte m_bHull_Large[0x1];
        [FieldOffset(0x7)] public fixed byte m_bHull_LargeCentered[0x1];
        [FieldOffset(0x8)] public fixed byte m_bHull_MediumTall[0x1];
        [FieldOffset(0x9)] public fixed byte m_bHull_Small[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNavFlags {
        [FieldOffset(0x0)] public fixed byte m_Flags[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct ISkeletonAnimationController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkOriginQuantizedVectorWS {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x18)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct GameAmmoTypeInfo_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_nBuySize[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nCost[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMotorController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_speed[0x4];
        [FieldOffset(0xC)] public fixed byte m_maxTorque[0x4];
        [FieldOffset(0x10)] public fixed byte m_axis[0xC];
        [FieldOffset(0x1C)] public fixed byte m_inertiaFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CSimTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flInterval[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CBaseIssue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_szTypeString[0x40];
        [FieldOffset(0x60)] public fixed byte m_szDetailsString[0x104];
        [FieldOffset(0x164)] public fixed byte m_iNumYesVotes[0x4];
        [FieldOffset(0x168)] public fixed byte m_iNumNoVotes[0x4];
        [FieldOffset(0x16C)] public fixed byte m_iNumPotentialVotes[0x4];
        [FieldOffset(0x170)] public fixed byte m_pVoteController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CDynamicPropGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_sActionState[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x188)]
    public unsafe struct SummaryTakeDamageInfo_t {
        [FieldOffset(0x0)] public fixed byte nSummarisedCount[0x8];
        [FieldOffset(0x8)] public fixed byte info[0x118];
        [FieldOffset(0x120)] public fixed byte result[0x60];
        [FieldOffset(0x180)] public fixed byte hTarget[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct INavObstacle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nId[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct entitytable_t {
        [FieldOffset(0x0)] public fixed byte id[0x4];
        [FieldOffset(0x4)] public fixed byte edictindex[0x4];
        [FieldOffset(0x8)] public fixed byte saveentityindex[0xC];
        [FieldOffset(0x14)] public fixed byte bWasSaved[0x4];
        [FieldOffset(0x18)] public fixed byte flags[0x8];
        [FieldOffset(0x20)] public fixed byte classname[0x8];
        [FieldOffset(0x28)] public fixed byte globalname[0x8];
        [FieldOffset(0x30)] public fixed byte entityname[0x8];
        [FieldOffset(0x38)] public fixed byte landmarkModelSpace[0x10];
        [FieldOffset(0x48)] public fixed byte m_pPrecacheEntityKeys[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
        [FieldOffset(0x0)] public fixed byte position[0xC];
        [FieldOffset(0xC)] public fixed byte nav_type[0x4];
        [FieldOffset(0x10)] public fixed byte flags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B8)]
    public unsafe struct CRR_Response {
        [FieldOffset(0x0)] public fixed byte m_Type[0x1];
        [FieldOffset(0x1)] public fixed byte m_szResponseName[0xC0];
        [FieldOffset(0xC1)] public fixed byte m_szMatchingRule[0x9F];
        [FieldOffset(0x160)] public fixed byte m_Params[0x20];
        [FieldOffset(0x180)] public fixed byte m_fMatchScore[0x4];
        [FieldOffset(0x184)] public fixed byte m_bAnyMatchingRulesInCooldown[0x4];
        [FieldOffset(0x188)] public fixed byte m_szSpeakerContext[0x8];
        [FieldOffset(0x190)] public fixed byte m_szWorldContext[0x8];
        [FieldOffset(0x198)] public fixed byte m_Followup[0x1C];
        [FieldOffset(0x1B4)] public fixed byte m_recipientFilter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct CVectorExponentialMovingAverage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmAimCSNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nVerticalAngleNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_nHorizontalAngleNodeIdx[0x2];
        [FieldOffset(0x1C)] public fixed byte m_nWeaponCategoryNodeIdx[0x2];
        [FieldOffset(0x1E)] public fixed byte m_nWeaponTypeNodeIdx[0x2];
        [FieldOffset(0x20)] public fixed byte m_nWeaponActionNodeIdx[0x2];
        [FieldOffset(0x22)] public fixed byte m_nWeaponDropNodeIdx[0x2];
        [FieldOffset(0x24)] public fixed byte m_nIsDefusingNodeIdx[0x2];
        [FieldOffset(0x26)] public fixed byte m_nCrouchWeightNodeIdx[0x2];
        [FieldOffset(0x28)] public fixed byte m_flHandIKBlendInTimeSeconds[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flActionBlendTimeSeconds[0x4];
        [FieldOffset(0x30)] public fixed byte m_flPlantingBlendTimeSeconds[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CConstantForceController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC];
        [FieldOffset(0xC)] public fixed byte m_linear[0xC];
        [FieldOffset(0x18)] public fixed byte m_angular[0xC];
        [FieldOffset(0x24)] public fixed byte m_linearSave[0xC];
        [FieldOffset(0x30)] public fixed byte m_angularSave[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct WaterWheelDrag_t {
        [FieldOffset(0x0)] public fixed byte m_flFractionOfWheelSubmerged[0x4];
        [FieldOffset(0x4)] public fixed byte m_flWheelDrag[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x118)]
    public unsafe struct CTakeDamageInfo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecDamageForce[0xC];
        [FieldOffset(0x14)] public fixed byte m_vecDamagePosition[0xC];
        [FieldOffset(0x20)] public fixed byte m_vecReportedPosition[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vecDamageDirection[0xC];
        [FieldOffset(0x38)] public fixed byte m_hInflictor[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hAttacker[0x4];
        [FieldOffset(0x40)] public fixed byte m_hAbility[0x4];
        [FieldOffset(0x44)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x48)] public fixed byte m_flTotalledDamage[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bitsDamageType[0x4];
        [FieldOffset(0x50)] public fixed byte m_iDamageCustom[0x4];
        [FieldOffset(0x54)] public fixed byte m_iAmmoType[0xC];
        [FieldOffset(0x60)] public fixed byte m_flOriginalDamage[0x4];
        [FieldOffset(0x64)] public fixed byte m_bShouldBleed[0x1];
        [FieldOffset(0x65)] public fixed byte m_bShouldSpark[0xB];
        [FieldOffset(0x70)] public fixed byte m_nDamageFlags[0x8];
        [FieldOffset(0x78)] public fixed byte m_iHitGroupId[0x4];
        [FieldOffset(0x7C)] public fixed byte m_nNumObjectsPenetrated[0x4];
        [FieldOffset(0x80)] public fixed byte m_flFriendlyFireDamageReductionRatio[0x4];
        [FieldOffset(0x84)] public fixed byte m_bStoppedBullet[0x7C];
        [FieldOffset(0x100)] public fixed byte m_DestructibleHitGroupRequests[0x10];
        [FieldOffset(0x110)] public fixed byte m_bInTakeDamageFlow[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CRandSimTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flMinInterval[0x4];
        [FieldOffset(0xC)] public fixed byte m_flMaxInterval[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBtNodeComposite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CRelativeLocation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Type[0x4];
        [FieldOffset(0x1C)] public fixed byte m_vRelativeOffset[0xC];
        [FieldOffset(0x28)] public fixed byte m_vWorldSpacePos[0xC];
        [FieldOffset(0x34)] public fixed byte m_hEntity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct HostagePathCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct Extent {
        [FieldOffset(0x0)] public fixed byte lo[0xC];
        [FieldOffset(0xC)] public fixed byte hi[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct sndopvarlatchdata_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszStack[0x8];
        [FieldOffset(0x10)] public fixed byte m_iszOperator[0x8];
        [FieldOffset(0x18)] public fixed byte m_iszOpvar[0x8];
        [FieldOffset(0x20)] public fixed byte m_flVal[0x4];
        [FieldOffset(0x24)] public fixed byte m_vPos[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PrecipitationFilter_t {
        [FieldOffset(0x0)] public fixed byte m_flMaxRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IEconItemInterface {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct PathMoverEntitySpawn {
        [FieldOffset(0x0)] public fixed byte hMover[0x8];
        [FieldOffset(0x8)] public fixed byte vecOtherEntities[0x18];
        [FieldOffset(0x20)] public fixed byte nSpawnNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CMultiplayer_Expresser {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
        [FieldOffset(0xA0)] public fixed byte m_bAllowMultipleScenes[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNavVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct QuestProgress {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CExternalAnimGraphList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CNmAimCSTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x130];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ParticleIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CAI_ExpresserWithFollowup {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CTakeDamageSummaryScopeGuard {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecSummaries[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CIronSightController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bIronSightAvailable[0x4];
        [FieldOffset(0xC)] public fixed byte m_flIronSightAmount[0x4];
        [FieldOffset(0x10)] public fixed byte m_flIronSightAmountGained[0x4];
        [FieldOffset(0x14)] public fixed byte m_flIronSightAmountBiased[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct INavPathCostAreaFilter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CNmEventConsumerSound {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3E8)]
    public unsafe struct CNmEventConsumerLegacy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3C)]
    public unsafe struct DestructiblePartDamageRequest_t {
        [FieldOffset(0x0)] public fixed byte m_nHitGroup[0x4];
        [FieldOffset(0x4)] public fixed byte m_nDamageLevel[0x4];
        [FieldOffset(0x8)] public fixed byte m_nDesiredHealth[0x4];
        [FieldOffset(0xC)] public fixed byte m_nDestroyFlags[0x4];
        [FieldOffset(0x10)] public fixed byte m_nDamageType[0x4];
        [FieldOffset(0x14)] public fixed byte m_flBreakDamage[0x4];
        [FieldOffset(0x18)] public fixed byte m_flBreakDamageRadius[0x4];
        [FieldOffset(0x1C)] public fixed byte m_hAttacker[0x4];
        [FieldOffset(0x20)] public fixed byte m_vWsBreakDamageOrigin[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vWsBreakDamageForce[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CInButtonState {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pButtonStates[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct SoundeventBoxHelperNetworked_t {
        [FieldOffset(0x0)] public fixed byte vOrigin[0xC];
        [FieldOffset(0xC)] public fixed byte qAngles[0xC];
        [FieldOffset(0x18)] public fixed byte vMins[0xC];
        [FieldOffset(0x24)] public fixed byte vMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNetworkOriginCellCoordQuantizedVectorWS {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_cellX[0x2];
        [FieldOffset(0x12)] public fixed byte m_cellY[0x2];
        [FieldOffset(0x14)] public fixed byte m_cellZ[0x2];
        [FieldOffset(0x16)] public fixed byte m_nOutsideWorld[0x2];
        [FieldOffset(0x18)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x28)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3C)]
    public unsafe struct CNavHullVData {
        [FieldOffset(0x0)] public fixed byte m_bAgentEnabled[0x4];
        [FieldOffset(0x4)] public fixed byte m_agentRadius[0x4];
        [FieldOffset(0x8)] public fixed byte m_agentHeight[0x4];
        [FieldOffset(0xC)] public fixed byte m_agentShortHeightEnabled[0x4];
        [FieldOffset(0x10)] public fixed byte m_agentShortHeight[0x4];
        [FieldOffset(0x14)] public fixed byte m_agentCrawlEnabled[0x4];
        [FieldOffset(0x18)] public fixed byte m_agentCrawlHeight[0x4];
        [FieldOffset(0x1C)] public fixed byte m_agentMaxClimb[0x4];
        [FieldOffset(0x20)] public fixed byte m_agentMaxSlope[0x4];
        [FieldOffset(0x24)] public fixed byte m_agentMaxJumpDownDist[0x4];
        [FieldOffset(0x28)] public fixed byte m_agentMaxJumpHorizDistBase[0x4];
        [FieldOffset(0x2C)] public fixed byte m_agentMaxJumpUpDist[0x4];
        [FieldOffset(0x30)] public fixed byte m_agentBorderErosion[0x4];
        [FieldOffset(0x34)] public fixed byte m_flowMapGenerationEnabled[0x4];
        [FieldOffset(0x38)] public fixed byte m_flowMapNodeMaxRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct AI_DefaultNPC_DebugSnapshotData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte s_npc_current_ability[0x8];
        [FieldOffset(0x10)] public fixed byte s_npc_current_held_ability[0x8];
        [FieldOffset(0x18)] public fixed byte s_npc_tactic_current[0x8];
        [FieldOffset(0x20)] public fixed byte s_npc_tactic_phase[0x8];
        [FieldOffset(0x28)] public fixed byte tactic_interrupt_conditions[0x18];
        [FieldOffset(0x40)] public fixed byte path_query[0x28];
        [FieldOffset(0x68)] public fixed byte path_queries_speculative[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNavPathCost {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bAllowLadders[0x1];
        [FieldOffset(0x11)] public fixed byte m_bCanFly[0x1];
        [FieldOffset(0x12)] public fixed byte m_bCanSwim[0x2];
        [FieldOffset(0x14)] public fixed byte m_flWaterToGroundMaxHeight[0x4];
        [FieldOffset(0x18)] public fixed byte m_flGroundToWaterMaxHeight[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flGroundToWaterTransitionDistance[0x4];
        [FieldOffset(0x20)] public fixed byte m_flWaterToGroundTransitionDistance[0x4];
        [FieldOffset(0x24)] public fixed byte m_flFlyingTransitionTolerance[0x4];
        [FieldOffset(0x28)] public fixed byte m_bOptimizeFlySpacePathfinds[0x1];
        [FieldOffset(0x29)] public fixed byte m_bStringPullFlySpacePathfinds[0x1];
        [FieldOffset(0x2A)] public fixed byte m_bSupportsTransitions[0x2];
        [FieldOffset(0x2C)] public fixed byte m_flTransitionPenalty[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmSnapWeaponNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nFlashedAmountNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_nWeaponCategoryNodeIdx[0x2];
        [FieldOffset(0x1C)] public fixed byte m_nWeaponTypeNodeIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct SoundOpvarTraceResult_t {
        [FieldOffset(0x0)] public fixed byte vPos[0xC];
        [FieldOffset(0xC)] public fixed byte bDidHit[0x4];
        [FieldOffset(0x10)] public fixed byte flDistSqrToCenter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ActorMapping_t {
        [FieldOffset(0x0)] public fixed byte m_sActorName[0x8];
        [FieldOffset(0x8)] public fixed byte m_hEntity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CNavVolumeCalculatedVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFiringModeInt {
        [FieldOffset(0x0)] public fixed byte m_nValues[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBtNodeDecorator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CSAdditionalPerRoundStats_t {
        [FieldOffset(0x0)] public fixed byte m_numChickensKilled[0x4];
        [FieldOffset(0x4)] public fixed byte m_killsWhileBlind[0x4];
        [FieldOffset(0x8)] public fixed byte m_bombCarrierkills[0x4];
        [FieldOffset(0xC)] public fixed byte m_flBurnDamageInflicted[0x4];
        [FieldOffset(0x10)] public fixed byte m_flBlastDamageInflicted[0x4];
        [FieldOffset(0x14)] public fixed byte m_iDinks[0x4];
        [FieldOffset(0x18)] public fixed byte m_bFreshStartThisRound[0x1];
        [FieldOffset(0x19)] public fixed byte m_bBombPlantedAndAlive[0x3];
        [FieldOffset(0x1C)] public fixed byte m_nDefuseStarts[0x4];
        [FieldOffset(0x20)] public fixed byte m_nHostagePickUps[0x4];
        [FieldOffset(0x24)] public fixed byte m_numTeammatesFlashed[0x4];
        [FieldOffset(0x28)] public fixed byte m_strAnnotationsWorkshopId[0xE8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmEventConsumerBodyGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CEmptyGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ModelConfigHandle_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CEntitySubclassVDataBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CBreakableStageHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nCurrentStage[0x4];
        [FieldOffset(0xC)] public fixed byte m_nStageCount[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CNavVolumeBreadthFirstSearch {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA8];
        [FieldOffset(0xA8)] public fixed byte m_vStartPos[0xC];
        [FieldOffset(0xB4)] public fixed byte m_flSearchDist[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x64)]
    public unsafe struct dynpitchvol_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x64];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CSAdditionalMatchStats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x110];
        [FieldOffset(0x110)] public fixed byte m_numRoundsSurvivedStreak[0x4];
        [FieldOffset(0x114)] public fixed byte m_maxNumRoundsSurvivedStreak[0x4];
        [FieldOffset(0x118)] public fixed byte m_numRoundsSurvivedTotal[0x4];
        [FieldOffset(0x11C)] public fixed byte m_iRoundsWonWithoutPurchase[0x4];
        [FieldOffset(0x120)] public fixed byte m_iRoundsWonWithoutPurchaseTotal[0x4];
        [FieldOffset(0x124)] public fixed byte m_numFirstKills[0x4];
        [FieldOffset(0x128)] public fixed byte m_numClutchKills[0x4];
        [FieldOffset(0x12C)] public fixed byte m_numPistolKills[0x4];
        [FieldOffset(0x130)] public fixed byte m_numSniperKills[0x4];
        [FieldOffset(0x134)] public fixed byte m_iNumSuicides[0x4];
        [FieldOffset(0x138)] public fixed byte m_iNumTeamKills[0x4];
        [FieldOffset(0x13C)] public fixed byte m_flTeamDamage[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AI_Navigator_DebugSnapshotData_t__Waypoint_t {
        [FieldOffset(0x0)] public fixed byte position[0xC];
        [FieldOffset(0xC)] public fixed byte nav_type[0x4];
        [FieldOffset(0x10)] public fixed byte flags[0x4];
        [FieldOffset(0x14)] public fixed byte is_pathcorner[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CTestPulseIOComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_ComponentData[0x8];
        [FieldOffset(0x10)] public fixed byte m_OnComponentTestFunc[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IRagdoll {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct CCSPlayerAnimationState {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_currentMoveType[0x1];
        [FieldOffset(0x19)] public fixed byte m_groundMoveState[0x1];
        [FieldOffset(0x1A)] public fixed byte m_groundActionDirection[0x1];
        [FieldOffset(0x1B)] public fixed byte m_airAction[0x1];
        [FieldOffset(0x1C)] public fixed byte m_bWasOnGroundLastUpdate[0x1];
        [FieldOffset(0x1D)] public fixed byte m_bWasStationaryLastUpdate[0x3];
        [FieldOffset(0x20)] public fixed byte m_actionStartTick[0x4];
        [FieldOffset(0x24)] public fixed byte m_staticAimTimerStartTick[0x4];
        [FieldOffset(0x28)] public fixed byte m_plantAndTurnStartTick[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flTurnOnSpotAngle[0x4];
        [FieldOffset(0x30)] public fixed byte m_flPreviousAimYaw[0x4];
        [FieldOffset(0x34)] public fixed byte m_flPreviousHorizontalSpeed[0x4];
        [FieldOffset(0x38)] public fixed byte m_flFootIKOffsetLeft[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flFootIKOffsetRight[0x4];
        [FieldOffset(0x40)] public fixed byte m_flWeaponDropPercentageDueToMovement[0x4];
        [FieldOffset(0x44)] public fixed byte m_flWeaponDropSmoothDampVelocity[0x9C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct hudtextparms_t {
        [FieldOffset(0x0)] public fixed byte color1[0x4];
        [FieldOffset(0x4)] public fixed byte color2[0x4];
        [FieldOffset(0x8)] public fixed byte effect[0x1];
        [FieldOffset(0x9)] public fixed byte channel[0x3];
        [FieldOffset(0xC)] public fixed byte x[0x4];
        [FieldOffset(0x10)] public fixed byte y[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct QueuedAISearchId_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CAnimGraphControllerBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4C];
        [FieldOffset(0x4C)] public fixed byte m_hExternalGraph[0x74];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkVelocityVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_vecX[0x8];
        [FieldOffset(0x18)] public fixed byte m_vecY[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CDestructiblePart_DamageLevel {
        [FieldOffset(0x0)] public fixed byte m_sName[0x8];
        [FieldOffset(0x8)] public fixed byte m_sBreakablePieceName[0x8];
        [FieldOffset(0x10)] public fixed byte m_nBodyGroupValue[0x4];
        [FieldOffset(0x14)] public fixed byte m_nHealth[0x10];
        [FieldOffset(0x24)] public fixed byte m_flCriticalDamagePercent[0x4];
        [FieldOffset(0x28)] public fixed byte m_nDamagePassthroughType[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nDestructionDeathBehavior[0x4];
        [FieldOffset(0x30)] public fixed byte m_sCustomDeathHandshake[0x8];
        [FieldOffset(0x38)] public fixed byte m_bShouldDestroyOnDeath[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flDeathDestroyTime[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CNavVolumeAll {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CNavVolumeSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_vCenter[0xC];
        [FieldOffset(0x84)] public fixed byte m_flRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct Relationship_t {
        [FieldOffset(0x0)] public fixed byte disposition[0x4];
        [FieldOffset(0x4)] public fixed byte priority[0x4];
    }
}