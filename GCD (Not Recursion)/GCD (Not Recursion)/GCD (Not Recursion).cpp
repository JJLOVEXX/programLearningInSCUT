// GCD (Not Recursion).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int gcd(int, int);

int gcd(int a, int b)
{
	int m;
	while (a%b != 0)
	{
		m = a % b;
		a = b;
		b = m;
	}
	return b;
}
int main()
{
	int q, p;
	cout << "Please input two integers(from big to small): " << endl;
	cin >> q >> p;
	cout << gcd(q, p);
	system("pause");
	return 0;
}
