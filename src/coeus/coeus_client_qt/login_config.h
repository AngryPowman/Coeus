#ifndef __LOGIN_CONFIG_H__
#define __LOGIN_CONFIG_H__

#include "game_common/config/configuration.h"

struct AccountPair
{
    std::string account;
    std::string password;
};

class LoginConfig
    : public Configuration, public Venus::Singleton<LoginConfig>
{
public:
    void saveAccount(const std::string& account, const std::string& password);
    const std::string& savedAccount() const;
    const std::string& savedPassword() const;
    void setAutoLogin(bool value);
    bool getAutoLogin();
    void setRememberPassword(bool value);
    bool getRememberPassword();

public:
    bool parse();
    bool saveToFile();

private:
    AccountPair _saveAccount;
    bool _autoLogin;
    bool _rememberPassword;
};

#endif // !__LOGIN_CONFIG_H__
