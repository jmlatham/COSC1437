#include <vector>
#include <iostream>
#include "diceRoller.h"
#include "die.h"

DiceRoller::DiceRoller(int numOfDice) 
{
  _diceCount = numOfDice;
  for(int i = 0; i < _diceCount; i++)
  {
    _diceList.push_back(1);
  }
}

void DiceRoller::setDiceCount(int numOfDice)
{
  _diceCount = numOfDice;
  _diceList.clear();
  for(int i = 0; i < _diceCount; i++)
  {
    _diceList.push_back(1);
  }
}

void DiceRoller::rollDice()
{
  Die die(10);
  
  for(int i = 0; i < _diceCount; i++)
  {
    die.roll();
    _diceList.at(i) = die.getNum();
  }
}

std::vector<int> DiceRoller::getDiceRolls() const
{
  return _diceList;
}