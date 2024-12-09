#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;
class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(string manufacturer, int yearBuilt);

    string getManufacturer();
    void setManufacturer(string manufacturer);

    int getYearBuilt();
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo();
};

#endif