#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"

class Car : public Vehicle{
  private:
    double maxSpeed = 121.09;
    std::string _make;
    std::string _model;
    int _xPosition = 0;
    int _yPosition = 0;
    int _direction = 1; // 0=North 1=East 2=South 3=West
    // bool _carIsRunning = false;
  public:
    static int _totalMileage;
    Car(std::string make, std::string model);
    int goForward();
    int goBackward();
    // void stop();
    // void start();
    int turnRight();
    int turnLeft();
    std::string getPosition();
    std::string getMakeModel();
    std::string getTotalMileage();
    double floorIt();
    std::string getColor();
    double getWeight2();
    void setColor2(std::string color);
    void setWeight2(double weight);
    void runCarCode();
};
#endif

/*
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
  private:
    string color; 
    double weight; 
  public:
     void setColor(string newColor) {
      color = newColor;
    }
    string getColor() {
      return color;
    }

    void setWeight(double newWeight) {
      weight = newWeight;
    }
    double getWeight() {
      return weight;
    }
};

// Car inherits functions from Vehicle because a car is-a vehicle
class Car : private Vehicle {
    private:
        double maxSpeed = 121.09;
    public:
        double floorIt() {
            return maxSpeed;
        }
        string getColor2() {
          return Vehicle::getColor();
        }
        double getWeight2() {
          return Vehicle::getWeight();
        }
        void setColor2(string color){
          Vehicle::setColor(color);
        }
        void setWeight2(double weight){
          Vehicle::setWeight(weight);
        }
    };

int main() {
  Car car = Car();
  // A function inherited from the Vehicle class
  car.setColor2("Forest Green");
  // A function inherited from the Vehicle class
  car.setWeight2(2200);
  cout << "The color of the car is: " << car.getColor2() << endl;
  cout << "The weight of the car is: " << car.getWeight2() << " lbs " << endl;
  cout << "The car is currently traveling at: " << car.floorIt() << " mph" << endl;
  
  return 0;
}
*/