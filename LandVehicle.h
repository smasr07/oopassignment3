
#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class LandVehicle : public Vehicle{
protected:
   int numWheels;
public:
   LandVehicle();
   LandVehicle(const string & brand, int year, int numWheels) : Vehicle(brand, year), numWheels(numWheels){};

    string getInfo() override {
      return "LandVehicle class:: Number of wheels:" + to_string(numWheels) +
             "\nVehicle class:: Brand:" + brand +
             "\nVehicle class:: Year:" + to_string(year);


   }





};


#endif //LANDVEHICLE_H
