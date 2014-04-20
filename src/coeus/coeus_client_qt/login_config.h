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
    void addNewAcountRecord(const std::string& account, const std::string& password);
    const std::vector<const std::string*>&& acountList() const;
    const std::string&& password(const std::string& account) const;
    void setAutoLogin(bool value);
    bool getAutoLogin();
    void setRememberPassword(bool value);
    bool getRememberPassword();

public:
    bool parse();
    void save();

private:
    std::vector<AccountPair> _accountPairs;
    bool _autoLogin;
    bool _rememberPassword;
};

#endif // !__LOGIN_CONFIG_H__
