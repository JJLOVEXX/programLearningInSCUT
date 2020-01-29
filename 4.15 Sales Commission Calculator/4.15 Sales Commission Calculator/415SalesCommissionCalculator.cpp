// 415SalesCommissionCalculator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float s = 0;
	cout << "Enter sales in dollars(-1 to end):   ";
	cin >> s;
	
	while (s!=-1)
	{
		float S = 0;
		S = 200 + 0.09*s;
		cout << "Salary is: " << setprecision(2) << fixed << S << "\n";
		cout << "Enter sales in dollars(-1 to end):   ";
		cin >> s;
		
	}

	system("pause");
    return 0;
}

