// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 9-2

#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "message.h"
using namespace std;

class Phone {
 public:
  Phone() = default;

  Phone(const string& owner) : owner_(owner) {}

  string GetOwner() const { return owner_; }

  shared_ptr<Message> AuthorMessage(const string& message) {
    return make_shared<Message>(message, owner_);
  }

  void AcceptMessage(shared_ptr<Message> message) {
    messages_.push_back(message);
  }

  void PrintMessages() const {
    for (const auto& message : messages_) {
      cout << message->GetSender() << ": " << message->GetMessage() << endl;
    }
  }

 private:
  string owner_;
  vector<shared_ptr<Message>> messages_;
};