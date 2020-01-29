#pragma once
class Animal
{
public:
	Animal();
	~Animal();
	virtual bool full() = 0;
	virtual void printAnimalMessage()const = 0;
	virtual void printAnimalFoodMessage()const = 0;
	virtual void feedFood(unsigned int) = 0;
	virtual unsigned int getMaxFood()const = 0;
	virtual unsigned int getFoodEaten()const = 0;
protected:
	double weight;
	unsigned int foodEaten;
};

