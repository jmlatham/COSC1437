#ifndef CHAPTER09_TEST_H
#define CHAPTER09_TEST_H
#include "chapter09.h"

class chapter09_test
{
  public:
    chapter09_test();
    void displayMenu();
    void displayMenu(chapter09&);
    void displayInstructions();
    void displayInstructions(chapter09&);
    void runTests();
  private:
    void runTest(chapter09&);
    int getMenuSelection();
    void handleSelection(int);
    chapter09 _chap;
};

#endif