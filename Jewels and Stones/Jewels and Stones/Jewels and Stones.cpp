// Jewels and Stones.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int c = 0;
	string a1;
	cin >> a1;
	string a2;
	cin >> a2;
	for (size_t i = 0; i < a1.size(); i++)
	{
		for (size_t j = 0; j < a2.size(); j++)
		{
			if (a1[i]==a2[j])
			{
				c++;
			}
		}
	}
	cout << c;
    return 0;
}

