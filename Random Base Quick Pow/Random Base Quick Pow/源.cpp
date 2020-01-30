#include<iostream>
using namespace std;

long long fun(int, int);
long long fun(int q, int x)
{
	long long y = 1, z = q;
	while (x != 0)
	{
		if ((x & 1) != 0)
		{
			y *= z;
		}
		z *= z;
		x >>= 1;
	}
	return y;
}
int main()
{
	int q, x;
	cin >> q >> x;
	cout << fun(q, x);
	system("pause");
	return 0;
}