#include <iostream>
#include "dogType.h"

void DogType::print() const
{
  PetType::print();
  std::cout << ", Breed: " << _breed << std::endl;
}

DogType::DogType(std::string name, std::string breed):PetType(name)
{
  _breed = breed;
}