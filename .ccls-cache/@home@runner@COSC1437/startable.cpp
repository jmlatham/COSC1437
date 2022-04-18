#include "startable.h"

Startable::Startable(Vehicle veh)
{
  _vehicle = veh;
}

void Startable::start()
{
  _vehicle.start();
}