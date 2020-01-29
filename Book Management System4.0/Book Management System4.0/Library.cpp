#include "stdafx.h"
#include "Library.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

Catalogue::Catalogue()
{
}

Catalogue::~Catalogue()
{
}
vector<string>ID;
Borrower::Borrower(unsigned int number, string str, unsigned int books)
{
	setBorrowerNumber(number);
	setBorrowerID(str);
	setBookLoaned(books);
	for (size_t i = 0; i < books; i++)
	{
		string id;
		cin >> id;
		setbookIDLoaned(id);
		ID.push_back(id);
	}
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

void Borrower::setbookIDLoaned(string id)
{
	bookIDLoaned = id;
}

string Borrower::getbookIDLoaned() const
{
	return string(bookIDLoaned);
}

void Borrower::display()
{
	cout << getBorrowerID() << " " << getBookLoaned() << endl;
	for (size_t i = 0; i < getBookLoaned(); i++)
	{
		cout << ID[i] << " ";
	}
}

Borrower::~Borrower()
{
}

BookRecord::BookRecord(unsigned int number, string str,string name, string first, string last, string y, unsigned int copies)
{
	setbookTypesNumber(number);
	setBookID(str);
	setBookTitle(name);
	setauthorFirstName(first);
	setauthorLastName(last);
	setpublicationYear(y);
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
void BookRecord::setBookTitle(string name)
{
	bookTitle = name;
}
string BookRecord::getBookTitle() const
{
	return string(bookTitle);
}
void BookRecord::setpublicationYear(string year)
{
	if (year[0] != '1'&& year[0] != '2')
	{
		throw invalid_argument("The publication year should start with a 1 or 2");
	}
	else
	{
		publicationYear = year.substr(0, 4);
	}
}

string BookRecord::getpublicationYear() const
{
	return string(publicationYear);
}

void BookRecord::setauthorFirstName(string firstName)
{
	authorFirstName = firstName;
}

string BookRecord::getauthorFirstName() const
{
	return string(authorFirstName);
}

void BookRecord::setauthorLastName(string lastName)
{
	authorLastName = lastName;
}

string BookRecord::getauthorLastName() const
{
	return string(authorLastName);
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
	cout << getBookID() << endl;
	cout << getBookCopies() << endl;
	cout << getauthorFirstName() << "  " << getauthorLastName() << endl;
	cout << getpublicationYear();
	cout << endl;
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

