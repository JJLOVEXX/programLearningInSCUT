// Exercises414CreditLimitscpp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>//包括iostream这个头文件
#include<iomanip>
using namespace std;//使用std这个命名空间

int main()
{
	//初始化变量
	int accountNumber(0);
	double beginningBalance(0);
	double Charges(0);
	double Credits(0);
	double creditLimit(0);
	double newBalance(0);
	double Balance(0);

	//账号余额
	cout << "Enter account number(or -1 to quit)" << "    ";
	cin >> accountNumber;
	while (accountNumber != -1)
	{
		cout << "Enter beginning balance:"<<"   ";
		cin >> beginningBalance;
		cout << "Enter total charges:"<<"    ";
		cin >> Charges;
		cout << "Enter total credits:"<<"   ";
		cin >> Credits;
		cout << "Enter credit limit:"<<"   ";
		cin >> creditLimit;
		newBalance = beginningBalance + Charges - Credits;
		cout << "New balance is"<<"     " << newBalance<<"\n";
		
		
		Balance = newBalance;

		
		//判断是否超支

		if (creditLimit < Balance)
		{
	       cout << "Account" << setw(15) << accountNumber<<"\n";
		  
		   cout << "Credit Limit:" << setw(10) << creditLimit << "\n";

		   cout << "Balance:" << setw(15) << Balance << "\n";

		   cout << "Credit Limit Exceeded" << "\n";
		}
		
		cout << "Enter account number(or -1 to quit)" << "    ";
		cin >> accountNumber;
	    }
	    
	
	system("pause");
	return 0;
}

