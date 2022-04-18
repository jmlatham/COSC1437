#include "start.h"

Startable::Startable() 
{
}

Startable::Startable(Vehicle veh) 
{
  _vehicle = veh;
}

void Startable::setVehicle(Vehicle veh)
{
  _vehicle = veh;
}

void Startable::start()
{
  _vehicle.start();
}