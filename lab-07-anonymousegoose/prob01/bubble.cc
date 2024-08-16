// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-1

#include "bubble.h"
Bubble CombineBubbles(const Bubble& bubble1, const Bubble& bubble2) {
  Bubble combine_bubble{};
  combine_bubble.SetRadius(bubble1.GetRadius() + bubble2.GetRadius());
  return combine_bubble;
}