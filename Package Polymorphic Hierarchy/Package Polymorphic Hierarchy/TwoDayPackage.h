#pragma once
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include<string>
#include "Package.h"

class TwoDayPackage :public Package
{
public:
	TwoDayPackage(const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &);
	TwoDayPackage(const Package & pk);
	void setFlatFee(double);
	double getFlatFee()const;
	double getCalculateCost() const;
	void printCost();
	void initializer();

private:
	double flatfee;
};

#endif // !TWODAYPACKAGE_H