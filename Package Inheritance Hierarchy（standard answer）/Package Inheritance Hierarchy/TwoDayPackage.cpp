#include "stdafx.h"
#include "TwoDayPackage.h"
#include "Package.h"
#include<iostream>
#include<iomanip>

TwoDayPackage::TwoDayPackage(const std::string &sn, const std::string &rn,
	const std::string &sa, const std::string &ra, const std::string &sc,
	const std::string &rc, const std::string &ss, const std::string &rs,
	const std::string &sz, const std::string &rz)
	:Package(sn, rn, sa, ra, sc, rc, ss, rs, sz, rz)
{
	setFlatFee(0.0);
}
void TwoDayPackage::setFlatFee(double sff)
{
	flatfee = (sff >= 0.0 ? sff : 0.0);
}
TwoDayPackage::TwoDayPackage(const Package & pk) :Package(pk)
{
	;
}

double TwoDayPackage::getFlatFee()const
{
	return flatfee;
}
double TwoDayPackage::getCost() const
{
	return getFlatFee()+getCalculateCost();
}

void TwoDayPackage::initializer()
{
	std::cout << "This is TwoDayPackage initializer" << std::endl;
	double wio = 0.0, cpo = 0.0;
	this->getfunction();
	std::cout << "The weight(in ounces): " << std::endl;
	std::cin >> wio;
	std::cout << "The cost per ounce: " << std::endl;
	std::cin >> cpo;
	this->calculateCost(wio, cpo);
	this->printCost();
	double sff = 0.0;
	std::cout << "Please input a flat fee: " << std::endl;
	std::cin >> sff;
	this->setFlatFee(sff);
	std::cout << "The two day package cost is: " << std::endl;
	std::cout << this->getCost();
}