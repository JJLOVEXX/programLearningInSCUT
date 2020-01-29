#include "stdafx.h"
#include "AnimalFood.h"


AnimalFood::AnimalFood()
{
}

AnimalFood::AnimalFood(unsigned int n)
{
	amount = n;
}

void AnimalFood::AnimalFoodFoodSellerSetting(double a, double p)
{
	amount = a;
	pricePerUnit = p;
}

void AnimalFood::AnimalFoodChildSetting(double a)
{
	amount = a;
}

void AnimalFood::AnimalFoodSubtract(unsigned int s)
{
	amount -= s;
}

void AnimalFood::AnimalFoodAdd(unsigned int s)
{
	amount += s;
}

unsigned int AnimalFood::AnimalFoodRemain()const
{
	return amount;
}


AnimalFood::~AnimalFood()
{
}
