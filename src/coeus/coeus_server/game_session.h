#ifndef __GAME_SESSION_H__
#define __GAME_SESSION_H__

#include "venus_net/venus_net.h"
#include "venus_net/network_session.h"

class Player;
class GameSession : public NetworkSession
{
    enum SessionState
    {
        NotLoggedIn,    //�������ӵ�δ��¼�ɹ�
        LoginSuccess    //��¼����Ȩ���ɹ�
    };

public:
    GameSession(ServerConnection* serverConnection);
    virtual ~GameSession();

public:
    void send_error(uint32 errorCode);
    void send_error(uint32 errorCode, const std::string& reason);

public:
    //ע�� && ��¼
    void loginHandler(const NetworkPacket::Ptr& packet);
    void registerHandler(const NetworkPacket::Ptr& packet);

    //��ɫ����
    void checkNicknameExist(const NetworkPacket::Ptr& packet);
    void characterCreateHandler(const NetworkPacket::Ptr& packer);

    //�������
    void getPropertiesHandler(const NetworkPacket::Ptr& packet);

private:
    void setPlayerContext(Player* player);
    bool loadPlayer();

private:
	Player* _player;
    uint64 _userGuid;
    SessionState _sessionState;
};

#endif
