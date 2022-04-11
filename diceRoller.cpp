#include <vector>
#include <iostream>
#include "diceRoller.h"
#include "die.h"

DiceRoller::DiceRoller(int numOfDice) 
{
  if(numOfDice < 0)
  {
    numOfDice = 1;
  }
  _diceCount = numOfDice;
  for(int i = 0; i < _diceCount; i++)
  {
    _diceList.push_back(6);
  }
}

void DiceRoller::setDiceCount(int numOfDice)
{
  if(numOfDice < 0)
  {
    numOfDice = 1;
  }
  _diceCount = numOfDice;
  _diceList.clear();
  for(int i = 0; i < _diceCount; i++)
  {
    _diceList.push_back(6);
  }
}

void DiceRoller::rollDice()
{
  Die die;
  
  //for(int i = 0; i < _diceCount; i++)
  for(int i = 0; i < _diceList.capacity(); i++)
  {
    die.setSideCount(_diceSides.at(i));
    die.roll();
    _diceList.at(i) = die.getNum(); // overwriting the number of sides
    // need a better solution - maybe a separate list
  }
}

std::vector<int> DiceRoller::getDiceRolls() const
{
  return _diceList;
}

void DiceRoller::setDice(std::vector<int> diceList)
{
  _diceList = diceList;
  _diceSides = diceList;
}