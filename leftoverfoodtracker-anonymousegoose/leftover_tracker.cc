// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Food Tracker Project

#include "leftover_tracker.h"

#include <algorithm>
#include <iterator>

#include "leftover_record.h"
using namespace std;

const vector<LeftoverRecord> &LeftoverTracker::GetRecords() const {
  return leftover_records_;
}

bool LeftoverTracker::AddRecord(const LeftoverRecord &record) {
  for (auto &leftover_record : leftover_records_) {
    if (leftover_record.GetDate() == record.GetDate() &&
        leftover_record.GetMeal() == record.GetMeal() &&
        leftover_record.GetFoodName() == record.GetFoodName() &&
        leftover_record.GetQuantityInOz() == record.GetQuantityInOz() &&
        leftover_record.GetLeftoverReason() == record.GetLeftoverReason() &&
        leftover_record.GetDisposalMechanism() ==
            record.GetDisposalMechanism() &&
        leftover_record.GetCost() == record.GetCost()) {
      return false;
    }
  }

  leftover_records_.push_back(record);
  return true;
}

LeftoverReport LeftoverTracker::GetLeftoverReport() const {
  LeftoverReport generated_report(leftover_records_);
  return generated_report;
}

bool LeftoverTracker::DeleteRecord(const LeftoverRecord &record) {
  for (auto it = leftover_records_.begin(); it != leftover_records_.end();
       it++) {
    if (it->GetDate() == record.GetDate() &&
        it->GetMeal() == record.GetMeal() &&
        it->GetFoodName() == record.GetFoodName() &&
        it->GetQuantityInOz() == record.GetQuantityInOz() &&
        it->GetLeftoverReason() == record.GetLeftoverReason() &&
        it->GetDisposalMechanism() == record.GetDisposalMechanism() &&
        it->GetCost() == record.GetCost()) {
      leftover_records_.erase(it);
      return true;
    }
  }
  return false;
}