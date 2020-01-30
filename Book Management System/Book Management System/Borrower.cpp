#include "stdafx.h"
#include "Borrower.h"
#include<iostream>
#include<vector>

using namespace std;

Borrower::Borrower(string &id, string &first, string &last)
{
	setBorrowerID(id);
	setBorrowerFirstName(first);
	setBorrowerLastName(last);
}

void Borrower::setBorrowerID(string & id)
{
	if ((borrowerID.size())>5||(borrowerID.size()<5)&&(borrowerID.size()>0))
	{
		throw invalid_argument("The borrower ID should consist of 5 digits.");
		borrowerID = id.substr(0, 5);
	}
}

string Borrower::getBorrowerID() const
{
	return string(borrowerID);
}

void Borrower::setBorrowerFirstName(string &firstName)
{
	borrowerFirstName = firstName;
}

string Borrower::getBorrowerFirstName() const
{
	return string(borrowerFirstName);
}

void Borrower::setBorrowerLastName(string &lastName)
{
	borrowerLastName = lastName;
}

string Borrower::getBorrowerLastName() const
{
	return string(borrowerLastName);
}

unsigned int Borrower::booksOnLoan(unsigned int number)
{
	booksLoanedByBorrower = number;
	return booksLoanedByBorrower;
}

void Borrower::bookIDOnLaon()
{
	vector<string>books(booksLoanedByBorrower);
	for (size_t i = 0; i < booksLoanedByBorrower; i++)
	{
		cin >> books[i];
	}
}

Borrower::~Borrower()
{
}
