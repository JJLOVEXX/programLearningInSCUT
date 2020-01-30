#pragma once
#include "Animal.h"
class Giraffe :
	public Animal
{
public:
	Giraffe();
	virtual bool full();
	virtual void printAnimalMessage()const;
	virtual void printAnimalFoodMessage()const;
	virtual void feedFood(unsigned int);
	virtual unsigned int getFoodEaten()const;
	virtual unsigned int getMaxFood()const;
	~Giraffe();
private:
	double neckLength; 
	const unsigned int maxFood;
};

