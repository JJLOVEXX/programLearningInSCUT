// The Absolute Value.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double n = 0;
	while (cin >> n)
	{
		double m = 0;
		m = fabs(n);
		cout << setprecision(2) << fixed;
		cout << m << endl;
	}
    return 0;
}

