#include <iostream>
#include "chapter09_test.h"
#include "chapter09.h"

chapter09_test::chapter09_test()
{
  _chap = chapter09();
}

void chapter09_test::displayMenu()
{
  _chap.displayMenu();
}

void chapter09_test::displayMenu(chapter09& chap)
{
  chap.displayMenu();
}

void chapter09_test::displayInstructions()
{
  _chap.displayInstructions();
}

void chapter09_test::displayInstructions(chapter09& chap)
{
  chap.displayInstructions();
}

void chapter09_test::runTests()
{
  int selection = 0;
  do
  {
    displayMenu();
    displayInstructions();
    selection = getMenuSelection();
    handleSelection(selection);
  } while(selection != 0);
}

void chapter09_test::handleSelection(int selection)
{
  switch(selection)
  {
    case 1:
      {
        
      }
      break;
    default:
      break;
  }
}

int chapter09_test::getMenuSelection(){
  int selection = -1;
  std::cin >> selection;
  if(!std::cin)
  {
    std::cout << "\n\tThe selection needs to be an integer. Please try again: ";
    std::cin.clear();
    std::cin.ignore(100000,'\n');
    return getMenuSelection();
  }
  return selection;
}

void chapter09_test::runTest(chapter09& chap)
{
  chap.runTest();
}