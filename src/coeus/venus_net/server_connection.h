#ifndef __SERVER_SESSION_H__
#define __SERVER_SESSION_H__

#include "network_common.h"
#include "tcp_connection.h"

// ServerConnection �������صײ�Connection�Ĳ��ֽӿ�
// �ṩ�����������ϲ�����ӽ��в���

class NetworkMessage;
class ServerConnection
{
public:
    ServerConnection(TcpConnection* connection);
    virtual ~ServerConnection();

public:
    void sendMessage(uint16 opcode, NetworkMessage& message);
	std::string& address() const;
    void close(const ShutdownReason& reason = SR_SERVICE_CLOSE_INITIATIVE);
    uint64 sequence() const;
    void notifyRelease();

private:
    TcpConnection* _connection;
};

#endif