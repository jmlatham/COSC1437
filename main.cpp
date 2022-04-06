#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "car.h"
#include "student.h"
#include "structTestClass.h"
#include "arrayTestClass.h"
#include "diceRollerTest.h"


int getNumberOfSpaces(std::string stringToSearch);
void readIntegerListFile(std::string filename);

void runCarCode();
void runStudentCode();
void runStructCode();
void runArrayCode();
void printMenu();
int getMenuSelection();
void runDiceTestCode();

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
      default:
        std::cout << "That option is not available.";
    }
    
    printMenu();
    menuSelection = getMenuSelection();
  }
  std::cout << std::endl;
  return 0;
    
}

void runCarCode(){
  Car car1("My", "car");
  car1.runCarCode();
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
    "Run Dice Code"
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