#pragma once
#include "lib7.h"

#include <string>
#include <typeinfo>
#include <boost/algorithm/string.hpp>

class LIB7_API Visitable
{
public:

	Visitable(void)
	{
	}

	virtual ~Visitable(void)
	{
	}

	virtual std::string GetName()
	{
		std::string name = typeid(*this).name();
		boost::replace_head(name,name.find(" "),"");
		boost::trim(name);
		return name;
	}
};

struct LIB7_API DerivedVisitable : public Visitable
{

};