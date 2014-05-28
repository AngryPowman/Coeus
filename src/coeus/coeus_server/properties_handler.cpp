#include "game_session.h"
#include "player.h"

void GameSession::getPropertiesHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::CSCharacterInitialDataReq propertiesRequest;
    DECODE_MESSAGE(propertiesRequest, packet);

    Protocol::SCCharacterInitialDataRsp response;
	response.char_initial_data.nickname = _player->nickname();
    response.char_initial_data.exp = 100;
    response.char_initial_data.next_exp = 500;
    response.char_initial_data.hp = 1000;
    response.char_initial_data.max_hp = 2000;
    response.char_initial_data.power = 12000;
	response.char_initial_data.level = _player->fullData().initial_data.level;

    send_message(Opcodes::SCCharacterInitialDataRsp, response);
}