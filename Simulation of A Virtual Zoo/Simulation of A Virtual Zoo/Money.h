#pragma once
class Money
{
public:
	Money(double,double);
	Money();
	friend  Money operator+(Money &m1, Money &m2);
	friend  Money operator-(Money &m1, Money &m2);
	void settotal(double);
	void add(int);
	void exchange();
	double gettotal()const;
	double getdollar()const;
	double getcent()const;
	~Money();
private:
	double dollars;
	double cents;
	double total;
};

