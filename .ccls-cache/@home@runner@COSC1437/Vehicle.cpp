#include <iostream>
#include <string>
#include "Vehicle.h"


void Vehicle::setColor(std::string newColor) {
  color = newColor;
}
std::string Vehicle::getColor() {
  return color;
}

void Vehicle::setWeight(double newWeight) {
  weight = newWeight;
}
double Vehicle::getWeight() {
  return weight;
}
void Vehicle::start() {
  _isStarted = true;
}
void Vehicle::stop() {
  _isStarted = false;
}
bool Vehicle::isVehicleStarted(){
  return _isStarted;
}