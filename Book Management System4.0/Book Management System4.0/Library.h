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
	Borrower(unsigned int, string, unsigned int);
	Borrower();

	void setBorrowerNumber(unsigned int);
	unsigned int getBorrowerNumber()const;

	void setBorrowerID(string);
	string getBorrowerID()const;

	void setBookLoaned(unsigned int);
	unsigned int getBookLoaned()const;

	void setbookIDLoaned(string);
	string getbookIDLoaned()const;

	void display();
	~Borrower();
private:
	unsigned int bookBorrowerNumber;
	unsigned int BookLoaned;
	string borrowerID;
	string bookIDLoaned;
};
class BookRecord
{
public:
	BookRecord(unsigned int, string,string,string,string,string,unsigned int);
	BookRecord();

	void setbookTypesNumber(unsigned int);
	unsigned int getbookTypesNumber()const;

	void setBookID(string);
	string getBookID()const;

	void setBookTitle(string);
	string getBookTitle()const;

	void setBookCopies(unsigned int);
	unsigned int getBookCopies()const;

	void setpublicationYear(string);
	string getpublicationYear()const;

	void setauthorFirstName(string);
	string getauthorFirstName()const;

	void setauthorLastName(string);
	string getauthorLastName()const;

	void display();
	~BookRecord();
private:
	unsigned int bookTypesNumber;
	unsigned int bookCopies;
	string bookID;
	string bookTitle;
	string authorFirstName;
	string authorLastName;
	string publicationYear;
};
class Library
{
public:
	Library();
	~Library();
};



