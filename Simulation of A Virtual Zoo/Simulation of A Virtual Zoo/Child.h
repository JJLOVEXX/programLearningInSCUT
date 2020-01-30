#pragma once
#include "Visitor.h"
#include "AnimalFood.h"

class AnimalFood;

class Child :
	public Visitor
{
public:
	Child();
	void setFeedFood(unsigned int, unsigned int, unsigned int);
	unsigned int getChildrenAge()const;
	~Child();
private:
	AnimalFood peanuts;
	AnimalFood carrots;
	AnimalFood bananas;
};

