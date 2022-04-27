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
    void runPointerTestOne();
    void runPointerTestTwo();
    void runPointerTestThree();
    void runPointerTestNew();
    void runPointerTestDynamicArrays();
    void runPointerTestRandomSizeArrays();
    void printArrays(int **array);
    int* pointerParameters(int* &p, int *q);
};

#endif