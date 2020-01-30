#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int size = 0;
	cin >> size;//规定方阵的规模
	for (int j = 1; j <= size; j++)
	{
		for (int i = 1; i <=size; i++)//输出星号
		{

			cout << "*";

		}
		cout << endl;//换行
	}
	return 0;
}

