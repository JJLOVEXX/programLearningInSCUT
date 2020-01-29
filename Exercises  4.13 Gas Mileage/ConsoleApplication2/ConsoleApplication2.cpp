// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>//包括iostream这个头文件
#include<iomanip>
using namespace std;//使用std这个命名空间

int main()
{
	double milesdriven=0;//定义里程数
	double gallonsused = 0;//定义汽油用量
	double MPGthistrip = 0;//本次MPG
	double TotalMPG = 0;//总MPG
	double Totalmilesdriven = 0;//总里程
	double Totalgallonsused = 0;//总汽油用量

	cout << "\nGas driven\n";
	cout << "\nmiles driven is(Enter -1 to quit) \n";
	cin >> milesdriven;//输入里程数
	
while (milesdriven != -1)
{
	cout << "gallons used is\n";
	cin >> gallonsused;//输入汽油用量
	//计算本次MPG
	MPGthistrip = milesdriven / gallonsused;

	cout <<setprecision(6)<<fixed<< "MPGthistrip is" << "  " << MPGthistrip;
	cout << endl;

	Totalmilesdriven = Totalmilesdriven + milesdriven;//计算总里程
	cout << endl;
	Totalgallonsused = Totalgallonsused + gallonsused;//计算汽油总量
	cout << endl;

	cout << "Totalmilesdriven is\n" << Totalmilesdriven;
	cout << endl;
	cout << "Totalgallonsused is\n" << Totalgallonsused;
	cout<<endl;
	TotalMPG = Totalmilesdriven / Totalgallonsused;//计算总MPG
    cout << "Total MPG is" << "  " << TotalMPG;
	cout << setprecision(6) << fixed;
	cout << endl;
	
	cout << "\nGas driven\n";
	cout << "\nmiles driven is(Enter -1 to quit) \n";
	cin >> milesdriven;//输入里程数
	
}
    system("pause");
	return 0;                         
}

