#include "stdafx.h"
#include "Monkey.h"
#include<iostream>
#include<random>
#include<ctime>

using namespace std;

Monkey::Monkey():maxFood(300)
{
	srand(int(time(0)));
	armLength = 0.5+rand()%1;
	weight = 30 + rand() % 100;
	foodEaten = 0;
}

bool Monkey::full()
{
	if (foodEaten > maxFood)
	{
		foodEaten -= maxFood;
		return true;
	}
	else
		return false;
}

void Monkey::printAnimalMessage()const
{
	cout << "monkey: " << endl;
	cout << "The weight of this monkey is " << weight << endl;
	cout << "The length of this monkey's arm is " << armLength << endl;
	cout << "The max food amount of this monkey is: " << getMaxFood() << endl;
}

void Monkey::printAnimalFoodMessage() const
{
	cout << "The food amount eaten by monkey is: " << getFoodEaten() << endl;
}

void Monkey::feedFood(unsigned int foodAmount)
{
	foodEaten += foodAmount;
}

unsigned int Monkey::getMaxFood() const
{
	return maxFood;
}

unsigned int Monkey::getFoodEaten() const
{
	return foodEaten;
}

Monkey::~Monkey()
{
}
