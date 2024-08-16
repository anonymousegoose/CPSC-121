// Rick Morales
// CPSC 121A-15
// April 14, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 11-1

#include <memory>
#include <string>
using namespace std;

class Customer {
 public:
  Customer(const string& name, int product_count,
           shared_ptr<Customer> next_customer)
      : name_(name),
        product_count_(product_count),
        next_customer_(next_customer) {}
  const string& GetName() const {
    return name_;
  }
  int GetProductCount() const {
    return product_count_;
  }
  shared_ptr<Customer> GetNextCustomer() const {
    return next_customer_;
  }

  int TotalCustomersInLine() const;
  int TotalProductsInLine() const;
  const string& FirstAlphabeticalCustomerInLine() const;

 private:
  string name_;
  int product_count_;
  shared_ptr<Customer> next_customer_;
};
