// Rick Morales
// CPSC 121A-15
// April 14, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 11-1

#include <iostream>
#include <memory>

#include "customer.h"

int main() {
  // Creates a line of customers with Adele at the front.
  // LinkedList diagram:
  //   Adele -> Kehlani -> Giveon -> Drake -> Ruel
  std::shared_ptr<Customer> ruel =
      std::make_shared<Customer>("Ruel", 5, nullptr);
  std::shared_ptr<Customer> drake =
      std::make_shared<Customer>("Drake", 8, ruel);
  std::shared_ptr<Customer> giveon =
      std::make_shared<Customer>("Giveon", 2, drake);
  std::shared_ptr<Customer> kehlani =
      std::make_shared<Customer>("Kehlani", 15, giveon);
  std::shared_ptr<Customer> adele =
      std::make_shared<Customer>("Adele", 4, kehlani);

  std::cout << "Total customers waiting: ";
  std::cout << adele->TotalCustomersInLine();

  std::cout << "Total products to be purchased: ";
  std::cout << adele->TotalProductsInLine();

  std::cout << "First customer name alphabetically: ";
  std::cout << adele->FirstAlphabeticalCustomerInLine();
  return 0;
}
