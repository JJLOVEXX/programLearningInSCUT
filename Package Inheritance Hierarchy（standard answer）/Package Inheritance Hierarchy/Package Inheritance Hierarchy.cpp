// Package Inheritance Hierarchy.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "package.h"
#include "TwoDayPackage.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	Package *pk,*pt;
	pk = new Package();
	pk->initializer();
	pt = new TwoDayPackage(*pk);
	pt->initializer();
	system("pause");
    return 0;
}

