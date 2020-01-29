#include<iostream>
#include<array>
#include<ctime>
#include<iomanip>
using namespace std;

int RollDice()
{
    time_t srand(time(0));

	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	return sum;
}

int main()
{
	const int array[11] = { 2,3,4,5,6,7,8,9,10,11,12 };
	int f[11] = {};
	for (size_t i = 0; i < 36000; i++)
	{
		int m=RollDice();
		++f[array[m-2]-2];
	}
	for (size_t i =2; i < 13; i++)
	{
		cout << i <<setw(5);
	}
	cout << "\n";
	for (size_t j = 0; j < 11; j++)
	{
		cout<<f[j]<<setw(5.1);
	}
	system("pause");
	return 0;
}