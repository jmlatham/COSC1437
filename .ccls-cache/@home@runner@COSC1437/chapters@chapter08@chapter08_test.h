#ifndef CHAPTER08_TEST_H
#define CHAPTER08_TEST_H
#include "../chapter08.h"

class chapter08_test
{
  public:
    chapter08_test();
    void displayMenu();
    void displayMenu(chapter08&);
    void displayInstructions();
    void displayInstructions(chapter08&);
    void runTests();
  private:
    void runTest(chapter08&);
    int getMenuSelection();
    void handleSelection(int);
    chapter08 _chap;
};

#endif