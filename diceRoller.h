#ifndef DIEROLLER_H
#define DIEROLLER_H
#include <vector>

class DiceRoller
{
  public:
    DiceRoller(int = 1);
    void setDiceCount(int numOfDice);
    void rollDice();
    std::vector<int> getDiceRolls() const;
    
  private:
    int _diceCount;
    std::vector<int> _diceList;
};

#endif