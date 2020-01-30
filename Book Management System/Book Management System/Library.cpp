#include "stdafx.h"
#include "Library.h"
#include "BookRecord.h"
#include "Borrower.h"
#include "Catalogue.h"
#include<iostream>

using namespace std;

Library::Library(unsigned int &number)
{
	setbooksOnLoan(number);
}

void Library::displayBooksOnLoan() const
{
	cout << "Total number of books on loan:  ";
	cout << booksOnLoan << endl;
}

void Library::displayBooksInTotal() const
{

}

void Library::displayIndividualBookRecord() const
{
}

void Library::displayBorrowersNumber() const
{
	cout << "Total number of borrowers:  ";
	cout << borrowers << endl;
}

void Library::displayIndividualBorrowerRecord() const
{
}

void Library::setbooksOnLoan(unsigned int books)
{
	booksOnLoan = books;
}


Library::~Library()
{
}
