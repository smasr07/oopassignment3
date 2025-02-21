
#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include <iostream>
#include "Car.h"
using namespace std;
class SportsCar : public Car {
protected:
    int maxSpeed;
public:
    SportsCar();
    SportsCar(const string& brand, int year, int numWheels, int numDoors, int maxSpeed) : Car(brand, year, numWheels, numDoors), maxSpeed(maxSpeed) {};
    string getInfo() override {
        return "SportsCar class :: Max Speed: "  + to_string(maxSpeed) +
               "\n" + Car :: getInfo();



    }
};
#endif //SPORTSCAR_H
