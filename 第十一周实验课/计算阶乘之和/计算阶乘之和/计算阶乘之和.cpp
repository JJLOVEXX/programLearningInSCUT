#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int k = 0;
	int sum = 0;
	int s = 1;
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		s *= i;
		sum += s;
	}
	cout << sum;
	return 0;
}
