#pragma once
#include <vector>
#include <functional>
#include <assert.h>

class ScriptParam
{
public:
	ScriptParam();
	~ScriptParam();
	ScriptParam(const ScriptParam& rhs){ this->operator =(rhs); }
	ScriptParam& operator=(const ScriptParam& rhs);
public:
	enum class Type
	{
		Empty,
		Int,
		Bool,
		Double,
		String
	};
	Type type() const;
	const int& operator =(const int& value);
	const bool& operator =(const bool& value);
	const double& operator =(const double& value);
	const char* operator =(const char* value);
	operator int() const;
	operator bool() const;
	operator double() const;
	operator const char*() const;
protected:
	Type m_type;
	union ValueUnion
	{
		int intValue;
		bool boolValue;
		double doubleValue;
		std::string* strValue;
	};
	ValueUnion m_value;
	void _Clean();
};

typedef std::vector<ScriptParam> ScriptParamVec;

typedef std::function<void(const ScriptParamVec&/*params*/, ScriptParam& result, std::string& msg)> ScriptExecuter;

#define ParamCheck(_params, _msg) const ScriptParamVec& __params = _params; std::string& __msg = _msg;
// 可选参数，如果没有，不会改变_value的值，所以_value传入前应当赋值一个默认值
#define OptParam(_index, _value) \
	if(__params.size()>=_index) \
	{ \
		_value = __params[_index]; \
	}

// 必须参数，如果没有该参数会返回错误
#define GetParam(_index, _value) \
	if(__params.size()<_index) \
	{ \
		__msg = "param not enough"; return;\
	} \
	_value = __params[_index];

#define ParamCheckEnd

//--------------------------------//
// ImplCodes


inline ScriptParam::Type ScriptParam::type() const
{
	return m_type;
}

inline ScriptParam::ScriptParam()
{
	m_type = Type::Empty;
	m_value.strValue = nullptr;
}

inline void ScriptParam::_Clean()
{
	if (m_type == Type::String)
	{
		if (m_value.strValue)
		{
			delete m_value.strValue;
		}
	}
	m_type = Type::Empty;
	m_value.strValue = nullptr;
}

inline ScriptParam::~ScriptParam()
{
	_Clean();
}

inline const int& ScriptParam::operator=(const int& value)
{
	_Clean();
	m_type = Type::Int;
	m_value.intValue = value;
	return m_value.intValue;
}

inline const bool& ScriptParam::operator=(const bool& value)
{
	_Clean();
	m_type = Type::Bool;
	m_value.boolValue = value;
	return m_value.boolValue;
}

inline const double& ScriptParam::operator=(const double& value)
{
	_Clean();
	m_type = Type::Double;
	m_value.doubleValue = value;
	return m_value.doubleValue;
}

inline const char* ScriptParam::operator=(const char* value)
{
	_Clean();
	m_type = Type::String;
	m_value.strValue = new std::string(value);
	return m_value.strValue->c_str();
}

inline ScriptParam& ScriptParam::operator=(const ScriptParam& rhs)
{
	_Clean();
	m_type = rhs.m_type;
	switch (m_type)
	{
	case Type::Bool:
	case Type::Double:
	case Type::Int:
		m_value.doubleValue = rhs.m_value.doubleValue;
		break;
	case Type::String:
		(*this) = (const char*)rhs;
		break;
	case Type::Empty:
		m_value.doubleValue = 0;
		break;
	default:
		assert(false);	// new type added,but not impl copy
		break;
	}
	return *this;
}

inline ScriptParam::operator int() const
{
	if (m_type == Type::Int)
	{
		return m_value.intValue;
	}
	if (m_type == Type::Bool)
	{
		if (m_value.boolValue)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (m_type == Type::Double)
	{
		return (int)m_value.doubleValue;
	}
	return 0;
}

inline ScriptParam::operator bool() const
{
	if (m_type == Type::Bool)
	{
		return m_value.boolValue;
	}
	if (m_type == Type::Int)
	{
		if (m_value.intValue)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

inline ScriptParam::operator double() const
{
	if (m_type == Type::Double)
	{
		return m_value.doubleValue;
	}
	if (m_type == Type::Int)
	{
		return m_value.intValue;
	}
	if (m_type == Type::Bool)
	{
		if (m_value.boolValue)
		{
			return 1.0;
		}
	}
	return 0.0;
}

inline ScriptParam::operator const char*() const
{
	if (m_type == Type::String)
	{
		return m_value.strValue->c_str();
	}
	return nullptr;
}
