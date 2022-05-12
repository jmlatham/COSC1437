#include <iostream>
#include "chapter08_1d.h"

chapter08_1d::chapter08_1d()
{
  _title = " Chapter 8-1d Array Initialization during Declaration ";
}

void chapter08_1d::displayMenu()
{
  
}

void chapter08_1d::displayInstructions()
{
  
}

void chapter08_1d::runTest()
{
  printTitle(_title);

  std::cout << "\n These are the same: "
    << std::endl;
  std::cout << "\ndouble sales[5] = {12.25, 32.50, 16.90, 23, 45.68};"
    << std::endl;

  std::cout << "double sales[] = {12.25, 32.50, 16.90, 23, 45.68};"
    << std::endl;
  
  printFooter(_title);
}

