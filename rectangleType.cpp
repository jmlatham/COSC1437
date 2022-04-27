#include <iostream>
#include "rectangleType.h"

rectangleType::rectangleType(int length, int width)
{
  _width = width;
  _length = length;
}

rectangleType rectangleType::operator+(rectangleType rt)
{
  return rt;
}

rectangleType rectangleType::operator-(rectangleType rt)
{
  return rt;
}

bool rectangleType::operator==(const rectangleType rect1) const
{
  return _width==rect1.getWidth() && _length==rect1.getLength();
}

bool rectangleType::operator!=(const rectangleType rect1) const
{
  return _width!=rect1.getWidth() || _length!=rect1.getLength();
}

int rectangleType::getLength() const
{
  return _length;
}

int rectangleType::getWidth() const
{
  return _width;
}