#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "car.h"
#include "student.h"
#include "structTestClass.h"
#include "arrayTestClass.h"


int getNumberOfSpaces(std::string stringToSearch);
void readIntegerListFile(std::string filename);

void runCarCode();
void runStudentCode();
void runStructCode();
void runArrayCode();
void printMenu();
int getMenuSelection();

int main() 
{
  int menuSelection = -1;
  printMenu();
  menuSelection = getMenuSelection();
  while (menuSelection > 0)
  {
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
    "Run Array Code"
  };
  int menuSize = sizeof(menuItems)/sizeof(menuItems[0]);
  std::cout << "\n\n<----- MAIN MENU ----->";
  std::cout << "\n\t0. Quit";
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << menuItems[itemIndex];
  }
  std::cout << "\n<--------------------->";
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



void readIntegerListFile(std::string filename){
  std::ifstream myfile; 
    myfile.open(filename);
    std::string myline;
    if ( myfile.is_open() ) {
      while ( myfile ) {
        getline (myfile, myline);
        std::cout << "\nNumber of spaces: " << getNumberOfSpaces(myline) << '\n';
        std::cout << myline << ": " << myfile.tellg() << '\n';
      }
    }
    myfile.close();
    return;
}

int getNumberOfSpaces(std::string stringToSearch){
  int counter = 0;
  bool previousCharIsSpace = true;
  for(int i=0; (unsigned)i<stringToSearch.size(); i++){
    if(stringToSearch[i] != ' ' && stringToSearch[i] != '\n'){
      if(previousCharIsSpace && stringToSearch[i] != '\n'){
        counter++;
      }
      previousCharIsSpace = false;
    } else {
      previousCharIsSpace = true;
    }
  }
  return counter;
}


/*
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
    /*
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

/*
string again = "n";
  int userInput1;
  int userInput2;
  int userInput3;
  int userInput4;
  int userInput5;
  int sum;
  int max;
  int min;
  double avg = 0.0;
  
  do{
    cout << "\nEnter an integer:";
    cin >> userInput1;
    cout << "\nEnter an integer:";
    cin >> userInput2;
    cout << "\nEnter an integer:";
    cin >> userInput3;
    cout << "\nEnter an integer:";
    cin >> userInput4;
    cout << "\nEnter an integer:";
    cin >> userInput5;
    
    cout << userInput1 << " ";
    cout << userInput2 << " ";
    cout << userInput3 << " ";
    cout << userInput4 << " ";
    cout << userInput5 << " ";

    cout << "\n\tThe sum of the numbers is ";
    sum = userInput1 + userInput2 + userInput3 + userInput4 + userInput5;
    cout << sum << endl;

    
    max = userInput1;
    min = userInput1;
    if (userInput2 > max) {
      max = userInput2;
    }
    if (userInput2 < min) {
      min = userInput2;
    }

    if (userInput3 > max) {
      max = userInput3;
    }
    if (userInput3 < min) {
      min = userInput3;
    }
    
    if (userInput4 > max) {
      max = userInput4;
    }
    if (userInput4 < min) {
      min = userInput4;
    }
    
    if (userInput5 > max) {
      max = userInput5;
    }
    if (userInput5 < min) {
      min = userInput5;
    }

    cout << "The biggest number is " << max << "\n";
    cout << "The \"smallest\" number is " << min << "\n";

    avg = sum / 5.0;

    cout << "The average of the five numbers is " << avg << endl;
    
    //////////////////////////////////////////////
    // Write a program that will:
    // 1. receive five numbers from the user and
    //    display all five numbers to the user
    // 2. find the smallest and display it
    // 3. find the largest and display it
    // 4. find the sum and display it
    // 5. find the average and display it
    //////////////////////////////////////////////
    // upon successful completion of 1 - 5:
    // 1. refactor to be separated into functions
    // 2. refactor to use arrays
    //////////////////////////////////////////////
*/