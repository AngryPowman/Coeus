#include "game_handler.h"
#include "qt_coeus_common.h"
#include "widget_manager.h"

void GameHandler::publicChatNotificationHandler(const NetworkPacket::Ptr& packet)
{
	Protocol::SCPublicChatMessageNotification publicChatMessageNotification;
	DECODE_MESSAGE(publicChatMessageNotification, packet);

	WidgetManager::getInstance().gameChatWidget()->onPublicChatMessageNotification(publicChatMessageNotification);
}

void GameHandler::privateNotificationHandler(const NetworkPacket::Ptr& packet)
{
	Protocol::SCPrivateChatMessageNotification privateChatMessageNotification;
	DECODE_MESSAGE(privateChatMessageNotification, packet);

	WidgetManager::getInstance().gameChatWidget()->onPrivateChatMessageNotification(privateChatMessageNotification);
}
