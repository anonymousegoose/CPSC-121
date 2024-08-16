// Rick Morales
// CPSC 121L-15
// February 20, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 5-1

#include <iostream>

#include "minimum.h"
using namespace std;

int main() {
  // First, we ask the user what size vector they want to create.
  int size = 0;
  cout << "How many elements? ";
  cin >> size;

  // Construct a vector of doubles with the given size.
  // This initializes all the elements in the vector to the
  // default value of double: 0.
  vector<double> numbers(size);
  for (int i = 0; i < size; i++) {
    // In every iteration of this for loop, we prompt the user
    // to input the element at index i, then we put value
    // into the vector at index i.
    double value = 0;
    cout << "Element " << i << ": ";
    cin >> value;
    numbers.at(i) = value;
  }

  // Call the IndexOfMinimumElement function and pass in
  // the `numbers` vector as input, and print out the index.
  cout << "The minimum value in your vector is at index ";
  int min_index = IndexOfMinimumElement(numbers);
  cout << min_index << endl;

  return 0;
}
