#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
class Package
{
public:
	Package(const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &,
		const std::string &);
	Package();
	void setSenderName(const std::string &);
	std::string getSenderName()const;

	void setSenderAddress(const std::string &);
	std::string getSenderAddress()const;

	void setSenderCity(const std::string &);
	std::string getSenderCity()const;

	void setSenderState(const std::string &);
	std::string getSenderState()const;

	void setSenderZIPCode(const std::string &);
	std::string getSenderZIPCode()const;

	void setRecipientName(const std::string &);
	std::string getRecipientName()const;

	void setRecipientAddress(const std::string &);
	std::string getRecipientAddress()const;

	void setRecipientCity(const std::string &);
	std::string getRecipientCity()const;

	void setRecipientState(const std::string &);
	std::string getRecipientState()const;

	void setRecipientZIPCode(const std::string &);
	std::string getRecipientZIPCode()const;

	void getfunction()const;

	void calculateCost(double, double);
	double getCalculateCost()const;
	void printCost();
	virtual void initializer();
private:
	std::string senderName;
	std::string recipientName;
	std::string senderAddress;
	std::string recipientAddress;
	std::string senderCity;
	std::string recipientCity;
	std::string senderState;
	std::string recipientState;
	std::string senderZIPCode;
	std::string recipientZIPCode;
	double weightInOunces;
	double costPerOunce;
};
#endif
