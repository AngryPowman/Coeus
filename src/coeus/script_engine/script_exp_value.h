#pragma once
#include "script_engine_param.h"
#include <functional>

#define BoolStr_True "true"
#define BoolStr_False "false"
#define String_Sign '\''

void _SkipSpace(const char** pStr)
{
	while(**pStr&&**pStr==' ')++*pStr;
}

bool _IsValidStrValue(const char* exp,std::string& value)
{
	while (*exp && *exp!=String_Sign)
	{
		if (*exp == '\\')
		{
			if (*(exp+1) == String_Sign)
			{
				++exp;
			}
		}
		value += *exp;
		++exp;
	}
	if (*exp == String_Sign)
	{
		++exp;
		_SkipSpace(&exp);
		if (!*exp)
		{
			return true;
		}
	}
	return false;
}

bool _IsValidHexValue(const char* exp, int& value)
{
	value = 0;
	_SkipSpace(&exp);
	while (*exp && (isdigit(*exp) || (*exp>='a' && *exp<='f')))
	{
		value *=16;
		if (isdigit(*exp))
		{
			value += *exp - '0';
		}
		else
		{
			value += *exp - 'a' + 10;
		}
		++exp;
	}
	_SkipSpace(&exp);
	if (!*exp)
	{
		return true;
	}
	return false;
}

bool _IsValidIntergerValue(const char* exp,int& value)
{
	value = 0;
	bool isNegative=false;
	_SkipSpace(&exp);
	if (!*exp)	return false;
	if (*exp == '-')
	{
		isNegative = true;
		++exp;
	}
	_SkipSpace(&exp);
	bool success = false;
	while (*exp && isdigit(*exp))
	{
		success = true;
		value *=10;
		value += *exp-'0';
		++exp;
	}
	_SkipSpace(&exp);
	if (*exp)
	{
		success = false;
	}
	value = (isNegative?-value:value);
	return success;
}

bool _IsValidFloat(const char* exp,double& value)
{
	bool isNegative=false;
	_SkipSpace(&exp);
	if (!*exp)	return false;
	if (*exp == '-')
	{
		isNegative = true;
		++exp;
	}
	_SkipSpace(&exp);

	value = 0.0;
	double decimalDepth = 10;
	bool aboveDot = true;
	bool success = false;
	while (*exp && (*exp=='.' || isdigit(*exp)))
	{
		success = true;
		if (*exp == '.')
		{
			aboveDot = false;
		}
		else
		{
			if (aboveDot)
			{
				value *= 10;
				value += *exp-'0';
			}
			else
			{
				value += (*exp-'0')/decimalDepth;
				decimalDepth *= 10;
			}
		}
		++exp;
	}
	_SkipSpace(&exp);
	if (*exp)
	{
		success = false;
	}
	value = (isNegative?-value:value);
	return success;
}

bool IsValidBasicValue(const char* exp,ScriptParam& param)
{
	if (!exp)
	{
		return false;
	}

	_SkipSpace(&exp);
	if (*exp == String_Sign)
	{
		++exp;
		std::string strValue;
		if (_IsValidStrValue(exp,strValue))
		{
			param = strValue.c_str();
		}
	}
	else if (*exp=='.' || isdigit(*exp) || *exp=='-')
	{
		if (*exp=='0' && *(exp+1)=='x')
		{
			exp += 2;
			int value = 0;
			if (_IsValidHexValue(exp,value))
			{
				param = value;
			}
		}
		else
		{
			int intValue = 0;
			double dValue = 0.0;
			if (_IsValidIntergerValue(exp,intValue))
			{
				param = intValue;
			}
			else if (_IsValidFloat(exp, dValue))
			{
				param = dValue;
			}
		}
	}
	else
	{
		if (memcmp(exp,BoolStr_True,sizeof(BoolStr_True)-1) == 0)
		{
			param = true;
		}
		else if (memcmp(exp,BoolStr_False,sizeof(BoolStr_False)-1) == 0)
		{
			param = false;
		}
	}
	if (param.type() == ScriptParam::Type::Empty)
	{
		return false;
	}
	return true;
}

bool IsValidBasicValueSeq(const char* exp,ScriptParamVec& param)
{
	return false;
}