#pragma once
#include "script_engine_param.h"
#include <string>

struct ScriptResult
{
	ScriptResult(){ result.boolVar = false; };
	ScriptResult(const ScriptResult& rhs){*this = rhs;};
	void operator=(const ScriptResult& rhs);

	// result for executive
	bool excuteResult;
	std::string excuteErr;

	enum class RetValueType
	{
		Bool
	};
	RetValueType type;

	union
	{
		bool boolVar;
	}result;
	std::string resultMsg;
};

// thread safe OK
class ScriptEngine
{
public:
	static void Init();
	static void Uninit();
	static ScriptResult Run(const std::string& cmd);
	static void AddFunction(const char* funcName, ScriptExecuter excuter);
	static bool QueryFunction(const char* funcName, ScriptExecuter& excuter);
};