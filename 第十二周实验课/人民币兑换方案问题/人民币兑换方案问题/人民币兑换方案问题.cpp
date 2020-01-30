#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	int n = 0;
	int sum = 0;
	cin >> n;

	for (i = 1; i <= 100 && i>0; i++)
		for (j = 1; j <= 50 && j>0; j++)
			for (k = 1; k>0 & k <= 20; k++)
			{
				if (i * 1 + 2 * j + 5 * k == n)
					sum++;
			}
	cout << sum << endl;
}

