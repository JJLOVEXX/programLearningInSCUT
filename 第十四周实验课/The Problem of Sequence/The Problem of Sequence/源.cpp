#include<iostream>
using namespace std;
const int Max = 10;
int main()
{
	int a[Max], b[Max], i, j;
	for (i = 0; i<Max; i++)
	{
		cin >> a[i];
		b[i] = i + 1;
	}
	for (i = 0; i<Max - 1; i++)
	{
		for (j = i + 1; j<Max; j++)
		{
			if (a[i]>a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
				b[i] = b[i] + b[j];
				b[j] = b[i] - b[j];
				b[i] = b[i] - b[j];
			}
		}
	}
	cout << a[0];
	for (i = 1; i < Max; i++)
		cout << " " << a[i];
	cout << endl;
	cout << b[0];
	for (i = 1; i < Max; i++)
		cout << " " << b[i];
	system("pause");
	return 0;
}