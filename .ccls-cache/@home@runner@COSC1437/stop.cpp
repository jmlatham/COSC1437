#include "stop.h"

Stopable::Stopable(Vehicle veh)
{
  _vehicle = veh;
}

void Stopable::stop()
{
  _vehicle.stop();
}