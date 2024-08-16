// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-1

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Star {
 public:
  // Constructor
  Star(string name, double solar_radius);

  // Destructor
  ~Star();

  // Accessor for star's name
  string GetName() const;

 private:
  string name_;
  double solar_radius_;
};