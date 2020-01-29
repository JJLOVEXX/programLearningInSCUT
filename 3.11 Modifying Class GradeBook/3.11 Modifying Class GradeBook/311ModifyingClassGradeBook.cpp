#include "stdafx.h"
#include <iostream>//包括iostream这个头文件
#include<string>
using namespace std; //使用std这个命名空间

class GradeBook
{
public:
	explicit GradeBook(string name)//构造函数
		:courseInstructorName(name)//初始化
	{

	}

	void setcourseInstructorName(string name)//set函数
	{
		courseInstructorName = name;
	}


	string getcourseInstructorName()const//get函数
	{
		return courseInstructorName;
	}


	void displayMessage()const
	{
		cout << "This course is presented by""\n" << getcourseInstructorName() << "!" << endl;
	}
private:
	string courseInstructorName;//数据成员
};


int main()
{
	GradeBook gradeBook1("John");//实例化

	cout << "gradeBook1      " << gradeBook1.getcourseInstructorName();

	system("pause");
}