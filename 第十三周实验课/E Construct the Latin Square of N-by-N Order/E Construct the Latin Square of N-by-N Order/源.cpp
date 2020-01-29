/*#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	if (n >= 2 && n <= 9)
	{
		int * nums = new int[n];
		for (int i = 1; i <= n; i++) {
			nums[i - 1] = i;
		}


		for (int t = 0; t < n; t++) {
			for (int i = t; i < (n + t); i++) {
				if (i >= n) {
					cout << nums[i%n] << " ";
				}
				else
					cout << nums[i] << " ";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int N;
	int **a;//定义一个二维数组初始化维数为N
	cin >> N;
		cin.clear();
		cin.sync();
		if (N >= 2 && N <= 9)
		{
			a = new int *[N];//开辟数组新地址
			for (int i = 0; i < N; i++)
				a[i] = new int[N];
			for (int i = 0; i < N; ++i)
				for (int j = 0; j < N; ++j)
					a[i][j] = (i + j) % N + 1;//排列的算法（关键啊）     

			for (int i = 0; i < N; ++i)
			{
				for (int j = 0; j < N; ++j)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			
		
	}
	system("pause");
	return 0;
}