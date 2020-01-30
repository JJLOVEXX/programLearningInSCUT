#pragma once
#include "Visitor.h"
#include "Child.h"
#include "Money.h"
#include<string>

using namespace std;

class Child;
class Money;

class Adult :
	public Visitor
{
public:
	Adult();
	~Adult();
	void setInitialMoney(double);
	void setChildrenNumber(unsigned int);
	unsigned int getAdultAge()const;
	unsigned int getAdultID()const;
	double getTotalMoney();
private:
	Money money;
	Child *children;
};

