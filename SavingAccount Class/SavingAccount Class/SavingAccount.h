#pragma once
#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

class SavingAccount
{
public:
	SavingAccount(double);
	void calculatMonthlyInterest();
	static void modifyInterestRate(double);
	void print();
private:
	static double annualInterestRate;
	double savingsBalance;
};
#endif // !
