
#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "LandVehicle.h"
using namespace std;
class Truck : public LandVehicle {
protected:
    double loadCapacity;
public:
    Truck();
    Truck(const string& brand, int year, int numWheels, double loadCapacity) : LandVehicle(brand, year, numWheels), loadCapacity(loadCapacity) {};
    string getInfo() override {
        return "Truck class :: Load Capacity: "  + to_string(loadCapacity) +
               "\n" + LandVehicle :: getInfo();



    }
};
#endif //TRUCK_H
