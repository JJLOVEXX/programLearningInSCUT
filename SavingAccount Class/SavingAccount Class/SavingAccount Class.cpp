// SavingAccount Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"SavingAccount.h"
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	SavingAccount saver1(2000.00);
	SavingAccount saver2(3000.00);
	saver1.print();
	saver2.print();
	SavingAccount::modifyInterestRate(0.03);
	saver1.calculatMonthlyInterest();
	saver2.calculatMonthlyInterest();
	saver1.print();
	saver2.print();
	getchar();
    return 0;
}

