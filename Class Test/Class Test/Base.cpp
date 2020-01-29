#include "stdafx.h"
#include "Base.h"
#include<iostream>

using namespace std;

Base::Base():integer(0),complex(10)
{
	cout << "The base class is initialized." << endl;
}

void Base::print() const
{
	cout << "This is base integer " << integer << endl;
	cout << getdouble() << endl;
}

double Base::getdouble()const
{
	cout << "This is base complex " << endl;
	return complex;
}


Base::~Base()
{
	cout << "The base class is destructed." << endl;
}
