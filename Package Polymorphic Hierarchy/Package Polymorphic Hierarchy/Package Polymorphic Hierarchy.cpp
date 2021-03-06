// Package Polymorphic Hierarchy.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
	cout << "This is package sending service." << endl;
	double totalCost=0.0;

	vector<Package*>packages(3);

	packages[0] = new Package();
	packages[0]->initializer();
	packages[1] = new TwoDayPackage(*packages[0]);
	packages[1]->initializer();
	packages[2] = new OvernightPackage(*packages[0]);
	packages[2]->initializer();

	for (Package *packagePtr : packages)
	{
		packagePtr->getfunction();
	}
	totalCost =packages[0]->getCalculateCost()+packages[1]->getCalculateCost()
		               +packages[2]->getCalculateCost();
	cout << "The cost in total is: "<<totalCost << endl;
	system("pause");
	return 0;
}

