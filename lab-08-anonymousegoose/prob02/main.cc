// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-2

#include <iostream>
#include <vector>

#include "pet.h"
using namespace std;

int main() {
  vector<Pet> pets;
  string name;
  string breed_name;
  string species;
  string color;
  double weight = 0.0;

  do {
    cout << "Please enter the pet's name (q to quit): ";
    getline(cin, name);
    if (name != "q") {
      cout << "Please enter the pet's species: ";
      getline(cin, species);
      cout << "Please enter the pet's breed: ";
      getline(cin, breed_name);
      cout << "Please enter the pet's color: ";
      getline(cin, color);
      cout << "Please enter the pet's weight (lbs): ";
      cin >> weight;
      cin.ignore();

      Pet new_pet(name, species, breed_name, color, weight);
      pets.push_back(new_pet);
    }
  } while (name != "q");

  cout << "Printing Pets:\n";
  for (const auto& pet : pets) {
    pet.Print();
  }

  return 0;
}