
#include "stdafx.h"



#include <iostream>
#include<string>

using namespace std;
class GradeBook
{
public:
	GradeBook(string name, string teacher)
	{
		setCourseName(name);
		setTeacherName(teacher);
	}
	void setCourseName(string name)
	{
		coursename = name;
	}
	void setTeacherName(string teacher)
	{
		teachername = teacher;
	}
	string getCourseName()
	{
		return coursename;
	}
	string getTeacherName()
	{
		return teachername;
	}
	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << "This course is presented by:" << getTeacherName() << endl;
	}


private:
	string coursename;
	string teachername;
};
int main()
{
	string nameOfCourse;
	string nameofTeacher;
	GradeBook myGradeBook;
	cout << "initial coursename is:" << myGradeBook.getCourseName() << endl;
	cout << "\nPlease enter the coursename:" << endl;
	cout << "\nPlease enter the teachername:" << endl;
	getline(cin, nameOfCourse);
	getline(cin, nameofTeacher);
	myGradeBook.setCourseName(nameOfCourse);
	myGradeBook.setTeacherName(nameofTeacher);
	cout << endl;
	myGradeBook.displayMessage();
}