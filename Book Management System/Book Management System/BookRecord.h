#pragma once
#include<string>
using namespace std;

class BookRecord
{
public:
	BookRecord(string &,string &,string &,string &);
	BookRecord();
	~BookRecord();
	void setBookID(string &);
	string getBookID()const;
	void setpublicationYear(string &);
	string getpublicationYear()const;
	void setauthorFirstName(string &);
	string getauthorFirstName()const;
	void setauthorLastName(string &);
	string getauthorLastName()const;
	void displayBookRecordData()const;
private:
	string bookID;
	string bookTitle;
	string authorFirstName;
	string authorLastName;
	string publicationYear;
	unsigned int bookCopies;
	unsigned int bookCopiesForLoan;
};

