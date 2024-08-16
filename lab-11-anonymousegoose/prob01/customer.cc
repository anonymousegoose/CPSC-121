// Rick Morales
// CPSC 121A-15
// April 14, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 11-1

#include "customer.h"
using namespace std;

int Customer::TotalCustomersInLine() const {
  if (next_customer_ == nullptr) {
    return 1;

  }

  else {
    return next_customer_->TotalCustomersInLine() + 1;
  }
}

int Customer::TotalProductsInLine() const {
  if (next_customer_ == nullptr) {
    return product_count_;
  } else {
    return next_customer_->TotalProductsInLine() + product_count_;
  }
}

const string& Customer::FirstAlphabeticalCustomerInLine() const

{
  if (next_customer_ == nullptr) {
    return name_;
  }

  else {
    const string& recursive_ans =
        next_customer_->FirstAlphabeticalCustomerInLine();
    if (name_ < recursive_ans) {
      return name_;
    }

    else {
      return recursive_ans;
    }
  }
}