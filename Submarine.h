
#ifndef SUBMARINE_H
#define SUBMARINE_H
#include <iostream>
#include <utility>
#include "WaterVehicle.h"
using namespace std;
class Submarine : public WaterVehicle {
protected:
    int maxDepth;
public:
    Submarine();
    Submarine(const string& brand, int year, string vesselType, int maxDepth) : WaterVehicle(brand, year, std::move(vesselType)), maxDepth(maxDepth) {};
    string getInfo() override {
        return "SubmarineClass :: Max Depth: "  + to_string(maxDepth) +
               "\n" + WaterVehicle :: getInfo();



    }
};
#endif //SUBMARINE_H
