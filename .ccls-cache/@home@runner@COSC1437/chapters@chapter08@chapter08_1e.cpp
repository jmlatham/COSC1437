#include <iostream>
#include "chapter08_1e.h"

chapter08_1e::chapter08_1e()
{
  _title = " Chapter 8-1e Partial Initialization of Arrays during Declaration ";
}

void chapter08_1e::displayMenu()
{
  
}

void chapter08_1e::displayInstructions()
{
  
}

void chapter08_1e::runTest()
{
  printTitle(_title);

  std::cout << "\nThe statement: "
    << "\n\tint list[10] = {0};"
    << "\ndeclares list to be an array of 10 components and initializes all of the components to 0."
    << std::endl;

  std::cout << "\nThe statement: "
    << "\n\tint list[10] = {8, 5, 12};"
    << "\ndeclares list to be an array of 10 components and initializes list[0] to 8, list[1] to 5, list[2] to 12, and all other components to 0."
    << std::endl;
  
  printFooter(_title);
}

