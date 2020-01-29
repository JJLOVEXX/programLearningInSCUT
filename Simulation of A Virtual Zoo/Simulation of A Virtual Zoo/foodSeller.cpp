#include "stdafx.h"
#include "foodSeller.h"
#include "AnimalFood.h"

class Person;

foodSeller::foodSeller()
{
}

foodSeller::foodSeller(unsigned int p, unsigned int c, unsigned int b) :peanuts(p), carrots(c), bananas(b)
{
}

void foodSeller::sellFoodKind()
{
	peanuts.AnimalFoodFoodSellerSetting(10000, 20);
	carrots.AnimalFoodFoodSellerSetting(7000, 30);
	bananas.AnimalFoodFoodSellerSetting(4000, 50);
}

void foodSeller::sellPeanut(unsigned int n)
{
	peanuts.AnimalFoodSubtract(n);
	income.add(n * 20);
}

void foodSeller::sellCarrot(unsigned int n)
{
	carrots.AnimalFoodSubtract(n);
	income.add(n * 30);
}

void foodSeller::sellBanana(unsigned int n)
{
	bananas.AnimalFoodSubtract(n);
	income.add(n * 50);
}

unsigned int foodSeller::getPeanut() const
{
	return peanuts.AnimalFoodRemain();
}

unsigned int foodSeller::getCarrot() const
{
	return carrots.AnimalFoodRemain();
}

unsigned int foodSeller::getBanana() const
{
	return bananas.AnimalFoodRemain();
}

void foodSeller::exchangeMoney()
{
	income.exchange();
}

double foodSeller::getIncome() const
{
	double inCome;
	inCome = income.gettotal();
	return inCome;
}


foodSeller::~foodSeller()
{
}
