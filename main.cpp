//Hanna Mostafa
//900222857
//Assignment 3

#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"
#include <fstream>
using namespace std;

const int Maxm = 20; //maximum number of mechanics
int main() {
    ifstream inFile("mechanics.txt"); //open the file

    Mechanic mechanics[Maxm]; 
    int numMechanics; //declaring the  number of mechanics to type int
    cout << "Enter number of mehanics: ";
    cin >> numMechanics; //lets the user enter the  number of mechanics
    
    while (numMechanics < Maxm) //while the number of mechanics the user entered is less than the maximum number of mechanics
    {
        string name, ID; //declaring the name and ID to type string
        int age; //declaring the age to type int
        getline(inFile, name); //reads the name, age, and ID for the current mechanic
        inFile >> age >> ID;

        // initialize current mechanic object with read data
        mechanics[numMechanics].setname(name); 
        mechanics[numMechanics].setage(age);
        mechanics[numMechanics].setID(ID);

        
        int numAppointments;//declares the number of appointments to type int
        inFile >> numAppointments; //reads the number of appointments of the current mechanic

        // read appointment times for current mechanic
        for (int i = 0; i < numAppointments; i++) {
            int hours, minutes;
            inFile >> hours >> minutes;
            mechanics[numMechanics].setappointment(, i);
        }

        numMechanics++; //increment the counter for the number of mechanics
    }

    inFile.close();

    // print mechanics and their appointments
    for (int i = 0; i < numMechanics; i++) {
        cout << "Mechanic " << i + 1 << ": " << mechanics[i].getname()
            << " (age " << mechanics[i].getage() << ", ID " << mechanics[i].getID()
            << ")" << endl;
        cout << "Appointments: ";
        if (mechanics[i].getcounter() == 0) {
            cout << "none" << endl;
        }
        else {
            for (int j = 0; j < mechanics[i].getcounter(); j++) {
                t mechanics[i].getappointment(j);
                cout << t.hours << ":" << t.minutes << " ";
            }
            cout << endl;
        }
    }

    return 0;
}