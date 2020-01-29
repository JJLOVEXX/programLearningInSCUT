#pragma once
class Complex
{
public:
	Complex();
	double add(double, double, double, double);
	double subtract(double, double, double , double);
	void print();
	~Complex();
private:
	double realPart;
	double imagineryPart;
};

