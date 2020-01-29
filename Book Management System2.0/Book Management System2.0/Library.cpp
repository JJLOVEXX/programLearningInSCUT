#include "stdafx.h"
#include "Library.h"
#include<iostream>
#include<string>
using namespace std;

Catalogue::Catalogue()
{
}

Catalogue::~Catalogue()
{
}

Borrower::Borrower()
{
}

Borrower::~Borrower()
{
}

BookRecord::BookRecord(unsigned int number, string str)
{
	setbookTypesNumber(number);
	setBookID(str);
}

BookRecord::BookRecord()
{
}

void BookRecord::setbookTypesNumber(unsigned int num)
{
	bookTypesNumber = num;
}

unsigned int BookRecord::getbookTypesNumber() const
{
	return bookTypesNumber;
}

void BookRecord::setBookID(string bookid)
{
	if (bookid[0] >= 'A'&&bookid[0] <= 'Z')
	{
		bookID = bookid;
	}
	else if (bookid[0] >= 'a'&&bookid[0] <= 'z')
	{
		bookID = bookid;
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

void BookRecord::display()
{
	cout << getBookID() << endl;
}

BookRecord::~BookRecord()
{
}

Library::Library()
{
}

Library::~Library()
{
}
