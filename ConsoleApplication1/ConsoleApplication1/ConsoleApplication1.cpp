#include "stdafx.h"
#include<iostream>
#include<random>
using namespace std;


int main()
{
	int x = 0;

	x = rand();

	cout << "I have a number between 1 and 1000."
		<< "\nCan you guess my number?"
		<< "\nPlease type your first guess.";

	int m = 0;
	cin >> m;
	if (m > x)
	{
		cout << "Too high.  Try again.";
		cin >> m;
	}
	else if (m < x)
	{
		cout << "Too low.    Try again.";
		cin >> m;
	}
	else
	{
		cout << "Excellent! You guessed the number!"
			<< "Would you like to play again(y or n)?";

	}

	system("pause");
	return 0;
}

