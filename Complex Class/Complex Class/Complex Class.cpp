// Complex Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Complex.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	Complex complex;
	complex.add(a, b, c, d);
	complex.print();
	complex.subtract(a, b, c, d);
	complex.print();
    return 0;
}

