#include <iostream>
#include "chapter08_1.h"

chapter08_1::chapter08_1()
{
  _title = " Chapter 8-1 Arrays ";
}

void chapter08_1::displayMenu()
{
  
}

void chapter08_1::displayInstructions()
{
  
}

void chapter08_1::runTest()
{
  printTitle(_title);
  int values[5];  //array of integers of size 5
  
  //array declared with initial values
  double dinner[5] = {24.00, 16.00, 5.00, 100.00, 15.00};
  
  //array partially filled and remaining values initialized to zero
  int nums[10] = {1, 40, 2};
  
  //array size determined by number of elements in list
  int items[] = {12, 4, 2, 3, 1};
  
  values[0] = 3;  //assign value 3 to first location of array
  values[4] = 10; //assign value 10 to last location of array
  //values[5] = ? would be produce an out-of-bounds error because it does not exist

  std::cout << "int values[5];\n\n//array declared with initial values\ndouble dinner[5] = {24.00, 16.00, 5.00, 100.00, 15.00};\n\n//array partially filled and remaining values initialized to zero\nint nums[10] = {1, 40, 2};\n\n//array size determined by number of elements in list\nint items[] = {12, 4, 2, 3, 1};\n\nvalues[0] = 3;  //assign value 3 to first location of array\nvalues[4] = 10; //assign value 10 to last location of array\n//values[5] = ? would be produce an out-of-bounds error because it does not exist\n\n";

  std::cout << "Array location One  (values[0]): " << values[0] << std::endl;
  std::cout << "Array location Five (values[4]): " << values[4] << std::endl;
  
  //Use for loop to assign value to each location
  for (int i=0; i < 5; i++)
    values[i] = i+1;

  std::cout <<"\n//Use for loop to assign value to each location\nfor (int i=0; i < 5; i++)\n\tvalues[i] = i+1;\n\n";

  std::cout << "//Use for loop to display values in array\nstd::cout << \"List of values: \" << std::endl;\nfor (int i=0; i < 5; i++)\n\tstd::cout << values[i] << \" \";\n" << std::endl;
  
  //Use for loop to display values in array
  std::cout << "List of values: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << values[i] << " ";
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "//dinner array list\nstd::cout << \"List of dinners: \" << std::endl;\nfor (int i=0; i < 5; i++)\n\tstd::cout << dinner[i] << \" \";\n" << std::endl;

  //dinner array list
  std::cout << "List of dinners: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << dinner[i] << " ";
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "//partially filled array\nstd::cout << \"List of nums: \" << std::endl;\nfor (int i=0; i < 5; i++)\n\tstd::cout << nums[i] << \" \";\n" << std::endl;
  
  //partially filled array
  std::cout << "List of nums: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << nums[i] << " ";
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "//size determined by list\nstd::cout << \"List of items: \" << std::endl;\nfor (int i=0; i < 5; i++)\n\tstd::cout << items[i] << \" \";\n" << std::endl;
  
  //size determined by list
  std::cout << "List of items: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << items[i] << " ";
  std::cout << std::endl;

  printFooter(_title);
}

