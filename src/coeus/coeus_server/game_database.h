#ifndef __GAME_DATABASE_H__
#define __GAME_DATABASE_H__

#include "venus_net/venus_net.h"
#include "venus_net/singleton.h"
#include "Poco/Data/Limit.h"
#include "Poco/Data/RecordSet.h"
#include "Poco/Data/SessionFactory.h"

class PlayerDB;
class PrepareStatementManager;
class GameDatabase
    : public Venus::Singleton<GameDatabase>
{
public:
    GameDatabase();
    virtual ~GameDatabase();

public:
    bool initialize();
    void destroy();

public:
    bool isUserExists(const std::string& username);
    bool userAuth(const std::string& username, const std::string& password);
    void insertNewUserRecord(
        uint64 user_guid, 
        const std::string& username,
        const std::string& password,
        const std::string& register_ip,
        uint64 register_timestamp
        );

    bool hasCharacter(uint64 user_guid);
    bool isNicknameExist(const std::string& nickname);
    //bool loadCharacterInfo(uint64 userGuid, Protocol::PlayerFullData& fullData);
    //bool saveCharacterInfo(uint64 userGuid, const Protocol::PlayerFullData& fullData);
    //bool createCharacter(uint64 userGuid, uint8 characterType, const std::string& nickname, uint8 gender, const Protocol::Epic& epic);

private:
    Poco::Data::Session* _db_session;
    Poco::Data::Statement* _db_stmt;
    PrepareStatementManager* _prepareStatementManager;
};

#endif