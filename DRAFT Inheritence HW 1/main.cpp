#include <iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    string mfg;
    int year;
    int numDoor;
    int towCap;
    cout << "***o--o Vehicle Info o--o***" << endl;

    cout << endl << "Enter Vehicle Info" << endl;
    cout << "Manufacturer:  ";
    getline(cin, mfg);

    cout << "Year: ";
    cin >> year;
    cin.ignore();

    Vehicle vehicle(mfg, year);
    vehicle.displayInfo();

    cout << endl << "Enter Car Info" << endl;
    cout << "Manufacturer: ";
    getline(cin, mfg);

    cout << "Year: ";
    cin >> year;
    cin.ignore();

    cout << "Number of doors: ";
    cin >> numDoor;
    cin.ignore();

    Car car(mfg, year, numDoor);
    car.displayInfo();

    cout << endl << "Truck" << endl;
    cout << "Manufacturer: ";
    getline(cin, mfg);

    cout << "Year: ";
    cin >> year;
    cin.ignore();

    cout << "Towing capacity: ";
    cin >> towCap;
    cin.ignore();

    Truck truck(mfg, year, towCap);
    truck.displayInfo();

    cout << endl;
    return 0;
}