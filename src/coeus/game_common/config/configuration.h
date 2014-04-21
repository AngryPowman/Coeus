#ifndef __CONFIGURATION_H__
#define __CONFIGURATION_H__

#include "config_manager.h"
#include "json/json.h"
#include <fstream>

class ConfigManager;
class Configuration
    : public Json::Reader
{
public:
    virtual ~Configuration() {}

public:
    // 该初方法用于向配置管理器注册配置项
	void initialize(ConfigManager* manager);

    // 该方法用于加载一个json配置文件，并把其根节点解析到value
    // @filename : json配置文件的全路径
    // @value    : 储存json配置根节点内容的变量
	bool readConfig(const std::string& filename, Json::Value& value);

    // 该方法用于把Json对象写回到json配置文件
    // @filename : json配置文件的全路径
    // @value    : 储存json配置根节点内容的变量
    bool writeConfig(const std::string& filename, const Json::Value& rootValue, bool useStyleWriter = false);

    // 返回配置文件的文件名
    const std::string& filename() { return _filename; }

    // 子类必须重写该方法，用于对配置文件内容进行解析
	virtual bool parse() = 0;

    // 重写该方法，用于把内存中的业务数据序列化为Json对象
    virtual bool saveToFile() { return true; };

private:
    std::string _filename;
    ConfigManager* _manager;
};

#define READ_CONFIG(config_file, value) \
    if (!Configuration::readConfig(config_file, value)) return false

#define WRITE_CONFIG(config_file, value, use_style_writer) \
    return Configuration::writeConfig(config_file, value, use_style_writer)

#endif