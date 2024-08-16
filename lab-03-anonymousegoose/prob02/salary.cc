// Rick Morales
// CPSC 121L-03
// March 11, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
//
// Lab 3-2
#include <iomanip>
#include <iostream>
using namespace std;

#include "salary.h"

double Salary(double hourly_wage, double hours_worked) {
  if (hourly_wage <= 0 || hours_worked <= 0) {
    cout << "Invalid string";
    return 0.0;
  }
  if (hours_worked <= 40) {
    return hourly_wage * hours_worked;
  }
  if (hours_worked > 40 && hours_worked <= 65) {
    return (hourly_wage * 40) + (hours_worked - 40) * (hourly_wage * 1.5);
  }
  return (hourly_wage * 40) + (hourly_wage * 1.5) * 25 +
         (hours_worked - 65) * hourly_wage * 2;
}
