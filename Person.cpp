
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
//All comments are in the .h file
int main()
{
	Person::Person() 
	{
		name = ID = " ";
		age = 0;
	}
	void Person::setname(string n) 
	{
		name = n;
	}
	void Person::setID(string identification)  
	{
		ID = identification;
	}
	void Person::setage(int a)  
	{
		age = a;
	}
	string Person::getname() 
	{
		return name;
	}
	string Person::getID() 
	{
		return ID;
	}
	int Person::getage() 
	{
		return age;
	}
	void Person::printinfo() 
	{
		cout << "Name: " << name << endl;
		cout << "ID: " << ID << endl;
		cout << "Age: " << age << endl;
	}
	struct appointment 
	{
		int hours; 
		int minutes; 
	};
	return 0;
}