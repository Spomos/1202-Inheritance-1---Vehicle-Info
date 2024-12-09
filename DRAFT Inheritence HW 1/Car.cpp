#ifndef CAR_CPP
#define CAR_CPP
#include "Car.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Car::Car(string manufacturer, int yearBuilt, int num) : numDoors(num), Vehicle(manufacturer, yearBuilt) {
}
//getters and setters
int Car::getNumDoors() {
    return numDoors;
}
void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() {
    cout << endl << "Vehicle Information: " << endl;
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Year Built: " << getYearBuilt() << endl;
    cout << "Doors: " << numDoors << endl;
}

#endif