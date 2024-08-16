// Rick Morales
// CPSC 121L-15
// February 20, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 5-2

#include <vector>
using namespace std;

double CalculateAverage(const vector<double> &student_grades) {
  // Compute and return the average grade
  // based on the input vector containing student GPAs.
  double sum = 0;

  if (!student_grades.empty()) {
    for (double grade : student_grades) {
      sum += grade;
    }
    return sum / student_grades.size();
  }
  return 0.0;
}
