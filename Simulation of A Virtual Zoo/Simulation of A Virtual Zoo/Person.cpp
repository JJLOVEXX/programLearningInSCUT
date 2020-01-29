#include "stdafx.h"
#include "Person.h"
#include<random>
#include<ctime>


Person::Person()
{
	age = 1+rand()%80;
}

unsigned int Person::getAge() const
{
	return age;
}

std::string Person::getName() const
{
	return std::string(name);
}


Person::~Person()
{
}
