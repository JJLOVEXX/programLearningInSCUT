// Time Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Time.h"
#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	Time t;
	cout << "The initial universal time is: ";
	t.printUniversal();
	cout<< "\nThe initial standard time is: ";
	t.printStandard();

	t.setTime(13, 27, 6);

	cout << "\n\nUniversal time after setTime is: ";
	t.printUniversal();
	cout << "\nStandard time after setTime is: ";
	t.printStandard();
    return 0;
	system("pause");
}

