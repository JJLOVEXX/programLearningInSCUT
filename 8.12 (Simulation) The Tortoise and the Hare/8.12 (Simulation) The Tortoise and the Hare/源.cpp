#include<iostream>
#include<random>
#include<array>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
void moveTortoise(int*Hptr);
void moveHare(int*Tptr);
int main()
{
	cout << "Bang!!!!!\nAND THEY'RE OFF!!!!!" << endl;
	srand(time(0));
	int H = 0;
	int T = 0;
	int k = 0;
	
	while (H<70&&T<70)
	{
		moveTortoise(&H);
		moveHare(&T);
		cout << H << " " << T ;
		for (int s = 0; s < 70; s++)
		{
			if (s != H&&s != T)
				cout << ' ';
			else if (s == H && s == T)
				cout << "OUCH!";
			else if (s == H&&s != T)
				cout << 'H';
			else if (s == T&&s != H)
				cout << 'T';
		}
		cout << endl;
	}
	if (H == 70)		
		cout << "TORTOISE WINS!!!YAY!!";
	else if (T == 70)
		cout << "Hare wins,Yuch!";
	else if (H==70&&T==70)
		cout << "It is a tie.";
	system("pause");
	return 0;
}
void moveTortoise(int*Hptr)
{
	int i = 0;
	i= 1 + rand() % 10;
	if (i >= 1 && i <= 5)
		*Hptr += 3;
	else if (i >= 6 && i <= 7)
		*Hptr -= 6;
	else if (i >= 8 && i <= 10)
		*Hptr += 1;
	if (*Hptr < 0)
		*Hptr = 0;
	else if (*Hptr > 70)
	
		*Hptr = 70;
		
	
}
void moveHare(int*Tptr)
{
	int j = 0;
	j = 1 + rand() % 10;
	if (j >=3 && j <= 4)
		*Tptr += 9;
	else if (j >= 5 && j <= 5)
		*Tptr -=12;
	else if (j >= 6 && j <= 8)
		*Tptr += 1;
	else if (j >= 9 && j <= 10)
		*Tptr += 2;
	if (*Tptr < 0)
		*Tptr = 0;
	else if (*Tptr > 70)
	
		*Tptr = 70;
		
}