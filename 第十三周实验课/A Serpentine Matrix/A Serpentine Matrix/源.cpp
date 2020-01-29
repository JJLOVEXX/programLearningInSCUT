#include<iostream> 
using namespace std;
int main()
{
	int N;
	cin >> N;
	while (N <= 100)
	{
		int num[100][100];
		num[0][0] = 1;
		for (int i = 1; i < N; i++)
		{
			num[i][0] = num[i - 1][0] + i;
		}
		for (int j = 1; j < N; j++)
			for (int i = 0; i < N - j; i++)
			{
				num[i][j] = num[i + 1][j - 1] + 1;
			}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N - i; j++)
			{
				if (j == N - i - 1)
				{
					cout << num[i][j];
				}
				else
				{
					cout << num[i][j] << " ";
					if (j == N - i)
						cout << num[i][j];
				}

			}
			cout << endl;
		}
		cin >> N;
	}
	system("pause");
	return 0;
}
