#include "stdafx.h"
#include "Giraffe.h"
#include<iostream>
#include<random>
#include<ctime>

using namespace std;

Giraffe::Giraffe():maxFood(500)
{
	srand(int(time(0)));
	foodEaten = 0;
	neckLength = 1+rand()%10;
	weight = 500 + rand() % 5000;
}

bool Giraffe::full()
{
	if (foodEaten>maxFood)
	{
		foodEaten -= maxFood;
		return true;
	}
	else
		return false;
}

void Giraffe::printAnimalMessage()const
{
	cout << "giraffe: " << endl;
	cout << "The weight of this giraffe is: " << weight << endl;
	cout << "The length of this giraffe's neck is: " << neckLength << endl;
	cout << "The max food amount of this giraffe is: " << getMaxFood() << endl;
}

void Giraffe::printAnimalFoodMessage() const
{
	cout << "The food amount eaten by giraffe is: " << getFoodEaten() << endl;
}

void Giraffe::feedFood(unsigned int foodAmount)
{
	foodEaten += foodAmount;
}

unsigned int Giraffe::getFoodEaten()const
{
	return foodEaten;
}

unsigned int Giraffe::getMaxFood() const
{
	return maxFood;
}

Giraffe::~Giraffe()
{
}
