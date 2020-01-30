#include "stdafx.h"
#include "TwoDayPackage.h"
#include "Package.h"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

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

double TwoDayPackage::getCalculateCost() const
{
	return getFlatFee() + Package::getCalculateCost();
}

void TwoDayPackage::printCost()
{
	cout << "The cost is: " << endl;
	cout << fixed << setprecision(4) << Package::getCalculateCost() << endl;
}

void TwoDayPackage::initializer()
{
	cout << "This is TwoDayPackage" << endl;
	string sn, rn, sa, ra, sc, rc, ss, rs, sz, rz;
	double wio = 0.0, cpo = 0.0;
	cout << "Please input a sender name: " << endl;
	cin >> sn;
	cout << "Please input a recipient name: " << endl;
	cin >> rn;
	cout << "Please input a sender address: " << endl;
	cin >> sa;
	cout << "Please input a recipient address: " << endl;
	cin >> ra;
	cout << "Please input a sender city: " << endl;
	cin >> sc;
	cout << "Please input a recipient city: " << endl;
	cin >> rc;
	cout << "Please input a sender state: " << endl;
	cin >> ss;
	cout << "Please input a recipient state: " << endl;
	cin >> rs;
	cout << "Please input a sender ZIP code: " << endl;
	cin >> sz;
	cout << "Please input a recipient ZIP code: " << endl;
	cin >> rz;

	this->setSenderName(sn);

	this->setSenderAddress(sa);

	this->setSenderCity(sc);

	this->setSenderState(ss);

	this->setSenderZIPCode(sz);

	this->setRecipientName(rn);

	this->setRecipientAddress(ra);

	this->setRecipientCity(rc);

	this->setRecipientState(rs);

	this->setRecipientZIPCode(rz);

	cout << "The weight(in ounces): " << endl;
	cin >> wio;
	cout << "The cost per ounce: " << endl;
	cin >> cpo;
	this->calculateCost(wio, cpo);
	printCost();

	double sff = 0.0;
	cout << "Please input a flat fee: " << endl;
	cin >> sff;
	this->setFlatFee(sff);
	this->getFlatFee();
	cout << "The two day package cost is: " << endl;
	cout << this->getCalculateCost() << endl;
}