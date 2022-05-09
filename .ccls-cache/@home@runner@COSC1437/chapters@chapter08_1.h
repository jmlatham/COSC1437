#ifndef CHAPTER08_1_H
#define CHAPTER08_1_H
#include "chapter08.h"

class chapter08_1 : public chapter08
{
  public:
    chapter08_1();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif