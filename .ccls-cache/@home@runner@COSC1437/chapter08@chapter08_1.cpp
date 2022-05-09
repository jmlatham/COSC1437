#include <iostream>
#include "chapter08_1.h"

chapter08_1::chapter08_1()
{
  _title = " Chapter 8_1 Example ";
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
  
  std::cout << "Array location One: " << values[0] << std::endl;
  std::cout << "Array location Five: " << values[4] << std::endl;
  
  //Use for loop to assign value to each location
  for (int i=0; i < 5; i++)
    values[i] = i+1;
  
  //Use for loop to display values in array
  std::cout << "List of values: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << values[i] << " ";
  std::cout << std::endl;

  //dinner array list
  std::cout << "List of dinners: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << dinner[i] << " ";
  std::cout << std::endl;
	
  //partially filled array
  std::cout << "List of nums: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << nums[i] << " ";
  std::cout << std::endl;
	
  //size determined by list
  std::cout << "List of items: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << items[i] << " ";

  printFooter(_title);
}

