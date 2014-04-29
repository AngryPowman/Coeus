#pragma once
#include <vector>
#include <string>
#include "script_engine.h"

typedef std::vector<std::string> ScriptVec;

bool SplitScripts(const char* scripts,ScriptVec& ret,ScriptResult& errMsg);

class CScripter
{
public:
	static void Init();
	static void Uninit();
	bool RunScript(const char* script,std::string& errMsg,bool& excuteResult,std::string& excuteMsg);
protected:
	bool _Splitscript(const char* script,std::string& cmd, std::string& msg);
	bool _ExcuteExp(const char* exp, ScriptParam& result, std::string& msg);
	bool _TryFunctionCall(const char* cmd,std::string& funcName,ScriptParamVec& paramVec, std::string& msg);
};
