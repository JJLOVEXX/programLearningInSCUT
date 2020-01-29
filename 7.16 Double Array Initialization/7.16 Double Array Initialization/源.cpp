#include<iostream>
using namespace std;

int main()
{
	int row;
	int column;
	int sales[3][5];
	for (row = 0; row < 3; ++row)
	{
		for (column = 0; column < 5; column++)
		{
			sales[row][column] = 0;
			cout << sales[row][column]<<" ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}