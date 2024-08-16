// Rick Morales
// CPSC 121L-15
// February 20, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 5-2

#include <iomanip>
#include <iostream>

#include "calculate_avg.h"
using namespace std;

int main() {
  int num_students = 0;
  cout << "How many students are in your class? ";
  cin >> num_students;

  if (num_students <= 0) {
    cout << "You have no students!\n";
  } else {
    // Construct a vector whose size is the same as the
    // given number of students in the class, based on the
    // `num_students` variable.
    vector<double> student_grades(num_students);

    cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";
    for (int i = 0; i < num_students; i++) {
      // Store the input GPA from cin into
      // the corresponding index in the vector.
      cout << "Enter the GPA for student #" << i + 1 << ": ";
      cin >> student_grades[i];
    }
    double average = CalculateAverage(student_grades);
    // Call CalculateAverage function and provide any
    // necessary parameters. Then, store the results in the average
    // variable
    cout << "Class average: " << setprecision(2) << fixed << average << "\n";
  }

  return 0;
}
