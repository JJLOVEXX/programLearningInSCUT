// Rational Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Rational.h"
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int a[4];
	Rational rational;
	for (size_t i = 0; i < 4; i++)
	{
		a[i]= 1 + rand() % 10;
	}
	rational.add(a[0],a[1],a[2],a[3]);
	cout << endl;
	rational.subtract(a[0],a[1],a[2],a[3]);
    return 0;
}

