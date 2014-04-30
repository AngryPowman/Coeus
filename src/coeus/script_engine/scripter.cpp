#include "scripter.h"
#include "script_comparator.h"
#include "script_exp_value.h"

#include <locale>
#include <functional>
#include <algorithm>
#include <sstream>
#include <atomic>
#include <mutex>
#include <set>

#define ScriptSplit ';'
#define ScriptBegin '{'
#define ScriptEnd '}'
#define CmdSplit ','
#define MsgSign '\''

typedef std::set<IComparator*> ComparatorSet;
static ComparatorSet comparatorSet;
static IComparator* defaultEqualComparator;

void CScripter::Init()
{
	defaultEqualComparator = new CCompare_Equal;
	comparatorSet.insert(defaultEqualComparator);
	comparatorSet.insert(new CCompare_Not_Equal);
	comparatorSet.insert(new CCompare_Bigger);
	comparatorSet.insert(new CCompare_Not_Smaller);
	comparatorSet.insert(new CCompare_Smaller);
	comparatorSet.insert(new CCompare_Not_Bigger);
}

void CScripter::Uninit()
{
	defaultEqualComparator = nullptr;
	for (auto& i:comparatorSet)
	{
		if (i)
		{
			delete i;
		}
	}
	comparatorSet.clear();
}

bool IsValidScript(std::string& script)
{
	enum class FindState{Begin,End,Success};
	FindState state = FindState::Begin;
	std::string betterScript;
	for (auto& i:script)
	{
		switch (state)
		{
		case FindState::Begin:
			if (i==ScriptBegin)
			{
				betterScript += i;
				state = FindState::End;
			}
			break;
		case FindState::End:
			if (i==ScriptEnd)
			{
				betterScript += i;
				state = FindState::Success;
			}
			else
			{
				betterScript += i;
			}
			break;
		};
	}
	if (state == FindState::Success)
	{
		script = betterScript;
		return true;
	}
	return false;
}

bool SplitScripts(const char* scripts,ScriptVec& ret,ScriptResult& errMsg)
{
#define SetErr(_code,_msg) errMsg.excuteResult=_code;errMsg.excuteErr = _msg;
	if (!scripts || !*scripts)
	{
		SetErr(false,"empty script");
		return false;
	}

	while(*scripts)
	{
		std::string script;
		while (*scripts && *scripts!=ScriptSplit)
		{
			script += *scripts;
			++scripts;
		}
		// check validation
		if (!IsValidScript(script))
		{
			std::stringstream strFmt;
			strFmt<<"invalid script : \""<<script<<"\"";
			std::string msg;
			strFmt>>msg;
			SetErr(false,msg);
			return false;
		}

		ret.push_back(script);
		if (*scripts)
		{
			++scripts;	// skip ScriptSplit
		}
	}
	errMsg.excuteResult = true;
#undef SetErr
	return true;
}

typedef std::vector<std::string> ParamStrVec;
bool _SplitParamStr(const char* str,ParamStrVec& vec)
{
	if (!str)
	{
		return false;
	}
	int bracketDepth = 0;
	std::string currParam;
	while (*str)
	{
		if (*str == '(')
		{
			++bracketDepth;
		}
		else if (*str == ')')
		{
			--bracketDepth;
			if (bracketDepth<0)
			{
				return false;
			}
		}
		else if (*str == ',')
		{
			if (!bracketDepth)
			{
				if (currParam.empty())
				{
					return false;
				}
				else
				{
					vec.push_back(currParam);
					currParam.clear();
				}
				++str;
				continue;
			}
		}
		currParam += *str;
		++str;
	}
	if (bracketDepth)
	{	// 括号未闭合
		return false;
	}
	if (!currParam.empty())
	{
		vec.push_back(currParam);
	}
	return true;
}

bool _SplitFuncNameAndFuncParamStr(const char* cmd,std::string& funcNameStr,std::string& funcParamStr)
{
	enum class State{FuncName,FuncParam,End};
	State state = State::FuncName;
	int bracketDepth = 0;
	while (*cmd)
	{
		switch (state)
		{
		case State::FuncName:
			if (*cmd == '(')
			{
				++bracketDepth;
				state = State::FuncParam;
			}
			else
			{
				funcNameStr += *cmd;
			}
			break;
		case State::FuncParam:
			if (*cmd == '(')
			{
				++bracketDepth;
			}
			else if (*cmd == ')')
			{
				--bracketDepth;
				if (bracketDepth == 0)
				{
					state = State::End;
					break;
				}
			}
			funcParamStr += *cmd;
			break;
		case State::End:
			_SkipSpace(&cmd);
			if (*cmd)
			{
				return false;
			}
			break;
		}
		++cmd;
	}
	if (funcNameStr.empty())
	{
		return false;
	}
	return true;
}

bool CScripter::_TryFunctionCall(const char* cmd,std::string& funcName,ScriptParamVec& paramVec, std::string& msg)
{
	funcName.clear();
	if (!cmd)
	{
		return false;
	}
	std::string funcNameStr;
	std::string funcParamStr;
	bool splitResult = _SplitFuncNameAndFuncParamStr(cmd,funcNameStr,funcParamStr);
	if (!splitResult)
	{
		return false;
	}
	ParamStrVec strVec;
	if (!_SplitParamStr(funcParamStr.c_str(), strVec))
	{
		msg = "invalid params :<";
		msg += funcParamStr;
		msg += ">";
		return false;
	}
	for (auto& i:strVec)
	{
		ScriptParam result;
		bool excuteResult = _ExcuteExp(i.c_str(), result, msg);
		if (!excuteResult)
		{
			return false;
		}
		else
		{
			paramVec.push_back(result);
		}
	}
	funcName = funcNameStr;
	return true;
}

bool CScripter::RunScript(const char* script,std::string& errMsg,bool& excuteResult,std::string& excuteMsg)
{
	std::string cmd;
	std::string msg;
	if (!_Splitscript(script, cmd, msg))
	{
		errMsg = "invalid script";
		return false;
	}
	std::string leftExp;
	std::string rightExp;
	IComparator* comparator = nullptr;
	for (auto& compTester:comparatorSet)
	{
		if (compTester->TryFindComparator(cmd,leftExp,rightExp))
		{
			comparator = compTester;
			break;
		}
	}
	if (!comparator)
	{
		// as {isTrue(1)},we makes it to {isTrue(1)=true}
		comparator = defaultEqualComparator;
		leftExp = cmd;
		rightExp = "true";
	}
	ScriptParam leftResult;
	ScriptParam rightResult;
	if (!_ExcuteExp(leftExp.c_str(), leftResult,errMsg))
	{
		return false;
	}
	if (!_ExcuteExp(rightExp.c_str(), rightResult, errMsg))
	{
		return false;
	}
	excuteResult = comparator->IsTrue(leftResult, rightResult);
	if (!excuteResult)
	{
		excuteMsg = msg;
	}

	return true;
}

bool CScripter::_Splitscript(const char* script,std::string& cmd, std::string& msg)
{
	enum class FindState
	{
		Begin,		// try find {
		Cmd,		// recording cmd
		MsgBegin,	// cmd finish,try find msg
		Msg,		// recording msg
		End			// good script end
	};
	int bracketDepth = 0;
	FindState state=FindState::Begin;
	while (*script)
	{
		switch (state)
		{
		case FindState::Begin:
			if (*script == ScriptBegin)
			{
				state = FindState::Cmd;
			}
			break;
		case FindState::Cmd:
			if (*script == CmdSplit)
			{
				if (!bracketDepth)
				{
					state = FindState::MsgBegin;
				}
				else
				{
					// else, 这个逗号是在函数调用参数里
					cmd += *script;
				}
			}
			else if (*script == '(')
			{
				++bracketDepth;
				cmd += *script;
			}
			else if (*script == ')')
			{
				--bracketDepth;
				if (bracketDepth < 0)	// 右括号比左括号还多
				{
					return false;
				}
				cmd += *script;
			}
			else if (*script == ScriptEnd)
			{
				state = FindState::End;
			}
			else
			{
				cmd += *script;
			}
			break;
		case FindState::MsgBegin:
			if (*script == MsgSign)
			{
				state = FindState::Msg;
			}
			break;
		case FindState::Msg:
			if (*script == '\\')
			{
				if (*(script+1) == MsgSign)
				{
					++script;
					msg += *script;
				}
			}
			else if (*script == MsgSign)
			{
				state = FindState::End;
			}
			else
			{
				msg += *script;
			}
			break;
		case FindState::End:
			while(*script)++script;
			break;
		}
		if (*script)
		{
			++script;
		}
	}
	if (state != FindState::End
		|| cmd.empty())
	{
		return false;
	}
	return true;
}

bool CScripter::_ExcuteExp(const char* exp, ScriptParam& result, std::string& msg)
{
	if (IsValidBasicValue(exp,result))
	{
		return true;
	}
	std::string funcName;
	ScriptParamVec funcParams;
	if (_TryFunctionCall(exp,funcName, funcParams,msg))
	{
		ScriptExecuter executer;
		if (ScriptEngine::QueryFunction(funcName.c_str(),executer))
		{
			executer(funcParams,result,msg);
			return true;
		}
		else
		{
			msg = "no such function <";
			msg += funcName;
			msg += ">";
		}
	}
	else
	{
		msg = "invalid script exp<";
		msg += exp;
		msg += ">";
	}
	return false;
}
