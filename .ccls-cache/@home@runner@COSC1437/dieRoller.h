#ifndef DIEROLLER_H
#define DIEROLLER_H
#include <vector>

class DieRoller
{
  public:
    DieRoller(int numOfDice);
    void rollDice();
    std::vector<int> getDiceRolls();
    
  private:
    int _diceCount;
    std::vector<int> _diceList;
};

#endif