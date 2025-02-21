
#ifndef BOAT_H
#define BOAT_H
#include <iostream>
#include <utility>
#include "WaterVehicle.h"
using namespace std;
class Boat : public WaterVehicle {
protected:
    double length;
public:
    Boat();
    Boat(const string& brand, int year, string vesselType, double length) : WaterVehicle(brand, year, std::move(vesselType)), length(length) {}
    string getInfo() override {
        return "BoatClass :: length: "  + to_string(length) +
               "\n" + WaterVehicle :: getInfo();



    }
};
#endif //BOAT_H
