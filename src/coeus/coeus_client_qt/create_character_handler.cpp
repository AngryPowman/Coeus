#include "game_handler.h"
#include "character_creator.h"
#include "qt_coeus_common.h"
#include "widget_manager.h"

void GameHandler::createCharacterHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCCreateCharacter createCharacterRsp;
    DECODE_MESSAGE(createCharacterRsp, packet);

    //WidgetManager::getInstance().characterCreator_BaseInfoPage()->onCreateCharacterRsp(createCharacterRsp);
}