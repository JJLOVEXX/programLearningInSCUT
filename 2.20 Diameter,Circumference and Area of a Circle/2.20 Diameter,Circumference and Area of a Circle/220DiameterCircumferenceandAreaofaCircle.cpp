#include "stdafx.h"
#include<iostream>//包括iostream这个头文件
using namespace std;//使用std这个命名空间

int main()
{
	double d, c, s, r;//定义变量
	cout << "please input the radius of a circle:\n";//提示用户输入
	cin >> r;

	d = 2 * r;//计算直径
	c = 2 * 3.14159*r;//计算周长
	s = 3.14159*r*r;//计算面积

	cout << "\nThe Diameter is" << "    "<<d<<"\n";//输出直径
	cout << "\nThe Circumference is" << "   " << c << "\n";//输出周长
	cout << "\nThe Area of a Circle is" << "    " << s << "\n";//输出面积

	system("pause");
	return 0;
}

