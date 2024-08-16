// Rick Morales
// CPSC 121A-15
// February 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 6-2
#include <iostream>
#include <string>

using namespace std;

class Cup {
 public:
  explicit Cup(string drink_type = "Water", double fluid_oz = 16.0);

  void Drink(double amount);
  void Refill(double amount);
  void NewDrink(const string &new_drink_type, double amount);
  void Empty();

  double GetFluidOz() const;
  string GetDrinkType() const;

 private:
  string drink_type_;
  double fluid_oz_;
};