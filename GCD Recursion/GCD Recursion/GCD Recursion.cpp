// GCD Recursion.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int gcd(int, int);
int gcd(int a, int b)
{
	int r;
	r = a % b;
	if (r==0)
	{
		return b;
	}
	else
	{
		return gcd(b, r);
	}
}
int main()
{
	int w, s;
	cout << "Please input two integers(from large to small): " << endl;
	cin >> w >> s;
	cout<<gcd(w, s);
	system("pause");
	return 0;
}

