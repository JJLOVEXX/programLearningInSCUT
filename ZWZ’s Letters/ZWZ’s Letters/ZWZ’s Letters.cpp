// ZWZ’s Letters.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int N=1000;
	int *numbers = new int[N];
	vector<string>codes(N);
	cin >> N;
	if (N >= 1 && N <= 1000)
	{
		for (size_t i = 0; i < N; i++)
		{
			cin >> numbers[i];
		}
		for (size_t j = 0; j < N; j++)
		{
			cin >> codes[numbers[j] - 1];
		}
		for (size_t k = 0; k < N; k++)
		{
			cout << codes[k] << endl;
		}
	}
    return 0;
	system("pause");
}

