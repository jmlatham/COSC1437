#include <iostream>
#include "car.h"

int Car::_totalMileage; // this was the missing piece when I tried to get the static variable up and running.

Car::Car(std::string make, std::string model)
{
  _make = make;
  _model = model;
}
int Car::goForward()
{
  if(_carIsRunning){
    _totalMileage++;
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
    return 0;
  }
  return -1;
}
int Car::goBackward()
{
  if(_carIsRunning){
    _totalMileage++;
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
    return 0;
  }
  return -1;
}
void Car::stop()
{
  _carIsRunning = false;
}
void Car::start()
{
  _carIsRunning = true;
}
int Car::turnRight()
{
  if(_carIsRunning){
    _direction++;
    if(_direction > 3)
    {
      _direction = 0;
    }
    return 0;
  }
  return -1;
}
int Car::turnLeft()
{
  if(_carIsRunning)
  {
    _direction--;
    if(_direction < 0)
    {
      _direction = 3;
    }
    return 0;
  }
  return -1;
}
std::string Car::getPosition()
{
  return "(" + std::to_string(_xPosition) + "," + std::to_string(_yPosition) + ")"; 
}

std::string Car::getMakeModel(){
  return _make + " " + _model;
}

std::string Car::getTotalMileage(){
  return std::to_string(_totalMileage);
  //return "don't know";
}
