#ifndef SAMPLE_H
#define SAMPLE_H
#include <string>

class Sample
{
  public:
    Sample();
    void runTests();
    void printTitle(std::string, char);
    void printFooter(std::string, char);
    std::string buildBorderLine(char borderChar, int length);
  private:
    void displayMenu();
    int getUserInput();
};
#endif