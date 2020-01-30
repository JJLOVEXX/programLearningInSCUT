#include "stdafx.h"
#include "Package.h"
#include<iostream>
#include<iomanip>

using namespace std;

Package::Package(const std::string &sn, const std::string &rn,
	const std::string &sa, const std::string &ra, const std::string &sc,
	const std::string &rc, const std::string &ss, const std::string &rs,
	const std::string &sz, const std::string &rz)
	:senderName(sn), recipientName(rn), senderAddress(sa), recipientAddress(ra),
	senderCity(sc), recipientCity(rc), senderState(ss), recipientState(rs),
	senderZIPCode(sz), recipientZIPCode(rz)
{
	weightInOunces = 0.0;
	costPerOunce = 0.0;
}

Package::Package()
{

}

void Package::setSenderName(const std::string &sn)
{
	senderName = sn;
}

std::string Package::getSenderName() const
{
	return senderName;
}

void Package::setSenderAddress(const std::string &sa)
{
	senderAddress = sa;
}

std::string Package::getSenderAddress() const
{
	return senderAddress;
}

void Package::setSenderCity(const std::string &sc)
{
	senderCity = sc;
}

std::string Package::getSenderCity() const
{
	return senderCity;
}

void Package::setSenderState(const std::string &ss)
{
	senderState = ss;
}

std::string Package::getSenderState() const
{
	return senderState;
}

void Package::setSenderZIPCode(const std::string &sz)
{
	senderZIPCode = sz;
}

std::string Package::getSenderZIPCode() const
{
	return senderZIPCode;
}

void Package::setRecipientName(const std::string &rn)
{
	recipientName = rn;
}

std::string Package::getRecipientName() const
{
	return recipientName;
}

void Package::setRecipientAddress(const std::string &ra)
{
	recipientAddress = ra;
}

std::string Package::getRecipientAddress() const
{
	return recipientAddress;
}

void Package::setRecipientCity(const std::string &rc)
{
	recipientCity = rc;
}

std::string Package::getRecipientCity() const
{
	return recipientCity;
}


void Package::setRecipientState(const std::string &rs)
{
	recipientState = rs;
}

std::string Package::getRecipientState() const
{
	return recipientState;
}

void Package::setRecipientZIPCode(const std::string &rz)
{
	recipientZIPCode = rz;
}

std::string Package::getRecipientZIPCode() const
{
	return recipientZIPCode;
}

void Package::getfunction()const
{
	cout << "\nThe sender name is: " << getSenderName() << endl;

	cout << "The sender address is: " << getSenderAddress() << endl;

	cout << "The sender city is: " << getSenderCity() << endl;

	cout << "The sender state is: " << getSenderState() << endl;

	cout << "The sender ZIP code is: " << getSenderZIPCode() << endl;

	cout << "The recipient name is: " << getRecipientName() << endl;

	cout << "The recipient address is: " << getRecipientAddress() << endl;

	cout << "The recipient city is: " << getRecipientCity() << endl;

	cout << "The recipient state is: " << getRecipientState() << endl;

	cout << "The recipient ZIP code is: " << getRecipientZIPCode() << endl;
}

void Package::calculateCost(double wio, double cpo)
{
	weightInOunces = wio > 0.0 ? wio : 0.0;
	costPerOunce = cpo > 0.0 ? cpo : 0.0;
}

double Package::getCalculateCost()const
{
	return weightInOunces * costPerOunce;
}

void Package::printCost()
{
	cout << "The cost is: " << endl;
	cout << fixed << setprecision(4) << getCalculateCost() << endl;
}

void Package::initializer()
{
	cout << "This is package" << endl;
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
	this->printCost();
}