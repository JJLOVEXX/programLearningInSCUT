#include<iostream>
#include<cmath>
using namespace std;

long long int n = 0;

int main()
{
	long long int s1 = 0;
	long long int c = 0;
	while (cin >> n)
	{
		int s1 = 0;
		for (int k = 0; pow(2, k) <= n; k++)
		{

			s1 += pow(2, k);
		}
		long long int s2 = 0;
		s2 = n*(n + 1) / 2;
		long long int sum = 0;
		sum = s2 - s1 - s1;
		cout << sum << endl;
	}
	system("pause");
	return 0;
}