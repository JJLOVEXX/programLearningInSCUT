#include "stdafx.h"
#include "AnimalEnclosure.h"
#include "Person.h"
#include "foodSeller.h"
#include "Visitor.h"
#include "Adult.h"
#include "Animal.h"
#include "AnimalFood.h"
#include "Child.h"
#include "Elephant.h"
#include "foodSeller.h"
#include "Giraffe.h"
#include "Money.h"
#include "Monkey.h"
#include "zooKeeper.h"
#include "Zoo.h"
#include<ctime>
#include<random>
#include<iostream>

using namespace std;


Zoo::Zoo()
{
}

Zoo::Zoo(unsigned int x, unsigned int y, unsigned int z) :myFoodSeller(x, y, z)
{
	adultsNumber = 0;
	childrenNumber = 0;
	elephant = new Elephant[1];
	giraffe = new Giraffe[2];
	monkey = new Monkey[3];
	myFoodSeller.sellFoodKind();
}


Zoo::~Zoo()
{
}


void Zoo::SimulationOfOneDay()
{
	elephant[0].printAnimalMessage();
	cout << endl;
	for (size_t i = 0; i < 2; i++)
	{
		giraffe[i].printAnimalMessage();
		cout << endl;
	}
	for (size_t i = 0; i < 3; i++)
	{
		monkey[i].printAnimalMessage();
		cout << endl;
	}
	int n;
	srand(int(time(0)));
	n = rand() % 21 + 20;
	adultsNumber += n;
	adult = new Adult[n];
	for (size_t i = 0; i < n; i++)
	{
		cout << "The adult " << i+1 << " ID is: " << endl;
		cout << adult[i].getAdultID() << endl;
		cout << "The adult " << i+1 << " age is: " << endl;
		cout << adult[i].getAdultAge() << endl;
	}
	for (int i = 0; i<n; i++)                  
	{
		int j, k;
		j = rand() % 11 + 10;                 
		k = rand() % 3 + 1;                   
		childrenNumber += k;
		adult[i].setInitialMoney(j - 1 - 0.4*k);     
		adult[i].setChildrenNumber(k);                   
		int myFood = j - 1 - 0.4*k;  
		int foodNumber = myFood;        
		myFoodSeller.sellPeanut(foodNumber);
		myFoodSeller.sellCarrot(foodNumber);
		myFoodSeller.sellBanana(foodNumber);
		for (int i = 0; i < 1; i++)
		{
			enclosure[0].feedAnimal(&elephant[i], 1, foodNumber);
		}
		for (int i = 0; i < 2; i++)
		{
			enclosure[1].feedAnimal(&giraffe[i], 2, foodNumber);
		}
		for (int i = 0; i < 3; i++)
		{
			enclosure[2].feedAnimal(&monkey[i], 3, foodNumber);
		}
		for (int f = 0; f<3; f++)
		{
			if (enclosure[f].judge())
			{
				cout << f + 1 << " enclosure is in a mess,so it should be closed one day for cleaning." << endl;
				enclosure[f].addCloseDay();
				myZooKeeper.addCleaningDays();
			}
		}
		if (myZooKeeper.getdays() >= 10)
		{
			break;
		}
		if (myFoodSeller.getPeanut() <= 0)
		{
			break;                                                 
		}
		if (myFoodSeller.getCarrot() <= 0)
		{
			break;                                               
		}
		if (myFoodSeller.getBanana() <= 0)
		{
			break;                                              
		}
	}
}


void Zoo::entireSimulation()
{
	int days = 0;
	cout << "This is a simulation of a small zoo!" << endl;
	cout << "There are three kinds of animals which includes an elephant,two giraffes,three monkeys and there are three animal enclosures." << endl << endl;
	while (open())
	{
		days++;
		cout << "This is " << days << " day" << endl << endl;
		SimulationOfOneDay();
	}
	myFoodSeller.exchangeMoney();
	cout << "Total opening days are " << days << endl << endl;
	cout << "Adult number is " << adultsNumber << endl << endl;
	cout << "Children number is " << childrenNumber<< endl << endl;
	cout << "FoodSeller's income in total is " << myFoodSeller.getIncome() << " dollars" << endl << endl;
	cout << "ZooKeeper cleaning days are " << myZooKeeper.getdays()<< endl << endl;
}


bool Zoo::open()
{
	if (myZooKeeper.getdays() >= 10)
	{
		cout << "The zoo closed because the zoo keeper had enough of cleaning and quit!" << endl << endl;
		return false;
	}
	if (myFoodSeller.getPeanut() <= 0)
	{
		cout << "The zoo closed because the seller ran out of peanuts." << endl << endl;
		return false;
	}
	if (myFoodSeller.getCarrot() <= 0)
	{
		cout << "The zoo closed because the seller ran out of carrots." << endl << endl;
		return false;
	}
	if (myFoodSeller.getBanana() <= 0)
	{
		cout << "The zoo closed because the seller ran out of bananas." << endl << endl;
		return false;
	}
	return true;
}
