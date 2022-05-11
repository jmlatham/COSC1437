#include <iostream>
#include "chapter08_1b.h"

chapter08_1b::chapter08_1b()
{
  _title = " Chapter 8_1b Processing One-Dimensional Arrays ";
}

void chapter08_1b::displayMenu()
{
  
}

void chapter08_1b::displayInstructions()
{
  
}

void chapter08_1b::runTest()
{
  printTitle(_title);

  std::cout << "\nint list[10];\nint i;" << std::endl;
  int list[10];
  int i;

  std::cout << "\nfor(i = 0; i< 10; i++)\n\tstd::cin >> list[i];" << std::endl;
  std::cout << "\nPlease enter ten integers: ";
  for(i = 0; i < 10; i++)
    std::cin >> list[i];

  std::cout << "\nfor(i = 0; i < 10; i++)\n\tstd::cout << list[i] << \" \";\nstd::cout << std::endl;\n" << std::endl;
  for(i = 0; i < 10; i++)
    std::cout << list[i] << " ";
  std::cout << std::endl;

  std::cout << "---------------------------------";
  std::cout << "\ndouble sales[10];\ndouble largestSale, sum, average;\n\nfor(int index = 0; index < 10; index++)\n\tsales[index] = 0.0;" << std::endl;
  double sales[10];
  double largestSale, sum, average;

  for(int index = 0; index < 10; index++)
    sales[index] = 0.0;

  std::cout << "\nfor(int index = 0; index < 10; index++)\n\tstd::cin >> sales[index];" << std::endl;
  std::cout << "\nPlease enter ten double values for the sales: ";
  for(int index = 0; index < 10; index++)
    std::cin >> sales[index];

  std::cout << "\nfor(int index = 0; index < 10; index++)\n\tstd::cout << sales[index] << \" \";\n" << std::endl;
  for(int index = 0; index < 10; index++)
    std::cout << sales[index] << " ";

  std::cout << "\n\nsum = 0;\nfor(int index = 0; index < 10; index++)\n\tsum += sales[index];\naverage = sum / 10.0;" << std::endl;
  sum = 0;
  for(int index = 0; index < 10; index++)
    sum += sales[index];
  average = sum / 10.0;

  std::cout << "\nint maxIndex = 0;\nfor(int index = 0; index < 10; index++)\n\tif(sales[maxIndex] < sales[index])\n\tmaxIndex = index;\nlargestSale = sales[maxIndex];" << std::endl;
  int maxIndex = 0;
  for(int index = 0; index < 10; index++)
    if(sales[maxIndex] < sales[index])
      maxIndex = index;
  largestSale = sales[maxIndex];

  std::cout << "\n\nsum: " << sum << "\naverage: " << average << "\nmaxIndex: " << maxIndex << "\nlargestSale: " << largestSale << std::endl;
  
  printFooter(_title);
}

