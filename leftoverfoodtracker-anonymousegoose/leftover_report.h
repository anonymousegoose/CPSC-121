#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Food Tracker Project

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "leftover_record.h"
using namespace std;

class LeftoverReport {
 public:
  LeftoverReport() {}
  LeftoverReport(const vector<LeftoverRecord> &leftover_records)
      : leftover_records_(leftover_records) {}
  vector<string> MostCommonLeftover() const;
  vector<string> MostCostlyLeftoverProducingMeals() const;
  double TotalCostOfLeftover() const;
  vector<string> MostCommonLeftoverReasons() const;
  vector<string> MostCommonDisposalMechanisms() const;
  vector<string> SuggestLeftoverReductionStrategies() const;

 private:
  vector<LeftoverRecord> leftover_records_;
};

#endif
