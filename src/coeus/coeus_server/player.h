#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "venus_net/venus_net.h"
#include "cached_object.h"

class GameSession;
class ChatManager;
class MissionManager;
namespace Protocol
{
    struct PlayerFullData;
}

enum PlayerGender
{
	GENDER_NONE = 0,
	GENDER_FEMALE = 1,
	GENDER_MALE = 2
};

class Player : public CachedObject
{
public:
	Player(uint64 guid, GameSession* session);
	virtual ~Player();

public:
	void onLogout();
	void onLogin();
	void setSessionContext(GameSession* session);

public:
	void send_message(uint32 opcode, NetworkMessage& message);

public:
	//properties
	uint64 playerId() const;

	void gender(int32 gender);
	int32 gender() const;

	void nickname(const std::string& nickname);
	const std::string& nickname() const;

	void lastLogin(int64 last_login);
	int64 lastLogin() const;

	void gold(uint32 gold);
	uint32 gold() const;

public:
    Protocol::PlayerFullData& fullData();
	ChatManager* chatManager();
    MissionManager* missionManager();
	GameSession* session();

private:
    void cachedLastLogin(int64 last_login);
    int64 cachedLastLogin() const;

private:
	uint64 _playerId;
	Protocol::PlayerFullData* _playerFullData;
	GameSession* _session;
	ChatManager* _chatManager;
    MissionManager* _missionManager;
	int64 _cachedLastLogin;
};

#endif