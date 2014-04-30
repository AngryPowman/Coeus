#include "script_engine.h"
#include <iostream>

int main()
{
	ScriptEngine::Init();
	std::string str = "{float_equal(1.0,2.0,10),'not equal'};";

	ScriptResult result = ScriptEngine::Run(str);

	std::cout<<"execute result: "<<result.excuteResult<<"  execute msg: "<<result.excuteErr<<std::endl;
	std::cout<<"script bool result:"<<result.result.boolVar<<" script msg: "<<result.resultMsg<<std::endl;

	ScriptEngine::Uninit();
	return 0;
}