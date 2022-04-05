#include <iostream>
#include "structTestClass.h"

void StructTestClass::structureTest(){
  testStruct record1;
  testStruct record2;
  testStruct record3;
  
  std::cout << "\n First Print default initialization";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  
  std::cout << "\n Second Print Pass by Value";
  fillStructByVal(record1, 1, "John", 27);
  fillStructByVal(record2, 2, "Fred", 28);
  fillStructByVal(record3, 3, "Mary", 25);
  
  std::cout << "\n Third Print after Pass by Value";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  
  std::cout << "\n Second Print Pass by Reference";
  fillStructByRef(record1, 1, "John", 27);
  fillStructByRef(record2, 2, "Fred", 28);
  fillStructByRef(record3, 3, "Mary", 25);
  std::cout << "\n Third Print after Pass by Reference";
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
  std::cout << "\n Fourth Print explicit initialization";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  record1 = getStruct(7, "Marshall", 48);
  record2 = getStruct(8, "Stephen", 47);
  record3 = getStruct(9, "Tommy", 37);
  
  std::cout << "\n Fifth Print after returning a structure";
  printStruct(record1);
  printStruct(record2);
  printStruct(record3);
  /**/
  std::cout << std::endl;
}
void StructTestClass::structureArrayTest(){
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
    std::cout << "\n";
  }
}
void StructTestClass::fillStructByVal(testStruct ts, int id, std::string name, int age){
  ts.id = id;
  ts.name = name;
  ts.age = age;
  printStruct(ts);
}
void StructTestClass::fillStructByRef(testStruct& ts, int id, std::string name, int age){
  ts.id = id;
  ts.name = name;
  ts.age = age;
  printStruct(ts);
}
StructTestClass::testStruct StructTestClass::getStruct(int id, std::string name, int age){
  StructTestClass::testStruct ts;
  ts.id = id;
  ts.name = name;
  ts.age = age;
  
  return ts;
}
void StructTestClass::printStruct(testStruct ts){
  std::cout << "\nID:  " << ts.id;
  std::cout << "\nAge: " << ts.age;
  std::cout << "\nName:" << ts.name;
}
void StructTestClass::runStructureTests(){
  structureTest();
  structureArrayTest();
}