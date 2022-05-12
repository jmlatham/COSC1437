#ifndef CHAPTER08_1G_H
#define CHAPTER08_1G_H
#include "chapter08.h"

class chapter08_1g : public chapter08
{
  public:
    chapter08_1g();
    void displayMenu();
    void displayInstructions();
    void runTest();
  private:
    std::string _title;
    void initialize(int list[], int listSize);
    void runExample();
    void printArrays(int vals[], double meals[], int dinnerSize);
};

#endif