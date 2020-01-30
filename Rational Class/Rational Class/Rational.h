#pragma once
class Rational
{
public:
	Rational();
	int largestCommonDivisor(int, int);
	void add(int,int, int, int);
	void subtract(int, int, int, int);
    void multiply(int, int, int, int);
	void divide(int, int, int, int);
	void print1();
	void print2();
	~Rational();
private:
	int numerator;
	int denominator;
};

