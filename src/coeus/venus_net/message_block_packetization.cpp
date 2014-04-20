#include "message_block_packetization.h"
#include "logger.h"
#include "message_notification.h"

MessageBlockPacketization::MessageBlockPacketization(const std::function<void (BasicStreamPtr&)>& callback)
    : _pendingStream(new BasicStream())
{
    _messageCallback = callback;
}
MessageBlockPacketization::~MessageBlockPacketization()
{

}

bool MessageBlockPacketization::appendBlock(const byte* buffer, size_t bytes_transferred)
{
    for (int32 readIdx = 0; readIdx < bytes_transferred; )
    {
        int32 leftLen = bytes_transferred - readIdx;

        //δ�ﵽ���ȵ�4�ֽ�������ȴ�
        if (leftLen < NetworkParam::kMagicFlagLength && _pendingStream->b.size() == 0)
        {
            //�ѵ�ǰ���յ������ݼ��뻺��
            addPending((const byte*)(buffer + readIdx), leftLen);
            return true;
        }

        //һ��������Ϣ����
        int32 msgLen = 0;

        //��Ҫ������Ϣ����
        int32 needReadLen = 0;

        //��Ÿ���Ϣ���ֽ���
        _packetStreamPtr = new BasicStream();

        //����л����
        if (_pendingStream->b.size() > 0)
        {
            //֮ǰ���治��4�ֽ�
            if (_pendingStream->b.size() < NetworkParam::kMagicFlagLength)
            {
                //���ڻ�����4�ֽڣ�������
                if (_pendingStream->b.size() + leftLen < NetworkParam::kMagicFlagLength)
                {
                    //���Pending,������
                    addPending((const byte*)(buffer + readIdx), leftLen);
                    return true;;
                }

                //�������4�ֽڣ��Ȱ�4�ֽ�ʣ�µĲ���׷�ӵ�PendingStream��
                int32 srcPendingLen = _pendingStream->b.size();
                _pendingStream->append((const byte*)buffer + readIdx, NetworkParam::kMagicFlagLength - _pendingStream->b.size());

                //��λ��ǰ��
                readIdx += (NetworkParam::kMagicFlagLength - srcPendingLen);

                //leftLen����
                leftLen = bytes_transferred - readIdx;
            }

            //�ȴӻ�����ж���������ʾ�ĳ���
            _pendingStream->i = _pendingStream->b.begin();
            _pendingStream->read(msgLen);

            //�����Ϣͷ�Ϸ���
            if (checkMessageLen(msgLen) == false) return false;

            //���������İ��������м�ĳ�ʱʱ�䲢�����ȴ�
            if (leftLen < (int32)(msgLen - _pendingStream->b.size()))
            {
                //���Pending��������
                addPending((const byte*)(buffer + readIdx), leftLen);

                // TODO: �����´ν��ճ�ʱʱ��
                // ...

                return true;
            }

            //ʣ��Ҫ�������ݳ���
            needReadLen = msgLen - _pendingStream->b.size();

            //��PendingStreamȡ����
            _packetStreamPtr = _pendingStream;

            //���¿���һ��PendingStream��Ųа�
            _pendingStream = new BasicStream();
        }
        //û�л����
        else
        {
            //�ȶ�ȡ��Ϣ����
            msgLen = BasicStream::read((const byte*)buffer + readIdx);

            //�����Ϣ���ȵĺϷ���
            if (checkMessageLen(msgLen) == false) return false;

            //���ʣ����ֽ������Ȳ��㣬��׷�ӵ�Pending�в�����
            if (leftLen < msgLen)
            {
                addPending((const byte*)(buffer + readIdx), leftLen);
                return true;
            }
            needReadLen = msgLen;
        }

        //��ʼ����Ϣ��
        if (needReadLen > 0)
        {
            _packetStreamPtr->append((const byte*)(buffer + readIdx), needReadLen);
        }

        _packetStreamPtr->i = _packetStreamPtr->b.begin() + NetworkParam::kMagicFlagLength;
        byte comp = 0;
        //_packetStreamPtr->read(comp);

        //TODO:ѹ��Ԥ��
        if (comp > 0)
        {
        }

        //TODO::������Ԥ��
        byte encrypt = 0;
        //_packetStreamPtr->read(encrypt);
        if (encrypt > 0)
        {
        }

        // ����������
        // ���ͳ�ȥ�İ��Ѿ�û���˳��ȣ���һ��4�ֽھ��ǲ�����
        _messageCallback(_packetStreamPtr);

        readIdx += needReadLen;
    }

    return true;
}

void MessageBlockPacketization::addPending(const byte* buff, size_t len)
{
    _pendingStream->append(buff, len);
}

bool MessageBlockPacketization::checkMessageLen(size_t len)
{
    if (len > NetworkParam::kMaxMessageLength)
    {
        error_log("message length too big");
        return false;
    }

    if (len < NetworkParam::kHeaderLength)
    {
        error_log("header length too small");
        return false;
    }

    return true;
}
