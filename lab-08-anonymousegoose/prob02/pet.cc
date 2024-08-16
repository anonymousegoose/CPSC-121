// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-2

#include "pet.h"

#include <iomanip>
#include <iostream>
using namespace std;

Pet::Pet() : name_("Doug"), weight_(15.6) {}

Pet::Pet(const string& name, const Breed& breed, double weight)
    : name_(name), breed_(breed), weight_(weight) {}

Pet::Pet(const string& name, const string& species, const string& breed_name,
         const string& color, double weight)
    : name_(name), breed_(species, breed_name, color), weight_(weight) {}

string Pet::GetName() const { return name_; }

Breed Pet::GetBreed() const { return breed_; }

double Pet::GetWeight() const { return weight_; }

void Pet::SetName(const string& name) { name_ = name; }

void Pet::SetBreed(const Breed& breed) { breed_ = breed; }

void Pet::SetBreed(const string& species, const string& breed_name,
                   const string& color) {
  breed_.SetSpecies(species);
  breed_.SetBreedName(breed_name);
  breed_.SetColor(color);
}

void Pet::SetWeight(double weight) { weight_ = weight; }

void Pet::Print() const {
  cout << "Name: " << name_ << "\n";
  cout << "Species: " << breed_.GetSpecies() << "\n";
  cout << "Breed: " << breed_.GetBreedName() << "\n";
  cout << "Color: " << breed_.GetColor() << "\n";
  cout << "Weight: " << weight_ << " lbs\n";
}