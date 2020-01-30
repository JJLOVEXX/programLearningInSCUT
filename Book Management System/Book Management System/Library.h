#pragma once
class BookRecord;
class Borrower;
class Catalogue;
class Library
{
public:
	Library(unsigned int &);
	void displayBooksOnLoan()const;
	void displayBooksInTotal()const;
	void displayIndividualBookRecord()const;
	void displayBorrowersNumber()const;
	void displayIndividualBorrowerRecord()const;
	void setbooksOnLoan(unsigned int);
	~Library();
private: 
	unsigned int booksOnLoan;
	unsigned int borrowers;
};

