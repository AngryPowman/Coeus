#include "player.h"
#include "game_session.h"
#include "game_database.h"
#include "player_db.h"
#include "chat_manager.h"
#include "mission_manager.h"
#include "scripting.h"
#include "login_scripting_addon.h"

Player::Player(uint64 playerId, GameSession* session)
    : _playerId(playerId),
	_playerFullData(new Protocol::PlayerFullData()), 
	_session(session), 
	_cachedLastLogin(0),
	_chatManager(nullptr),
    _missionManager(nullptr)
{
}

Player::~Player()
{
    SAFE_DELETE(_playerFullData);
	SAFE_DELETE(_chatManager);
}

void Player::onLogin()
{
    // TODO: start heartbeat
    // ...

    // first login
    if (lastLogin() == 0)
    {
        // call scripting addon
        // ...
        Scripting::loginScriptingAddon()->on_login(true);
    }

    // save this time
    cachedLastLogin(Poco::Timestamp().epochTime());

    // initialize module instances
	_chatManager = new ChatManager(this);
    _missionManager = new MissionManager(this);
}

void Player::onLogout()
{
	this->lastLogin(_cachedLastLogin);
	debug_log("Updated last login time to %ld.", _cachedLastLogin);

    // destroy module instances
    SAFE_DELETE(_chatManager);
    SAFE_DELETE(_missionManager);
}

void Player::nickname(const std::string& nickname)
{
    _playerFullData->initial_data.nickname = nickname;
}

const std::string& Player::nickname() const
{
	return _playerFullData->initial_data.nickname;
}

Protocol::PlayerFullData& Player::fullData()
{
    return *_playerFullData;
}

GameSession* Player::session()
{
	return _session;
}

uint64 Player::playerId() const
{
	return _playerId;
}

void Player::gender(int32 gender)
{
    _playerFullData->gender = gender;
}

int32 Player::gender() const
{
    return _playerFullData->gender;
}

void Player::lastLogin(int64 last_login)
{
    _playerFullData->last_login = last_login;
}

int64 Player::lastLogin() const
{
    return _playerFullData->last_login;
}

void Player::cachedLastLogin(int64 last_login)
{
	_cachedLastLogin = last_login;
}

int64 Player::cachedLastLogin() const
{
	return _cachedLastLogin;
}

void Player::gold(uint32 gold)
{

}

uint32 Player::gold() const
{
	return 5000;
}

void Player::setSessionContext(GameSession* session)
{
	_session = session;
}

void Player::send_message(uint32 opcode, NetworkMessage& message)
{
    if (_session != nullptr)
        _session->send_message(opcode, message);
}

ChatManager* Player::chatManager()
{
	return _chatManager;
}

MissionManager* Player::missionManager()
{
    return _missionManager;
}
