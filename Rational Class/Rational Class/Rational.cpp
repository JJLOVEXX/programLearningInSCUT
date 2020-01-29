#include "stdafx.h"
#include "Rational.h"
#include<iostream>
using namespace std;

Rational::Rational()
	:numerator(0),denominator(1)
{
}

int Rational::largestCommonDivisor(int a, int b)
{
	while (a != b)
	{
		if (a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
void Rational::add(int n1, int d1, int n2, int d2)
{
	int c, d;
	numerator = n1 * d2 + n2 * d1;
	denominator = d1 * d2;
	c = numerator;
	d = denominator;
	numerator = numerator / largestCommonDivisor(c, d);
	denominator = denominator / largestCommonDivisor(c, d);
	cout << numerator << '/' << denominator;
}

void Rational::subtract(int n1, int d1, int n2, int d2)
{
	int c, d;
	numerator = n1 * d2 - n2 * d1;
	denominator = d1 * d2;
	c = numerator;
	d = denominator;
	numerator = numerator / largestCommonDivisor(c, d);
	denominator = denominator / largestCommonDivisor(c, d);
	if (denominator != 0)
	{
		if (numerator > 0)
		{
			cout << numerator << '/' << denominator;
		}
		else
		{
			cout << '- ' << numerator << '/' << denominator;
		}
	}
	else
	{
		cout<<"The denominator is zero."<<endl;
	}
}
Rational::~Rational()
{
}
