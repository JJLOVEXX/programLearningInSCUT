#include "stdafx.h"
#include<iostream>
using namespace std;
int n, m;
int a[3] = { 1,2,3 };
void DFS(int index)
{
	int i;
	if (index>n)return;
	if (index == n)
	{
		m++;
		return;
	}

	for (i = 0; i <= 2; i++)
		DFS(index + a[i]);


}
int main()
{
	while (cin >> n)
	{
		if (n == 0)break;
		m = 0;
		DFS(0);
		cout << m << endl;
	}
}
