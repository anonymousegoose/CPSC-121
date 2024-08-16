// Rick Morales
// CPSC 121A-15
// April 14, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 11-2

#include "train.h"

int Train::TotalTrainPassengers() const {
  if (next_carriage_ == nullptr) {
    return passenger_count_;
  } else {
    return passenger_count_ + next_carriage_->TotalTrainPassengers();
  }
}

int Train::MaxCarriagePassengers() const {
  if (next_carriage_ == nullptr) {
    return passenger_count_;
  } else {
    int max_next = next_carriage_->MaxCarriagePassengers();
    return (passenger_count_ > max_next) ? passenger_count_ : max_next;
  }
}

bool Train::IsTrainFull() const {
  if (passenger_count_ == seat_count_) {
    if (next_carriage_ == nullptr) {
      return true;
    } else {
      return next_carriage_->IsTrainFull();
    }
  }
  return false;
}

// Define the AddCarriageToEnd recursive member function
void Train::AddCarriageToEnd(std::shared_ptr<Train> new_carriage) {
  if (next_carriage_ == nullptr) {
    next_carriage_ = new_carriage;
  } else {
    next_carriage_->AddCarriageToEnd(new_carriage);
  }
}