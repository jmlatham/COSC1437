#ifndef CHAPTER_H
#define CHAPTER_H
#include <string>

class chapter
{
    public:
      chapter();
      void printTitle(std::string, char c='*');
      void printFooter(std::string, char c='*');
      std::string buildBorderLine(char borderChar, int length);
      virtual void displayMenu();
      virtual void displayInstructions();
      virtual void runTest();
};

#endif