#include "configuration.h"
#include <fstream>

void Configuration::initialize(ConfigManager* manager)
{
    manager->registerConfig(this);
}

bool Configuration::readConfig(const std::string& filename, Json::Value& value)
{
    _filename = filename;

    std::ifstream fs;
    fs.open(filename, std::ios::in);
    if (!fs.is_open())
    {
        //error_log("failed to open configuration file : %s", filename.c_str());
        return false;
    }

    fs.seekg(0, std::ios::end);
    size_t filesize = static_cast<size_t>(fs.tellg());
    fs.seekg(0, std::ios::beg);

    char* configBuffer = new char[filesize + 1];
    memset(configBuffer, 0, filesize);
    fs.read(configBuffer, filesize);

    bool parseResult = Json::Reader::parse(configBuffer, value, false);
    SAFE_DELETE_ARR(configBuffer);

    fs.close();

    return parseResult;
}

bool Configuration::writeConfig(const std::string& filename, const Json::Value& rootValue, bool useStyleWriter/* = false*/)
{
    Json::Writer* writer;
    if (useStyleWriter)
    {
        writer = new Json::StyledWriter;
    }
    else
    {
        writer = new Json::FastWriter;
    }

    std::string jsonContent = writer->write(rootValue);

    if (!jsonContent.empty())
    {
        std::ofstream ofs;
        ofs.open(filename, std::ios::out);
        if (!ofs.is_open())
        {
            return false;   
        }

        ofs << jsonContent;

        ofs.close();

        return true;
    }
    

    return false;
}