#pragma once
class Base
{
public:
	Base();
	void print()const;
	virtual double getdouble()const;
	~Base();
private:
	int integer;
	double complex;
};

