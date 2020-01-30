#include <iostream> 
using namespace std;
int main()
{
	int n, a[100], i = 0, sum = 0;
	while (cin >> n&&n != 0)
	{
		a[0] = 0; sum = 0;
		for (i = 1; i <= n; i++)
			cin >> a[i];
		for (i = 1; i <= n; i++)
		{
			if (a[i]>a[i - 1])
				sum = sum + (a[i] - a[i - 1]) * 6 + 5;
			else sum = sum + (a[i - 1] - a[i]) * 4 + 5;
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}
