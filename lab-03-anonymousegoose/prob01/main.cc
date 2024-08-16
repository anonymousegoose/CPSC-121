// Rick Morales
// CPSC 121L-03
// March 4, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
//
// Lab 3-1
#include <iostream>
#include <string>
using namespace std;

#include "time_converter.h"

int main() {
  int military_time = 0;
  cout << "Please enter the time in military time: ";
  cin >> military_time;

  // Call your function to convert from military time to regular time
  // and assign its result to regular_time.
  string regular_time = MilitaryToRegularTime(military_time);

  cout << "The equivalent regular time is: " << regular_time << "\n";
  return 0;
}
