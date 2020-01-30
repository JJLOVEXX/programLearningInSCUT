#include<iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
	const int arraysize = 3;
	int table[arraysize][arraysize] = { {1,8},{2,4,6},{5} };
	cout << "    [0] [1] [2]" << endl;
	for (int i = 0; i < arraysize; i++)
	{
		cout << "[" << i << "]";
		for (int j = 0; j <  arraysize; j++)
		{
			cout <<setw(3) <<table[i][j]<<" ";
			
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}