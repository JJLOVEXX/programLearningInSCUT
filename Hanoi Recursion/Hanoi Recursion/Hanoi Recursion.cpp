// Hanoi Recursion.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void hanoi(int, char, char, char);

int w = 0;

void hanoi(int s, char a, char b, char c)
{
	if (s==1)
	{
		cout <<++w<< a<<"->"<<c<< endl;
	}
	else
	{
		hanoi(s - 1, a, c, b);
		cout <<++w<< a << "->" << c << endl;
		hanoi(s - 1, b, a, c);
	}
}
int main()
{
	int n;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	system("pause");
    return 0;
}

