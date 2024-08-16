// Rick Morales
// CPSC 121A-15
// March 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 10-1

#include <string>

class Plane {
 public:
  //   1. A default constructor, which initializes seat count
  //      to 121, passenger count to 121, and the flight
  //      destination to "Fullerton".
  Plane()
      : seat_count_(121), passenger_count_(121), destination_("Fullerton") {}

  //   2. A constructor overload which accepts the seat count,
  //      passenger count, and flight destination and initializes
  //      each corresponding member variable appropriately.
  Plane(int seat_count, int passenger_count, const std::string &destination)
      : seat_count_(seat_count),
        passenger_count_(passenger_count),
        destination_(destination) {}

  int GetPassengerCount() const {
    return passenger_count_;
  }
  void SetPassengerCount(int passengers) {
    passenger_count_ = passengers;
  }
  int GetSeatCount() const {
    return seat_count_;
  }
  void SetSeatCount(int seats) {
    seat_count_ = seats;
  }
  const std::string &GetDestination() const {
    return destination_;
  }
  void SetDestination(const std::string &dest) {
    destination_ = dest;
  }

 private:
  int seat_count_;
  int passenger_count_;
  std::string destination_;
};