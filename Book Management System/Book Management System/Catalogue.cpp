#include "stdafx.h"
#include "Catalogue.h"
#include"BookRecord.h"
#include<vector>
#include<iostream>

using namespace std;

Catalogue::Catalogue(unsigned int number)
{
	setbooksInTotal(number);
	vector<BookRecord>books(booksInTotal);
	for (size_t i = 0; i < booksInTotal; i++)
	{
	
	}
}

unsigned int Catalogue::setbooksInTotal(unsigned int books)
{
	booksInTotal = books;
	return booksInTotal;
}


unsigned int Catalogue::getBooksNumberInCatalogue() const
{
	return unsigned int(booksInTotal);
}

void Catalogue::displayIndividualBookRecords() const
{

}


Catalogue::~Catalogue()
{
}
