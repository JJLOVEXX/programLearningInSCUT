#include "stdafx.h"
#include<iostream>
using namespace std;

int gcd(int, int);//���庯��gcd

int gcd(int x = 0, int y = 0)//gcd������
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
	cout << "The greatest common divisor is:    " << gcd(x,y);//������Լ��

	system("pause");
    return 0;
}

