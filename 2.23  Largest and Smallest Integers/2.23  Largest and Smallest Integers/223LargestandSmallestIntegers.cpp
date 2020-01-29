#include "stdafx.h"
#include<iostream>//包括iostream这个头文件
using namespace std;//使用std这个命名空间

int main(int a,int b,int c,int d,int e ,int m,int n)
{
	cin >> a >> b >> c >> d >> e;//输入五个整数
	
	//比较五个整数大小
	if (a > b)
	{
		m = a;//赋值
		n = b;//赋值
	}
	else
	{
		m = b;//赋值
		n = a;//赋值
	}
	if (c > m)
	{
		m = c;//赋值
	}
	if(c<n)
	{
		n = c;//赋值
	}
	if (d > m)
	{
	    m=d;//赋值
	}
	if (d < n)
	{
		n=d;//赋值
	}
	if (e > m)
	{
		m=e;//赋值
	}
	if (e < n)
	{
		n=e;//赋值
	}
	cout << "The largest is :   \n"<<m;//输出最大值
	cout << "\nThe smallest is :   \n" << n;//输出最小值
	system("pause");
	return 0;
}
