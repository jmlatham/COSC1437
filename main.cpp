#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "car.h"
#include "student.h"
#include "structTestClass.h"
#include "arrayTestClass.h"
#include "diceRollerTest.h"
#include "sampleClass.h"
#include "lesson10_19.h"
// #include "startable.h"
#include "stop.h"
#include "petType.h"
#include "dogType.h"
#include "RectangleTest.h"


int getNumberOfSpaces(std::string stringToSearch);
void readIntegerListFile(std::string filename);

void runCarCode();
void runStudentCode();
void runStructCode();
void runArrayCode();
void printMenu();
int getMenuSelection();
void runDiceTestCode();
void runSampleClassCode();
void runLesson10_19Code();
void runPointerTestCode();
void runPointerTestOne();
void runPointerTestTwo();
void runPointerTestNew();
void runPointerTestThree();
int* pointerParameters(int* &p, int *q);
void runPointerTestDynamicArrays();
void runPointerTestRandomSizeArrays();
void runOperatorOverloadTest();
void runTemplateTest();
void printTitle(std::string, char);
void printFooter(std::string, char);
void printArrays(int **array);
std::string buildBorderLine(char borderChar, int length);

void runPetTypeTestCode();
void callPrint(PetType& pet);




template <class Type>
Type larger(Type x, Type y);

int main() 
{

  int menuSelection = -1;
  printMenu();
  menuSelection = getMenuSelection();
  while (menuSelection > 0)
  {
    /*
    Constructors and overloaded constructors
    constructor with default values
    default constructor
    const member functions and const objects
    ADT: type name, domain, operations
    */
    switch(menuSelection){
      case 1:
        runCarCode();
        break;
      case 2:
        runStudentCode();
        break;
      case 3:
        runStructCode();
        break;
      case 4:
        runArrayCode();
        break;
      case 5:
        readIntegerListFile("integerListFile.txt");
        break;
      case 6:
        runDiceTestCode();
        break;
      case 7:
        runSampleClassCode();
        break;
      case 8:
        runLesson10_19Code();
        break;
      case 9:
        runPointerTestCode();
        break;
      case 10:
        runPetTypeTestCode();
        break;
      case 11:
        runOperatorOverloadTest();
        break;
      case 12:
        runTemplateTest();
        break;
      default:
        std::cout << "That option is not available.";
    }
    
    printMenu();
    menuSelection = getMenuSelection();
  }
  std::cout << std::endl;
  return 0;
    
}

template <class Type>
Type larger(Type x, Type y)
{
  if(x >= y)
  {
    return x;
  }
  
  return y;
}

void runTemplateTest()
{
  std::cout << "Larger of 5 and 6 = " << larger(5,6) << std::endl;
  std::cout << "Larger of A and B = " << larger('A','B') << std::endl;
  std::cout << "Larger of A and B = " << larger('B','A') << std::endl;
  std::cout << "Larger of Texas and Alaska = " << larger((std::string)"Alaska", (std::string)"Texas") << std:: endl;
  std::cout << "Larger of Texas and Alaska = " << larger((std::string)"Texas",(std::string)"Alaska") << std:: endl;
}

void runOperatorOverloadTest()
{
  RectangleTest test;
  // test.runTest();
  // test.runTest2();
  test.runTest3();
}

void runPetTypeTestCode()
{
  PetType pet("Lizard");
  DogType dog("Spot", "lab");
  pet.print();
  std::cout << std::endl;
  dog.print();
  std::cout << std::endl;
  callPrint(pet);
  std::cout << std::endl;
  callPrint(dog);
  std::cout << std::endl;
  
}
void callPrint(PetType& pet)
{
  pet.print();
}

std::string buildBorderLine(char borderChar, int length)
{
  std::string borderLine = "";
  for(int i = 0; i<length; i++)
    {
      borderLine += borderChar;
    }
  return borderLine;
}

void printTitle(std::string title, char borderChar='*')
{
  std::string borderLine = buildBorderLine(borderChar, title.length() + 2);
  std::cout << "\n" << borderLine << std::endl;
  std::cout << borderChar;
  std::cout << title;
  std::cout << borderChar<< std::endl;
  std::cout << borderLine << std::endl;
  
}
void printFooter(std::string title, char borderChar='*')
{
  std::cout << "\n" << buildBorderLine(borderChar, title.length() + 2) << std::endl;
}
/////////////////////////////////////////////
void runPointerTestCode()
{
  // int newTest = 0;
  // int *newTestPtr = &newTest;

  // std::cout << "newTest: " << newTest << std::endl;
  // std::cout << "&newTest: " << &newTest << std::endl;
  // *newTestPtr = 5;
  // std::cout << "newTest: " << newTest << std::endl;
  // std::cout << "&newTest: " << &newTest << std::endl;
  // std::cout << "newTestPtr: " << newTestPtr << std::endl;
  // newTestPtr = new int;
  // std::cout << "newTestPtr: " << newTestPtr << std::endl;
  // *newTestPtr = 10;
  // std::cout << "newTest: " << newTest << std::endl;
  // std::cout << "&newTest: " << &newTest << std::endl;
  // std::cout << "*newTestPtr: " << *newTestPtr << std::endl;
  // std::cout << "newTestPtr: " << newTestPtr << std::endl;
  
  //runPointerTestOne();
  //runPointerTestTwo();
  // StructTestClass structClass;
  // structClass.runStructurePointerTests();
   // runPointerTestNew();
   // runPointerTestThree();
  runPointerTestDynamicArrays();
  // runPointerTestRandomSizeArrays();
}
void runPointerTestOne()
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
void runPointerTestTwo()
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
void runPointerTestNew()
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
void runPointerTestThree()
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
  std::cout << "pointer3Ptr: " << pointer3Ptr << std::endl;
  
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
  std::cout << "pointer3Ptr:" << pointer3Ptr << std::endl;
}
int* pointerParameters(int* &p, int *q)
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
  std::cout << "s: " << s << std::endl;
  std::cout << "&s:" << &s << std::endl;
  return &s;
}
void runPointerTestDynamicArrays()
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
void printArrays(int **array)
{
  for(int row=0; row < sizeof(array)/sizeof(int); row++)
    {
      for(int col=0; col < sizeof(*array[row])/sizeof(int); col++)
        {
          std::cout << "array - ["<<row<<","<<col<<"]:" << array[row][col] << std::endl;
        }
    }
}
void runPointerTestRandomSizeArrays()
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
///////////////////////////////////////////////////////////
// string list1[3] = {
//     "item1",
//     "item2",
//     "item3"
// };

// string list2[2] = {
//     "item1",
//     "item2"
// };

// template<typename T, size_t N>
// void PrintItems(T(&items)[N]) {
//     for (int i = 0; i < N; i++) {
//         cout << items[i] << endl;
//     }
// }

// int main() {
//     PrintItems(list1);
//     PrintItems(list2);
// }

void runLesson10_19Code()
{
  Lesson10_19 lesson;
  lesson.runTests();
}

void runSampleClassCode()
{
  Sample sample;
  sample.runTests();
}

void runCarCode(){
  Car car1("My", "car");
  car1.runCarCode();
  car1.setColor2("Maroon");
  car1.setColor2("Marron");
  Stopable stopper(car1);
  // Startable starter(car1);
  // starter.start();
  std::cout << "\ncar1 is " << std::to_string(car1.isVehicleStarted());
  stopper.stop();
  std::cout << "\ncar1 is " << std::to_string(car1.isVehicleStarted());
  
  // A function inherited from the Vehicle class
  //car1.setWeight(2500);
  std::cout << "\nThe color of the car2 is: " << car1.getColor() << std::endl;
  //std::cout << "The weight of the car2 is: " << car1.getWeight() << " lbs " << std::endl;
  std::cout << "The car2 is currently traveling at: " << car1.floorIt() << " mph" <<
  std::endl;
  
}
void runStudentCode(){
  Student student1;
  student1.runStudentCode();
}
void runStructCode(){
  StructTestClass structTest;
  structTest.runStructureTests();
}
void runArrayCode(){
  ArrayTestClass arrayTest;
  arrayTest.runArrayTestCode();
}

void printMenu(){
  std::string menuItems[] = {
    "Run Car Code",
    "Run Student Code",
    "Run Struct Code",
    "Run Array Code",
    "Read Integer List File",
    "Run Dice Code",
    "Run Sample class",
    "Run Lesson 10_19",
    "Run Pointer Tests",
    "Run PetType Test",
    "Run Operator Overload Test",
    "Run Template Test"
  };
  int menuSize = sizeof(menuItems)/sizeof(menuItems[0]);
  std::cout << "\n\n<--------- MAIN MENU --------->";
  std::cout << "\n\t0. Quit";
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << menuItems[itemIndex];
  }
  std::cout << "\n<----------------------------->";
  std::cout << "\n\n\n Enter Your selection: ";
}
int getMenuSelection(){
  int selection = -1;
  std::cin >> selection;
  if(!std::cin)
  {
    std::cout << "\n\tThe selection needs to be an integer. Please try again: ";
    std::cin.clear();
    std::cin.ignore(100000,'\n');
    return getMenuSelection();
  }
  return selection;
}

void runDiceTestCode()
{
  std::cout << "run dice code";
  DiceRollerTest drTest;
  drTest.runTests();
}



void readIntegerListFile(std::string filename){
  std::ifstream myfile; 
    myfile.open(filename);
    std::string myline;
    if ( myfile.is_open() ) {
      while ( myfile ) {
        getline (myfile, myline);
        std::cout << "\nNumber of spaces: " << getNumberOfSpaces(myline) << '\n';
        std::cout << myline << ": " << myfile.tellg() << '\n';
        // tellg() is the position of the cursor in the file. I suppose -1 means the end of the file.
      }
    }
    myfile.close();
    return;
}

int getNumberOfSpaces(std::string stringToSearch){
  int counter = 0;
  bool previousCharIsSpace = false;
  for(int i=0; (unsigned)i<stringToSearch.size(); i++){
    if(stringToSearch[i] != ' ' && stringToSearch[i] != '\n'){
      if(previousCharIsSpace){
        counter++;
        //std::cout << "\n\t\t\t" << stringToSearch[i] << "-" << std::to_string(counter);
      }
      previousCharIsSpace = false;
    } else {
      previousCharIsSpace = true;
    }
  }
  std::cout << std::endl;
  return counter;
}


/* Using Vector code
// sub.push_back ({"Math", 70, 0});
    /*
      struct subject {
          string name;
          int marks;
          int credits;
      };
      
      
      int main() {
          vector<subject> sub;
      
          //Push back new subject created with default constructor.
          sub.push_back(subject());
      
          //Vector now has 1 element @ index 0, so modify it.
          sub[0].name = "english";
      
          //Add a new element if you want another:
          sub.push_back(subject());
      
          //Modify its name and marks.
          sub[1].name = "math";
          sub[1].marks = 90;
      }
*/
/* Using dynamic arrays
Delete dynamically allocated array in C++
A dynamic memory allocated array in C++ looks like:

int* array = new int[100];
C++Copy
A dynamic memory allocated array can be deleted as:

delete[] array;
If we delete a specific element in a dynamic memory allocated array, then the total number of elements is reduced so we can reduce the total size of this array. This will involve:

array = (int *)realloc(array, sizeof(int) * (N-1));
C++Copy
This deletes an element in true sense.
*/