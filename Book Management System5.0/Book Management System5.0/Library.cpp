#include "stdafx.h"
#include "Library.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

Catalogue::Catalogue()
{
	int n = 0;
	cout << "Do you want to register books?(1 for yes,2 for no)" << endl;
	while (cin >> n)
	{
		if (n == 1)
		{
			unsigned int books = 0;
			cin >> books;
			setbooksOnLoan(books);
			vector<BookRecord> book;
			unsigned int bookCopies = 0;
			for (int i = 0; i < books; i++)
			{
				string id;
				cin >> id;
				string bookTitle;
				cin >> bookTitle;
				string first, last;
				cin >> first >> last;
				string year;
				cin >> year;
				int copies;
				cin >> copies;
				BookRecord mybook(i + 1, id, bookTitle, first, last, year, copies);
				book.push_back(mybook);
				bookCopies += copies;
			}
			for (int i = 0; i < books; i++)
			{
				cout << endl;
				book[i].display();
			}
			cout <<"The  total number of books: "<< bookCopies << endl;
		}
		else
		{
			break;
		}
		cout << endl;
		unsigned int borrowerNumber = 0;
		cin >> borrowerNumber;
		vector<Borrower> borrower;
		unsigned int booksLoaned = 0;
		for (int i = 0; i < borrowerNumber; i++)
		{
			string id;
			cin >> id;
			string first, last;
			cin >> first;
			cin >> last;
			int books;
			cin >> books;
			booksOnLoan -= books;
			Borrower myborrower(i + 1, id, first,last,books);
			borrower.push_back(myborrower);
			booksLoaned += books;
		}
		for (int i = 0; i < borrowerNumber; i++)
		{
			cout << endl;
			borrower[i].display();
		}
		cout << endl;
		cout <<"The total number of loaned books: " <<booksLoaned << endl;
	}
}

void Catalogue::setbooksOnLoan(unsigned int books)
{
	booksOnLoan = books;
}

unsigned int Catalogue::getbooksOnLoan() const
{
	return booksOnLoan;
}

void Catalogue::display() const
{
	cout << "The number of books on loan: " << endl;
	cout << getbooksOnLoan();
}

Catalogue::~Catalogue()
{
}

vector<string>ID;
Borrower::Borrower(unsigned int number,string str, string first, string last, unsigned int books)
{
	setBorrowerNumber(number);
	setBorrowerID(str);
	setBorrowerFirstName(first);
	setBorrowerLastName(last);
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

void Borrower::setBorrowerFirstName(string first)
{
	firstName = first;
}

void Borrower::setBorrowerLastName(string last)
{
	lastName = last;
}

string Borrower::getBorrowerLastName() const
{
	return string(lastName);
}

string Borrower::getBorrowerFirstName() const
{
	return string(firstName);
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
	cout << "Borrower " << bookBorrowerNumber << endl;
	cout << "Borrower ID: " << getBorrowerID() << endl;
	cout << "Number of loaned books :" << getBookLoaned() << endl;
	cout << "IDs of books on loan :";
	for (size_t i = 0; i < getBookLoaned(); i++)
	{
		cout << ID[i] << " ";
	}
}

Borrower::~Borrower()
{
}

BookRecord::BookRecord(unsigned int number, string str, string name, string first, string last, string y, unsigned int copies)
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
	cout << "BookRecord: " << getbookTypesNumber() << endl;
	cout << "BookID: " << getBookID() << endl;
	cout << "Title: " << getBookTitle() << endl;
	cout << "Author: " << getauthorFirstName() << "  " << getauthorLastName() << endl;
	cout << "Year pubished:" << getpublicationYear() << endl;
	cout << "Total number of copies: " << getBookCopies() << endl;
	cout << endl;
}

BookRecord::~BookRecord()
{
}

Library::Library()
{
	Catalogue catalogue;
}

Library::~Library()
{
}


