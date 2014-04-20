#ifndef __MESSAGE_BLOCK_PACKETIZATION_H__
#define __MESSAGE_BLOCK_PACKETIZATION_H__

#include "common.h"
#include "message_queue.h"
#include "basic_stream.h"

// �������ϲ㷴�����ݰ�����������
// class PacketizationResult
// {
//     friend class MessageBlockPacketization;
// 
// public:
//     enum PacketizationState
//     {
//         STATE_PROCESSING,   //δ�������
//         STATE_FINISHED,     //�������
//         STATE_ERROR         //��������
//     };
// 
//     PacketizationResult()
//         : _packet(nullptr)
//     {
//     }
// 
//     inline const PacketizationState& state() const
//     {
//         return _state;
//     }
// 
//     inline const BasicStreamPtr& packet() const
//     {
//         return _packet;
//     }
// 
// private:
//     const PacketizationResult& updateResult(PacketizationState state, BasicStreamPtr packet = nullptr)
//     {
//         _state = state;
//         _packet = packet;
//         return *this;
//     }
// 
// private:
//     PacketizationState _state;
//     BasicStreamPtr _packet;
// };

class MessageBlockPacketization
{
public:
    MessageBlockPacketization(const std::function<void (BasicStreamPtr&)>& callback);
    virtual ~MessageBlockPacketization();

public:
    bool appendBlock(const byte* buffer, size_t size);

private:
    void addPending(const byte* buff, size_t len);
    bool checkMessageLen(size_t len);

private:
    std::function<void (BasicStreamPtr&)> _messageCallback;
    BasicStreamPtr _pendingStream;      //��Ž��յ�������
    BasicStreamPtr _packetStreamPtr;    //���һ�����������ݰ�
};

#endif // !__MESSAGE_BLOCK_PACKETIZATION_H__
