#include "stdafx.h"
#include "Adult.h"
#include "Visitor.h"
#include<random>
#include<ctime>

Adult::Adult()
{
	age = 18 + rand() % 80;
	ID = 1000 + rand() % 5000;
}


Adult::~Adult()
{
}

void Adult::setInitialMoney(double m)
{
	money.settotal(m * 100);
}

void Adult::setChildrenNumber(unsigned int n)
{
	children = new Child[n];
}

unsigned int Adult::getAdultAge() const
{
	return age;
}

unsigned int Adult::getAdultID() const
{
	return ID;
}

double Adult::getTotalMoney()
{
	return money.gettotal();
}
