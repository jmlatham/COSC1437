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
  if(Vehicle::isVehicleStarted()){
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
  if(Vehicle::isVehicleStarted()){
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
// void Car::stop()
// {
//   _carIsRunning = false;
// }
// void Car::start()
// {
//   _carIsRunning = true;
// }
int Car::turnRight()
{
  if(Vehicle::isVehicleStarted()){
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
  if(Vehicle::isVehicleStarted())
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

void Car::runCarCode(){
  Car car1("Toyota", "Rav-4");
  car1.start();
  std::cout << "\nStart Position: " << car1.getPosition();
  car1.goForward();
  std::cout << "\n TotalMileage: " << car1.getTotalMileage();
  car1.goForward();
  std::cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  std::cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  std::cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  std::cout << "\n" << car1.getPosition();
  car1.goForward();
  std::cout << "\n TotalMileage: " << car1.getTotalMileage();
  car1.stop();
  std::cout << "\nStop Position: " << car1.getPosition();

  Car car2("Ford", "F-150");
  car2.start();
  std::cout << "\nStart Position: " << car2.getPosition();
  car2.goForward();
  car2.goForward();
  car2.goForward();
  std::cout << "\n TotalMileage: " << car1.getTotalMileage();
  std::cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  std::cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  std::cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  std::cout << "\n" << car2.getPosition();
  car2.goForward();
  std::cout << "\n TotalMileage car1: " << car1.getTotalMileage();
  std::cout << "\n TotalMileage car2: " << car2.getTotalMileage();
  car2.stop();
  std::cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  std::cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();

  car1 = car2;
  std::cout << "\n after copying data.....";
  std::cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  std::cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();
  std::cout << "\n TotalMileage car1: " << car1.getTotalMileage();

  car1.start();
  car1.goForward();
  car1.goForward();
  car1.goForward();
  car1.goForward();

  std::cout << "\n after changing data.....";
  std::cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  std::cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();
  std::cout << "\n TotalMileage car1: " << car1.getTotalMileage();
  // A function inherited from the Vehicle class
  car1.setColor("Forest Green");
  // A function inherited from the Vehicle class
  car1.setWeight(2200);
  std::cout << "\nThe color of the car is: " << car1.getColor() << std::endl;
  std::cout << "The weight of the car is: " << car1.getWeight() << " lbs " << std::endl;
  std::cout << "The car is currently traveling at: " << car1.floorIt() << " mph" << std::endl;
}
double Car::floorIt() {
    return maxSpeed;
}
std::string Car::getColor() {
  //return Vehicle::getColor();
  std::cout << "all cars are blue.";
  return "";
}
double Car::getWeight2() {
  return Vehicle::getWeight();
}
void Car::setColor2(std::string color){
  Vehicle::setColor(color);
}
void Car::setWeight2(double weight){
  Vehicle::setWeight(weight);
}