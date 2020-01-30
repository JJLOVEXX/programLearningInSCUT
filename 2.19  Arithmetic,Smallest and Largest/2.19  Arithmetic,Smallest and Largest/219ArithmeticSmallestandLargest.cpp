#include "stdafx.h"
#include<iostream> //包括iostream这个头文件
using namespace std;//使用std这个命名空间

int main()
{
	int x, y, z,sum,ave,pro,sma,lar;//定义变量
	cout << "Input three different integers:" << "   \n";//提示用户输入三个整数
	cin >> x >> y >> z;
	
	
	sum = x + y + z;//计算和
	ave = sum / 3;//计算平均
	pro = x*y*z;//计算积


	cout << "Sum is" << " \n" << sum;//输出和
	cout << "\nAverage is" << "   \n" << ave;//输出平均
	cout << "\nProduct is" << "   \n"<<pro;//输出积
	
	//比较三个整数并输出最大最小值
	if (x != y != z)

	{
		if (x > y)
		{
			if (x > z)
			{
				if (y > z)
					cout << "\nSmallest is" << "  \n" << z;
				else
					cout << "\nSmallest is" << "   \n" << y;

				cout << "\nLargest is" << "  \n" << x;
			}
			else
			{
				cout << "\nLargest is" << "   \n" << z;
				cout << "\nSmallest is" << "  \n" << y;
			}
		 }
		else
		{
			if (y > z)
			{
				if (x > z)
				{
					cout << "\nSmallest is" << "  \n" << z;
				}
				else
				{
					cout << "\nSmallest is" << "   \n" << x;
				}
				cout << "\nLargest is" << " \n " << y;
			}
			else
				cout << "\nLargest is" <<"   \n"<< z;
			    cout << "\nSmallest is" << "  \n" << x;
		}
	
	}
	else
		cout;
	
	system("pause");
	return 0;
}

