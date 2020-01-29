#include "stdafx.h"
#include "Money.h"


Money::Money(double d, double c)
{
	dollars = d;
	cents = c;
	total = dollars + 100 * cents;
}

Money::Money()
{
	total = 0;
}


void Money::settotal(double a)
{
	total = a;
}

void Money::add(int m)
{
	total += m;
}

void Money::exchange()
{
	dollars = int(total / 100);
	cents = total - 100 * dollars;
}

double Money::gettotal() const
{
	return total;
}

double Money::getdollar() const
{
	return dollars;
}

double Money::getcent() const
{
	return cents;
}

Money operator+(Money & m1, Money & m2)
{
	double t = m1.total + m2.total;
	double d, c;
	d = int(t / 100);
	c = (t - 100 * d);
	return Money(d, c);
}

Money operator-(Money & m1, Money & m2)
{
	double t = m1.total - m2.total;
	double d, c;
	d = int(t / 100);
	c = (t - 100 * d);
	return Money(d, c);
}

Money::~Money()
{
}