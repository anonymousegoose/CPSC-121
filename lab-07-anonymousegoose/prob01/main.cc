// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-1

#include <iomanip>
#include <iostream>

#include "bubble.h"
using namespace std;

int main() {
  // 1. Create two bubble objects called `bubble1` and `bubble2`
  Bubble bubble1{};
  Bubble bubble2{};

  double radius1 = 0.0;
  double radius2 = 0.0;
  cout << "Please enter the radius of the first bubble: ";
  cin >> radius1;
  // 2. Set the radius of bubble1 to radius1
  bubble1.SetRadius(radius1);
  cout << "Please enter the radius of the second bubble: ";
  cin >> radius2;
  // 3. Set the radius of bubble2 to radius2
  bubble2.SetRadius(radius2);
  // 4. Create a new bubble object called `combined`
  Bubble combined{};
  // 5. Call the CombineBubbles function to combine the bubble1
  // and bubble2 objects, then store the result in the combined variable.
  combined = CombineBubbles(bubble1, bubble2);
  double volume = 0.0;
  // 6. Get the volume of `combined` and set the volume variable above.
  volume = combined.CalculateVolume();
  cout << "The bubbles have now combined and created a bubble with the volume "
          "of: "
       << fixed << setprecision(2) << volume << endl;
  return 0;
}
