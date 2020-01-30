#include "stdafx.h"
#include "Child.h"
#include "AnimalFood.h"
#include<random>
#include<ctime>

Child::Child():peanuts(0),carrots(0),bananas(0)
{
	age = 1 + rand() % 18;
}

void Child::setFeedFood(unsigned int p, unsigned int c, unsigned int b)
{
	peanuts.AnimalFoodChildSetting(p);
	carrots.AnimalFoodChildSetting(c);
	bananas.AnimalFoodChildSetting(b);
}

unsigned int Child::getChildrenAge() const
{
	return age;
}

Child::~Child()
{
}
