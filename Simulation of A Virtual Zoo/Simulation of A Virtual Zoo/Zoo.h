#pragma once
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

class AnimalEnclosure;
class Person;
class zooKeeper;
class FoodSeller;
class Visitor;
class Adult;
class Animal;
class Elephant;
class Giraffe;
class Monkey;


class Zoo
{
	zooKeeper myZooKeeper;
	foodSeller myFoodSeller;
	Adult *adult;
	Elephant *elephant;
	Giraffe *giraffe;
	Monkey *monkey;
	AnimalEnclosure enclosure[3];
	unsigned int adultsNumber;
	unsigned int childrenNumber;
public:
	Zoo();
	Zoo(unsigned int, unsigned int, unsigned int);
	~Zoo();
	void SimulationOfOneDay();
	void entireSimulation();
	bool open();
};

