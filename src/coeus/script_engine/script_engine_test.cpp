#include "script_engine.h"
#include <iostream>

int main()
{
	ScriptEngine::Init();
	std::string str = "{2 <= 0xaa,'false'};";

	ScriptResult result = ScriptEngine::Run(str);

	std::cout<<"execute result: "<<result.excuteResult<<"  execute msg: "<<result.excuteErr<<std::endl;
	std::cout<<"script bool result:"<<result.result.boolVar<<" script msg: "<<result.resultMsg<<std::endl;

	ScriptEngine::Uninit();
    getchar();
	return 0;
}