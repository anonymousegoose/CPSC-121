// Rick Morales
// <Your section number> (e.g. CPSC 121L-01)
// February 29, 2024
// rickymorales100@gmail.com
// anonymousegoose
//
// Lab 2-1

#include <iostream>
using namespace std;

int main() {
  // variables
  int height = 0;

  // get user input
  cout << "You must be at least 55 inches to safely ride the TuffyTwister.\n"
       << "Please enter your height in inches: " << endl;
  cin >> height;

  if (height >= 55) {
    cout << "Congratulations! You are tall enough to ride!" << endl;
  } else if (height < 55) {
    cout << "Safety is our first priority. Unfortunately, we can't let you \n"
         << "ride yet." << endl;
  }

  return 0;
}
