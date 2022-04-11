#ifndef DICEROLLERTEST_H
#define DICEROLLERTEST_H
#include <vector>

class DiceRollerTest
{
  public:
    DiceRollerTest();
    void runTests();
  private:
    void displayMenu();
    int getUserInput();
    void displayResults(std::vector<int> diceRolls);
    std::vector<int> buildVector(int, int);
};
#endif