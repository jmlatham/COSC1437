#ifndef CHAPTER08_1A_H
#define CHAPTER08_1A_H
#include "chapter08.h"

class chapter08_1a : public chapter08
{
  public:
    chapter08_1a();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif