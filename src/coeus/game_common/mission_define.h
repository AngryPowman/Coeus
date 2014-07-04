#ifndef __MISSION_DEFINE_H__
#define __MISSION_DEFINE_H__

enum MissionType
{
    MissionType_NPCDialogue,
    MissionType_NPCGift,
    MissionType_HaveItem,
    MissionType_KillEnemy
};

enum MissionState
{
    MissionState_None,
    MissionState_Available,
    MissionState_InProgress,
    MissionState_Finished,
    MissionState_Failed
};

// Mission error codes
enum MissionResult
{
    MissionResult_Ok,           // Okay
    MissionResult_Exists,       // Mission exists
    MissionResult_BadCondition, // Not meet the conditions
    MissionResult_Failed,
};

#endif