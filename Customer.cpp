

#include <iostream>
#include <string>
#include "Customer.h"
#include "Person.h"
using namespace std;
//All comments are in the .h file
int main()
{
    void Customer::setMechanicID(string MID)  
	{
		MechanicID = MID;
	}
	void Customer::setappointment(appointment app) 
	{
		this->app = app;
	}
	bool Customer::operator<(const Customer& C) 
	{
		if (app.hours < C.app.hours) //if the hours of the appointment is less than that of the customer
		{
			return true;
		}
		else if (app.hours == C.app.hours && app.minutes < C.app.minutes) //if hours are equal, then minutes of appointment must be less than that of the customer C 
		{
			return true;
		}
		else
			return false;  //if both arguments are no satisfied, return false
	}
	bool Customer::operator>(const Customer& C) 
	{
		if (app.hours > C.app.hours) //if the hours of the appointment is greater than that of the customer
		{
			return true;
		}
		else if (app.hours == C.app.hours && app.minutes > C.app.minutes) //if hours are equal, then minutes of appointment must be greater than that of the customer C
		{
			return true;
		}
		else
			return false;  //if both arguments are no satisfied, return false
	}
	bool Customer::operator==(const Customer& C) 
	{
		if (app.hours == C.app.hours && app.minutes == C.app.minutes) //if number of hours and minutes of the appointment is equal to that of the customer
		{
			return true;
		}
		else
			return false; //if not, return false
	}
};