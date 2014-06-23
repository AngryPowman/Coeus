#ifndef __GAME_DATA_H__
#define __GAME_DATA_H__

#include "qt_coeus_common.h"

class GameData
	: public Venus::Singleton<GameData>
{

public:
	Protocol::PlayerFullData fullData;
};

#endif