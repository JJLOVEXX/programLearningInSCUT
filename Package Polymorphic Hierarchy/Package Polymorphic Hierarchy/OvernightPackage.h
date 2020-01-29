#pragma once
#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include "Package.h"
#include<string>

class OvernightPackage :public Package
{
public:
	OvernightPackage(const Package & pk);
	OvernightPackage(const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &);
	double getCalculateCost()const;
	void printCost();
	void initializer();
	void setadditionFeePerOunce(double);
	double getadditionFeePerOunce()const;
	~OvernightPackage();
private:
	double additionFeePerOunce;
};
#endif // !
