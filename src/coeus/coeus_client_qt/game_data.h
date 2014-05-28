#ifndef __GAME_DATA_H__
#define __GAME_DATA_H__

#include "qt_coeus_common.h"

class GameData
	: public Venus::Singleton<GameData>
{
	static const int MAX_PLAYER_CACHED = 100;
public:
	Protocol::PlayerFullData fullData;

private:
	std::map<uint64, Protocol::PlayerFullData> _playerCached;
};

#endif