#include "stdafx.h"
#include "BookRecord.h"
#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

BookRecord::BookRecord(string &id,string &first,string &last,string &year)
{
	setBookID(id);
	setpublicationYear(year);
	setauthorFirstName(first);
	setauthorLastName(last);
}

BookRecord::BookRecord()
{
}


BookRecord::~BookRecord()
{
}

void BookRecord::setBookID(string &bookid)
{
	if (bookid[0]>='A'&&bookid[0]<='Z')
	{
		bookID = bookid;
	}
	else if (bookid[0] >='a'&&bookid[0]<='z')
	{
		bookID[0] -= 32;
	}
	else
	{
		throw invalid_argument("The book ID must start with an uppercase letter.");
	}
}

string BookRecord::getBookID() const
{
	return string(bookID);
}

void BookRecord::setpublicationYear(string &year)
{
	publicationYear = year.substr(0, 4);
	if (year[0]!=1||year[0]!=2)
	{
		throw invalid_argument("The publication year should start with a 1 or 2");
	}
}

string BookRecord::getpublicationYear() const
{
	return string(publicationYear);
}

void BookRecord::setauthorFirstName(string &firstName)
{
	authorFirstName = firstName;
}

string BookRecord::getauthorFirstName() const
{
	return string(authorFirstName);
}

void BookRecord::setauthorLastName(string &lastName)
{
	authorLastName = lastName;
}

string BookRecord::getauthorLastName() const
{
	return string(authorLastName);
}

void BookRecord::displayBookRecordData() const
{
	getBookID();
	cout << endl;
	cout<<getauthorFirstName()<<"  "<<getauthorLastName();
	getpublicationYear();
	cout << endl;
}
