#include "stdafx.h"
#include "TwoDayPackage.h"
#include "Package.h"

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

double TwoDayPackage::getFlatFee()const
{
	return flatfee;
}

double TwoDayPackage::getCost() const
{
	return getFlatFee()+getCalculateCost();
}

TwoDayPackage::~TwoDayPackage()
{
}
