#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
//Prototyping and declaration
class Person
{
protected://protected so that it can be inherited  
	string name; //declaring name to type string
	string ID; //declaring ID to type string
	int age; //declaring age to type int
public:

	Person(); //default constructor

	void setname(string n); //function to set the name of type void as it does not return

	void setID(string identification); //function to set the ID of type void as it does not return 

	void setage(int a); //function to set the age of type void as it does not return 

	string getname(); //function to return the name which is of type string

	string getID(); //function to return the ID which is of type string

	int getage(); //function to return the age which is of type int

	void printinfo(); //function to ouput or display the name, ID and age of the person

	struct appointment; //struct appointment that has two member variables (hours and minutes) of type int

};

#endif // PERSON_H