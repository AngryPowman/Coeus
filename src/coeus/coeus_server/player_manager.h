#ifndef __PLAYER_MANAGER_H__
#define __PLAYER_MANAGER_H__

#include "venus_net/venus_net.h"
#include "player.h"

class GameSession;
class DataManager;
class PlayerManager
	: public Venus::Singleton<PlayerManager>
{
	struct PlayerNameFinder
	{
		PlayerNameFinder(const std::string& playerName)
		    : _playerName(playerName)
		{
		}

		bool operator()(const std::map<uint64, Player*>::value_type& pair)
		{
			return pair.second->nickname() == _playerName;
		}

	private:
		const std::string& _playerName;
	};

public:
	bool initialize();
	void destroy();

public:
	Player* createPlayer(uint64 playerId, GameSession* session);
	void destroyPlayer(Player* player);

public:
	Player* getPlayer(uint64 playerId);
	Player* getPlayer(const std::string& playerName);
	const std::string&& getPlayerNameById(uint64 playerId);
	size_t playerCount() const;
	void killOffline(Player* player, bool offlineNotify = true);
	Player* loadFromCache(uint64 playerId);

private:
	bool addPlayer(Player* player);
	void removePlayer(Player* player);
	void removePlayer(uint64 playerId);
	void removeCache(uint64 playerId);

private:
	typedef adap_map<uint64, Player*> PlayerContainer;
	Venus::ObjectPool<Player> _playerPool;
	PlayerContainer _players;
	PlayerContainer _cachedPlayers;
	DataManager* _dataManager;
};

#endif