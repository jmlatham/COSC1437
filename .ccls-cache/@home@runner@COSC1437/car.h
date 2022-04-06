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
    static int _totalMileage;
    Car(std::string make, std::string model);
    int goForward();
    int goBackward();
    void stop();
    void start();
    int turnRight();
    int turnLeft();
    std::string getPosition();
    std::string getMakeModel();
    std::string getTotalMileage();
    void runCarCode();
};
#endif