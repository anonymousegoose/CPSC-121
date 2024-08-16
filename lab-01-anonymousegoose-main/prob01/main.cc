#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // variables
  double meal_cost = 0;
  double tip_percentage = 0;
  const double tax_percent = 0.075;

  // get user input
  cout << "Please input meal cost: "
       << "Please input tip percentage: " << endl;
  cin >> meal_cost;
  cin >> tip_percentage;

  // subtotal formula
  double subtotal = meal_cost * 1.00;

  // taxes formula
  double tax_total = subtotal * tax_percent;
  // turn tip percentage into decimal
  double tip_decimal = tip_percentage / 100.0;

  // formula to calculate tip
  double tip_total = subtotal * tip_decimal;

  // total
  double total = subtotal + tax_total + tip_total;

  // display output
  cout << "Restaurant Bill\n"
       << "====================\n"
       << "Subtotal: $" << fixed << setprecision(2) << subtotal << "\n"
       << "Taxes: $" << tax_total << "\n"
       << "Tip: $" << tip_total << "\n"
       << "====================\n"
       << "Total: $" << total << endl;
  return 0;
}
