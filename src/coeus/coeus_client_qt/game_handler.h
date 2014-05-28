#ifndef __GAME_HANDLER_H__
#define __GAME_HANDLER_H__

#include "venus_net/singleton.h"
#include "venus_net/network_common.h"

class GameHandler : public Venus::Singleton<GameHandler>
{
public:
    void loginHandler(const NetworkPacket::Ptr& packet);
    void createCharacterHandler(const NetworkPacket::Ptr& packet);

    // Properties
    void propertiesHandler(const NetworkPacket::Ptr& packet);

	//Chatting
	void publicChatNotificationHandler(const NetworkPacket::Ptr& packet);
	void privateNotificationHandler(const NetworkPacket::Ptr& packet);
};

#endif // __GAME_HANDLER_H__
