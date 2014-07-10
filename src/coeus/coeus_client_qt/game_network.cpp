#include <QtWidgets>
#include "game_login.h"
#include "game_handler.h"
#include "game_opcode_registry.h"
#include "qt_coeus_common.h"
#include "widget_manager.h"
#include "flatbuffers/flatbuffers.h"

GameNetwork::GameNetwork()
    : _blockPacketization(std::bind(&GameNetwork::onMessage, this, std::placeholders::_1))
{
    _socket = new QTcpSocket;

    connect(_socket, SIGNAL(readyRead()), this, SLOT(slotRecvMessage()));
    connect(_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotOnError(QAbstractSocket::SocketError)));
}

GameNetwork::~GameNetwork()
{
    close();
    SAFE_DELETE(_socket);
}

void GameNetwork::setConnectServer(int serverId)
{

}

bool GameNetwork::connectServer()
{
    close();
    _socket->connectToHost("127.0.0.1", 36911);
    return _socket->waitForConnected(8000);
}

void GameNetwork::sendMessage(const BasicStreamPtr& stream)
{
    _socket->write((const char*)stream->b.begin(), stream->b.size());
}

void GameNetwork::sendMessage(int16 opcode, const byte* buff, size_t size)
{
    BasicStreamPtr streamPtr(new BasicStream());

    streamPtr->write((int32)0); //长度预留
    streamPtr->write(opcode);   //操作码
    // ...
    // TODO: 包压缩和加密标志预留

    streamPtr->append((const byte*)buff, size);
    streamPtr->rewriteSize(streamPtr->b.size(), streamPtr->b.begin());

    sendMessage(streamPtr);
}

void GameNetwork::sendMessage(uint16 opcode, const flatbuffers::FlatBufferBuilder& message)
{
    BasicStreamPtr streamPtr(new BasicStream());
    streamPtr->write((int32)0);
    streamPtr->write(opcode);
    // ...
    // TODO: 包压缩和加密标志预留

    streamPtr->resize(NetworkParam::kHeaderLength + message.GetSize());
    //message.encode((byte*)streamPtr->b.begin() + NetworkParam::kHeaderLength, message.byteSize());
    streamPtr->rewriteSize(streamPtr->b.size(), streamPtr->b.begin());

    sendMessage(streamPtr);
}

void GameNetwork::sendMessage(uint16 opcode, NetworkMessage& message)
{
    BasicStreamPtr streamPtr(new BasicStream());
    streamPtr->write((int32)0);
    streamPtr->write(opcode);
    // ...
    // TODO: 包压缩和加密标志预留

    streamPtr->resize(NetworkParam::kHeaderLength + message.byteSize());
    message.encode((byte*)streamPtr->b.begin() + NetworkParam::kHeaderLength, message.byteSize());
    streamPtr->rewriteSize(streamPtr->b.size(), streamPtr->b.begin());

    sendMessage(streamPtr);
}

void GameNetwork::close()
{
    _socket->abort();
    _socket->close();
}

void GameNetwork::slotRecvMessage()
{
    QByteArray data = _socket->readAll();
    int bytes_transferred = data.size();
    qDebug() << "received " << bytes_transferred << " bytes.";

    if (bytes_transferred == 0)
    {
        this->close();
        return;
    }

    if (_blockPacketization.appendBlock((const byte*)data.constData(), bytes_transferred) == false)
    {
        this->close();
        return;
    }
}

void GameNetwork::onMessage(BasicStreamPtr& packet)
{
    //构造网络消息包给应用层
    uint16 opcode = 0;
    packet->read(opcode);

    NetworkPacket::Ptr networkPacketPtr(new NetworkPacket);
    networkPacketPtr->opcode = opcode;
    networkPacketPtr->message = NetworkPacket::PDU(packet->b.begin() + NetworkParam::kHeaderLength, packet->b.end());

    EXECUTE_HANDLER(GameOpcodeRegistry, GameHandler::getInstancePtr(), networkPacketPtr);
}

void GameNetwork::slotOnError(QAbstractSocket::SocketError error)
{
    switch(error)
    {
    case QAbstractSocket::RemoteHostClosedError : break;
    default : qDebug() << _socket->errorString();
    }

    GameLogin* login = WidgetManager::getInstance().gameLogin();
    login->onConnectFailed(error);
}