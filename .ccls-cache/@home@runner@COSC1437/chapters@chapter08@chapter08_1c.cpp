#include <iostream>
#include "chapter08_1c.h"

chapter08_1c::chapter08_1c()
{
  _title = " Chapter 8_1c Array Index Out of Bounds ";
}

void chapter08_1c::displayMenu()
{
  
}

void chapter08_1c::displayInstructions()
{
  
}

void chapter08_1c::runTest()
{
  printTitle(_title);

  int list[10];
  for(int i = 0; i < 10; i++)
    {
      list[i] = i + 1;
    }

  std::cout << std::endl;

  // This should throw an Index Out of Bounds exception,
  // but here in Replit, it merely displays 4940200 or something like it
  for(int i = 0; i <= 13; i++)
    {
      std::cout << list[i] << " ";
    }

  std::cout << std::endl;
  
  printFooter(_title);
}

