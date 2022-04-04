#include "car.h"

Car::Car(std::string make, std::string model)
{
  _make = make;
  _model = model;
}
void Car::goForward()
{
  switch(_direction)
  {
    case 1:
      _xPosition++;
      break;
    case 2:
      _yPosition--;
      break;
    case 3:
      _xPosition--;
      break;
    default:
      _yPosition++;
  }
}
void Car::goBackward()
{
  switch(_direction)
  {
    case 1:
      _xPosition--;
      break;
    case 2:
      _yPosition++;
      break;
    case 3:
      _xPosition++;
      break;
    default:
      _yPosition--;
  }
}
void Car::stop()
{
  _carIsRunning = false;
}
void Car::start()
{
  _carIsRunning = true;
}
void Car::turnRight()
{
  _direction++;
  if(_direction > 3)
  {
    _direction = 0;
  }
}
void Car::turnLeft()
{
  _direction--;
  if(_direction < 0)
  {
    _direction = 3;
  }
}
std::string Car::getPosition()
{
  return "(" + std::to_string(_xPosition) + "," + std::to_string(_yPosition) + ")"; 
}