#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int x = 0, a, b, c;
	int k = 0;
	cin >> k;
    while (k > 0)
	{
		cin >> x;
		if (x >= 100 && x <= 999)

		{

			a = x % 10;//移到循环之内  
			b = x / 10 % 10;
			c = x / 100 % 10;
			if (x == a*a*a + b*b*b + c*c*c)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}

		}
		k--;


	}
	system("pause");
	return 0;
}
