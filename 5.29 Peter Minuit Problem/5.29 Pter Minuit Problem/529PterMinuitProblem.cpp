#include "stdafx.h"
#include<iostream>
#include<iomanip>//���ƾ�ȷ��
#include<cmath>//ʹ����ѧ����
using namespace std;

int main()
{
    int y=0;//������������ʼ��
	
	double r = 0.05;//���������ʲ���ʼ��
    long double d =24.00;//���屾��
	long double v = 0;//�������ļ�ֵ����ʼ��

	for (; r <= 0.10; r+=0.0002)//�����ʹ�����5%
	{
		for (; y <= 250; ++y)//ÿ�����
		{
			v = d*pow(1 + r, y);//������ĩ�ܼ�ֵ
         }
		
	}
	cout << "\nThe final deposit is    " << setprecision(2) << fixed <<v;//�������ֵ

	system("pause");
	return 0;
}

