#include "stdafx.h"
#include<iostream>
#include<random>
#include<ctime>
using namespace std;


int main()
{
	int x = 0;

    srand(time(0));//���������
	x = 1 + rand() % 1000;//����x�ķ�Χ
	cout << "I have a number between 1 and 1000."
		<<"\nCan you guess my number?"
		<<"\nPlease type your first guess.\n";
	
	for (int m = 0; cin >> m;)//�����û��²����
	//�ж��û�����
	{
		while (m > x)
		{
			cout << "Too high.  Try again.\n";
			cin >> m;
		}
		while (m < x)
		{
			cout << "Too low.    Try again.\n";
			cin >> m;
		}
		while (m == x)
		{
			cout << "Excellent! You guessed the number!"
			     << "Would you like to play again(y or n)?";
			//�����û��Ƿ�������¿�ʼ
			char s;
			cin >> s;
			if (s == 'y')
			{
				srand(time(0));
				x = 1 + rand() % 1000;
				cout << "I have a number between 1 and 1000."
					<< "\nCan you guess my number?"
					<< "\nPlease type your first guess.\n";
				cin >> m;
			}
			else if (s == 'n') 
			{ 
				break;
			}
			
	    }
	}
	
    return 0;
}

