// Book Management system3.0.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"Library.h"
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	unsigned int books = 0;
	cin >> books;
	vector<BookRecord> book;
	unsigned int bookCopies=0;
	for (int i = 0; i < books; i++)
	{
		string id;
		cin >> id;
		int copies;
		cin >> copies;
		BookRecord mybook(i + 1, id,copies);
		book.push_back(mybook);
		bookCopies += copies;
	}
	for (int i = 0; i < books; i++)
	{
		book[i].display();
	}
	cout << bookCopies << endl;

	unsigned int borrowerNumber = 0;
	cin >> borrowerNumber;
	vector<Borrower> borrower;
	unsigned int booksLoaned = 0;
	for (int i = 0; i < borrowerNumber; i++)
	{
		string id;
		cin >> id;
		int books;
		cin >> books;
		Borrower myborrower(i + 1, id, books);
		borrower.push_back(myborrower);
		booksLoaned += books;
	}
	for (int i = 0; i < borrowerNumber; i++)
	{
		borrower[i].display();
	}
	cout << booksLoaned << endl;
	return 0;
}


