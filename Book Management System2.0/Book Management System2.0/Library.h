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
	Borrower();
	~Borrower();
};
class BookRecord
{
public:
	BookRecord(unsigned int,string str);
	BookRecord();
	void setbookTypesNumber(unsigned int);
	unsigned int getbookTypesNumber()const;
	void setBookID(string);
	string getBookID()const;
	void display();
	~BookRecord();
private:
	unsigned int bookTypesNumber;
	string bookID;
};
class Library
{
public:
	Library();
	~Library();
};

