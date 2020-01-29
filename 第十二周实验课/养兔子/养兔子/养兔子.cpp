#include "stdafx.h"
#include<iostream>  

using namespace std; 


long long int fib(long long int n) 
{
	if (1 == n) 
	{
		return 1;
	}
	long long int f_2= 1;
	long long int f_1= 1;
	long long int fn = 0;
	for (int i= 2;i <= n; i++) {
		fn= f_2+ f_1;
		f_2= f_1;
		f_1= fn;
	}
	return fn;
}
int main() 
{
	int m = 0;
	cin >> m;
	if(m!=0)
	{
		while (m <= 90 && m >= 1)
		{
			cout << fib(m) << endl;
			cin >> m;
		}
	}
	return 0;
}

