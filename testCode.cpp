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


  const int ARRAY_SIZE = 5;

int main2() {
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
  int numbers[ARRAY_SIZE];
  cout << "Enter the numbers: ";
  for(int i=0; i<ARRAY_SIZE; i++){
    cin >> numbers[i];
    //cout << "\n";
  }
  cout << "The numbers you entered are:";
  for(int i=0; i<ARRAY_SIZE; i++){
    cout << "\n" << numbers[i];
  }
  cout << endl;
  //double average = avgTestFunction(numbers, ARRAY_SIZE);
  cout << "The sum of the numbers is " << sumTestFunction(numbers, ARRAY_SIZE) << endl;
  cout << "The biggest number is " << maxTestFunction(numbers, ARRAY_SIZE) << endl;
  cout << "The smallest number is " << minTestFunction(numbers, ARRAY_SIZE) << endl;
  cout.precision(2);
  cout << fixed << "The average of the numbers is " << avgTestFunction(numbers, ARRAY_SIZE) << endl;
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
