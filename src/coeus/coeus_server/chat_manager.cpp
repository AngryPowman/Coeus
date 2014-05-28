#include "chat_manager.h"
#include "protocol/opcodes.h"
#include "protocol/protocol.h"
#include "player_manager.h"
#include "game_session_manager.h"

ChatManager::ChatManager(Player* player)
	: _player(player)
{
}

ChatManager::~ChatManager()
{

}

void ChatManager::sendPrivateChat(uint64 targetId, const std::string& chatMessage)
{
	Player* player = PlayerManager::getInstance().getPlayer(targetId);
	if (player != nullptr)
	{
		Protocol::SCPrivateChatMessageNotification privateChatMessageNotification;
		privateChatMessageNotification.target_id = _player->playerId();
		privateChatMessageNotification.target_name = PlayerManager::getInstance().getPlayerNameById(targetId);
		privateChatMessageNotification.message = chatMessage;

		_player->send_message(Opcodes::SCPrivateChatMessageNotification, privateChatMessageNotification);
	}
}

void ChatManager::sendPrivateChat(const std::string& playerName, const std::string& chatMessage)
{
	Player* player = PlayerManager::getInstance().getPlayer(playerName);
	if (player != nullptr)
	{
		sendPrivateChat(player->playerId(), chatMessage);
	}
}

void ChatManager::sendPublicChat(ChatChannel channel, const std::string& chatMessage)
{
	Protocol::SCPublicChatMessageNotification publicChatMessageNotification;
	publicChatMessageNotification.channel = channel;
	publicChatMessageNotification.message = chatMessage;
	GameSessionManager::getInstance().broadcast(Opcodes::SCPublicChatMessageNotification, publicChatMessageNotification);
}
