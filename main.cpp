#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "car.h"

using namespace std;

int getNumberOfSpaces(string stringToSearch);
void readIntegerListFile(string filename);


struct testStruct {
  int id;
  string name;
  int age;
};



void singleArrayTest();
void multiArrayTest(int multiArray[3][3]);
void getUserInput(int array[]);
void printArrayValues(int array[]);
void displayResults(string title, double result);
void fillStructByVal(testStruct ts, int, string, int);
void fillStructByRef(testStruct& ts, int, string, int);
testStruct getStruct(int, string, int);
void printStruct(testStruct);
void structureTest();
void structureArrayTest();


int getSum(int array[]);
int getMin(int array[]);
int getMax(int array[]);
double getAvg(int array[]);
const int SIZE_OF_ARRAY = 5;

/* student structure code*/
const int NUMBER_OF_STUDENTS = 3;

struct studentContact{
  std::string email;
  std::string address;
  std::string phone;
}; 

struct studentName{
  std::string first;
  std::string middle;
  std::string last;
};

struct studentRecord{
  int id;
  double gpa;
  studentName name;
  studentContact contactInfo;
};

const std::string MENU_ITEMS[] = {
  "Add New Student",
  "Remove a Student",
  "Update a Student",
  "Add a Student to a Course",
  "Get Average Grades for a Course",
  "Store Student Assignments and Grades",
  "Quit Application"
};

int getMenuSelection();
void useMenuSelection(int selection, studentRecord students[]);
int getStudentId();
bool studentIdIsValid(int studentId, studentRecord students[]);
void printRecord(studentRecord record);
void printRecords(studentRecord records[]);
void hardcodeStudents(studentRecord students[]);
void changeRecordInfo(studentRecord& student);
/**/


//const int NUMBER_OF_STUDENTS = 3;
int main() {
  Car car1("Toyota", "Rav-4");
  car1.start();
  cout << "\nStart Position: " << car1.getPosition();
  car1.goForward();
  cout << "\n TotalMileage: " << car1.getTotalMileage();
  car1.goForward();
  cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  cout << "\n" << car1.getPosition();
  car1.turnRight();
  car1.goForward();
  cout << "\n" << car1.getPosition();
  car1.goForward();
  cout << "\n TotalMileage: " << car1.getTotalMileage();
  car1.stop();
  cout << "\nStop Position: " << car1.getPosition();

  Car car2("Ford", "F-150");
  car2.start();
  cout << "\nStart Position: " << car2.getPosition();
  car2.goForward();
  car2.goForward();
  car2.goForward();
  cout << "\n TotalMileage: " << car1.getTotalMileage();
  cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  cout << "\n" << car2.getPosition();
  car2.turnRight();
  car2.goForward();
  cout << "\n" << car2.getPosition();
  car2.goForward();
  cout << "\n TotalMileage car1: " << car1.getTotalMileage();
  cout << "\n TotalMileage car2: " << car2.getTotalMileage();
  car2.stop();
  cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();

  car1 = car2;
  cout << "\n after copying data.....";
  cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();
  cout << "\n TotalMileage car1: " << car1.getTotalMileage();

  car1.start();
  car1.goForward();
  car1.goForward();
  car1.goForward();
  car1.goForward();

  cout << "\n after changing data.....";
  cout << "\nStop Position: " << car2.getMakeModel() << car2.getPosition();
  cout << "\nStop Position: " << car1.getMakeModel() << car1.getPosition();
  cout << "\n TotalMileage car1: " << car1.getTotalMileage();

  studentName name1 = {"first", "middle", "last"};
  studentName name2 = {"fourth", "fifth", "sixth"};
  cout << "\n" << name1.first << " " << name1.middle << " " << name1.last;
  cout << "\n" << name2.first << " " << name2.middle << " " << name2.last;
  name1 = name2;
  cout << "\n" << name1.first << " " << name1.middle << " " << name1.last;
  cout << "\n" << name2.first << " " << name2.middle << " " << name2.last;

  string again = "n";
  int multiArray[3][3];

  //readIntegerListFile("integerListFile.txt");
  //do{
    //structureTest();
    //structureArrayTest();

    //////////////////////////////////////////////
    // Build  student records
    studentRecord students[NUMBER_OF_STUDENTS];
    hardcodeStudents(students);
  
    int menuSelection;
  do{
    menuSelection = getMenuSelection();
    useMenuSelection(menuSelection, students);
  
    
    // Display the student records
    //     printRecords(students);
    // Change and display the student record
    //     changeRecordInfo(students[0]);
    //     printRecord(students[0]);
    // Create an array of student records
    // Create a menu for working with the records
    // Add the ability to add new students
    // Add the ability to remove students
    // Add the ability to update a student
    // Add the ability to add students to a course
    // Add the ability to average the students' grades in a course
    // Add the ability to store students' assignments and grades
    //////////////////////////////////////////////
      //menuSelection = getMenuSelection();
    } while (menuSelection != sizeof(MENU_ITEMS)/sizeof(MENU_ITEMS[0]));
    



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
    
    
    //multiArrayTest(multiArray);
    //singleArrayTest();
    
  //  cin.clear();
  //  cin.ignore(100000,'\n');
  //  cout << "\nAgain? Y/y or N/n : ";
  //  getline(cin, again);
    
 // } while (again[0] == 'y' || again[0] == 'Y');
  cout << endl;
  return 0;
}








void structureTest(){
  testStruct record1;
  testStruct record2;
  testStruct record3;
  
  cout << "\n First Print default initialization";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  
  cout << "\n Second Print Pass by Value";
  fillStructByVal(record1, 1, "John", 27);
  fillStructByVal(record2, 2, "Fred", 28);
  fillStructByVal(record3, 3, "Mary", 25);
  
  cout << "\n Third Print after Pass by Value";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  
  cout << "\n Second Print Pass by Reference";
  fillStructByRef(record1, 1, "John", 27);
  fillStructByRef(record2, 2, "Fred", 28);
  fillStructByRef(record3, 3, "Mary", 25);
  cout << "\n Third Print after Pass by Reference";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  
  record1.id  = 4;
  record1.name="Sarah";
  record1.age = 10;
  record2.id  = 5;
  record2.name="Steph";
  record2.age = 11;
  record3.id  = 6;
  record3.name="Shawn";
  record3.age = 12;
  cout << "\n Fourth Print explicit initialization";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  record1 = getStruct(7, "Marshall", 48);
  record2 = getStruct(8, "Stephen", 47);
  record3 = getStruct(9, "Tommy", 37);
  
  cout << "\n Fifth Print after returning a structure";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  /**/
  cout << endl;
}
void structureArrayTest(){
  testStruct tsArray[3];
  tsArray[0].id = 1;
  tsArray[0].age = 2;
  tsArray[0].name = "a";
  tsArray[1].id = 2;
  tsArray[1].age = 4;
  tsArray[1].name = "be";
  tsArray[2].id = 3;
  tsArray[2].age = 6;
  tsArray[2].name = "cee";

  for(int i=0; i<3; i++){
    printStruct(tsArray[i]);
    cout << "\n";
  }
}
void fillStructByVal(testStruct ts, int id, string name, int age){
  ts.id = id;
  ts.name = name;
  ts.age = age;
  printStruct(ts);
}
void fillStructByRef(testStruct& ts, int id, string name, int age){
  ts.id = id;
  ts.name = name;
  ts.age = age;
  printStruct(ts);
}
testStruct getStruct(int id, string name, int age){
  testStruct ts;
  ts.id = id;
  ts.name = name;
  ts.age = age;
  //printStruct(ts);
  return ts;
}
void printStruct(testStruct ts){
  cout << "\nID:  " << ts.id;
  cout << "\nAge: " << ts.age;
  cout << "\nName:" << ts.name;
}



/* student structure code */
int getMenuSelection(){
  int menuSelection = -1;
  std::cout << "\n***** MENU *****";
  int menuSize = sizeof(MENU_ITEMS)/sizeof(MENU_ITEMS[0]);
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << MENU_ITEMS[itemIndex];
  }
  std::cout << "\n\n\n Enter Your selection: ";

  std::cin >> menuSelection;
  
  while(!std::cin || menuSelection < 1 || menuSelection > menuSize){
    std::cout << "\nThere was a problem with your selection. Try again: ";
    std::cin.clear();
    std::cin.ignore(100000,'\n');
    std::cin >> menuSelection;
  }
  
  return menuSelection;
}
  
void useMenuSelection(int selection, studentRecord students[]){
    /*
  "1 Add New Student",
  "2 Remove a Student",
  "3 Update a Student",
  "4 Add a Student to a Course",
  "5 Get Average Grades for a Course",
  "6 Store Student Assignments and Grades",
  "7 Quit Application"
    */
  int studentId;
  bool validId;
  std::string validResponse;
  switch(selection){
    case 1:
      std::cout << "case 1";
      break;
    case 2:
      std::cout << "case 2";
      break;
    case 3:
      studentId = getStudentId();
      validId = studentIdIsValid(studentId, students);
      validResponse = (validId)?"Valid":"InValid";
      std::cout << "studentId: " << studentId << " " << validResponse << std::endl;
      
//      updateStudentRecordMenu()
      break;
    case 4:
      std::cout << "case 4";
      break;
    case 5:
      std::cout << "case 5";
      break;
    case 6:
      std::cout << "case 6";
      break;
    default:
      std::cout << "default";
  }
}

int getStudentId(){
  std::cout << "\nEnter student id: ";
  int response;
  std::cin >> response;
  return response;
}
bool studentIdIsValid(int studentId, studentRecord students[]){
  bool validId = false;
  for(int recordIndex=0; recordIndex < NUMBER_OF_STUDENTS;recordIndex++){
    if(students[recordIndex].id == studentId){
      validId = true;
      break;
    }
  }
  return validId;
}

void printRecord(studentRecord record){
  std::cout << "\n";
  std::cout << "\t" << record.name.last << ", " << record.name.first << " " << record.name.middle;
  std::cout << "\n\t\tID:  " << record.id;
  std::cout << "\n\t\tGPA: " << std::fixed << std::setprecision(1) << record.gpa;
  std::cout << "\n\t\tContact Information: ";
  std::cout << "\n\t\t\tEmail: " << record.contactInfo.email;
  std::cout << "\n\t\t\tPhone: " << record.contactInfo.phone;
  std::cout << "\n\t\t\tAddress: " << record.contactInfo.address;
  std::cout << std::endl;
}
void printRecords(studentRecord records[]){
  std::cout << "\nStudent Records:";
  for(int recordIndex=0; recordIndex<NUMBER_OF_STUDENTS; recordIndex++){
    printRecord(records[recordIndex]);
  }
}

void hardcodeStudents(studentRecord students[]){
  students[0].id=1;
  students[0].gpa=4.0;
  students[0].name.first="Will";
  students[0].name.middle="Anita";
  students[0].name.last="Smith";
  students[0].contactInfo.email="wSmith@Oscars.com";
  students[0].contactInfo.address="123 Main, Kilgore, TX 75662";
  students[0].contactInfo.phone = "555-555-5555";
  
  students[1].id=2;
  students[1].gpa=3.5;
  students[1].name.first="Chris";
  students[1].name.middle="the";
  students[1].name.last="Rock";
  students[1].contactInfo.email="Chris@theRock.com";
  students[1].contactInfo.address="321 Main, Kilgore, TX 75662";
  students[1].contactInfo.phone = "555-555-5555";
  
  students[2].id=3;
  students[2].gpa=3.0;
  students[2].name.first="Jada";
  students[2].name.middle="Pinkett";
  students[2].name.last="Smith";
  students[2].contactInfo.email="jSmith@Offended.com";
  students[2].contactInfo.address="123 Main, Kilgore, TX 75662";
  students[2].contactInfo.phone = "555-555-5555";
}

void changeRecordInfo(studentRecord& student){
  student.contactInfo.address = "5467 FM 3456 Longview, TX 75603";
}
/**/



void singleArrayTest(){
  int userInputs[SIZE_OF_ARRAY] = {10,20};
  int sum;
  int max;
  int min = 0;
  double avg = 0.0;

  printArrayValues(userInputs);
    getUserInput(userInputs);
    printArrayValues(userInputs);
    displayResults("\nSum: ", getSum(userInputs));
    displayResults("\nMin: ", getMin(userInputs));
    displayResults("\nMax: ", getMax(userInputs));
    displayResults("\nAvg: ", getAvg(userInputs));
}

void multiArrayTest(int multiArray[3][3]){
  for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout<<"\n >> ";
        cin >> multiArray[i][j];
      }
    }

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout << "\nvalue: " << multiArray[j][i];
      }
    }
}

void getUserInput(int array[]){
    for(int i = 0; i < SIZE_OF_ARRAY; i++){
      cout << "\nEnter an integer: ";
      cin >> array[i];
    }
}

void printArrayValues(int array[]){
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
      string title = "\n[" + to_string(i) + "]:";
      displayResults(title, array[i]);
      //cout << "\n["<< i <<"]:" array[i] << " ";
    }
}

int getSum(int array[]){
  int sum = 0;
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    sum = sum + array[i]; // come back to this to show an easier way!!!
    sum += array[i];
  }
  return sum;
}

int getMin(int array[]){
  int min = array[0];
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    if(min > array[i]){
      min = array[i];
    }
  }
  return min;
}

int getMax(int array[]){
  int max = array[0];
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    if(max < array[i]){
      max = array[i];
    }
  }
  return max;
}

double getAvg(int array[]){
  return getSum(array) / (double)SIZE_OF_ARRAY;
}

void displayResults(string title, double result){
  cout << title << result;
}









void readIntegerListFile(string filename){
  ifstream myfile; 
    myfile.open(filename);
    string myline;
    if ( myfile.is_open() ) {
      while ( myfile ) {
        getline (myfile, myline);
        cout << "\nNumber of spaces: " << getNumberOfSpaces(myline) << '\n';
        cout << myline << ": " << myfile.tellg() << '\n';
      }
    }
    myfile.close();
    return;
}

int getNumberOfSpaces(string stringToSearch){
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