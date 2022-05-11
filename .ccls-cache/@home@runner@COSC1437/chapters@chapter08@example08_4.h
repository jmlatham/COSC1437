#ifndef EXAMPLE08_4_H
#define EXAMPLE08_4_H
#include "chapter08.h"

class example08_4 : public chapter08
{
  public:
    example08_4();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif