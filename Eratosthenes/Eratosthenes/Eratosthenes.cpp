// Eratosthenes.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>  
#include <cmath>  
using namespace std;

bool p[100001];
int n, sn, tot;

int main() 
{
	cin >> n;
	sn = sqrt(n + 0.5);
	for (int i = 2; i <= n; i++) 
		p[i] = true;
	for (int i = 2; i <= sn; i++)
		if (p[i]) 
			for (int j = i * i; j <= n; j += i) 
				p[j] = false;
	for (int i = 2; i <= n; i++) 
		if (p[i])
		{
			cout << i<< " ";
			tot++;
		}
	cout << tot << endl;
	system("pause");
	return 0;
}
