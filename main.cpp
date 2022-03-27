#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
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


int main() {
  string again = "n";
  int multiArray[3][3];

  //readIntegerListFile("integerListFile.txt");
  
  do{
    //structureTest();
    //structureArrayTest();
    //////////////////////////////////////////////
    // Build a student record
    // Display the student record
    // Change and display the student record
    // Create an array of student records
    // Create a menu for working with the records
    //////////////////////////////////////////////
    
    
    
    
    
    //multiArrayTest(multiArray);
    //singleArrayTest();
    
    cin.clear();
    cin.ignore(100000,'\n');
    cout << "\nAgain? Y/y or N/n : ";
    getline(cin, again);
    
  } while (again[0] == 'y' || again[0] == 'Y');
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
  /*
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