#include "script_util_executor.h"

void floatEqual(const ScriptParamVec& params, ScriptParam& result, std::string& msg)
{
	double d1=0;
	double d2=0;
	double precision=0.0001;
	ParamCheck(params, msg)
		GetParam(0, d1)
		GetParam(1, d2)
		OptParam(2, precision)
		;
	ParamCheckEnd;
	if (fabs(d1-d2) <= precision)
	{
		result = true;
	}
	else
	{
		result = false;
	}
}

void asTrueFunc(const ScriptParamVec& params, ScriptParam& result, std::string& msg)
{
	result = true;
}
