#include "stdafx.h"
#include "zooKeeper.h"

class Person;

zooKeeper::zooKeeper()
{
	cleaningDay = 0;
}

void zooKeeper::addCleaningDays()
{
	cleaningDay++;
}

unsigned int zooKeeper::getdays() const
{
	return cleaningDay;
}


zooKeeper::~zooKeeper()
{
}
