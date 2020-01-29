#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	void move(int *, int n, int m);
	int number[20], n, m, i;
	
	cin >> n;
	
	for (i = 0; i<n; i++)
		cin >> number[i];
	
	cin >> m;
	move(number, n, m);

	for (i = 0; i<n; i++)
		cout << number[i] << " ";
	
	return 0;
}
void move(int *array, int n, int m)
{
	int *p, array_end;
	array_end = *(array + n - 1);
	for (p = array + n - 1; p>array; p--)
		*p = *(p - 1);
	*array = array_end;
	m--;
	if (m>0)move(array, n, m);
}

