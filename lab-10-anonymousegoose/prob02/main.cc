// Rick Morales
// CPSC 121A-15
// March 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 10-2

#include <iostream>
#include <map>
#include <vector>

#include "bank.h"
using namespace std;

int main() {
  Bank my_bank("MyBank");

  int account1_id = my_bank.CreateAccount("Tuffy", 121.00);
  int account2_id = my_bank.CreateAccount("Frank", 1234.56);
  int account3_id = my_bank.CreateAccount("Oreo", 140.12);

  my_bank.DisplayBalances();

  cout << "Account IDs: " << account1_id << ", " << account2_id << ", "
       << account3_id << endl;

  return 0;
}
