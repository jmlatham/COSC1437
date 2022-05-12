#include <iostream>
#include "chapter08_test.h"
#include "../chapter08/chapter08_1.h"
#include "../chapter08/chapter08_1a.h"
#include "../chapter08/chapter08_1b.h"
#include "../chapter08/chapter08_1c.h"
#include "../chapter08/chapter08_1d.h"
#include "../chapter08/chapter08_1e.h"
#include "../chapter08/chapter08_1f.h"
#include "../chapter08/chapter08_1g.h"
#include "../chapter08/example08_4.h"

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
    case 3:
      {
        chapter08_1b chap;
        runTest(chap);
      }
      break;
    case 4:
      {
        example08_4 chap;
        runTest(chap);
      }
      break;
    case 5:
      {
        chapter08_1c chap;
        runTest(chap);
      }
      break;
    case 6:
      {
        chapter08_1d chap;
        runTest(chap);
      }
      break;
    case 7:
      {
        chapter08_1e chap;
        runTest(chap);
      }
      break;
    case 8:
      {
        chapter08_1f chap;
        runTest(chap);
      }
      break;
    case 9:
      {
        chapter08_1g chap;
        runTest(chap);
      }
      break;
    default:
      std::cout << "That option is not yet available. Please try again." << std::endl;
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