// Rick Morales
// CPSC 121L-15
// Feb 12, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 4-2

#include "rectangle.h"

unsigned int Rectangle::Area() const {
  // Compute the area of this rectangle object.
  // Remember that member functions can access the member variables of the
  // class. Hint: look at `rectangle.h` to see the member variables you can
  // access.
  return (length_ * width_);
}
unsigned int Rectangle::Perimeter() const {
  // Compute the perimeter of this rectangle object.
  return ((2 * length_) + (2 * width_));
}

Rectangle LargestRectangleByArea(const Rectangle &r1, const Rectangle &r2) {
  // Compare the areas of the two given rectangles, and return
  // the Rectangle whose area is larger.
  if (r1.Area() > r2.Area()) return r1;
  return r2;
}
