#ifndef STOP_H
#define STOP_H
#include "Vehicle.h"

class Stopable{
  private:
    Vehicle _vehicle;
  public:
    Stopable(Vehicle veh);
    void stop();
};
#endif