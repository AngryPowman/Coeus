#include "game_message_dispatcher.h"
#include "game_session_manager.h"
#include "game_opcode_registry.h"

GameMessageDispatcher::GameMessageDispatcher()
{
}

GameMessageDispatcher::~GameMessageDispatcher()
{
}

void GameMessageDispatcher::onNewConnection(ServerConnection* connection)
{
    //info_log("current thread (GameApp::onNewConnection) = %d", std::this_thread::get_id());
    //debug_log("connection established. sequence = %d", connection->sequence());

    GameSession* session = GameSessionManager::createSession(connection);
    GameSessionManager::getInstance().addSession(session);
}

void GameMessageDispatcher::onMessage(ServerConnection* connection, const NetworkPacket::Ptr& packet)
{
    //info_log("current thread (GameApp::onMessage) = %d", std::this_thread::get_id());
    //debug_log("connection received message, opcode = %d, bytesize = %d", packet->opcode, packet->message.size());

    GameSession* session = GameSessionManager::getInstance().getSession(connection->sequence());
    if (session != nullptr)
    {
        EXECUTE_HANDLER(GameOpcodeRegistry, session, packet);
    }
}

void GameMessageDispatcher::onShutdown(ServerConnection* connection, const ShutdownReason& reason)
{
    //info_log("current thread (GameApp::onShutdown) = %d", std::this_thread::get_id());
    //debug_log("connection shutdown, reason = %d", reason);
    GameSession* session = GameSessionManager::getInstance().getSession(connection->sequence());
    if (session != nullptr)
    {
        session->logout(reason);
    }
}