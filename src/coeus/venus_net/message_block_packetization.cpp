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
        if (leftLen < NetworkParam::kMagicFlagLength && _pendingStream->b.size() == 0)
        {
            addPending((const byte*)(buffer + readIdx), leftLen);
            return true;
        }

        int32 msgLen = 0;
        int32 needReadLen = 0;

        _packetStreamPtr = new BasicStream();

        if (_pendingStream->b.size() > 0)
        {
            if (_pendingStream->b.size() < NetworkParam::kMagicFlagLength)
            {
                if (_pendingStream->b.size() + leftLen < NetworkParam::kMagicFlagLength)
                {
                    addPending((const byte*)(buffer + readIdx), leftLen);
                    return true;;
                }

                int32 srcPendingLen = _pendingStream->b.size();
                _pendingStream->append((const byte*)buffer + readIdx, NetworkParam::kMagicFlagLength - _pendingStream->b.size());

                readIdx += (NetworkParam::kMagicFlagLength - srcPendingLen);
                leftLen = bytes_transferred - readIdx;
            }

            _pendingStream->i = _pendingStream->b.begin();
            _pendingStream->read(msgLen);

            if (checkMessageLen(msgLen) == false) return false;

            if (leftLen < (int32)(msgLen - _pendingStream->b.size()))
            {
                addPending((const byte*)(buffer + readIdx), leftLen);

                // TODO: set timeout
                // ...

                return true;
            }

            needReadLen = msgLen - _pendingStream->b.size();
            _packetStreamPtr = _pendingStream;
            _pendingStream = new BasicStream();
        }
        else
        {
            msgLen = BasicStream::read((const byte*)buffer + readIdx);

            if (checkMessageLen(msgLen) == false) return false;
            if (leftLen < msgLen)
            {
                addPending((const byte*)(buffer + readIdx), leftLen);
                return true;
            }
            needReadLen = msgLen;
        }

        // Read body
        if (needReadLen > 0)
        {
            _packetStreamPtr->append((const byte*)(buffer + readIdx), needReadLen);
        }

        _packetStreamPtr->i = _packetStreamPtr->b.begin() + NetworkParam::kMagicFlagLength;
        byte comp = 0;

        //_packetStreamPtr->read(comp);

        // TODO: compress flag reserve
        if (comp > 0)
        {
        }

        // TODO: encrypt flag reserve
        byte encrypt = 0;
        //_packetStreamPtr->read(encrypt);
        if (encrypt > 0)
        {
        }

        // Push packet
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
