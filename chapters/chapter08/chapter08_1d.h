#ifndef CHAPTER08_1D_H
#define CHAPTER08_1D_H
#include "chapter08.h"

class chapter08_1d : public chapter08
{
  public:
    chapter08_1d();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif