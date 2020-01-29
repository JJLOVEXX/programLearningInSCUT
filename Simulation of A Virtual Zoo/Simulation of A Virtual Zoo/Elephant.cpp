#include "stdafx.h"
#include "Elephant.h"
#include "Animal.h"
#include<iostream>
#include<random>
#include<ctime>

class Animal;

using namespace std;

Elephant::Elephant():maxFood(750)
{
	srand(int(time(0)));
	trunkLength = 1+rand()%3;
	foodEaten = 0;
	weight = 2000 + rand() % 10000;
}

bool Elephant::full()
{
	if (foodEaten>maxFood)
	{
		foodEaten -= maxFood;
		return true;
	}
	else
		return false;
	return false;
}

void Elephant::printAnimalMessage()const
{
	cout << "elephant: " << endl;
	cout << "The weight of this elephant is: " << weight << endl;
	cout << "The length of this elephant's nose is: " << trunkLength << endl;
	cout << "The max food amount of this elephant is: " << getMaxFood() << endl;
}

void Elephant::printAnimalFoodMessage() const
{
	cout << "The food amount eaten by elephant is: " << getFoodEaten() << endl;
}

void Elephant::feedFood(unsigned int foodAmount)
{
	foodEaten += foodAmount;
}

unsigned int Elephant::getMaxFood()const
{
	return maxFood;
}

unsigned int Elephant::getFoodEaten() const
{
	return foodEaten;
}


Elephant::~Elephant()
{
}
