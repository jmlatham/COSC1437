#include <iostream>
#include "chapter08.h"

chapter08::chapter08()
{
  _chapterNumber = 8;
}

void chapter08::displayMenu()
{
  std::string menuItems[] = {
    "Chapter 8-1"
  };
  int menuSize = sizeof(menuItems)/sizeof(menuItems[0]);
  std::cout << "\n\n<--------- Chapter " << _chapterNumber << " MENU --------->";
  std::cout << "\n\t0. Quit";
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << menuItems[itemIndex];
  }
  std::cout << "\n<----------------------------->";
  std::cout << "\n\n\n Enter Your selection: ";
}

void chapter08::displayInstructions()
{
  
}

void chapter08::runTest()
{
  std::cout << "Chapter " << _chapterNumber << " base class" << std::endl;
}