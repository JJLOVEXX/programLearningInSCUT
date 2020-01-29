#pragma once
#include<string>
class BookRecord;
using namespace std;

class Borrower
{
public:
	Borrower(string &,string &,string &);
	void setBorrowerID(string &);
	string getBorrowerID()const;
	void setBorrowerFirstName(string &);
	string getBorrowerFirstName()const;
	void setBorrowerLastName(string &);
	string getBorrowerLastName()const;
	unsigned int  booksOnLoan(unsigned int);
	void bookIDOnLaon();
	~Borrower();
private:
	string borrowerID;
	string borrowerFirstName;
	string borrowerLastName;
	unsigned int booksLoanedByBorrower;
	string bookIDLoanedByBorrower;
};

