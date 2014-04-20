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
    // �ó��������������ù�����ע��������
	void initialize(ConfigManager* manager);

    // �÷������ڼ���һ��json�����ļ�����������ڵ������value
    // @filename : json�����ļ���ȫ·��
    // @value    : ����json���ø��ڵ����ݵı���
	bool loadConfig(const std::string& filename, Json::Value& value);

    // ���������ļ����ļ���
    const std::string& filename() { return _filename; }

    // ���������д�÷��������ڶ������ļ����ݽ��н���
	virtual bool parse() = 0;

    // ��д�÷��������ڱ������ݵ������ļ�
    virtual void save() { };

private:
    std::string _filename;
    ConfigManager* _manager;
};

#define LOAD_CONFIG(config_file, value) \
    if (!Configuration::loadConfig(config_file, value)) return false

#endif