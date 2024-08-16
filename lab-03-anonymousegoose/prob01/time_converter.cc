// Rick Morales
// CPSC 121L-03
// March 04, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
//
// Lab 3-1
#include <iostream>
#include <string>
using namespace std;

#include "time_converter.h"

string MilitaryToRegularTime(int military_time) {
  int hours = military_time / 100;
  int minutes = military_time % 100;
  // Convert military_time to regular time in string format.
  string meridiem = (hours < 12) ? "am" : "pm";
  if (hours > 12) {
    hours -= 12;
  } else if (hours == 0) {
    hours = 12;
  }
  // Format the result as a string
  return to_string(hours) + ":" + (minutes < 10 ? "0" : "") +
         to_string(minutes) + " " + meridiem;
}