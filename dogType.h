#ifndef DOGTYPE_H
#define DOGTYPE_H
#include <string>
#include "petType.h"

class DogType: public PetType
{
public:
  virtual void print() const;
  DogType(std::string name="", std::string breed="");
private:
  std::string _breed;
};

#endif