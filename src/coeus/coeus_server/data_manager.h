#ifndef __DATA_MANAGER_H__
#define __DATA_MANAGER_H__

#include "venus_net/common.h"
#include "venus_net/singleton.h"
#include "protocol/protocol.h"

class PlayerDB;
class DataManager
    : public Venus::Singleton<DataManager>
{
public:
	DataManager();
	virtual ~DataManager();

public:
    void loadPlayerData(uint64 playerId, Protocol::PlayerFullData& fullData);
};

#endif