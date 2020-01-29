#include "stdafx.h"
#include<iostream>
using namespace std;

int power(int, int);//定义power函数

int power(int b, int e)//power函数体
{
	int r;
	if (e < 0)
		r = 0;
	else 
	{
		if (e ==1)
			r=b;
		else 
		r = b*power(b, e - 1);
	}
	return r;
}

int main()
{
	int b, e;
	int r = 0;
	cout << "Please input base and exponent:    ";
	//输出结果
	cin >> b >> e;
	cout << "The result is:   " <<power(b,e);
	system("pause");
	return 0;
}

