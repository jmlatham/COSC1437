#include <iostream>
#include <string>
#include <vector>
#include "diceRollerTest.h"
#include "diceRoller.h"

DiceRollerTest::DiceRollerTest()
{
  
}

void DiceRollerTest::runTests()
{
  bool repeat = true;
  DiceRoller dRoller;
  int diceCount = 1;
  int sideCount = 1;
  std::vector<int> diceList;
  do
  {
    displayMenu();
    switch(getUserInput())
    {
      case 1:
        std::cout << "\nHow many dice? ";
        std::cin >> diceCount;
        if(!std::cin){
          std::cout << "\n\tBad Data. Only one die is available.";
          std::cin.clear();
          std::cin.ignore(100000);
        } 
        /*
        else 
        {
          dRoller.setDiceCount(diceCount);
        }
        */
        std::cout << "\nHow many sides? ";
        std::cin >> sideCount;
        diceList = buildVector(diceCount, sideCount);
        dRoller.setDice(diceList);
        break;
      case 2:
        std::cout << "display results";
        dRoller.rollDice();
        displayResults(dRoller.getDiceRolls());
        break;
      default:
        std::cout << "quit";
        repeat = false;
    }
  } while(repeat);
}

std::vector<int> DiceRollerTest::buildVector(int diceCount, int sideCount)
{
  std::vector<int> diceList(diceCount);
  for(int die = 0; die < diceCount; die++)
  {
    diceList.at(die) = sideCount;
  }
  
  return diceList;
}

void DiceRollerTest::displayResults(std::vector<int> diceRolls)
{
  
  std::cout << "\nDice Roll Results:";
  
  for(int i=0; i<diceRolls.capacity(); i++)
  {
    std::cout << "\n\tRoll " << i+1 << ": " << diceRolls.at(i);
  }
  
  std::cout << std::endl;
  
}

void DiceRollerTest::displayMenu()
{
  std::cout << "\n<<<===--- Dice Roller Test Menu ---===>>>";
  std::cout << "\n\t1. Set Number of Dice";
  std::cout << "\n\t2. Get Results";
  std::cout << "\n\t3. Quit Dice Roller Test";
  std::cout << "\n<<<===-----------------------------===>>>";
}

int DiceRollerTest::getUserInput()
{
  int menuSelection = -1;
  std::cout << "\nYour choice: ";
  std::cin >> menuSelection;
  while(!std::cin || menuSelection < 1 || menuSelection > 3){
    std::cout << "\nBad data. Try again (1, 2, or 3): ";
    std::cin >> menuSelection;
  }
  return menuSelection;
}