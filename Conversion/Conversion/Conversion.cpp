// Conversion.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

void decimalNumberToBinaryNumber(int);
void binaryNumberToDecimalNumber(char);

void binaryNumberToDecimalNumber(char binary[9])
{
	int decimal = 0;
	for (int i = 0; i < 8; i++)
	{
		decimal += (binary[i]-48) * pow(2, 7-i);
	}
	cout << decimal << endl;
}

void decimalNumberToBinaryNumber(int decimal)
{
	int binary[8] = {0};
	for (int i = 0; decimal!= 0;i++)
	{
		binary[i] = decimal % 2;
		decimal /= 2;
	}
	for (int i = 7; i>=0;i--)
	{
		cout << binary[i];
	}
}
int main()
{
	int n = 0;
	char m[9];
	cout << "Please input a decimal number: " << endl;
	cin >> n;
	decimalNumberToBinaryNumber(n);
	cout << "\nPlease input a binary number: " << endl;
	cin >> m;
	binaryNumberToDecimalNumber(m);
	system("pause");
	return 0;
}

