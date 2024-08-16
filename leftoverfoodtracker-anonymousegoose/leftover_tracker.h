#ifndef LEFTOVER_TRACKER_H_
#define LEFTOVER_TRACKER_H_

// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Food Tracker Project

#include <vector>

#include "leftover_record.h"
#include "leftover_report.h"
using namespace std;

class LeftoverTracker {
 public:
  bool AddRecord(const LeftoverRecord &record);
  bool DeleteRecord(const LeftoverRecord &record);
  const vector<LeftoverRecord> &GetRecords() const;
  LeftoverReport GetLeftoverReport() const;

 private:
  vector<LeftoverRecord> leftover_records_;
};

#endif
