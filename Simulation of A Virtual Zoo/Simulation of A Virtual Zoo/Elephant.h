#pragma once
#include "Animal.h"

class Elephant :
	public Animal
{
public:
	Elephant();
	virtual bool full();
	virtual void printAnimalMessage()const;
	virtual void printAnimalFoodMessage()const;
	virtual void feedFood(unsigned int);
	virtual unsigned int getMaxFood()const;
	virtual unsigned int getFoodEaten()const;
	~Elephant();
private:
	double trunkLength;
	const unsigned int maxFood;
};

