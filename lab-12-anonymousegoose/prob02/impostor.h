// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-2

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H
using namespace std;

class Impostor : public Astronaut {
 public:
  Impostor(const string& name, graphics::Color color)
      : Astronaut{name, color} {}
  Impostor() : Astronaut{"Rogue", graphics::Color(1, 2, 28)} {}
  void Kill(Crewmate& crewmate) {
    cout << Astronaut::GetName() << " killed " << crewmate.GetName() << endl;
    crewmate.SetIsAlive(false);
  }

 private:
};

#endif  // IMPOSTOR_H
