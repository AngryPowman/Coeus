#include "player.h"
#include "game_session.h"
#include "game_database.h"
#include "player_db.h"
#include "chat_manager.h"

Player::Player(uint64 playerId, GameSession* session)
    : _playerId(playerId),
	_playerFullData(new Protocol::PlayerFullData()), 
	_session(session), 
	_cachedLastLogin(0),
	_chatManager(nullptr)
{
}

Player::~Player()
{
    SAFE_DELETE(_playerFullData);
	SAFE_DELETE(_chatManager);
}

void Player::onLogin()
{
    // TODO: Æô¶¯ĞÄÌø¼ì²é
    // ...

	_chatManager = new ChatManager(this);
}

void Player::onLogout()
{
	this->lastLogin(_cachedLastLogin);
	debug_log("Updated last login time to %ld.", _cachedLastLogin);

	// ...
	// save data to db
}

void Player::nickname(const std::string&& nickname)
{
    _playerFullData->nickname = nickname;
}

const std::string&& Player::nickname() const
{
    return std::forward<std::string>(_playerFullData->nickname);
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
