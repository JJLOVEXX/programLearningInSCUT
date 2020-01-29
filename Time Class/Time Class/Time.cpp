#include "stdafx.h"
#include "Time.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<ctime>


using namespace std;

Time::Time()
{
	hour = ((time(0) / 3600) + 8) % 24;
	//time（0）返回的是从格林尼治标准时间1970年1月1日0时起到现在的秒数
	minute = (time(0) / 60) % 60;
	second = time(0) % 60;
}
void Time::setTime(int h, int m, int s)
{
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
		throw invalid_argument("hour,minute and/or second was out of range");
}
void Time::printUniversal()const
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ";" << setw(2) << second;
}
void Time::printStandard()const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
}
Time::~Time()
{
}
