#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//定义五个计数器
	int number = 0;//定义产品号码并初始化
	double sum = 0;//定义总收入

	cout << "Please enter a right number(or -1 to quit):";
	cin >> number;//输入产品号码

	while(number!=-1)//限制产品号码输入
	{
	switch (number)//多路选择语句
		{
		case 1:
			++count1;
			break;
		case 2:
			++count2; 
			break;
		case 3:
			++count3;
			break;
		case 4:
			++count4;
			break;
		case 5 :
			++count5;
			break;
		//意外情况处理
			default:
				cout << "You enter a wrong number"
					<< "\nPlease enter again       ";
			break;
			
		}

		cout << "\nPlease enter a right number(or -1 to quit):";
		cin >> number;

	}

	cout << count1 << " " << count2 << " " << count3 << " " << count4 << " " << count5 << endl;//输出计数器
	sum = count1 * 2.98 + count2 * 4.50 + count3 * 9.98 + count4 * 4.49 + count5 * 6.87;//计算总收入
	cout << "The total retail value of all products is:   " << sum;//输出总收入

	system("pause");
    return 0;
}

