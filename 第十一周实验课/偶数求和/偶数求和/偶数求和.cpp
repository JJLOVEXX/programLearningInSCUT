#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int i, j, k, a, count, e, sum;
	int d[101];
	while (cin >> n >> m)
	{
		a = 2;
		i = 0;
		k = 1;
		count = 0;
		e = 0;
		sum = 0;
		int b = n / m, c = n%m;
		do {
			if (count == m)
			{
				count = 0;
				d[i++] = sum / m;
				sum = 0;
				e++;
			}sum += a;
			a += 2;
			count++;
		} while (e<b);
		cout << d[0];
		for (j = 1; j<i; j++)
			cout << " " << d[j];
		if (c)
		{
			sum = 0;
			a -= 2;
			for (j = 0; j<c; j++)
			{
				sum += a;
				a += 2;
			}
			cout << " " << sum / c;
		}
		cout << endl;
	}
	return 0;
}