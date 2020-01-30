#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(1);

	cout << "\nceil(9.2)is " << ceil(9.2)
		<< "\nceil(-9.8)is " << ceil(-9.8);

	cout << fixed << setprecision(6);
	cout << "\nexp(1.0)is " << exp(1.0)
		<< "\nexp(2.0)is " << exp(2.0);

	cout << fixed << setprecision(1);

	cout << "\nfabs(5.1)is" << fabs(5.1)
		<< "\nfabs(0.0)is " << fabs(0.0)
		<< "\nfabs(-8.76)is" << fabs(-8.76)
		<< "\nfloor(9.2)is" << floor(9.2)
		<< "\nfloor(-9.8)is" << floor(-9.8)
		<< "\nfmod(2.6,1.2)is" << fmod(2.6, 1.2)
		<< "\nlog(2.718282)" << log(2.718282)
		<< "\nlog(7.389056)is" << log(7.389056)
		<< "\nlog10(10.0)is" << log10(10.0)
		<< "\nlog(100.0)is " << log10(100.0)
		<< "\npow(2,7)is" << pow(2, 7)
		<< "\npow(9,.5)is" << pow(9, .5)
		<< "\nsin(0.0)is" << sin(0.0)
		<< "\nsqrt(9.0)is" << sqrt(9.0)
		<< "\ntan(0.0)is" << tan(0.0);
	system("pause");
	return 0;
}