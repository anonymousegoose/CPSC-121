// Rick Morales
// CPSC 121L-15
// February 20, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 5-1

#include <vector>
using namespace std;

// Find the index of the smallest element in the input
// vector, and return it. If the input vector is empty,
// return -1.
int IndexOfMinimumElement(vector<double> &input) {
  if (input.empty()) {
    return -1;
  }

  int minimum_index = 0;
  for (int i = 1; i < input.size(); i++) {
    if (input[i] < input[minimum_index]) {
      minimum_index = i;
    }
  }
  return minimum_index;
}
