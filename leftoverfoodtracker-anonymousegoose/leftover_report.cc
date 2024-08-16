// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Food Tracker Project

#include "leftover_report.h"
using namespace std;

double LeftoverReport::TotalCostOfLeftover() const {
  double total_cost = 0.0;

  for (const LeftoverRecord& record : leftover_records_) {
    total_cost += record.GetCost();
  }

  return total_cost;
}

vector<string> LeftoverReport::MostCommonLeftover() const {
  map<string, int> maps_common_leftover;
  int max = 0;
  for (LeftoverRecord records : leftover_records_) {
    string common_leftover = records.GetFoodName();
    if (maps_common_leftover.count(common_leftover) == 0) {
      maps_common_leftover.insert({common_leftover, 1});
      if (max < 1) {
        max = 1;
      }
    } else {
      maps_common_leftover[common_leftover]++;
      if (maps_common_leftover[common_leftover] > max) {
        max = maps_common_leftover[common_leftover];
      }
    }
  }
  vector<string> max_food;
  for (auto& it : maps_common_leftover) {
    if (it.second == max) {
      max_food.push_back(it.first);
    }
  }
  return max_food;
}

vector<string> LeftoverReport::MostCommonLeftoverReasons() const {
  map<string, int> maps_leftover_reason;
  int max = 0;
  for (LeftoverRecord records : leftover_records_) {
    string reasons = records.GetLeftoverReason();
    if (maps_leftover_reason.count(reasons) == 0) {
      maps_leftover_reason.insert({reasons, 1});
      if (max < 1) {
        max = 1;
      }
    } else {
      maps_leftover_reason[reasons]++;
      if (maps_leftover_reason[reasons] > max) {
        max = maps_leftover_reason[reasons];
      }
    }
  }
  vector<string> max_reasons;
  for (auto& it : maps_leftover_reason) {
    if (it.second == max) {
      max_reasons.push_back(it.first);
    }
  }
  return max_reasons;
}
vector<string> LeftoverReport::MostCommonDisposalMechanisms() const {
  map<string, int> maps_mechanisms;
  int max = 0;
  for (LeftoverRecord records : leftover_records_) {
    string disposal = records.GetDisposalMechanism();
    if (maps_mechanisms.count(disposal) == 0) {
      maps_mechanisms.insert({disposal, 1});
      if (max < 1) {
        max = 1;
      }
    } else {
      maps_mechanisms[disposal]++;
      if (maps_mechanisms[disposal] > max) {
        max = maps_mechanisms[disposal];
      }
    }
  }
  vector<string> max_vector;
  for (auto& maps_mechanism : maps_mechanisms) {
    if (maps_mechanism.second == max) {
      max_vector.push_back(maps_mechanism.first);
    }
  }
  return max_vector;
}
vector<string> LeftoverReport::SuggestLeftoverReductionStrategies() const {
  vector<string> vec_strat;
  bool donate = false;
  bool buy_less_food = false;
  bool cook_small = false;
  bool recycle = true;
  vector<string> reason_vector = MostCommonLeftoverReasons();
  for (string reasons : MostCommonLeftoverReasons()) {
    if (reasons == "Expired") {
      donate = true;
      recycle = false;
    }
    if (reasons == "Tastes bad") {
      buy_less_food = true;
    }
    if (reasons == "Too much left overs") {
      buy_less_food = true;
      cook_small = true;
    }
  }
  if (reason_vector.empty()) {
    recycle = false;
  }
  if (donate) {
    vec_strat.push_back("Donate before expiration");
  }
  if (buy_less_food) {
    vec_strat.push_back("Buy less food");
  }
  if (cook_small) {
    vec_strat.push_back("Cook small servings");
  }
  if (recycle) {
    vec_strat.push_back("Recycle left overs");
  }
  if (vec_strat.empty()) {
    vec_strat.clear();
  }
  return vec_strat;
}

vector<string> LeftoverReport::MostCostlyLeftoverProducingMeals() const {
  map<string, int> maps_meal;
  int max = 0;
  for (LeftoverRecord records : leftover_records_) {
    string meal = records.GetMeal();
    if (maps_meal.count(meal) == 0) {
      maps_meal.insert({meal, 1});
      if (max < 1) {
        max = 1;
      }
    } else {
      maps_meal[meal]++;
      if (maps_meal[meal] > max) {
        max = maps_meal[meal];
      }
    }
  }
  vector<string> max_meal;
  for (auto& it : maps_meal) {
    if (it.second == max) {
      max_meal.push_back(it.first);
    }
  }
  return max_meal;
}
