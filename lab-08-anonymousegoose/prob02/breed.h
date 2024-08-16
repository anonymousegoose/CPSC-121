// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-2

#include <string>
using namespace std;

class Breed {
 public:
  Breed() : species_("Dog"), breed_name_("Pug"), color_("Fawn") {}
  Breed(const string& species, const string& breed_name, const string& color)
      : species_(species), breed_name_(breed_name), color_(color) {}

  string GetSpecies() const { return species_; }
  string GetBreedName() const { return breed_name_; }
  string GetColor() const { return color_; }

  void SetSpecies(const string& species) { species_ = species; }
  void SetBreedName(const string& breed_name) { breed_name_ = breed_name; }
  void SetColor(const string& color) { color_ = color; }

 private:
  string species_;
  string breed_name_;
  string color_;
};