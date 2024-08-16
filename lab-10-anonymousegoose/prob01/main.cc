// Rick Morales
// CPSC 121A-15
// March 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 10-1

#include <iostream>
#include <map>
#include <vector>

#include "plane.h"
using namespace std;

int main() {
  vector<double> weights{3.2, 4.7, 2.1, 5.5, 9.8, 7.4, 1.6, 9.3};
  cout << "Printing out all the weights: " << endl;
  for (vector<double>::iterator it = weights.begin(); it != weights.end();
       it++) {
    cout << *it << " ";
  }
  cout << endl;
  map<string, string> abbrevs{{"AL", "Alabama"},
                              {"CA", "California"},
                              {"GA", "Georgia"},
                              {"TX", "Texas"}};
  map<string, double> populations{
      {"CA", 39.2}, {"GA", 10.8}, {"AL", 5.1}, {"TX", 29.5}};
  cout << "\nPrinting out the state populations: " << endl;
  for (map<string, double>::iterator it = populations.begin();
       it != populations.end(); it++) {
    string state_abb = it->first;
    double state_population = it->second;

    string state_full_name = abbrevs.at(state_abb);

    cout << "Population of " << state_full_name << ": " << state_population
         << " million" << endl;
  }
  vector<Plane> fleet{};
  Plane p1{};
  fleet.push_back(p1);

  Plane p2{150, 75, "New York City"};
  fleet.push_back(p2);

  Plane p3(220, 220, "Atlanta");
  Plane p4(75, 75, "Guatemala City");
  Plane p5(125, 94, "Medellin");
  fleet.push_back(p3);
  fleet.push_back(p4);
  fleet.push_back(p5);

  for (vector<Plane>::iterator it = fleet.begin(); it != fleet.end(); it++) {
    if (it->GetSeatCount() == it->GetPassengerCount()) {
      cout << it->GetPassengerCount() << " passengers flying to "
           << it->GetDestination() << endl;
    }
  }

  for (vector<double>::reverse_iterator it = weights.rbegin();
       it != weights.rend(); it++) {
    cout << *it << " ";
  }

  return 0;
}