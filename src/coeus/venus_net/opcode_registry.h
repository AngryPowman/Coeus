#ifndef __OPCODE_REGISTRY_H__
#define __OPCODE_REGISTRY_H__

#include "network_common.h"
#include "singleton.h"

namespace Venus
{

template <typename T>
struct OpcodeHandler
{
    typedef std::function<void (T*, const NetworkPacket::Ptr&)> MessageHandler;

    OpcodeHandler(const std::string& message_name, const MessageHandler& message_handler)
        : name(std::move(message_name)), handler(std::move(message_handler))
    {
    }

	std::string name;
    MessageHandler handler;
};

// ���ڹ�����Ϣ������ע�����
//    ģ��˵����
//    T - ��Ϣ������������

template <typename T>
class OpcodeRegistry
{
public:
    OpcodeRegistry(){}
    virtual ~OpcodeRegistry(){}
    std::vector<OpcodeHandler<T>>& operator[](uint32 opcode)
	{
		return _opcodeTable[opcode];
	}

    void execute(T* target, const NetworkPacket::Ptr& packet)
    {
        auto iter = _opcodeTable.find(packet->opcode);
        if (iter != _opcodeTable.end())
        {
            std::vector<OpcodeHandler<T>>& handlerList = iter->second;
            for (const OpcodeHandler<T>& handler : handlerList)
            {
                handler.handler(target, packet);
            }
        }
    }

    const std::string& messageName(uint32 opcode)
    {
        return OpcodeHandler<T>[opcode].name;
    }

    void registerMessage(uint32 opcode, const OpcodeHandler<T>& handler)
    {
        auto iter = _opcodeTable.find(opcode);
        if (iter != _opcodeTable.end())
        {
            std::vector<OpcodeHandler<T>>& handlerList = iter->second;
            handlerList.push_back(handler);
        }
        else
        {
            std::vector<OpcodeHandler<T>> handlerList;
            handlerList.push_back(handler);

            _opcodeTable.insert(std::make_pair(opcode, handlerList));
        }
    }

private:
     adap_map< uint32, std::vector<OpcodeHandler<T>> > _opcodeTable;
};

#define OPCODE_REGISTER_BEGIN(REGISTRY_NAME, CB_TARGET) \
    class REGISTRY_NAME : public Venus::OpcodeRegistry<CB_TARGET>, public Venus::Singleton<REGISTRY_NAME> \
    {                                       \
        public: REGISTRY_NAME(){}           \
        public: template <typename T> void initialize() { 

#define OPCODE_REGISTER_END() }};

#define MAKE_HANDLER(opcode, handler) \
    Venus::OpcodeHandler<T>(opcode, std::bind(&T::handler, std::placeholders::_1, std::placeholders::_2))

#define REGISTER_HANDLER(m, f) \
    registerMessage(m, MAKE_HANDLER(#m, f))

#define EXECUTE_HANDLER(REGISTRY_NAME, TARGET_OBJECT, PACKET) \
    REGISTRY_NAME::getInstance().execute(TARGET_OBJECT, PACKET)
}

#endif