// Book Management System2.0.cpp: 定义控制台应用程序的入口点。
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
	for (int i = 0; i < books; i++)
	{
		string id;
		cin >> id;
		BookRecord mybook(i+1,id);
		book.push_back(mybook);
	}
	for (int i = 0; i < books; i++)
	{
	    book[i].display();
	}
    return 0;
}

