#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
#include "startable.h"


class Vehicle {
  private:
    bool _isStarted = true;
    std::string color; 
    double weight; 
  public:
    void setColor(std::string newColor);
    std::string getColor();
    void setWeight(double newWeight);
    double getWeight();
    void start();
    void stop();
    bool isVehicleStarted();
};

#endif