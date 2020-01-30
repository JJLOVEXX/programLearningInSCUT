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

Borrower::Borrower(unsigned int number, string str, unsigned int books)
{
	setBorrowerNumber(number);
	setBorrowerID(str);
	setBookLoaned(books);
}

Borrower::Borrower()
{
}

void Borrower::setBorrowerNumber(unsigned int number)
{
	bookBorrowerNumber = number;
}

unsigned int Borrower::getBorrowerNumber() const
{
	return bookBorrowerNumber;
}

void Borrower::setBorrowerID(string id)
{
	if ((id.size()) > 5 || ((id.size() < 5) && (id.size() > 0)))
	{
		throw invalid_argument("The borrower ID should consist of 5 digits.");
		borrowerID = id.substr(0, 5);
	}
	else
	{
		borrowerID = id;
	}
}

string Borrower::getBorrowerID() const
{
	return string(borrowerID);
}

void Borrower::setBookLoaned(unsigned int number)
{
	BookLoaned = number;
}

unsigned int Borrower::getBookLoaned() const
{
	return BookLoaned;
}

void Borrower::display()
{
	cout << getBorrowerID() << " " << getBookLoaned() << endl;
}

Borrower::~Borrower()
{
}

BookRecord::BookRecord(unsigned int number, string str, unsigned int copies)
{
	setbookTypesNumber(number);
	setBookID(str);
	setBookCopies(copies);
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

void BookRecord::setBookCopies(unsigned int copies)
{
	bookCopies = copies;
}

unsigned int BookRecord::getBookCopies() const
{
	return bookCopies;
}

void BookRecord::display()
{
	cout << getBookID() <<" "<<getBookCopies()<< endl;
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
