#include <iostream>
#include "lesson10_19.h"

Lesson10_19::Lesson10_19()
{
  
}

void Lesson10_19::runTests()
{
  bool repeat = true;
  int diceCount = 1;
  int sideCount = 1;
  do
  {
    displayMenu();
    switch(getUserInput())
    {
      
      default:
        std::cout << "quit";
        repeat = false;
    }
  } while(repeat);
}

void Lesson10_19::displayMenu()
{
  std::cout << "\n<<<===--- Lesson 10.19 Test Menu ---===>>>";
  std::cout << "\n\t1. Quit Lesson 10.19 Test";
  std::cout << "\n<<<===-----------------------------===>>>";
}

int Lesson10_19::getUserInput()
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