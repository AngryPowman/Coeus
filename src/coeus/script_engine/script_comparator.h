#pragma once
#include "script_engine_param.h"
#include <string>
#include <set>

class IComparator
{
public:
	virtual bool TryFindComparator(const std::string& cmd,std::string& leftExp,std::string& rightExp) = 0;
	virtual bool IsTrue(ScriptParam leftResult,ScriptParam rightResult) = 0;
};

bool _IsValidCChar(char ch)
{
	typedef std::set<char> ValidComparatorCharSet;
	static ValidComparatorCharSet charSet;
	if (charSet.empty())
	{
		for (auto& i : "!=<>")
		{
			charSet.insert(i);
		}
	}
	auto iFind = charSet.find(ch);
	return iFind != charSet.end();
}

class CCompare_Equal : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd,std::string& leftExp,std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '=');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (iNext==cmd.end() || *iNext!='=')
		{
			return false;
		}
		auto INNext = iNext + 1;
		if (INNext==cmd.end() || _IsValidCChar(*INNext))
		{
			return false;
		}
		leftExp = cmd.substr(0,iFind-cmd.begin());
		rightExp = cmd.substr(iFind-cmd.begin()+2, cmd.end()-iFind-1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult,ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
			return (bool)leftResult == (bool)rightResult;
			break;
		case ScriptParam::Type::Int:
			return (int)leftResult == (int)rightResult;
		case ScriptParam::Type::String:
			return (strcmp(leftResult,rightResult)==0)?true:false;
		default:
			break;
		}
		return false;
	}
};


class CCompare_Not_Equal : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd, std::string& leftExp, std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '!');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (iNext==cmd.end() || *iNext != '=')
		{
			return false;
		}
		auto INNext = iNext + 1;
		if (INNext == cmd.end() || _IsValidCChar(*INNext))
		{
			return false;
		}
		leftExp = cmd.substr(0, iFind-cmd.begin());
		rightExp = cmd.substr(iFind-cmd.begin()+2, cmd.end()-iFind-1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult, ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
			return (bool)leftResult != (bool)rightResult;
			break;
		case ScriptParam::Type::Int:
			return (int)leftResult != (int)rightResult;
		case ScriptParam::Type::String:
			return (strcmp(leftResult, rightResult) == 0) ? false : true;
		default:
			break;
		}
		return false;
	}
};


class CCompare_Bigger : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd, std::string& leftExp, std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '>');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (iNext == cmd.end() || _IsValidCChar(*iNext))
		{
			return false;
		}
		leftExp = cmd.substr(0, iFind - cmd.begin());
		rightExp = cmd.substr(iFind - cmd.begin() + 2, cmd.end() - iFind - 1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult, ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
		case ScriptParam::Type::Int:
			return (int)leftResult > (int)rightResult;
		default:
			break;
		}
		return false;
	}
};



class CCompare_Not_Smaller : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd, std::string& leftExp, std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '>');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (iNext==cmd.end() || *iNext != '=')
		{
			return false;
		}
		auto INNext = iNext + 1;
		if (INNext == cmd.end() || _IsValidCChar(*INNext))
		{
			return false;
		}
		leftExp = cmd.substr(0, iFind - cmd.begin());
		rightExp = cmd.substr(iFind - cmd.begin() + 2, cmd.end() - iFind - 1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult, ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
		case ScriptParam::Type::Int:
			return (int)leftResult >= (int)rightResult;
		default:
			break;
		}
		return false;
	}
};


class CCompare_Smaller : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd, std::string& leftExp, std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '<');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (iNext == cmd.end() || _IsValidCChar(*iNext))
		{
			return false;
		}
		leftExp = cmd.substr(0, iFind - cmd.begin());
		rightExp = cmd.substr(iFind - cmd.begin() + 2, cmd.end() - iFind - 1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult, ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
		case ScriptParam::Type::Int:
			return (int)leftResult < (int)rightResult;
		default:
			break;
		}
		return false;
	}
};


class CCompare_Not_Bigger : public IComparator
{
public:
	bool TryFindComparator(const std::string& cmd, std::string& leftExp, std::string& rightExp) override
	{
		auto iFind = std::find(cmd.begin(), cmd.end(), '<');
		if (iFind == cmd.end())
		{
			return false;
		}
		auto iNext = iFind + 1;
		if (*iNext != '=')
		{
			return false;
		}
		auto INNext = iNext + 1;
		if (INNext == cmd.end() || _IsValidCChar(*INNext))
		{
			return false;
		}
		leftExp = cmd.substr(0, iFind - cmd.begin());
		rightExp = cmd.substr(iFind - cmd.begin() + 2, cmd.end() - iFind - 1);
		return true;
	}
	bool IsTrue(ScriptParam leftResult, ScriptParam rightResult) override
	{
		switch (leftResult.type())
		{
		case ScriptParam::Type::Bool:
		case ScriptParam::Type::Int:
			return (int)leftResult <= (int)rightResult;
		default:
			break;
		}
		return false;
	}
};