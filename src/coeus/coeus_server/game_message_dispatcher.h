#ifndef __GAME_MESSAGE_DISPATCHER_H__
#define __GAME_MESSAGE_DISPATCHER_H__

#include "venus_net/venus_net.h"

class GameMessageDispatcher : public MessageDispatcher
{
public:
    GameMessageDispatcher();
    virtual ~GameMessageDispatcher();

public:
    virtual void onNewConnection(ServerConnection* connection);
    virtual void onMessage(ServerConnection* connection, const NetworkPacket::Ptr& packet);
    virtual void onShutdown(ServerConnection* connection, const ShutdownReason& reason);
};

#endif // !__GAME_MESSAGE_DISPATCHER_H__
