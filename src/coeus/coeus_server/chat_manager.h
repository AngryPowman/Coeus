#ifndef __CHAT_MANAGER_H__
#define __CHAT_MANAGER_H__

#include <venus_net/common.h>
#include "game_common/game_define.h"

class Player;
class ChatManager
{
public:
	ChatManager(Player* player);
	virtual ~ChatManager();

public:
	void sendPrivateChat(uint64 targetId, const std::string& chatMessage);
	void sendPrivateChat(const std::string& playerName, const std::string& chatMessage);
	void sendPublicChat(ChatChannel channel, const std::string& chatMessage);

public:
	Player* _player;
};

#endif