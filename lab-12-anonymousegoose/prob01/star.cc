// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-1

#include "star.h"

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

Star::Star(string name, double solar_radius)
    : name_{name}, solar_radius_{solar_radius} {
  cout << "The star " << name_ << " was born." << endl;
}

Star::~Star() {
  double volume_ratio =
      solar_radius_ * solar_radius_ * solar_radius_;  // Calculate volume ratio
  cout << fixed << setprecision(2);
  cout << "The star " << name_ << " has gone supernova. It was " << volume_ratio
       << " times the volume of our sun." << endl;
}

string Star::GetName() const {
  return name_;
}