#ifndef CHAPTER08_1F_H
#define CHAPTER08_1F_H
#include "chapter08.h"

class chapter08_1f : public chapter08
{
  public:
    chapter08_1f();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif