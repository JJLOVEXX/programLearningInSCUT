// File Test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//
//void print(const string const , const string const ,const string const ,int ,int);
//
//void print(const string const name1, const string const name2, 
//	const string const name3, int date1, int date2)
//{
//	cout << name1 <<" "<< name2<<" "<< name3 <<" "<< date1<<" "<< date2;
//	cout << endl;
//}

int main()
{
	ofstream outFile("Test.txt",ios::out);
	if (outFile.bad())
	{
		cerr << "The file is not exist." << endl;
	}
	string name1,name2,name3;
	int date1, date2;
	while (cin>>name1>>name2>>name3>>date1>>date2)
	{
		outFile << name1 << " " << name2 << " " << name3 << " " << date1 << " " << date2;
		break;
	}

	ifstream inFile("Test.txt", ios::in);

	if (inFile.bad())
	{
		cerr << "The file is not exist." << endl;
	}
	
	while (inFile >> name1 >> name2>> name3>> date1>> date2)
	{
		cout << name1 << " " << name2 << " " << name3 << " " << date1 << " " << date2;
		cout << endl;
	}
	/*ofstream outFile("Test.txt", ios::out);
	if (outFile.bad())
	{
		cerr << "The file is not exist." << endl;
	}
	string name1, name2, name3;
	int date1, date2;
	while (cin >> name1 >> name2 >> name3 >> date1 >> date2)
	{
		outFile << name1 << " " << name2 << " " << name3 << " " << date1 << " " << date2 << endl;
		break;
	}

	ifstream inFile("Test.txt", ios::in);

	if (inFile.bad())
	{
		cerr << "The file is not exist." << endl;
	}
	while (inFile >> name1 >> name2 >> name3 >> date1 >> date2)
	{
		cout << name1 << " " << name2 << " " << name3 << " " << date1 << " " << date2;
	}*/
}
