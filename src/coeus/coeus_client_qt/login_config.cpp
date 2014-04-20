#include "login_config.h"
#include "game_common/path_definition.h"

const std::vector<const std::string*>&& LoginConfig::acountList() const
{
    std::vector<const std::string*> accountList;
    accountList.resize(_accountPairs.size());

    for (size_t i = 0; i < _accountPairs.size(); ++i)
    {
        accountList[i] = &_accountPairs[i].account;
    }

    return std::forward<std::vector<const std::string*>>(accountList);
}

const std::string&& LoginConfig::password(const std::string& account) const
{
    for (size_t i = 0; i < _accountPairs.size(); ++i)
    {
        if (_accountPairs[i].account == account)
        {
            return std::forward<const std::string>(_accountPairs[i].password);
        }
    }

    return std::forward<const std::string>("");
}

bool LoginConfig::parse()
{
    Json::Value value;
    LOAD_CONFIG(ConfigFile::LoginConfigPath, value);

    _autoLogin = value["auto_login"].asBool();
    _rememberPassword = value["remember_password"].asBool();

    const Json::Value& usersArrayValue = value["users"];
    _accountPairs.resize(usersArrayValue.size());

    for (uint16 i = 0; i < usersArrayValue.size(); ++i)
    {
        _accountPairs[i].account = usersArrayValue[i]["account"].asString();
        _accountPairs[i].password = usersArrayValue[i]["password"].asString();
    }

    return true;
}

void LoginConfig::save()
{

}

void LoginConfig::setAutoLogin(bool value)
{
    _autoLogin = value;
}

bool LoginConfig::getAutoLogin()
{
    return _autoLogin;
}

void LoginConfig::setRememberPassword(bool value)
{
    _rememberPassword = value;
}

bool LoginConfig::getRememberPassword()
{
    return _rememberPassword;
}