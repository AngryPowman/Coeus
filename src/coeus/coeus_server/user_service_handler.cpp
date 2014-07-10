#include "game_session.h"
#include "venus_net/venus_net.h"
#include "game_common/game_util.h"
#include "game_database.h"
#include "player.h"
#include "player_manager.h"
#include "protocol/login_request.fb.h"
#include "protocol/login_response.fb.h"

void GameSession::registerHandler(const NetworkPacket::Ptr& packet)
{
// 	Protocol::CSRegisterReq registerRequest;
// 	DECODE_MESSAGE(registerRequest, packet);
// 
// 	debug_log("[User Register] -> (Username='%s', Password='%s')", 
// 		registerRequest.username.c_str(), registerRequest.password.c_str());
// 
// 	//�ж������ʺŷǷ�
// 	if (GameUtil::checkEmailValid(registerRequest.username) == false)
// 	{
// 		Protocol::SCRegisterRsp register_respone;
// 		register_respone.register_result = false;
// 		send_message(Opcodes::SCRegisterRsp, register_respone);
// 
// 		debug_log("register email '%s' invalid, register failed.", 
// 			registerRequest.username.c_str());
// 		return;
// 	}
// 
// 	//�ж�����hash�Ƿ�
// 	if (GameUtil::checkPasswordHashValid(registerRequest.password) == false)
// 	{
// 		Protocol::SCRegisterRsp register_respone;
// 		register_respone.register_result = false;
// 
// 		send_message(Opcodes::SCRegisterRsp, register_respone);
// 
// 		debug_log("register password '%s' not a legal MD5 hash, register failed.",
// 			registerRequest.password.c_str());
// 		return;
// 	}
// 
// 	//ע���˺��Ƿ��Ѵ���
// 	bool user_exist = GameDatabase::getInstance().isUserExists(registerRequest.username);
// 	if (user_exist == true)
// 	{
// 		Protocol::SCRegisterRsp register_respone;
// 		register_respone.register_result = false;
// 		send_message(Opcodes::SCRegisterRsp, register_respone);
// 
// 		debug_log("register user '%s' exists, register failed.", registerRequest.username.c_str());
// 		return;
// 	}
// 
// 	GameDatabase::getInstance().insertNewUserRecord(
// 		GameUtil::toUniqueId(registerRequest.username),
// 		registerRequest.username,
// 		registerRequest.password,
// 		this->address(),
// 		Poco::Timestamp().epochTime());
// 
// 	Protocol::SCRegisterRsp register_respone;
// 	register_respone.register_result = true;
// 
// 	send_message(Opcodes::SCRegisterRsp, register_respone);

	debug_log("register success.");
}

void GameSession::loginHandler(const NetworkPacket::Ptr& packet)
{
// 	Protocol::CSLoginReq loginRequest;
// 	DECODE_MESSAGE(loginRequest, packet);
// 
// 	debug_log("[User Login] -> (Username='%s', Password='%s')", loginRequest.account.c_str(), loginRequest.password.c_str());
// 
// 	//�ж������ʺŷǷ�
// 	if (GameUtil::checkEmailValid(loginRequest.account) == false)
// 	{
// 		Protocol::SCLoginRsp loginResponse;
// 		loginResponse.login_result = false;
// 		this->send_message(Opcodes::SCLoginRsp, loginResponse);
// 
// 		debug_log("login account '%s' invalid, login failed.", loginRequest.account.c_str());
// 		return;
// 	}
// 
// 	//�ж�����hash�Ƿ�
// 	if (GameUtil::checkPasswordHashValid(loginRequest.password) == false)
// 	{
// 		Protocol::SCLoginRsp login_response;
// 		login_response.login_result = false;
// 		send_message(Opcodes::SCLoginRsp, login_response);
// 
// 		debug_log("login password '%s' not a legal MD5 hash, login failed.", 
// 			loginRequest.password.c_str());
// 
// 		return;
// 	}
// 
// 	//����¼�ʺ��Ƿ����
// 	Protocol::SCLoginRsp login_response;
// 	bool user_exists = GameDatabase::getInstance().isUserExists(loginRequest.account);
// 
// 	_userGuid = GameUtil::toUniqueId(loginRequest.account);
// 	login_response.player_id = 0;
// 
// 	if (user_exists == true)
// 	{
// 		debug_log("User ('%s') exists.", loginRequest.account.c_str());
// 
// 		//��֤�ʺź������Ƿ�ƥ��
// 		bool auth_result = GameDatabase::getInstance().userAuth(loginRequest.account, loginRequest.password);
// 		login_response.login_result = auth_result;
// 		login_response.player_id = _userGuid;
// 
// 		if (auth_result == false)
// 		{
// 			//�ʺź����벻ƥ��
// 			debug_log("email('%s') and password('%s') not match.", 
// 				loginRequest.account.c_str(), loginRequest.password.c_str());
// 		}
// 		else
// 		{
// 			debug_log("email('%s') and password('%s') matched, authentication success.", 
// 				loginRequest.account.c_str(), loginRequest.password.c_str());
//             login_response.login_result = true;
//             _sessionState = SessionState::LoginSuccess;
// 
//             //�Ƿ���ڽ�ɫ
//             bool charExist = GameDatabase::getInstance().hasCharacter(_userGuid);
//             login_response.character_create_require = !charExist;
//             
//             //���ڽ�ɫ�����
//             if (charExist)
//             {
//                 //���ؽ�ɫ�������
//                 if (this->loadPlayer())
//                 {
//                     debug_log("Player %ull login successful.", _userGuid);
//                     debug_log("Total online player count = %d", PlayerManager::getInstance().playerCount());
//                 }
//             }
//           
// 		}
// 	}
// 	else
// 	{
// 		debug_log("User ('%s') not exists. login failed!", loginRequest.account.c_str());
// 
// 		//�û�������
// 		login_response.login_result = false;
// 	}
// 
// 	send_message(Opcodes::SCLoginRsp, login_response);
}