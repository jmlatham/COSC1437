#include "divisionByZero.h"

DivisionByZero::DivisionByZero()
{
  _message = "Exception: Division by Zero.";
}
DivisionByZero::DivisionByZero(std::string message)
{
  _message = message;
}
std::string DivisionByZero::what()
{
  return _message;
}

DivisionByLessThanTen::DivisionByLessThanTen()
{
  _message = "Exception: Division by Less Than Ten.";
}
DivisionByLessThanTen::DivisionByLessThanTen(std::string message)
{
  _message = message;
}
std::string DivisionByLessThanTen::what()
{
  return _message;
}

DivisionByMoreThanTwenty::DivisionByMoreThanTwenty()
{
  _message = "Exception: Division by More Than Twenty.";
}
DivisionByMoreThanTwenty::DivisionByMoreThanTwenty(std::string message)
{
  _message = message;
}
std::string DivisionByMoreThanTwenty::what()
{
  return _message;
}