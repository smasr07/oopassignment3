
#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H
#include <iostream>
#include <utility>
#include "Vehicle.h"
using namespace std;
class WaterVehicle : public Vehicle {
protected:
    string vesselType;
public:
    WaterVehicle();
    WaterVehicle(const string & brand, int year, string vesselType) : Vehicle(brand, year), vesselType(std::move(vesselType)) {};

     string getInfo() override {
        return "WaterVehicle class :: Vessel Type: "  + vesselType +
               "\n" + Vehicle::getInfo();


    }
};

#endif //WATERVEHICLE_H
