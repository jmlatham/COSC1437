#include <iostream>
#include "chapter08_1g.h"

chapter08_1g::chapter08_1g()
{
  _title = " 8-1f Some Restrictions on Array Processing ";
}

void chapter08_1g::displayMenu()
{
  
}

void chapter08_1g::displayInstructions()
{
  
}

void chapter08_1g::runTest()
{
  printTitle(_title);

  std::cout << "\nAn array is always passed by reference and does not need to use the normal reference symbol '&' in order to pass it to an method." << std::endl;
  std::cout << "\nvoid initialize(int list[], int listSize)"
    << "\n{"
    << "\n\tfor(int count = 0; count < listSize; count++)"
    << "\n\t\t{"
    << "\n\t\t\tlist[count] = 0;"
    << "\n\t\t}"
    << "\n}"
    << std::endl;  

  const int LIST_SIZE = 7;
  int list[LIST_SIZE];
  std::cout << "\nlist contents before calling initialize(...)" << std::endl;
  for(int i = 0; i<LIST_SIZE; i++)
    {
      std::cout << "list[" << i << "] = " << list[i] << std::endl;
    }
  initialize(list, LIST_SIZE);
  std::cout << "\nlist contents after calling initialize(...)" << std::endl;
  for(int i = 0; i<LIST_SIZE; i++)
    {
      std::cout << "list[" << i << "] = " << list[i] << std::endl;
    }

  std::cout << "\n\n::EXAMPLE CODE::\n\n";
  runExample();
  
  printFooter(_title);
}

void chapter08_1g::initialize(int list[], int listSize)
{
  for(int count = 0; count < listSize; count++)
    {
      list[count] = 13;
    }
}

void chapter08_1g::runExample()
{
  int values[5];  //array of integers of size 5
  
  //array declared with initial values
  double dinner[5] = {24.00, 16.00, 5.00};
  int dinnerSize = 3;
  
  //Use for loop to assign value to each location
  for (int i=0; i < 5; i++)
    values[i] = rand() % 20 + 1;;

  printArrays(values, dinner, dinnerSize);
  
  //dinner array list - note array is not filled
  std::cout << "List of dinners - In main: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << dinner[i] << " ";
  std::cout << std::endl;
}

void chapter08_1g::printArrays(int vals[], double meals[], int dinnerSize)
{
  //Use for loop to display values in array
  std::cout << "List of values: " << std::endl;
  for (int i=0; i < 5; i++)
    std::cout << vals[i] << " ";
  std::cout << std::endl;

  //dinner array list
  std::cout << "List of dinners: " << std::endl;
  for (int i=0; i < dinnerSize; i++)
    std::cout << meals[i] << " ";
  std::cout << std::endl;	
  meals[dinnerSize] = 125.00;
  dinnerSize++;
  meals[dinnerSize] = 250.00;
}