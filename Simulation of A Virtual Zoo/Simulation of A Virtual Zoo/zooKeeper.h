#pragma once
#include "Person.h"

class zooKeeper :
	public Person
{
public:
	zooKeeper();
	void addCleaningDays();
	unsigned int getdays()const;
	~zooKeeper();
private:
	unsigned cleaningDay;
};

