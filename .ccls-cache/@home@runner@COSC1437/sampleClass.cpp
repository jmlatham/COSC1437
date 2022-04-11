#include <iostream>
#include "sampleClass.h"

Sample::Sample()
{
  
}

void Sample::runTests()
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

void Sample::displayMenu()
{
  std::cout << "\n<<<===--- Sample Class Test Menu ---===>>>";
  std::cout << "\n\t1. Quit Sample Class Test";
  std::cout << "\n<<<===-----------------------------===>>>";
}

int Sample::getUserInput()
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