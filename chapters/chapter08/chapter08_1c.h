#ifndef CHAPTER08_1C_H
#define CHAPTER08_1C_H
#include "chapter08.h"

class chapter08_1c : public chapter08
{
  public:
    chapter08_1c();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif