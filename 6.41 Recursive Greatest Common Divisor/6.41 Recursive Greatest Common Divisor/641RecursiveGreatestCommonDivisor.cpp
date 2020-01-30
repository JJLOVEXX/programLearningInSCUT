#include "stdafx.h"
#include<iostream>
using namespace std;

int gcd(int, int);//定义函数gcd

int gcd(int x = 0, int y = 0)//gcd函数体
{
	if (y == 0)
		return x;
	else
		return gcd(y, x%y);
}

int main()
{
	int x, y;
	cout << "Please input two integer x and y (x must be larger than y):   ";
	cin >> x >> y;
	cout << "The greatest common divisor is:    " << gcd(x,y);//输出最大公约数

	system("pause");
    return 0;
}

