#include "stdafx.h"
#include "DerivedOne.h"
#include<iostream>

using namespace std;

DerivedOne::DerivedOne():integer(5),complex(20)
{
	cout << "The DerivedOne class is initialized." << endl;
}

void DerivedOne::print() const
{
	cout << "This is DerivedOne class integer " << integer << endl;
	cout << getdouble() << endl;
}


double DerivedOne::getdouble()const
{
	cout << "This is DerivedOne class complex " << endl;
	return complex;
}

DerivedOne::~DerivedOne()
{
	cout << "This is DerivedOne destructor." << endl;
}
