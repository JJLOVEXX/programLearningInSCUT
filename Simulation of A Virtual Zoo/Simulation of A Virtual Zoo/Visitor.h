#pragma once
#include "Person.h"
class Visitor :
	public Person
{
public:
	Visitor();
	~Visitor();
protected:
	unsigned int ID;
};

