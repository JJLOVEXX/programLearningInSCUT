#include "stdafx.h"
#include<iostream>//包括iostream这个头文件
#include<string>
using namespace std;//使用std这个命名空间

class Date//创建Date类
{

public:

	//构造函数
	explicit Date::Date(int y, int m, int d) :year(y), month(m), day(d)//初始化
	{
		setmonth(m);
	}
    void setyear(int y)
		{
			year = y;
		}

	int getyear()const
		{
			return year;
		}

	void setmonth(int m)
	{
		if (m >= 1 && m <= 12)
			{
				month = m;
			}
		else
			{
				month = 1;
			}
	}//判断month是否符合实际

	int getmonth()const
	{
		return month;
	}
	void setday(int d)
	{
		day = d;
	}
	int getday()const
	{
		return day;
	}

	void displayDate()
	{
		cout << "The date is :    \n" << "Year/ Month/ Day\n" << year << "/" << month << "/" << day;
	}//输出年月日
private:
	int year;
	int month;
	int day;
     };//数据成员

int main()
{
	Date date1(2017, 10, 29);
	Date date2(2017,100, 30);

	//创建两个对象
	cout << "The date is :    " << date1.getyear ()<<"/"<< date1.getmonth ()<< "/" << date1.getday()
	     << "\nThe date is :    " << date2.getyear() << "/" << date2.getmonth() << "/" << date2.getday();
	
	system("pause");
}