#ifndef STRUCTTESTCLASS_H
#define STRUCTTESTCLASS_H
#include <string>

class StructTestClass{
private:
  struct testStruct {
    int id;
    std::string name;
    int age;
  };

  void fillStructByVal(testStruct ts, int, std::string, int);
  void fillStructByRef(testStruct& ts, int, std::string, int);
  testStruct getStruct(int, std::string, int);
  void printStruct(testStruct);
  void structureTest();
  void structureArrayTest();
public:
  void runStructureTests();
};

#endif