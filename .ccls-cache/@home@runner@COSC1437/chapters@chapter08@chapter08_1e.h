#ifndef CHAPTER08_1E_H
#define CHAPTER08_1E_H
#include "chapter08.h"

class chapter08_1e : public chapter08
{
  public:
    chapter08_1e();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
};

#endif