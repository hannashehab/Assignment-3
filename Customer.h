#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
using namespace std;

class Customer : public Person //derived class Customer that inherits from base class Person
{
private:
	string MechanicID; //declaring the mechanicID of type string
	appointment* app; //struct of type appointment to indicate the customer’s appointment with the mechanic

public:
	void setMechanicID(string MID); //function to set the mechanicID of type void as it doesnt return 

	void setappointment(appointment app); //function to set the appointment of type void as it doesnt return 

	bool operator<(const Customer& C); //overloading the > operator

	bool operator>(const Customer& C); //overloading the < operator

	bool operator==(const Customer& C); //overloading the == operator

};
#endif 
