#ifndef CAR_H
#define CAR_H
#include <string>

class Car{
  private:
    std::string _make;
    std::string _model;
    int _xPosition = 0;
    int _yPosition = 0;
    int _direction = 1; // 0=North 1=East 2=South 3=West
    bool _carIsRunning = false;
  public:
    Car(std::string make, std::string model);
    void goForward();
    void goBackward();
    void stop();
    void start();
    void turnRight();
    void turnLeft();
    std::string getPosition();
};
#endif