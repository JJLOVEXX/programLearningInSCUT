#include "stdafx.h"
#include <iostream> 
using namespace std;
int main()
{
	int max = 0, i, x, y, t;
	for (i = 1; i <= 7; i++)
	{
		cin >> x >> y; 
		if (x + y > 8)
		{
			if (x + y > max)
			{
				max = x + y;
				t = i;
			}
		}
	}
	cout << t;
	return 0;
}

