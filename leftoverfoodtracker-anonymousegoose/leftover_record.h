#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Food Tracker Project

#include <iostream>
#include <vector>
using namespace std;

class LeftoverRecord {
 public:
  LeftoverRecord() {}
  LeftoverRecord(string date, string meal, string food_name, double qty_in_oz,
                 string leftover_reason, string disposal_mechanism, double cost)
      : date_(date),
        meal_(meal),
        food_name_(food_name),
        qty_in_oz_(qty_in_oz),
        leftover_reason_(leftover_reason),
        disposal_mechanism_(disposal_mechanism),
        cost_(cost) {}
  void SetDate(const string &date) { date_ = date; }
  void SetMeal(const string &meal) { meal_ = meal; }
  void SetFoodName(const string &food_name) { food_name_ = food_name; }
  void SetQuantityInOz(double qty_in_oz) { qty_in_oz_ = qty_in_oz; }
  void SetLeftoverReason(const string &leftover_reason) {
    leftover_reason_ = leftover_reason;
  }
  void SetDisposalMechanism(const string &disposal_mechanism) {
    disposal_mechanism_ = disposal_mechanism;
  }
  void SetCost(double cost) { cost_ = cost; }

  string GetDate() const { return date_; }
  string GetMeal() const { return meal_; }
  string GetFoodName() const { return food_name_; }
  double GetQuantityInOz() const { return qty_in_oz_; }
  string GetLeftoverReason() const { return leftover_reason_; }
  string GetDisposalMechanism() const { return disposal_mechanism_; }
  double GetCost() const { return cost_; }

 private:
  string date_;
  string meal_;
  string food_name_;
  double qty_in_oz_;
  string leftover_reason_;
  string disposal_mechanism_;
  double cost_;
};

#endif
