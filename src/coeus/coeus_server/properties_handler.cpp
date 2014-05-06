#include "game_session.h"

void GameSession::getPropertiesHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::CSPropertiesReq propertiesRequest;
    DECODE_MESSAGE(propertiesRequest, packet);

    Protocol::SCPropertiesRsp response;
    response.basic_properties.exp = 100;
    response.basic_properties.next_exp = 500;
    response.basic_properties.hp = 1000;
    response.basic_properties.max_hp = 2000;
    response.basic_properties.power = 12000;
    response.basic_properties.level = 1;

    send_message(Opcodes::SCPropertiesRsp, response);
}