// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-1

#include <iostream>
#include <string>

#include "star.h"
using namespace std;

int main() {
  int num = 0;
  cout << "How many stars? ";
  cin >> num;

  for (int i = 0; i < num; ++i) {
    string name;
    double radius = 0.0;
    cout << "Enter star " << i << "'s name: ";
    cin >> name;
    cout << "What is the solar radius? ";
    cin >> radius;

    // Create a Star object
    // Destructor automatically called when new_star goes out of scope
    Star new_star(name, radius);
    cout << "Created star " << new_star.GetName() << endl;
  }
  return 0;
}