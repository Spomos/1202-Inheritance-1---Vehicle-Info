#ifndef TRUCK_CPP
#define TRUCK_CPP
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(string m, int y, int t) : towing_capacity(t), Vehicle(m, y) {
}
//getters and setters
int Truck::getTowing_capacity() {
    return towing_capacity;
}
void Truck::setTowing_capacity(int t) {
    this->towing_capacity = t;
}

void Truck::displayInfo() {
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towing_capacity << " lbs" << endl;
}
#endif