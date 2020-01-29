#pragma once

class Catalogue
{
public:
	Catalogue(unsigned int);
	static unsigned int setbooksInTotal(unsigned int);
	unsigned int getBooksNumberInCatalogue()const;
	void displayIndividualBookRecords()const;
	~Catalogue();
private:
	static unsigned int booksInTotal;
};

