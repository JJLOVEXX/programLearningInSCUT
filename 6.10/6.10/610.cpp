#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

inline double sphereVolume(double)
{
	double radius=0;
	cin >> radius;
	double v = 0;
	v = 4.0 / 3.0*3.14159*pow(radius, 3);
	return v;
}



int main()
{
	double radius=0;
	cout << "The sphereVolume is   " << sphereVolume(radius);
	system("pause");
	return 0;
}

