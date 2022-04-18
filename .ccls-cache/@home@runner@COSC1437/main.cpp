#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "car.h"
#include "student.h"
#include "structTestClass.h"
#include "arrayTestClass.h"
#include "diceRollerTest.h"
#include "sampleClass.h"
#include "lesson10_19.h"
// #include "startable.h"
#include "stop.h"


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
void printTitle(std::string, char);
void printFooter(std::string, char);
std::string buildBorderLine(char borderChar, int length);

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
      default:
        std::cout << "That option is not available.";
    }
    
    printMenu();
    menuSelection = getMenuSelection();
  }
  std::cout << std::endl;
  return 0;
    
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

void runPointerTestCode()
{
  runPointerTestOne();
  runPointerTestTwo();
  StructTestClass structClass;
  structClass.runStructurePointerTests();
  runPointerTestNew();
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
  int *p;
  char *name;
  std::string *str;
  
  std::cout <<"int : " << *p   <<std::endl;
  std::cout <<"name: " << *name<<std::endl;
  // std::cout <<"str : " << *str <<std::endl;
  std::cout << "\n";
  std::cout <<"&int : " << &p   <<std::endl;
  std::cout <<"&name: " << &name<<std::endl;
  // std::cout <<"str : " << &str <<std::endl;
  std::cout << "\n";
  
  p = new int;
  *p = 38;

  name = new char[5];
  std::strcpy(name, "John");

  str = new std::string;
  *str = "Howdy, Folks!";

  std::cout <<"int : " << *p   <<std::endl;
  std::cout <<"name: " << *name<<std::endl;
  std::cout <<"str : " << *str <<std::endl;
  std::cout << "\n";
  std::cout <<"&int : " << &p   <<std::endl;
  std::cout <<"&name: " << &name<<std::endl;
  // std::cout <<"str : " << &str <<std::endl;
  std::cout << "\n";

  delete p;
  delete [] name;
  delete str;

  
  std::cout <<"int : " << *p   <<std::endl;
  std::cout <<"name: " << *name<<std::endl;
  // std::cout <<"str : " << *str <<std::endl;
  std::cout << "\n";
  std::cout <<"&int : " << &p   <<std::endl;
  std::cout <<"&name: " << &name<<std::endl;
  // std::cout <<"str : " << &str <<std::endl;
  std::cout << "\n";



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
    "Run Pointer Tests"
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