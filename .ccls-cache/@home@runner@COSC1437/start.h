#ifndef START_H
#define START_H
#include "Vehicle.h"

class Startable 
{
  private: 
    Vehicle _vehicle;
  public:
    Startable();
    Startable(Vehicle veh);
    void setVehicle(Vehicle veh);
    void start();
};
#endif