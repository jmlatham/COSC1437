#ifndef PETTYPE_H
#define PETTYPE_H
#include <string>

class PetType
{
public:
  virtual void print() const;
  PetType(std::string name="");
private:
  std::string _name;
};

#endif