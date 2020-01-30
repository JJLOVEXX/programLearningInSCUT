#pragma once
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include<string>
#include "Package.h"

class TwoDayPackage:public Package
{
public:
	TwoDayPackage(const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &);
	
	void setFlatFee(double);
	double getFlatFee()const;

	double getCost()const;

	~TwoDayPackage();
private:
	double flatfee;
};

#endif // !TWODAYPACKAGE_H