#pragma once
#include"Base.h"

class DerivedOne :public Base
{
public:
	DerivedOne();
	void print()const;
	double getdouble()const;
	~DerivedOne();
private:
	int integer;
	double complex;
};

