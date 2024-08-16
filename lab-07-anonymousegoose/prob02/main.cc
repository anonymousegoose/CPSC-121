// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-2

#include <iostream>
#include <string>
#include <vector>

#include "chirp.h"
using namespace std;

int main() {
  string input;
  const string prompt =
      "\nYou can \"chirp\" a new message to Chirper, "
      "\"like\" an existing chirp, or \"exit\". What do you want to do? ";
  cout << prompt;
  getline(cin, input);

  vector<Chirp> chirps;

  while (input != "exit") {
    if (input == "chirp") {
      string user_message;
      cout << "What's your message? ";
      getline(cin, user_message);

      Chirp new_chirp(user_message);
      chirps.push_back(new_chirp);
    } else if (input == "like") {
      string user_index_string;
      cout << "Which index do you want to like? ";
      getline(cin, user_index_string);
      int user_index = stoi(user_index_string) - 1;

      if (user_index >= 0 && user_index < chirps.size()) {
        chirps[user_index].AddLike();
      } else {
        cout << "Invalid index." << endl;
      }
    }

    cout << "Chirper has " << chirps.size() << " chirps:" << endl;
    for (size_t i = 0; i < chirps.size(); ++i) {
      cout << i + 1 << ". " << chirps[i].GetMessage() << " ("
           << chirps[i].GetLikes() << " likes)" << endl;
    }

    cout << prompt;
    getline(cin, input);
  }

  return 0;
}
