#include <string>
using namespace std;
class Catalogue;
class Borrower;
class BookRecord;
class Catalogue
{
public:
	Catalogue();
	~Catalogue();
private:

};
class Borrower
{
public:
	Borrower(unsigned int, string str, unsigned int);
	Borrower();

	void setBorrowerNumber(unsigned int);
	unsigned int getBorrowerNumber()const;

	void setBorrowerID(string);
	string getBorrowerID()const;

	void setBookLoaned(unsigned int);
	unsigned int getBookLoaned()const;

	void display();
	~Borrower();
private:
	unsigned int bookBorrowerNumber;
	unsigned int BookLoaned;
	string borrowerID;
};
class BookRecord
{
public:
	BookRecord(unsigned int, string str, unsigned int);
	BookRecord();

	void setbookTypesNumber(unsigned int);
	unsigned int getbookTypesNumber()const;

	void setBookID(string);
	string getBookID()const;

	void setBookCopies(unsigned int);
	unsigned int getBookCopies()const;

	void display();
	~BookRecord();
private:
	unsigned int bookTypesNumber;
	unsigned int bookCopies;
	string bookID;
};
class Library
{
public:
	Library();
	~Library();
};

