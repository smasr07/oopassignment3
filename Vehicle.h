
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
class Vehicle{
protected:
    string brand;
    int year;
public:
    Vehicle();
    Vehicle(string  brand, int year);

    virtual ~Vehicle();
    virtual string getInfo() = 0;
};
#endif //VEHICLE_H
