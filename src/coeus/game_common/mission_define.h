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

#endif