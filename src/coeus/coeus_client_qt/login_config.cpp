#include "login_config.h"
#include "game_common/path_definition.h"

void LoginConfig::saveAccount(const std::string& account, const std::string& password)
{
    _saveAccount.account = account;
    _saveAccount.password = password;
}

const std::string& LoginConfig::savedAccount() const
{
    return _saveAccount.account;
}

const std::string& LoginConfig::savedPassword() const
{
    return _saveAccount.password;
}

bool LoginConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::LoginConfigPath, value);

    _autoLogin = value["auto_login"].asBool();
    _rememberPassword = value["remember_password"].asBool();
    _saveAccount.account = value["account"].asString();
    _saveAccount.password = value["password"].asString();

    return true;
}

bool LoginConfig::saveToFile()
{
    Json::Value value;
    value["auto_login"] = _autoLogin;
    value["remember_password"] = _rememberPassword;
    value["account"] = _saveAccount.account;
    value["password"] = _saveAccount.password;

    WRITE_CONFIG(ConfigFile::LoginConfigPath, value, true);
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