// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-2

#include <string>

#include "cpputils/graphics/image.h"
using namespace std;

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

class Astronaut {
 public:
  Astronaut(const string& name, graphics::Color color)
      : name_(name), color_(color) {}
  string GetName() const { return name_; }
  graphics::Color GetColor() const { return color_; }
  string GetIconFilename() const { return "astronaut.bmp"; }

 private:
  string name_;
  graphics::Color color_;
};

#endif  // ASTRONAUT_H
