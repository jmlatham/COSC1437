#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;



int main() {
  string again = "n";
  int userInputs[5];
  int sum;
  int max;
  int min;
  double avg = 0.0;
  
  do{
    cout << "\nEnter an integer:";
    cin >> userInputs[0];
    cout << "\nEnter an integer:";
    cin >> userInputs[1];
    cout << "\nEnter an integer:";
    cin >> userInputs[2];
    cout << "\nEnter an integer:";
    cin >> userInputs[3];
    cout << "\nEnter an integer:";
    cin >> userInputs[4];
    
    cout << userInputs[0] << " ";
    cout << userInputs[1] << " ";
    cout << userInputs[2] << " ";
    cout << userInputs[3] << " ";
    cout << userInputs[4] << " ";
/*
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
    */

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
    // upon successful completion of 1 - 5:
    // 1. refactor to be separated into functions
    // 2. refactor to use arrays
    //////////////////////////////////////////////
*/