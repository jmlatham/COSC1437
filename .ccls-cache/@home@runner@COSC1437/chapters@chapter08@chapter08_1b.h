#ifndef CHAPTER08_1B_H
#define CHAPTER08_1B_H
#include "chapter08.h"

class chapter08_1b : public chapter08
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