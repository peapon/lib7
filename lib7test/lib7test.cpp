// lib7test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Visitable.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Visitable v;
	DerivedVisitable dv;
	std::cout << v.GetName() << std::endl;
	std::cout << dv.GetName() << std::endl;
	std::cout << sizeof(Visitable) << std::endl;
	return 0;
}

