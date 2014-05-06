#ifndef __NETWORK_COMMON_H__
#define __NETWORK_COMMON_H__

#include "common.h"
#include "Poco/AutoPtr.h"
#include "Poco/RefCountedObject.h"

struct NetworkParam
{
    const static uint8 kMagicFlagLength = 4;            //��Ϣ����ǰ���ʾ���ܳ��ȵ��ֽ���
    const static uint8 kHeaderLength = 8;               //���ȺͲ�����
    const static int32 kMaxMessageLength = 10 * 65535;  //��Ϣ��󳤶�
};

// ����ʵ�����˵���Ϣ����̳д���
// ��Ϣ����Ҫ��дbyteSize/encode/decode��������
class NetworkMessage
{
public:
    NetworkMessage(){}
    virtual ~NetworkMessage(){}

    virtual int32 byteSize() = 0;
    virtual void encode(byte* buffer, int32 size) = 0;
    virtual void decode(const byte* buffer, int32 size) = 0;
};

// NetworkPacket�����ڰ�װ�����յ���������
// ���͵��ϲ�ʱ��Ҫ��NetworkPacket��ȡ�������з����л��õ��������Ϣ�ṹ
struct NetworkPacket : Poco::RefCountedObject
{
    typedef Poco::AutoPtr<NetworkPacket> Ptr;
    typedef std::vector<byte> PDU;

    uint16 opcode;
    PDU message;
};

#define DECODE_MESSAGE(network_message, data) \
    if (!data->message.empty()) network_message.decode((const byte*)&data->message[0], data->message.size());

// �������ӹر�ԭ��
enum ShutdownReason
{
    SR_SERVICE_CLOSE_INITIATIVE, // ���������ر����ӣ������ɣ�
    SR_SERVICE_PACKET_FAILURE,   // ���ʧ��
    SR_KICK_OUT,                 // ���������ߵ�ĳ������
    SR_SERVICE_STOP,             // ������Ҫֹͣ
    SR_PEER_GRACEFUL_SHUTDOWN,   // �ͻ��˰�ȫ�ر�����
    SR_EXCEPTION                 // ����δ֪�쳣��������RESET��
};

#endif // !__NETWORK_COMMON_H__