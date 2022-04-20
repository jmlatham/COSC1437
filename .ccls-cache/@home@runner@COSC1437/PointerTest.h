#ifndef POINTERTEST_H
#define POINTERTEST_H
#include "sampleClass.h"

class PointerTest : Sample
{
  public:
    PointerTest();
    void runTests();
  private:
    void displayMenu();
    int getUserInput();
};

#endif