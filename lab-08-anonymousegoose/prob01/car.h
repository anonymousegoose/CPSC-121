// Rick Morales
// CPSC 121A-15
// March 15, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 8-1
#include <iostream>

#include "date.h"
#include "vehicleid.h"

using namespace std;

class Car {
 public:
  Car() {}
  Car(const VehicleId& id) { id_ = id; }
  Car(const Date& date) { release_date_ = date; }
  Car(const VehicleId& id, const Date& date) {
    id_ = id;
    release_date_ = date;
  }

  VehicleId GetId() const { return id_; }

  void SetId(const VehicleId& id) { id_ = id; }

  Date GetReleaseDate() const { return release_date_; }
  void SetReleaseDate(const Date& date) { release_date_ = date; }
  void Print() const {
    cout << "The model of the car is: " << id_.GetModel() << "\n";
    cout << "The VIN of the car is: " << id_.GetVin() << "\n";
    cout << "The license plate of the car is: " << id_.GetLicensePlate()
         << "\n";
    cout << "The release date of the car is: " << release_date_.GetMonth()
         << "/" << release_date_.GetDay() << "/" << release_date_.GetYear()
         << "\n";
  }

 private:
  VehicleId id_;
  Date release_date_;
};