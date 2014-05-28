#include "game_session.h"
#include "chat_manager.h"
#include "player.h"

void GameSession::publicChatHandler(const NetworkPacket::Ptr& packet)
{
	Protocol::CSSendPublicChatMessageReq publicChatMessageReq;
	DECODE_MESSAGE(publicChatMessageReq, packet);

	ChatManager* chatManager = _player->chatManager();
	if (chatManager != nullptr)
	{
		chatManager->sendPublicChat(static_cast<ChatChannel>(publicChatMessageReq.channel), publicChatMessageReq.message);
	}
}

void GameSession::privateChatByIdHandler(const NetworkPacket::Ptr& packet)
{
	Protocol::CSSendPrivateChatMessageByIdReq privateChatMessageByIdReq;
	DECODE_MESSAGE(privateChatMessageByIdReq, packet);

	ChatManager* chatManager = _player->chatManager();
	if (chatManager != nullptr)
	{
		chatManager->sendPrivateChat(privateChatMessageByIdReq.target_id, privateChatMessageByIdReq.message);
	}
}

void GameSession::privateChatByNameHandler(const NetworkPacket::Ptr& packet)
{
	Protocol::CSSendPrivateChatMessageByNameReq privateChatMessageByNameReq;
	DECODE_MESSAGE(privateChatMessageByNameReq, packet);

	ChatManager* chatManager = _player->chatManager();
	if (chatManager != nullptr)
	{
		chatManager->sendPrivateChat(privateChatMessageByNameReq.target_name, privateChatMessageByNameReq.message);
	}
}
