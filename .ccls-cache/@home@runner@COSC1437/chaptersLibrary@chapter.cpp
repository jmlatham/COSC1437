#include <iostream>
#include "chapter.h"

chapter::chapter()
{
  
}

void chapter::displayMenu()
{
  std::cout << "\n\n<--------- Display MENU --------->";
  std::cout << "\n<---------------------------------->";
}

void chapter::displayInstructions()
{
  std::cout << "\n\n<--------- Display Instructions --------->";
  std::cout << "\n<------------------------------------------>";
}

void chapter::runTest()
{
  std::cout << "Chapter base class" << std::endl;
}
std::string chapter::buildBorderLine(char borderChar, int length)
{
  std::string borderLine = "";
  for(int i = 0; i<length; i++)
    {
      borderLine += borderChar;
    }
  return borderLine;
}

void chapter::printTitle(std::string title, char borderChar)
{
  std::string borderLine = buildBorderLine(borderChar, title.length() + 2);
  std::cout << "\n" << borderLine << std::endl;
  std::cout << borderChar;
  std::cout << title;
  std::cout << borderChar<< std::endl;
  std::cout << borderLine << std::endl;
  
}

void chapter::printFooter(std::string title, char borderChar)
{
  std::cout << "\n" << buildBorderLine(borderChar, title.length() + 2) << std::endl;
}