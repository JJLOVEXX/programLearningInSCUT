#include "stdafx.h"
#include<iostream>
#include<iomanip>//控制精确度
#include<cmath>//使用数学函数
using namespace std;

int main()
{
    int y=0;//定义年数并初始化
	
	double r = 0.05;//定义年利率并初始化
    long double d =24.00;//定义本金
	long double v = 0;//定义最后的价值并初始化

	for (; r <= 0.10; r+=0.0002)//年利率共增加5%
	{
		for (; y <= 250; ++y)//每年递增
		{
			v = d*pow(1 + r, y);//计算年末总价值
         }
		
	}
	cout << "\nThe final deposit is    " << setprecision(2) << fixed <<v;//输出最后价值

	system("pause");
	return 0;
}

