// LCM And GCD.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

int main()
{
	int a = 0, b = 0;
	while (cin >> a >> b)
	{
		if (a <= 1000 && a > 0 && b <= 1000 && b > 0)
			cout << lcm(a, b) << endl;
	}
	return 0;
}

int gcd(int m, int n)
{
	int r = 0;
	if (m>n)
	{
		while (n > 0)
		{
			r = m % n;
			m = n;
			n = r;
		}
		return m;
	}
	else
	{
		while (m > 0)
		{
			r = n % m;
			n = m;
			m = r;
		}
		return n;
	}
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

