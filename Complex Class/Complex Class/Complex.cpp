#include "stdafx.h"
#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex()
{
	realPart = 0;
	imagineryPart = 0;
	cout<<realPart << "+" << imagineryPart <<"*i"<< endl;
}


double Complex::add(double rR1, double iP1, double rR2, double iP2)
{
	realPart = rR1 + rR2;
	imagineryPart = iP1 + iP2;
	return realPart + imagineryPart * 'i';
}
double Complex::subtract(double rR1, double iP1, double rR2, double iP2)
{
	realPart = rR1 - rR2;
	imagineryPart = iP1 - iP2;
	return realPart + imagineryPart * 'i';
}
void Complex::print()
{
	cout << realPart << "+" << imagineryPart <<"*i"<< endl;
}
Complex::~Complex()
{
}
