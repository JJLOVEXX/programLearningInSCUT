#include<iostream>
using namespace std;

int main()
{
	int arr[20] = { 0 };
	int n = 0;
	int k = 0;
	cin >> n;
	if (n >= 10 && n <= 100)
	{
		arr[0] = n;
		for (size_t i = 1; i < 20; i++)
		{
			cin >> n;
			int j = 0;
			while(n != arr[j]&&j<=i)
			{
				j++;
				if(j==i+1)
				{
					arr[i] = n;
					k++;
				}
			}
           
		}
	}
	for (size_t i = 0; i < 20; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << " ";
		}
	}
	if (k == 20)
	{
		cout << "\nThe worst case.";
	}
	system("pause");
	return 0;
}