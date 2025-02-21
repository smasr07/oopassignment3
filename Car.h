
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "LandVehicle.h"
using namespace std;
class Car : public LandVehicle {
protected:
    int numDoors;
public:
    Car() : numDoors(0) {};
    Car(const string& brand, int year, int numWheels, int numDoors) : LandVehicle(brand, year, numWheels), numDoors(numDoors){}


    string getInfo() override {
        return "Car class:: Number of doors:" + to_string(numDoors) +
               "\n" + LandVehicle::getInfo();




    }
};
#endif //CAR_H
