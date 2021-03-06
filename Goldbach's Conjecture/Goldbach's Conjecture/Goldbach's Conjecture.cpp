// Goldbach's Conjecture.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

void createPrime(int, int[]);

void createPrime(int n, int prime[])
{
	double sqr = sqrt(n + 0.5);
	prime[0] = prime[1] = 0;
	for (size_t i = 2; i <= n; i++)
	{
		prime[i] = 1;
	}
	for (size_t i = 2; i <= sqr; i++)
	{
		if (prime[i])
		{
			for (size_t j = i*i; j <=n; j+=i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	int n, *prime=new int[1000000];
	cout << "Please input an even number(>6): " << endl;
	cin >> n;
	createPrime(n,prime);
	for (size_t i = 6; i <=n; i+=2)
	{
		int flag = 1;
		for (size_t j = 2; j <= i/2; j++)
		{
			if ((j%2==0)||((i-j)%2==0))
			{
				continue;
			}
			if ((prime[j] == 1) && (prime[i - j] == 1))
			{
				cout << i << "=" << j << "+" << i - j << endl;
				flag = 0;
				break;
			}
		}
	}
	getchar();
    return 0;
}

