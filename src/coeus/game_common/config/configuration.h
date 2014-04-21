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
	bool readConfig(const std::string& filename, Json::Value& value);

    // �÷������ڰ�Json����д�ص�json�����ļ�
    // @filename : json�����ļ���ȫ·��
    // @value    : ����json���ø��ڵ����ݵı���
    bool writeConfig(const std::string& filename, const Json::Value& rootValue, bool useStyleWriter = false);

    // ���������ļ����ļ���
    const std::string& filename() { return _filename; }

    // ���������д�÷��������ڶ������ļ����ݽ��н���
	virtual bool parse() = 0;

    // ��д�÷��������ڰ��ڴ��е�ҵ���������л�ΪJson����
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