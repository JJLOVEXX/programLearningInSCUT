#include "stdafx.h"
#include "AnimalEnclosure.h"


AnimalEnclosure::AnimalEnclosure()
{
	messDegree = 0;
	situation = true;
	day = 0;
}


AnimalEnclosure::~AnimalEnclosure()
{
}


bool AnimalEnclosure::judge()
{
	if (messDegree>2000)
	{
		messDegree = 0;
		return true;
	}
	else
		return false;
}


void AnimalEnclosure::FeedAnimal()
{
}


void AnimalEnclosure::addCloseDay()
{
	day++;
}

void AnimalEnclosure::feedAnimal(Animal *animal, unsigned int AnimalNumberInEnclosure, unsigned int foodAmount)
{
	animal->feedFood(foodAmount/ AnimalNumberInEnclosure); 
	if (animal->full())
	{
		messDegree = messDegree + animal->getMaxFood();
	}
}

unsigned int AnimalEnclosure::returnCloseDay()
{
	return day;
}
