// Proper Fraction.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	if (n >= 3 && n <= 1000)
	{
		if (n % 2 != 0)
		{
			a = n / 2;
			b = n - a;
		}
		else
		{
			a = n / 2 - 1;
			b = n - a;
		}
	}
	cout << a << " " << b<<endl;
    return 0;
	system("pause");
}

