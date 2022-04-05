#include <iostream>
#include <string>
#include "arrayTestClass.h"

void ArrayTestClass::singleArrayTest(){
  int userInputs[SIZE_OF_ARRAY];
  int sum;
  int max;
  int min = 0;
  double avg = 0.0;

  std::cout << "\n size of array: " << SIZE_OF_ARRAY;

  printArrayValues(userInputs);
  getUserInput(userInputs);
  printArrayValues(userInputs);
  displayResults("\nSum: ", getSum(userInputs));
  displayResults("\nMin: ", getMin(userInputs));
  displayResults("\nMax: ", getMax(userInputs));
  displayResults("\nAvg: ", getAvg(userInputs));
}

void ArrayTestClass::multiArrayTest(int multiArray[3][3]){
  for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        std::cout<<"\n >> ";
        std::cin >> multiArray[i][j];
      }
    }

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        std::cout << "\nvalue: " << multiArray[j][i];
      }
    }
}

void ArrayTestClass::getUserInput(int array[]){
    for(int i = 0; i < SIZE_OF_ARRAY; i++){
      std::cout << "\nEnter an integer: ";
      std::cin >> array[i];
    }
}

void ArrayTestClass::printArrayValues(int array[]){
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
      std::string title = "\n[" + std::to_string(i) + "]:";
      displayResults(title, array[i]);
      //std::cout << "\n["<< i <<"]:" array[i] << " ";
    }
}

int ArrayTestClass::getSum(int array[]){
  int sum = 0;
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    //sum = sum + array[i]; // come back to this to show an easier way!!!
    sum += array[i];
  }
  return sum;
}

int ArrayTestClass::getMin(int array[]){
  int min = array[0];
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    if(min > array[i]){
      min = array[i];
    }
  }
  return min;
}

int ArrayTestClass::getMax(int array[]){
  int max = array[0];
  for(int i = 0; i < SIZE_OF_ARRAY; i++){
    if(max < array[i]){
      max = array[i];
    }
  }
  return max;
}

double ArrayTestClass::getAvg(int array[]){
  return getSum(array) / (double)SIZE_OF_ARRAY;
}

void ArrayTestClass::displayResults(std::string title, double result){
  std::cout << title << result;
}

void ArrayTestClass::runArrayTestCode() {
  int multiArray[3][3];
  multiArrayTest(multiArray);
  singleArrayTest();
}