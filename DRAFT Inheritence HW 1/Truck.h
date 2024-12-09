#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Truck : public Vehicle {
private:
    int towing_capacity;

public:
    Truck(string manufacturer, int yearBuilt, int towing_capacity);
    //getters and setters
    int getTowing_capacity();
    void setTowing_capacity(int numDoors);

    void displayInfo();
};

#endif