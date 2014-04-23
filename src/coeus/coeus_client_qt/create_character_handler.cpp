#include "game_handler.h"
#include "game_character_creator.h"
#include "qt_coeus_common.h"

void GameHandler::randomNicknameHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCGetRandomNameRsp randomNicknameRsp;
    DECODE_MESSAGE(randomNicknameRsp, packet);

    WidgetManager::getInstance().gameCharacterCreator()->onGetRandomNicknameRsp(randomNicknameRsp);
}


void GameHandler::createCharacterHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCCreateCharacterRsp createCharacterRsp;
    DECODE_MESSAGE(createCharacterRsp, packet);

    WidgetManager::getInstance().gameCharacterCreator()->onCreateCharacterRsp(createCharacterRsp);
}