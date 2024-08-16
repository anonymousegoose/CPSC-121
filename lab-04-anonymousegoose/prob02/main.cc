// Rick Morales
// CPSC 121L-15
// Feb 12, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 4-2

#include <iostream>
using namespace std;
#include "rectangle.h"

int main() {
  cout << "====== Rectangle 1 ======" << endl;
  Rectangle rect1;
  unsigned int length1;
  unsigned int width1;
  cout << "Please enter the length: ";
  cin >> length1;
  cout << "Please enter the width: ";
  cin >> width1;
  rect1.SetLength(length1);
  rect1.SetWidth(width1);
  cout << "Rectangle 1 created with length " << rect1.GetLength()
       << " and width " << rect1.GetWidth() << endl;
  cout << "The area of Rectangle 1 is: " << rect1.Area() << endl;
  cout << "The perimeter of Rectangle 1 is: " << rect1.Perimeter() << endl;

  cout << "====== Rectangle 2 ======" << endl;
  Rectangle rect2;
  unsigned int length2;
  unsigned int width2;
  cout << "Please enter the length: ";
  cin >> length2;
  cout << "Please enter the width: ";
  cin >> width2;
  rect2.SetLength(length2);
  rect2.SetWidth(width2);
  cout << "Rectangle 2 created with length " << rect2.GetLength()
       << " and width " << rect2.GetWidth() << endl;
  cout << "The area of Rectangle 2 is: " << rect2.Area() << endl;
  cout << "The perimeter of Rectangle 2 is: " << rect2.Perimeter() << endl;

  Rectangle largest_rectangle = LargestRectangleByArea(rect1, rect2);
  cout << "The largest rectangle has a length of "
       << largest_rectangle.GetLength() << ", a width of "
       << largest_rectangle.GetWidth() << ", and an area of "
       << largest_rectangle.Area() << endl;

  return 0;
}
