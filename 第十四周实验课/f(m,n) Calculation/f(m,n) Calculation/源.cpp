#include<iostream>
using namespace std;

int f(int, int);
int m = 1;
int n = 1;
int f(int m, int n)
{
	if (m == 1)
	{
		return n;
	}
	else if (n == 1)
	{
		return m;
	}
	else if (m > 1 && n > 1)
	{
		return f(m - 1, n) + f(m, n - 1);
	}
}
int main()
{
	int T = 0;
	cin >> T;
	if (T >= 1 && T <= 100)
	{
		for (size_t i = 0; i < T; i++)
		{
			cin >> m >> n;
			if (m >= 1 && m <= 2000 && n >= 1 && n <= 2000)
			{
				cout << f(m, n) << endl;
			}
		}
	}
	system("pause");
	return 0;
}