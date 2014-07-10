#ifndef __GAME_NETWORK_H__
#define __GAME_NETWORK_H__

#include <QtNetwork>
#include <QDialog>
#include "venus_net/message_block_packetization.h"
#include "venus_net/basic_stream.h"
#include "venus_net/singleton.h"

class NetworkListener
{
public:
    // 通过重写该方法，注册窗体关注的网络消息
    virtual void initHandlers() = 0;
};

class NetworkMessage;
class QTcpSocket;
class GameNetwork : public QObject, public Venus::Singleton<GameNetwork>
{
    Q_OBJECT
    
private:
    static const int MAX_RECV_LEN = 1024 * 4;

public:
    GameNetwork();
    virtual ~GameNetwork();

public:
    void setConnectServer(int serverId);
    bool connectServer();
    void sendMessage(uint16 opcode, const flatbuffers::FlatBufferBuilder& message);

    // reserve
    void sendMessage(uint16 opcode, NetworkMessage& message);
    void close();

private:
    void onMessage(BasicStreamPtr& packet);
    void sendMessage(const BasicStreamPtr& stream);
    void sendMessage(int16 opcode, const byte* buff, size_t size);

signals:  
private slots:
    void slotRecvMessage();
    void slotOnError(QAbstractSocket::SocketError);

private:
    QTcpSocket* _socket;
    MessageBlockPacketization _blockPacketization;
};

#endif // !__GAME_NETWORK_H__
