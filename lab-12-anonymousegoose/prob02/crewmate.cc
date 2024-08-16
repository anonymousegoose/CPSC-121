// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-2

#include "crewmate.h"

#include <iostream>
using namespace std;

graphics::Color Crewmate::GetColor() const {
  if (is_alive_) {
    return Astronaut::GetColor();
  }
  graphics::Color color = Astronaut::GetColor();
  graphics::Color shifted((color.Red() + 256) / 2, (color.Green() + 256) / 2,
                          (color.Blue() + 256) / 2);
  return shifted;
}
string Crewmate::GetIconFilename() const {
  if (is_alive_) {
    return Astronaut::GetIconFilename();
  }
  return "ghost.bmp";
}