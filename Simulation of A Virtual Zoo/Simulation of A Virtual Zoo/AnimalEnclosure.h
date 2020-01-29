#pragma once
#include "Animal.h"

class Animal;

class AnimalEnclosure
{
public:
	AnimalEnclosure();
	~AnimalEnclosure();
	bool judge();
	void FeedAnimal();
	void addCloseDay();
	void feedAnimal(Animal*, unsigned int, unsigned int);
	unsigned int returnCloseDay();
private:
	unsigned int messDegree;
	unsigned int day;
	bool situation;
};

