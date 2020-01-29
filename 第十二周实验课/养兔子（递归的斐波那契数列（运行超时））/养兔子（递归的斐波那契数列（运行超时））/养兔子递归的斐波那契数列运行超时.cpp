#include "stdafx.h"
#include<iostream>
using namespace std;

unsigned long long int s(unsigned long long int);

unsigned int long long s(unsigned long long int a)
{

	if ((a == 1) || (a == 0) || (a == 2))
	{
		return a;
	}
	else
	{
		return s(a - 1) + s(a - 2);
	}

}
int main()
{
	unsigned int n = 0;
	cin >> n;


	while (n >= 1 && n <= 90)
	{
		cout << s(n) << endl;
		cin >> n;
	}


	return 0;
}
