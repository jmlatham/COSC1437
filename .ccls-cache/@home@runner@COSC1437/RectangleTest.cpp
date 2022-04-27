#include <iostream>
#include "RectangleTest.h"
#include "Rectangle.h"
#include "rectangleType.h"

RectangleTest::RectangleTest()
{}

void RectangleTest::runTest()
{
  std:string title = " runTest ";
  printTitle(title);
  Rectangle rect1(3,4, "rect1");
  Rectangle rect2(5,6, "rect2");
  Rectangle rect3(0,0, "rect3");
  Rectangle rect4(8,4, "rect4");
  Rectangle rect5(5,6, "rect5");
  Rectangle rect6(10,20, "rect6");
  Rectangle rect9(9,18, "rect9");

  rect1.print();
  std::cout << std::endl;
  rect2.print();
  std::cout << std::endl;
  rect3.print();
  std::cout << std::endl;
  rect3 = rect1 + rect2;
  rect3.print();
  std::cout << std::endl;

  rect3 = rect3 - rect1;
  rect3.print();
  std::cout << std::endl;
  printComparison(rect3, rect2);
  printComparison(rect3, rect1);
  printComparison(rect2, rect1);
  (rect1 - rect2).print();
  std::cout << std::endl;
  (rect2 - rect1).print();
  std::cout << std::endl;
  (rect3 - rect4).print();
  std::cout << std::endl;
  (rect4 - rect3).print();
  std::cout << std::endl;
  (rect5 - rect6).print();
  std::cout << std::endl;
  (rect6 - rect5).print();
  std::cout << std::endl;

  rect9.print();
  std::cout << std::endl;
  rect9.doubleSize().print();
  Rectangle rect8(0,0,"rect8");
  rect8 = rect9.doubleSize();
  std::cout << std::endl;
  std::cout << "RECT8-";
  rect8.print();
  std::cout << std::endl;
  std::cout << "RECT8-";
  rect8.doubleSize().print();
  std::cout << std::endl;
  rect9.print();
  std::cout << std::endl;
  printFooter(title);

  rectangleFriend(rect1);
  rect1.print();
  
  printFooter(" another test ");
}

void RectangleTest::runTest2()
{
  std:string title = " runTest2 ";
  printTitle(title);
  rectangleType rect1(1,2);
  rectangleType rect2(2,3);
  rectangleType rect3(3,4);
  rect3 = rect2;
  std::cout << "rect3 equals rect2: " << ((rect3 == rect2)?"True":"False") << std::endl;
  std::cout << "rect3 equals rect1: " << ((rect3 == rect1)?"True":"False") << std::endl;
  printFooter(title);
}

void RectangleTest::runTest3()
{
  std:string title = " run Test 3 ";
  printTitle(title);
  
  Rectangle rect1(3,4, "rect1");
  Rectangle rect2(5,6, "rect2");
  Rectangle rect3(0,0);

  std::cout << rect1;
  std::cout << rect2;

  std::cout << "Enter length and width:";
  std::cin >> rect3;
  std::cout << rect3;
  
  printFooter(title);
}

void RectangleTest::printComparison(Rectangle one, Rectangle two)
{
  std::cout << "\n" << one.Name() << " equals " << two.Name() << ": " << ((one == two)?"True":"False") << std::endl;  
}
