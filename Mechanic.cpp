#include "Mechanic.h"
#include "Person.h"
using namespace std;
//All comments are in the .h file
int main()
{
	bool Mechanic::isAvailable(appointment app) 
	{
		for (int i = 0; i < counter; i++)
		{
			if (app.hours == app[i].hours && app.minutes == app[i].minutes)
				return false;
		}
		return true;
	}
	void Mechanic::setcounter(int c) 
	{
		counter = c;
	}
	void Mechanic::setappointment(appointment app[], int size) 
	{
		for (int i = 0; i < size; i++)
		{
			this->app[i] = app[i];
		}
	}
	int Mechanic::getcounter() 
	{
		return counter;
	}
	appointment* Mechanic::getappointment()  
	{
		return app;
	}
}