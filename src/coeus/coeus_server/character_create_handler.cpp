#include "game_session.h"
#include "venus_net/venus_net.h"
#include "game_common/game_define.h"
#include "game_database.h"
#include "player_db.h"
#include "player.h"
#include "player_manager.h"


void GameSession::checkNicknameExist(const NetworkPacket::Ptr& packet)
{
    Protocol::CSCheckNicknameExist checkNicknameExistRequest;
    DECODE_MESSAGE(checkNicknameExistRequest, packet);

    if (!checkNicknameExistRequest.nickname.empty())
    {
        Protocol::SCCheckNicknameExist response;
        response.result = GameDatabase::getInstance().isNicknameExist(checkNicknameExistRequest.nickname);
        this->send_message(Opcodes::SCCheckNicknameExist, response);
    }
}


void GameSession::characterCreateHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::CSCreateCharacter createCharacterRequest;
    DECODE_MESSAGE(createCharacterRequest, packet);

    if (createCharacterRequest.nickname.empty())
    {
        debug_log("Nickname empty in character create request.");
        return;
    }

    // Todo : validate nickname regulation
    // ...

    Protocol::SCCreateCharacter response;
    response.result = (createCharacterRequest.gender == Gender::Female || createCharacterRequest.gender == Gender::Male);
    response.result = (
        createCharacterRequest.character_type >= CharacterType::MirrorHunter &&
        createCharacterRequest.character_type < CharacterType::CharacterTypeMaxFlag
        );
    response.result = (createCharacterRequest.epic.characteristic > 0);

    response.result = (
        createCharacterRequest.epic.family_type >= Epic::FamilyType::AnofficialFamily && 
        createCharacterRequest.epic.family_type < Epic::FamilyType::FamilyMaxFlag
        );

    response.result = (
        createCharacterRequest.epic.story_type >= Epic::StoryType::FinderStory &&
        createCharacterRequest.epic.story_type < Epic::StoryType::StoryMaxFlag
        );

    if (response.result/*GameDatabase::getInstance().createCharacter(
        _userGuid, 
        createCharacterRequest.character_type,
        createCharacterRequest.nickname,
        createCharacterRequest.gender,
        createCharacterRequest.epic)*/
        )
    {
        Protocol::PlayerFullData initialFullData;
        initialFullData.character_id = _userGuid;
        initialFullData.userid = _userGuid;
        initialFullData.initial_data.character_type = createCharacterRequest.character_type;
        initialFullData.gender = createCharacterRequest.gender;
        initialFullData.epic = createCharacterRequest.epic;
        initialFullData.last_login = 0;
        initialFullData.initial_data.exp = 0;
        initialFullData.initial_data.next_exp = 0;
        initialFullData.initial_data.hp = 0;
        initialFullData.initial_data.max_hp= 0;
        initialFullData.initial_data.power = 0;
        initialFullData.initial_data.level = 1;
        initialFullData.initial_data.nickname = createCharacterRequest.nickname;

        GameDatabase::getInstance().saveCharacterInfo(_userGuid, initialFullData);

        /*Player* player = PlayerManager::getInstance().createPlayer(_userGuid, this);
        if (player != nullptr)
        {
            Protocol::PlayerFullData& fullData = player->fullData();
            fullData.nickname = createCharacterRequest.nickname;
            fullData.character_id = _userGuid;
            fullData.character_type = createCharacterRequest.character_type;
            fullData.gender = createCharacterRequest.gender;
            fullData.epic = createCharacterRequest.epic;
        }*/

		//加载角色相关数据
		if (this->loadPlayer())
		{
			debug_log("Player %ull login successful.", _userGuid);
			debug_log("Total online player count = %d", PlayerManager::getInstance().playerCount());
		}

        this->send_message(Opcodes::SCCreateCharacter, response);
    }
}