#include "stdafx.h"
#include "SavingAccount.h"
#include<iomanip>
#include<iostream>
using namespace std;

double SavingAccount::annualInterestRate = 0.0;

SavingAccount::SavingAccount(double b)
{
	savingsBalance = (b > 0.0 ? b : 0.0);
}

void SavingAccount::calculatMonthlyInterest()
{
	savingsBalance += savingsBalance * annualInterestRate / 12;
}

void SavingAccount::modifyInterestRate(double i)
{
	annualInterestRate = (i >= 0.0&&i <= 1.0) ? i : 0.03;
}

void SavingAccount::print()
{
	cout << '$' << fixed<<setw(3) << setprecision(2) << savingsBalance<<endl;
}