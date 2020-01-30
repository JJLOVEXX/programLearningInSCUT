#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int x=100, a, b, c;

	for (x = 100; x <= 999; x++)
	{
		a = x % 10;//移到循环之内  
		b = x / 10 % 10;
		c = x / 100 % 10;
		if (x == a*a*a + b*b*b + c*c*c)
		{
			cout << x << '\n';
		}
	}
	system("pause");
    return 0;
}

