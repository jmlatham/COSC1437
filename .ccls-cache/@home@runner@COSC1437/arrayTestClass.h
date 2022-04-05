#ifndef ARRAYTESTCLASS_H
#define ARRAYTESTCLASS_H
#include <string>
class ArrayTestClass{
  private:
    const int SIZE_OF_ARRAY = 5;
  public:
    void singleArrayTest();
    void multiArrayTest(int multiArray[3][3]);
    void getUserInput(int array[]);
    void printArrayValues(int array[]);
    int getSum(int array[]);
    int getMin(int array[]);
    int getMax(int array[]);
    double getAvg(int array[]);
    void displayResults(std::string title, double result);
    void runArrayTestCode();
};
#endif