#include "game_handler.h"
#include "character_creator.h"
#include "qt_coeus_common.h"
#include "widget_manager.h"

void GameHandler::randomNicknameHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCGetRandomNameRsp randomNicknameRsp;
    DECODE_MESSAGE(randomNicknameRsp, packet);

    //WidgetManager::getInstance().characterCreator_BaseInfoPage()->onGetRandomNicknameRsp(randomNicknameRsp);
}


void GameHandler::createCharacterHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCCreateCharacterRsp createCharacterRsp;
    DECODE_MESSAGE(createCharacterRsp, packet);

    //WidgetManager::getInstance().characterCreator_BaseInfoPage()->onCreateCharacterRsp(createCharacterRsp);
}