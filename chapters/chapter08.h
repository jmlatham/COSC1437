#ifndef CHAPTER08_H
#define CHAPTER08_H
#include <string>
#include "chapter.h"

class chapter08 : public chapter
{
    public:
      chapter08();
      void displayMenu();
      void displayInstructions();
      void runTest();
    private:
      int _chapterNumber;
};

#endif