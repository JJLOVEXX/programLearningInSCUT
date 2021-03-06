// Package Inheritance Hierarchy.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "package.h"
#include "TwoDayPackage.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	string sn, rn, sa, ra, sc, rc, ss, rs, sz, rz;
	double wio=0.0,cpo=0.0;
	cout << "Please input a sender name: " << endl;
	cin >> sn;
	cout << "Please input a recipient name: " << endl;
	cin >> rn;
	cout << "Please input a sender address: " << endl;
	cin >> sa;
	cout << "Please input a recipient address: " << endl;
	cin >> ra;
	cout << "Please input a sender city: " << endl;
	cin >> sc;
	cout << "Please input a recipient city: " << endl;
	cin >> rc;
	cout << "Please input a sender state: " << endl;
	cin >> ss;
	cout << "Please input a recipient state: " << endl;
	cin >> rs;
	cout << "Please input a sender ZIP code: " << endl;
	cin >> sz;
	cout << "Please input a recipient ZIP code: " << endl;
	cin >> rz;
	Package package(sn,rn,sa,ra,sc,rc,ss,rs,sz,rz);
	
	package.setSenderName(sn);

	package.setSenderAddress(sa);

	package.setSenderCity(sc);

	package.setSenderState(ss);

	package.setSenderZIPCode(sz);

	package.setRecipientName(rn);

	package.setRecipientAddress(ra);

	package.setRecipientCity(rc);

	package.setRecipientState(rs);

	package.setRecipientZIPCode(rz);

	package.getfunction();

	cout << "The weight(in ounces): " << endl;
	cin >> wio;
	cout << "The cost per ounce: " << endl;
	cin >> cpo;

	package.calculateCost(wio,cpo);

	package.printCost();
	
	TwoDayPackage TwoDayPackage(sn, rn, sa, ra, sc, rc, ss, rs, sz, rz);
	TwoDayPackage.setSenderName(sn);

	TwoDayPackage.setSenderAddress(sa);

	TwoDayPackage.setSenderCity(sc);

	TwoDayPackage.setSenderState(ss);

	TwoDayPackage.setSenderZIPCode(sz);

	TwoDayPackage.setRecipientName(rn);

	TwoDayPackage.setRecipientAddress(ra);

	TwoDayPackage.setRecipientCity(rc);

	TwoDayPackage.setRecipientState(rs);

	TwoDayPackage.setRecipientZIPCode(rz);

	TwoDayPackage.getfunction();

	cout << "The weight(in ounces): " << endl;
	cin >> wio;
	cout << "The cost per ounce: " << endl;
	cin >> cpo;

	TwoDayPackage.calculateCost(wio, cpo);

	TwoDayPackage.printCost();

	double sff=0.0;

	cout << "Please input a flat fee: " << endl;
	cin >> sff;
	TwoDayPackage.setFlatFee(sff);
	cout << "The two day package cost is: " << endl;
	cout<< TwoDayPackage.getCost();

	system("pause");
    return 0;
}

