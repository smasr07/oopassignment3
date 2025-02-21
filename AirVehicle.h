
#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class AirVehicle : public Vehicle {
protected:
    int maxAltitude;
public:
    AirVehicle();
    AirVehicle(const string& brand, int year, int maxAltitude) : Vehicle(brand, year), maxAltitude(maxAltitude) {};
    string getInfo() override {
        return "AirVehicle class :: Max altitude: "  + to_string(maxAltitude) +
               "\n" + Vehicle::getInfo();


    }
};


#endif //AIRVEHICLE_H
