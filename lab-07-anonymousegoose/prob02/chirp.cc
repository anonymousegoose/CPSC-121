// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-2

#include "chirp.h"
using namespace std;

Chirp::Chirp() : message_(""), likes_(0) {}

Chirp::Chirp(const string& message) : message_(message), likes_(0) {}

Chirp::Chirp(const string& message, int likes)
    : message_(message), likes_(likes) {}

void Chirp::SetMessage(const string& message) { message_ = message; }

string Chirp::GetMessage() const { return message_; }

void Chirp::AddLike() { likes_++; }

void Chirp::AddLike(int num_likes) { likes_ += num_likes; }

int Chirp::GetLikes() const { return likes_; }