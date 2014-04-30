#include "script_engine.h"
#include "scripter.h"
#include "script_util_executor.h"
#include <map>
#include <mutex>

static std::map<std::string/*name*/, ScriptExecuter> m_executerMap;
static std::mutex m_executerMapMutex;

void ScriptResult::operator=(const ScriptResult& rhs)
{
	excuteErr = rhs.excuteErr;
	excuteResult = rhs.excuteResult;
	result = rhs.result;
	resultMsg = rhs.resultMsg;
}

ScriptResult ScriptEngine::Run(const std::string& cmd)
{
	ScriptResult result;
	result.excuteResult = false;

	ScriptVec scripts;
	if (SplitScripts(cmd.c_str(),scripts,result))
	{
		std::string errMsg;
		for (auto& i:scripts)
		{
			CScripter scripter;
			if (!scripter.RunScript(i.c_str(), result.excuteErr, 
				result.result.boolVar, result.resultMsg))
			{
				result.excuteResult = false;
				return result;
			}
			if (!result.result.boolVar)
			{
				// script interrupted
				return result;
			}
		}
	}

	return result;
}

void ScriptEngine::AddFunction(const char* funcName, ScriptExecuter excuter)
{
	std::lock_guard<std::mutex> locker(m_executerMapMutex);
	m_executerMap[funcName] = excuter;
}

bool ScriptEngine::QueryFunction(const char* funcName, ScriptExecuter& excuter)
{
	std::lock_guard<std::mutex> locker(m_executerMapMutex);
	auto iFind = m_executerMap.find(funcName);
	if (iFind != m_executerMap.end())
	{
		excuter = iFind->second;
		return true;
	}
	return false;
}

void ScriptEngine::Init()
{
	AddFunction("float_equal", ScriptExecuter(floatEqual));
	AddFunction("astrue", ScriptExecuter(asTrueFunc));
	CScripter::Init();
}

void ScriptEngine::Uninit()
{
	CScripter::Uninit();
}
