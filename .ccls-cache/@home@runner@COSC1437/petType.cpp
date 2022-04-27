#include <iostream>
#include "petType.h"

void PetType::print() const
{
  std::cout << "Name: " << _name;
}

PetType::PetType(std::string name)
{
  _name = name;
}