#include <iostream>
#include "chapter08_test.h"
#include "../chapter08/chapter08_1.h"
#include "../chapter08/chapter08_1a.h"

chapter08_test::chapter08_test()
{
  _chap = chapter08();
}

void chapter08_test::displayMenu()
{
  _chap.displayMenu();
}

void chapter08_test::displayMenu(chapter08& chap)
{
  chap.displayMenu();
}

void chapter08_test::displayInstructions()
{
  _chap.displayInstructions();
}

void chapter08_test::displayInstructions(chapter08& chap)
{
  chap.displayInstructions();
}

void chapter08_test::runTests()
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

void chapter08_test::handleSelection(int selection)
{
  switch(selection)
  {
    case 1:
      {
        chapter08_1 chap;
        runTest(chap);
      }
      break;
    case 2:
      {
        chapter08_1a chap;
        runTest(chap);
      }
      break;
    default:
      break;
  }
}

int chapter08_test::getMenuSelection(){
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

void chapter08_test::runTest(chapter08& chap)
{
  chap.runTest();
}