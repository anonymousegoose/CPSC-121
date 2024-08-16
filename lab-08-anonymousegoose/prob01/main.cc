// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-1

#include <iostream>

#include "car.h"
using namespace std;

int main() {
  Car c1{};
  c1.Print();
  cout << "\n";

  VehicleId id{"Honda", 3, "7B319X4"};
  Car c2{id};
  c2.Print();

  cout << "\n";

  Date date{4, 11, 2018};
  Car c3{date};
  c3.Print();
  cout << "\n";

  Car c4{id, date};
  c4.Print();

  cout << "\n";

  VehicleId default_id{};

  Date default_date{};

  c4.SetId(default_id);

  c4.SetReleaseDate(default_date);

  c4.Print();
  return 0;
}
