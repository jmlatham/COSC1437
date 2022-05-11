#include <iostream>
#include <iomanip>
#include "example08_4.h"

example08_4::example08_4()
{
  _title = " Example 8_4 ";
}

void example08_4::displayMenu()
{
  
}

void example08_4::displayInstructions()
{
  
}

void example08_4::runTest()
{
  printTitle(_title);

  const int ARRAY_SIZE = 5;
  int test[ARRAY_SIZE];
  int sum = 0;
  double average;
  int index;

  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Enter five test scores: " << std::endl;

  for(index = 0; index < ARRAY_SIZE; index++)
    {
      std::cin >> test[index];
      sum += test[index];
    }
  std::cout << std::endl;

  average = sum / (double)ARRAY_SIZE;
  std::cout << "The average test score = " << average << std::endl;

  for(index = 0; index < ARRAY_SIZE; index++)
    {
      if(test[index] < average)
      {
        std::cout << test[index]
          << " is lower than the average test score." 
          << std::endl;
      }
    }
  
  printFooter(_title);
}

