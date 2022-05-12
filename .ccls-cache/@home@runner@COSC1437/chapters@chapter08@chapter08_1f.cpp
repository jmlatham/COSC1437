#include <iostream>
#include "chapter08_1f.h"

chapter08_1f::chapter08_1f()
{
  _title = " 8-1f Some Restrictions on Array Processing ";
}

void chapter08_1f::displayMenu()
{
  
}

void chapter08_1f::displayInstructions()
{
  
}

void chapter08_1f::runTest()
{
  printTitle(_title);

  std::cout << "\nint myList[5] = {0, 4, 8, 12, 16};"
    << "\nint yourList[5];" << std::endl;
  int myList[5] = {0, 4, 8, 12, 16};
  int yourList[5];

  std::cout << "\nThis line is illegal: "
    << "\n\tyourList = myList;" 
    << std::endl;

  std::cout << "\nThe following must be done to copy the array:" << std::endl;

  std::cout << "\n\tyourList[0] = myList[0];"
    << "\n\tyourList[1] = myList[1];"
    << "\n\tyourList[2] = myList[2];"
    << "\n\tyourList[3] = myList[3];"
    << "\n\tyourList[4] = myList[4];";

  yourList[0] = myList[0];
  yourList[1] = myList[1];
  yourList[2] = myList[2];
  yourList[3] = myList[3];
  yourList[4] = myList[4];

  std::cout << "\n\nOr:" << std::endl;

  for(int index = 0; index < 5; index++)
    {
      yourList[index] = myList[index];
    }

  std::cout << "\n\tfor(int index = 0; index < 5; index++)"
    << "\n\t{"
    << "\n\t\tyourList[index] = myList[index];"
    << "\n\t}\n"
    << std::endl;

  std::cout << "\nThe following is illegal: "
    << "\n\n\t std::cin >> yourList; \n"
    << std::endl;
  std::cout << "\nA loop would be required:\n"
    << "\n\tfor(int index=0; index < 5; index++)"
    << "\n\t\t{"
    << "\n\t\t\tstd::cin >> yourList[index];"
    << "\n\t\t}"
    << std::endl;
  
  printFooter(_title);
}

