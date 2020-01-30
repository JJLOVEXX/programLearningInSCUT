#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n &&n != EOF)
	{
		int ans = 1;
		int m = 1;
		while (m %= n)
		{
			m = m * 10 + 1;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}