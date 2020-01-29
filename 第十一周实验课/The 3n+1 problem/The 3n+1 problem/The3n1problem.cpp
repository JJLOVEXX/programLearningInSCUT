#include "stdafx.h"
#include <iostream>  

using namespace std;

int algo(int n)
{
	int sum = 0;
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		sum++;
	}

	return sum + 1;
}

int main()
{
	int a, b, n, m;
	while (cin >> n >> m)
	{

		if (n>m)
		{
			a = m, b = n;
		}
		else
		{
			a = n, b = m;
		}

		int max = 1;
		for (int i = a; i <= b; i++)
		{
			if (max<algo(i))
				max = algo(i);
		}
		cout << n << " " << m << " " << max << endl;
	}

	return 0;
}
