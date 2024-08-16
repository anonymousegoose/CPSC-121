// Rick Morales
// CPSC 121A-15
// February 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 6-2

#include "cup.h"

#include <iostream>

Cup::Cup(std::string drink_type, double fluid_oz)
    : drink_type_(std::move(drink_type)), fluid_oz_(fluid_oz) {}

void Cup::Drink(double amount) { fluid_oz_ -= std::min(amount, fluid_oz_); }

void Cup::Refill(double amount) { fluid_oz_ += amount; }

void Cup::NewDrink(const std::string &new_drink_type, double amount) {
  drink_type_ = new_drink_type;
  fluid_oz_ = amount;
}

void Cup::Empty() {
  fluid_oz_ = 0;
  drink_type_ = "nothing";
}

double Cup::GetFluidOz() const { return fluid_oz_; }

std::string Cup::GetDrinkType() const { return drink_type_; }