#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <iostream>

class Rectangle
{
    friend void rectangleFriend(Rectangle rectObject);
    friend std::ostream& operator<<(std::ostream&, const Rectangle &);
    friend std::istream& operator>>(std::istream&, Rectangle &);
  public:
    Rectangle operator+(const Rectangle rect1);
    Rectangle operator-(const Rectangle rect1);
    bool operator==(const Rectangle rect1) const;
    
    Rectangle doubleSize();

    Rectangle(int length, int width, std::string name="rectNew");

    int getWidth() const;
    int getLength() const;
    std::string Name() const;
    void print() const;

  private:
    int _length;
    int _width;
    std::string _name;
};
#endif