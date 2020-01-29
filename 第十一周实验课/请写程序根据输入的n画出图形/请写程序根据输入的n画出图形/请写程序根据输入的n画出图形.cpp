#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int line, i, j, k;

	cin >> line;
	for (i = 1; i <= line; i++)
	{
		for (j = line; j > i; j--)
			cout << " ";
		for (k = 1; k <= 2 * i - 1; k++)
			cout << "*";
		cout << endl;

	}
	system("pause");
	return 0;
}