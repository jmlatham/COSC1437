#ifndef RECTANGLETEST_H
#define RECTANGLETEST_H
#include "Rectangle.h"
#include "sampleClass.h"

class RectangleTest : Sample
{
  public:
    RectangleTest();
    void runTest();
    void runTest2();
    void runTest3();
  private:
    void printComparison(Rectangle, Rectangle);
};

#endif