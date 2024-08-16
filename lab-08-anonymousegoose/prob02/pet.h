// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-2

#include <string>

#include "breed.h"
using namespace std;

class Pet {
 public:
  Pet();
  Pet(const string& name, const Breed& breed, double weight);
  Pet(const string& name, const string& species, const string& breed_name,
      const string& color, double weight);

  string GetName() const;
  Breed GetBreed() const;
  double GetWeight() const;

  void SetName(const string& name);
  void SetBreed(const Breed& breed);
  void SetBreed(const string& species, const string& breed_name,
                const string& color);
  void SetWeight(double weight);

  void Print() const;

 private:
  string name_;
  Breed breed_;
  double weight_;
};