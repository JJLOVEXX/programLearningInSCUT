// N Factorial.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

long long factorial(long long);

long long factorial(long long a)
{
	if (a==0)
	{
		return 1;
	}
	else
	{
		return factorial(a - 1)*a;
	}
}

int main()
{
	long long a;
	cout << "Please input an integer: " << endl;
	cin >> a;
	cout << factorial(a);
	system("pause");
    return 0;
}

