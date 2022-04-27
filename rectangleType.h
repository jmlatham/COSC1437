#include <iostream>
#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

using namespace std;

class rectangleType
{
  public:
    int length;
    int width;
    rectangleType operator+(const rectangleType rect1);
    rectangleType operator-(const rectangleType rect1);
    bool operator==(const rectangleType rect1) const;
    bool operator!=(const rectangleType rect1) const;
    
    rectangleType(int length, int width);

    int getWidth() const;
    int getLength() const;

  private:
    int _length;
    int _width;
};

#endif