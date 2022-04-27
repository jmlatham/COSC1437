#include <iostream>
#include <string>
#include "Rectangle.h"

std::ostream& operator<<(std::ostream& osObject, const Rectangle& rect)
{
  osObject << "Name: " << rect._name << " - Length = " << rect._length << "; Width = " << rect._width << std::endl;
  return osObject;
}

std::istream& operator>>(std::istream& isObject, Rectangle& rect)
{
  isObject >> rect._length >> rect._width;
  return isObject;
}

void rectangleFriend(Rectangle rectObject)
{
  std::cout << "rectFriend area: " << (rectObject._width * rectObject._length) << std::endl;
  rectObject._width = rectObject._width * 2;
  rectObject._length = rectObject._length * 2;
  std::cout << "rectFriend new area: " << (rectObject._width * rectObject._length) << std::endl;
}


Rectangle Rectangle::doubleSize()
{
  _width = _width * 2;
  _length= _length* 2;
  return *this;
}
Rectangle Rectangle::operator+(const Rectangle rect1)
{
  int addedWidth;
  int addedLength;

  addedWidth = rect1.getWidth() + _width;
  addedLength = rect1.getLength() + _length;
  
  // Rectangle tempRect(addedLength,addedWidth);
  // return tempRect;
  return *this;
}
Rectangle Rectangle::operator-(const Rectangle rect1)
{
  int widthDifference;
  int lengthDifference;

  widthDifference = _width - rect1.getWidth();
  lengthDifference = _length - rect1.getLength();
  if(widthDifference < 0)
  {
    widthDifference = 0;
  }
  if(lengthDifference < 0)
  { 
    lengthDifference = 0;
  }
  
  Rectangle tempRect(lengthDifference,widthDifference);
  return tempRect;
}
bool Rectangle::operator==(const Rectangle rect1) const
{
  return (rect1.getLength() == _length && rect1.getWidth() == _width);
}
Rectangle::Rectangle(int length, int width, std::string name)
{
  _name = name;
  if(length < width)
  {
    _length = width;
    _width = length;
  } else {
    _length = length;
    _width = width;
  }
  if(_length < 0)
  {
    _length = 0;
  } 
  if(_width < 0)
  {
    _width = 0;
  } 
}
int Rectangle::getWidth() const
{
  return _width;
}
int Rectangle::getLength() const
{
  return _length;
}
std::string Rectangle::Name() const
{
  return _name;
}

void Rectangle::print() const
{
  std::cout << _name << ": " << _length << " - " << _width;
}