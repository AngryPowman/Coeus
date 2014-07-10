#include "game_session.h"
#include "player.h"

void GameSession::getPropertiesHandler(const NetworkPacket::Ptr& packet)
{
//     Protocol::CSCharacterInitialDataReq propertiesRequest;
//     DECODE_MESSAGE(propertiesRequest, packet);
// 
// 	const Protocol::PlayerFullData& fullData = _player->fullData();
// 
//     Protocol::SCCharacterInitialDataRsp response;
// 	response.char_initial_data = fullData.initial_data;
// 
//     send_message(Opcodes::SCCharacterInitialDataRsp, response);
}