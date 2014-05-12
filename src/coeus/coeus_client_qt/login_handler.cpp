#include "game_handler.h"
#include "game_login.h"
#include "qt_coeus_common.h"
#include "widget_manager.h"

void GameHandler::loginHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCLoginRsp loginRsp;
    DECODE_MESSAGE(loginRsp, packet);

    WidgetManager::getInstance().gameLogin()->onLoginRsp(loginRsp);
}