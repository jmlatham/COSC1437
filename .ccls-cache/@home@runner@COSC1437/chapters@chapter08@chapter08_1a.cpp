#include <iostream>
#include "chapter08_1a.h"

chapter08_1a::chapter08_1a()
{
  _title = " Chapter 8_1a Accessing Array Components ";
}

void chapter08_1a::displayMenu()
{
  
}

void chapter08_1a::displayInstructions()
{
  
}

void chapter08_1a::runTest()
{
  printTitle(_title);
  
  int list[10];
  list[5] = 34;
  list[3] = 63;

  int i = 3;
  list[i] = 63;

  list[3] = 10;
  list[6] = 35;
  list[5] = list[3] + list[6];

  i = 3;
  list[2 * i - 3] = 58;

  const int ARRAY_SIZE = 10;
  int list2[ARRAY_SIZE];

  std::cout << "int list[10];\nlist[5] = 34;\nlist[3] = 63;\n\nint i = 3;\nlist[i] = 63;\n\nlist[3] = 10;\nlist[6] = 35;\nlist[5] = list[3] + list[6];\n\ni = 3;\nlist[2 * i - 3] = 58;\n\nconst int ARRAY_SIZE = 10;\nint list2[ARRAY_SIZE];\n";
  
  printFooter(_title);
}

