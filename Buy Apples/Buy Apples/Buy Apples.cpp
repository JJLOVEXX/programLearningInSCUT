// Buy Apples.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	int min = 0;
	cin >> n;
	if (n>=1&&n<=100)
	{
		if (n > 7||n==6)
		{
			for (size_t i = 0; i < 13; i++)
			{
				for (size_t j = 0; j < 17; j++)
				{
					if (n == 6 * j + 8 * i)
					{
						min =100;
						if (i+j<min)
						{
							min = i + j;
						}
					}
				}
			}
			if (min==0)
			{
				cout << -1;
			}
			else
			{
				cout << min;
			}
		}
		else
		{
			cout << -1;
		}
	}
    return 0;
}

