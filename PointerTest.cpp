#include <iostream>
#include <string>
#include "PointerTest.h"

void PointerTest::runTests(){
 runPointerTestOne();
 runPointerTestTwo();
 runPointerTestThree();
 runPointerTestNew();
 runPointerTestDynamicArrays();
 runPointerTestRandomSizeArrays();
}
void PointerTest::displayMenu(){
  std::string menuTitle = " Pointer Menu ";
  int userInput = 0;
  std::string menu[] = {
    "Quit",
    "Test One",
    "Test Two",
    "Test Three",
    "Test New",
    "Test Dynamic Arrays",
    "Test Random Size Arrays"
  };
  do
  {
    printTitle(menuTitle);
    std::cin >> userInput;
    printFooter(menuTitle);
    switch(userInput)
      {
        default:
          break;
      }
  } while(userInput != 0);
}
int PointerTest::getUserInput(){
  
}

void PointerTest::runPointerTestOne()
{
  std::string title = " Pointer Test One ";
  printTitle(title);
  int x;
  int *p;
  std::cout << "x: " << x << std::endl;
  std::cout << "p: " << p << std:: endl;
  std::cout << "&x: " << &x << std::endl;
  std::cout << "&p: " << &p << std:: endl;
  //std::cout << "*x: " << *x << std::endl;
  //std::cout << "*p: " << *p << std:: endl;
  x = 5;
  p = &x;
  std:: cout << "after assignment..." << std::endl;
  std::cout << "x: " << x << std::endl;
  std::cout << "p: " << p << std:: endl;
  std::cout << "&x: " << &x << std::endl;
  std::cout << "&p: " << &p << std:: endl;
  //std::cout << "*x: " << *x << std::endl;
  std::cout << "*p: " << *p << std:: endl;
  printFooter(title);
}

void PointerTest::runPointerTestTwo()
{
  std::string title = " Pointer Test Two ";
  printTitle(title);
  int *ptrA = 0;
  int *ptrB = NULL;
  int *ptrC = nullptr;
  std::cout << "ptrA: " << ptrA << std:: endl;
  std::cout << "ptrB: " << ptrB << std::endl;
  std::cout << "ptrC: " << ptrC << std:: endl;
  std::cout << "&ptrA: " << &ptrA << std:: endl;
  std::cout << "&ptrB: " << &ptrB << std::endl;
  std::cout << "&ptrC: " << &ptrC << std:: endl;
  //std::cout << "*ptrA: " << *ptrA << std:: endl;
  //std::cout << "*ptrB: " << *ptrB << std::endl;
  //std::cout << "*ptrC: " << *ptrC << std:: endl;
  printFooter(title);
}

void PointerTest::runPointerTestNew()
{
  // int *p;
  // char *name;
  // std::string *str;
  
  // std::cout <<"int : " << *p   <<std::endl;
  // std::cout <<"name: " << *name<<std::endl;
  // // std::cout <<"str : " << *str <<std::endl;
  // std::cout << "\n";
  // std::cout <<"&int : " << &p   <<std::endl;
  // std::cout <<"&name: " << &name<<std::endl;
  // std::cout <<"str : " << &str <<std::endl;
  // std::cout << "\n";
  
  // p = new int;
  // *p = 38;

  // name = new char[5];
  // std::strcpy(name, "John");

  // str = new std::string;
  // *str = "Howdy, Folks!";

  // std::cout <<"int : " << *p   <<std::endl;
  // std::cout <<"name: " << *name<<std::endl;
  // std::cout <<"str : " << *str <<std::endl;
  // std::cout << "\n";
  // std::cout <<"&int : " << &p   <<std::endl;
  // std::cout <<"&name: " << &name<<std::endl;
  // std::cout <<"str : " << &str <<std::endl;
  // std::cout << "\n";

  // delete p;
  // delete [] name;
  // delete str;

  
  // std::cout <<"int : " << *p   <<std::endl;
  // std::cout <<"name: " << *name<<std::endl;
  // // std::cout <<"str : " << *str <<std::endl;
  // std::cout << "\n";
  // std::cout <<"&int : " << &p   <<std::endl;
  // std::cout <<"&name: " << &name<<std::endl;
  // // std::cout <<"str : " << &str <<std::endl;
  // std::cout << "\n";



  int *a;
  int size=0;
  std::cout << "Enter an integer: ";
  std::cin >> size;
  std::cout << std::endl;
  
  a = new int[size];
  for(int i=0; i<size;i++)
  {
    a[i] = (i+1)*2;
  }
  for(int i=0; i<size; i++)
  {
    std::cout << "a[" << i << "] "<< i+1 << ": " << a[i] << std::endl;
  }
  delete [] a;
}

void PointerTest::runPointerTestThree()
{
  int integer1 = 0;
  int integer2 = 0;
  int *pointer1Ptr = &integer1;
  int *pointer2Ptr = &integer2;
  int *pointer3Ptr;
  std::cout << "integer1: " << integer1 << std::endl;
  std::cout << "integer2: " << integer1 << std::endl;
  std::cout << "pointer1Ptr: " << pointer1Ptr << std::endl;
  std::cout << "*pointer1Ptr: " << *pointer1Ptr << std::endl;
  std::cout << "pointer2Ptr: " << pointer2Ptr << std::endl;
  std::cout << "*pointer2Ptr: " << *pointer2Ptr << std::endl;
  
  pointer3Ptr = pointerParameters(pointer1Ptr, pointer2Ptr);
  
  std::cout << "integer1: " << integer1 << std::endl;
  std::cout << "integer2: " << integer2 << std::endl;
  std::cout << "pointer1Ptr: " << pointer1Ptr << std::endl;
  std::cout << "*pointer1Ptr: " << *pointer1Ptr << std::endl;
  std::cout << "pointer2Ptr: " << pointer2Ptr << std::endl;
  std::cout << "*pointer2Ptr: " << *pointer2Ptr << std::endl;
  std::cout << "pointer3Ptr: " << pointer3Ptr << std::endl;
  std::cout << "*pointer3Ptr: " << *pointer3Ptr << std::endl;
  *pointer3Ptr = 13;
  std::cout << "*pointer3Ptr (13): " << *pointer3Ptr << std::endl;
}

int* PointerTest::pointerParameters(int* &p, int *q)
{
  int r = 13;
  int s = 13;
  std::cout << "*p: " << *p << std::endl;
  std::cout << "*q: " << *q << std::endl;
  *p = 5;
  *q = 6;
  std::cout << "p: " << p << std::endl;
  std::cout << "q: " << q << std::endl;
  std::cout << "*p: " << *p << std::endl;
  std::cout << "*q: " << *q << std::endl;
  p = &r;
  q = &r;
  std::cout << "p: " << p << std::endl;
  std::cout << "q: " << q << std::endl;
  return &s;
}

void PointerTest::runPointerTestDynamicArrays()
{
  srand(time(NULL));
  int *board1[4];
  for(int row=0; row < 4; row++)
    {
      board1[row] = new int[6];
    }
  for(int row=0; row < 4; row++)
    {
      for(int col=0; col<6; col++)
        {
          board1[row][col] = rand() % 20 + 1;
        }
    }
  for(int row=0; row < 4; row++)
    {
      for(int col=0; col<6; col++)
        {
          std::cout << "board1 - ["<<row<<","<<col<<"]:" << board1[row][col] << std::endl;
        }
    }
  int **board2;
  int rows = 10;
  int cols = 15;
  board2 = new int*[rows];
  for(int row=0; row < rows; row++)
    {
      board2[row] = new int[cols];
      for(int col=0; col < cols; col++)
        {
          board2[row][col] = rand() % 20 + 1;
        }
    }
  for(int row=0; row < rows; row++)
    {
      for(int col=0; col < cols; col++)
        {
          std::cout << "board2 - ["<<row<<","<<col<<"]:" << board2[row][col] << std::endl;
        }
    }
  printArrays(board2);
}

void PointerTest::printArrays(int **array)
{
  for(int row=0; row < sizeof(array)/sizeof(int); row++)
    {
      for(int col=0; col < sizeof(*array[row])/sizeof(int); col++)
        {
          std::cout << "array - ["<<row<<","<<col<<"]:" << array[row][col] << std::endl;
        }
    }
}

void PointerTest::runPointerTestRandomSizeArrays()
{
  //sizeof(arrayname) / sizeof(int)
  int *first;
  int *second;
  int *third;
  int *fourth;
  //shallow copy
  first = new int[5];
  // fill first
  second = first;
  // print both
  delete [] second;
  // print both
  //deep copy
  third = new int[5];
  // fill third
  fourth = new int[5];
  // copy to fourth
  // print both
  delete [] fourth;
  // print both
}


