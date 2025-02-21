
#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>

#include "AirVehicle.h"
using namespace std;
class Helicopter : public AirVehicle {
protected:
    int rotorCount;
public:
    Helicopter();
    Helicopter(const string& brand, int year, int maxAltitude, int rotorCount) : AirVehicle(brand, year, maxAltitude), rotorCount(rotorCount) {};
    string getInfo() override {
        return "Helicopter class :: Number of rotor: "  + to_string(rotorCount) +
               "\n" + AirVehicle :: getInfo();



    }
};
#endif //HELICOPTER_H
