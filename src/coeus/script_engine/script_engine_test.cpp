#include "script_engine.h"
#include <iostream>

void notZeroFunc(const ScriptParamVec& params,ScriptParam& result,std::string& msg)
{
	if (params[0].type() == ScriptParam::Type::Int)
	{
		int firstParam = params[0];
		if (firstParam)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
}

void plusFunc(const ScriptParamVec& params,ScriptParam& result,std::string& msg)
{
	int param1;
	int param2;
	ParamCheck(params, msg)
		GetParam(0, ScriptParam::Type::Int, param1)
		GetParam(1, ScriptParam::Type::Int, param2)
		;
	ParamCheckEnd;
	result = param1+param2;
}

int main()
{
	ScriptEngine::Init();
	std::string str = "{2=2,'wtf'};{true};{notzero(plus(1,-1)),'func test ok,it is 0'}";
	ScriptEngine::AddFunction("notzero",ScriptExecuter(notZeroFunc));
	ScriptEngine::AddFunction("plus",ScriptExecuter(plusFunc));

	ScriptResult result = ScriptEngine::Run(str);

	std::cout<<"execute result: "<<result.excuteResult<<"  execute msg: "<<result.excuteErr<<std::endl;
	std::cout<<"script bool result:"<<result.result.boolVar<<" script msg: "<<result.resultMsg<<std::endl;

	ScriptEngine::Uninit();
    getchar();
	return 0;
}