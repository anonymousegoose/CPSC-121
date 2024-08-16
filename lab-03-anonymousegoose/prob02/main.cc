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

int main() {
  double hourly_wage = 0;
  double hours_worked = 0;

  cout << "Hourly wage: ";
  cin >> hourly_wage;
  cout << "Hours worked: ";
  cin >> hours_worked;

  double salary_owed = Salary(hourly_wage, hours_worked);
  if (salary_owed > 0.0) {
    cout << " Total Salary Owed: $" << fixed << setprecision(2) << salary_owed
         << '\n';
  }

  return 0;
}
