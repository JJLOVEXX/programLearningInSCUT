// Class Test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Base.h"
#include"DerivedOne.h"


int main()
{
	Base base1;
	base1.print();
	Base *base1Ptr;
	base1Ptr = &base1;
	base1Ptr->print();
	DerivedOne derivedOne1;
	derivedOne1.print();
	DerivedOne *derivedOne1Ptr;
	derivedOne1Ptr = &derivedOne1;
	derivedOne1Ptr->print();
	Base *base2Ptr;
	base2Ptr = &derivedOne1;
	base2Ptr->print();
    return 0;
}

