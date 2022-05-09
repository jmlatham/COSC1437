#ifndef CHAPTER09_H
#define CHAPTER09_H
#include <string>
#include "../chaptersLibrary/chapter.h"

class chapter09 : public chapter
{
    public:
      chapter09();
      void displayMenu();
      void displayInstructions();
      void runTest();
    private:
      int _chapterNumber;
};

#endif