#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	double x = 0, y = 0, sum = 0, ave = 0;
	cin >> x;
	sum = x;
	for (int i = 1; x != 9999, y != 9999; i++)
	{
		sum = sum + y;
		ave = sum / i;
		cin >> y;
	}

	cout << "The average is:   " << ave;

	system("pause");
	return 0;
}