#ifndef __GAME_UTIL_H__
#define __GAME_UTIL_H__

#include "Poco/MD5Engine.h"
#include "Poco/HMACEngine.h"
#include "Poco/SHA1Engine.h"
#include "Poco/Base64Encoder.h"
#include <regex>
#include <sstream>


namespace GameUtil
{
	//通过邮箱帐号转换为唯一ID
	static uint64 toUniqueId(const std::string& email)
	{
		size_t len = email.size();
		unsigned long h = (unsigned long)len;
		size_t step = (len >> 5) + 1;
		for (size_t i = len; i >= step; i -= step)
			h = h ^ ((h << 5) + (h >> 2) + (unsigned long)email.at(i - 1));
		return h;
	}

	//验证邮箱帐号合法性
	static bool checkEmailValid(const std::string& email)
	{
		const std::regex regex("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
		return std::regex_match(email, regex);
	}

	//验证码密码合法性（是否32位MD5）
	static bool checkPasswordHashValid(const std::string& passwordHash)
	{
		std::regex regex("[a-fA-F0-9]{32,32}");
		return std::regex_match(passwordHash, regex);
	}

    // 昵称是否合法
    static bool checkNicknameValid(const std::string& nickname)
    {
        return true;
    }

    // 对密码进行编码
    // 算法：password = md5(sha1(base64()))
    static std::string toPasswordDigest(const std::string& plain_password)
    {
        //Base64
        std::ostringstream base64ostr;
        Poco::Base64Encoder base64Encoder(base64ostr);
        base64Encoder << plain_password;
        base64Encoder.close();

        //Sha-1
        Poco::SHA1Engine sha1Engine;
        sha1Engine.update(base64ostr.str());
        std::string sha1_pass = Poco::DigestEngine::digestToHex(sha1Engine.digest());

        //MD5
        Poco::MD5Engine md5Engine;
        md5Engine.update(sha1_pass);
        return Poco::DigestEngine::digestToHex(md5Engine.digest());  
    }

}

#endif