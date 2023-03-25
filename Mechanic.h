#pragma once
#ifndef MECHANIC_H
#define MECHANIC_H
#include "Person.h"
using namespace std;

class Mechanic : public Person //derived class mechanic that inherits from base class person
{
private:
	int counter; //declaring the number of appointments the mechanic has on that day to type int
	appointment app[100]; //creating an array of struct (appointment) that indicated the times of the mechanic is booked
public:
	bool isAvailable(appointment app); //a function that return true if the mechanic is available at a certain time

	void setcounter(int c); //setter function to set the number of appointments of type void as it doesnt return

	void setappointment(appointment app[], int size); //function that sets the appointment by recieving the array of struct and size of array

	int getcounter(); //function that returns the number of appointments

	appointment* getappointment(); //function that returns the struct 

};
#endif // !MECHANIC_H
