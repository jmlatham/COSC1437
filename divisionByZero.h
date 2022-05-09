#ifndef DIVISIONBYZERO_H
#define DIVISIONBYZERO_H
#include <string>

class DivisionByZero : std::exception
{
public:
  DivisionByZero();
  DivisionByZero(std::string message);
  std::string what();
private:
  std::string _message;
};

class DivisionByLessThanTen
{
  public:
    DivisionByLessThanTen();
    DivisionByLessThanTen(std::string message);
    std::string what();
  private:
    std::string _message;
};

class DivisionByMoreThanTwenty
{
  public:
    DivisionByMoreThanTwenty();
    DivisionByMoreThanTwenty(std::string message);
    std::string what();
  private:
    std::string _message;
};

#endif