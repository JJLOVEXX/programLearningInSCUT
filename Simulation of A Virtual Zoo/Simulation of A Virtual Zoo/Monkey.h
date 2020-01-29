#pragma once
#include "Animal.h"
class Monkey :
	public Animal
{
public:
	Monkey();
	virtual bool full();
	virtual void printAnimalMessage()const;
	virtual void printAnimalFoodMessage()const;
	virtual void feedFood(unsigned int);
	virtual unsigned int getMaxFood()const;
	virtual unsigned int getFoodEaten()const;
	~Monkey();
private:
	double armLength;
	const unsigned int maxFood;
};

