#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int getNumberOfSpaces(string stringToSearch);
void readIntegerListFile(string filename);



void getUserInput(int array[]);
void printArrayValues(int array[]);
void displayResults(string title, double result);
int getSum(int array[]);
int getMin(int array[]);
int getMax(int array[]);
double getAvg(int array[]);
const int SIZE_OF_ARRAY = 5;

int main() {
  string again = "n";
  int userInputs[SIZE_OF_ARRAY] = {10,20};
  int multiArray[3][3];
  int sum;
  int max;
  int min = 0;
  double avg = 0.0;

  //readIntegerListFile("integerListFile.txt");
  
  do{

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout<<"\n >> ";
        cin >> multiArray[i][j];
      }
    }

    //for(int i=0; i<3; i++){
    int i = 0;
      for(int j=0; j<3; j++){
        cout << "\nvalue: " << multiArray[j][i];
      }
    //}
    
    printArrayValues(userInputs);
    getUserInput(userInputs);
    printArrayValues(userInputs);
    //cout << "\nSum: " << getSum(userInputs);
    //cout << "\nMin: " << getMin(userInputs);
    //cout << "\nMax: " << getMax(userInputs);
    displayResults("\nSum: ", getSum(userInputs));
    displayResults("\nMin: ", getMin(userInputs));
    displayResults("\nMax: ", getMax(userInputs));
    displayResults("\nAvg: ", getAvg(userInputs));

    //////////////////////////////////////////////
    // upon successful completion of 1 - 5:
    // 1. refactor to be separated into functions
    // 2. refactor to use arrays
    //////////////////////////////////////////////
    
    cin.clear();
    cin.ignore(100000,'\n');
    cout << "\nAgain? Y/y or N/n : ";
    getline(cin, again);
    
  } while (again[0] == 'y' || again[0] == 'Y');
  cout << endl;
  return 0;
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