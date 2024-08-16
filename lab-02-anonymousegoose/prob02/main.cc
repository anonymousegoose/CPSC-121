// Rick Morales
// <Your section number> (e.g. CPSC 121L-01)
// Feb 29, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
//
// Lab 2-2

#include <iostream>
using namespace std;

int main() {
  // variables
  int credit_score = 0;

  // get user input
  cout << "Thank you for applying for the Tuffy Credit card. Please enter your "
       << "credit score."
       << "Credit Score: " << endl;
  cin >> credit_score;

  // if statements
  if (credit_score < 0 || credit_score > 850) {
    cout << "This is an invalid credit score. Please run the program again and "
         << "provide a valid credit score" << endl;
  } else if (credit_score >= 800) {
    cout << "You are eligible for the Platinum Tuffy Card\n"
         << "Thank you for using our program, please come again!" << endl;
  } else if (credit_score <= 799 && credit_score >= 670) {
    cout << "You are eligible for the Gold Tuffy Card\n"
         << "Thank you for using our program, please come again!" << endl;
  } else if (credit_score <= 669 && credit_score >= 580) {
    cout << "You are eligible for the Silver Tuffy Card\n"
         << "Thank you for using our program, please come again!" << endl;
  } else {
    cout << "Unfortunately, you are ineligible for Tuffy credit cards at the \n"
         << "moment."
         << "Please try again at a later date."
         << "Thank you for using our program, please come again!" << endl;
  }
  return 0;
}
