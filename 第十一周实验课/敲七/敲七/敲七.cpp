#include<iostream>
using namespace std;
int main()
{
	int i = 1, a = 0, N = 0;
	cin >> N;
	if (N >= 0 && N <= 30000)
	{
		for (i = 1; i <= N; i++)
		{
			if (i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7 || (i / 100) % 10 == 7 || (i / 1000) % 10 == 7 || i / 10000 == 7)
			{
				++a;
			}
		}
		cout << a << endl;
	}
	return 0;
}
