#pragma once
#include "Person.h"
#include "Money.h"
#include "AnimalFood.h"

class Money;
class AnimalFood;

class foodSeller :
	public Person
{
public:
	foodSeller();
	foodSeller(unsigned int,unsigned int,unsigned int);
	void sellFoodKind();
	void sellPeanut(unsigned int);
	void sellCarrot(unsigned int);
	void sellBanana(unsigned int);
	unsigned int getPeanut()const;
	unsigned int getCarrot()const;
	unsigned int getBanana()const;
	void exchangeMoney();
	double getIncome()const;
	~foodSeller();
private:
	AnimalFood peanuts;
	AnimalFood carrots;
	AnimalFood bananas;
	Money income;
};

