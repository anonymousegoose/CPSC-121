// Rick Morales
// CPSC 121A-15
// March 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 10-2

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "account.h"
using namespace std;

class Bank {
 public:
  Bank(const string& bank_name) : bank_name_(bank_name) {}

  string GetBankName() const {
    return bank_name_;
  }

  const map<int, Account>& GetAccounts() const {
    return accounts_;
  }

  int CreateAccount(const string& name, double balance) {
    int account_id = GenerateAccountId();
    Account new_account(name, balance);
    accounts_.emplace(account_id, new_account);
    return account_id;
  }

  int TotalAccounts() const {
    return accounts_.size();
  }

  void DisplayBalances() const {
    for (const auto& [id, account] : accounts_) {
      cout << account.GetAccountHolder() << ": $" << account.GetBalance()
           << endl;
    }
  }

  void DeactivateAccount(int account_id) {
    auto it = accounts_.find(account_id);
    if (it != accounts_.end()) {
      accounts_.erase(it);
      cout << "Account with ID " << account_id << " deactivated." << endl;
    } else {
      cout << "Account with ID " << account_id << " not found." << endl;
    }
  }

 private:
  string bank_name_;
  map<int, Account> accounts_;
  int GenerateAccountId() const {
    return rand() % 9000 + 1000;  // [1000, 9999]
  }
};