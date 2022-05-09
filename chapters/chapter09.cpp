#include <iostream>
#include "chapter09.h"

chapter09::chapter09()
{
  _chapterNumber = 9;
}

void chapter09::displayMenu()
{
  std::string menuItems[] = {
    
  };
  int menuSize = sizeof(menuItems)/sizeof(menuItems[0]);
  std::cout << "\n\n<--------- Chapter "<< _chapterNumber <<" MENU --------->";
  std::cout << "\n\t0. Quit";
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << menuItems[itemIndex];
  }
  std::cout << "\n<----------------------------->";
  std::cout << "\n\n\n Enter Your selection: ";
}

void chapter09::displayInstructions()
{
  
}

void chapter09::runTest()
{
  std::cout << "Chapter " << _chapterNumber << " base class" << std::endl;
}