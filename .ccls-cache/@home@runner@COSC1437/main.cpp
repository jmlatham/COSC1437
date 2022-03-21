#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void arrayTestFunction();
double avgTestFunction(int array[], int size);
int sumTestFunction(int array[], int size);
int maxTestFunction(int array[], int size);
int minTestFunction(int array[], int size);

int main() {
  bool quit = false;
  while (!quit){

    arrayTestFunction();
    
    char again = 'n';
    cout << "Again? Y/y or N/n : ";
    cin >> again;
    quit = (again == 'n' || again == 'N');
    /*
    cout << again;
    cout << quit;
    */
    }
  cout << endl;
  return 0;
}

void arrayTestFunction() {
  const int arraySize = 5;
  int numbers[arraySize];
  cout << "Enter the numbers: ";
  for(int i=0; i<arraySize; i++){
    cin >> numbers[i];
    //cout << "\n";
  }
  cout << "The numbers you entered are:";
  for(int i=0; i<arraySize; i++){
    cout << "\n" << numbers[i];
  }
  cout << endl;
  //double average = avgTestFunction(numbers, arraySize);
  cout << "The sum of the numbers is " << sumTestFunction(numbers, arraySize) << endl;
  cout << "The biggest number is " << maxTestFunction(numbers, arraySize) << endl;
  cout << "The smallest number is " << minTestFunction(numbers, arraySize) << endl;
  cout.precision(2);
  cout << fixed << "The average of the numbers is " << avgTestFunction(numbers, arraySize) << endl;
}

int sumTestFunction(int array[], int size){
  int sum = 0;
  for (int i=0; i<size; i++){
    sum += array[i];
  }
  return sum;
}

double avgTestFunction(int array[], int size){
  int sum = 0;
  for (int i=0; i<size; i++){
    sum += array[i];
  }
  return sum / size;
}

int maxTestFunction(int array[], int size){
  int max = -10000000;
  for (int i=0; i<size; i++){
    max = (array[i] > max) ? array[i] : max;
  }
  return max;
}

int minTestFunction(int array[], int size){
  int min = 10000000;
  for (int i=0; i<size; i++){
    min = (array[i] < min) ? array[i] : min;
  }
  return min;
}
