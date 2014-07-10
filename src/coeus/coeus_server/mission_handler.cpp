#include "game_session.h"
#include "player.h"
#include "mission_manager.h"

void GameSession::missionListHandler(const NetworkPacket::Ptr& packet)
{
//     Protocol::CSMissionListReq missionListReq;
//     DECODE_MESSAGE(missionListReq, packet);
// 
//     Protocol::SCMissionListRsp missionListRsp;
//     
//     const MissionTable& missionTable = _player->missionManager()->missionTable();
//     for (auto iter = missionTable.begin(); iter != missionTable.end(); ++iter)
//     {
//         const Mission::Ptr& missionPtr = iter->second;
// 
//         Protocol::Mission mission;
//         mission.mission_id = missionPtr->missionId();
//         mission.mission_state = missionPtr->missionState();
//         missionListRsp.mission_list.push_back(std::move(mission));
//     }
// 
//     _player->send_message(Opcodes::SCMissionListRsp, missionListRsp);
}
