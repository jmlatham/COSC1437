#ifndef CHAPTER08_1a_H
#define CHAPTER08_1a_H
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