#include<iostream>
using namespace std;
int main()
{
	int a[10], i, j, k, t; //���� 
	for (i = 0; i < 10; i++)
		cin >> a[i]; //ѡ������ 
	for (i = 0; i < 10 - 1; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
			if (a[k] > a[j])
				k = j;
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	} //��� 
	for (i = 0; i < 10; i++)
		cout << a[i] << endl;
	system("pause");
	return 0;
}
