// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 9-2

#pragma once

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"
using namespace std;

class Network {
 public:
  void AddPhone(shared_ptr<Phone> phone) {
    phonebook_[phone->GetOwner()] = phone;
  }

  void SendMessage(shared_ptr<Message> message, const string& recipient) {
    if (phonebook_.count(recipient) != 0) {
      phonebook_[recipient]->AcceptMessage(message);
    }
  }

  void SendMessage(shared_ptr<Message> message,
                   const vector<string>& recipients) {
    for (const auto& recipient : recipients) {
      SendMessage(message, recipient);
    }
  }

 private:
  map<string, shared_ptr<Phone>> phonebook_;
};