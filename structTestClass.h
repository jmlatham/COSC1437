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
  void runPointerStructureOne();
  void runPointerStructureTwo();
  void printTitle(std::string, char borderChar='*');
  void printFooter(std::string, char borderChar='*');
  std::string buildBorderLine(char, int);
public:
  void runStructureTests();
  void runStructurePointerTests();
};

#endif