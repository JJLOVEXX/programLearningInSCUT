#pragma once
#include<string>
class Person
{
public:
	Person();
	unsigned int getAge()const;
	std::string getName()const;
	~Person();
protected:
	unsigned int age;
	std::string name;
};

