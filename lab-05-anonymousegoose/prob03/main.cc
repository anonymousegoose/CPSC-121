// Rick Morales
// CPSC 121L-15
// February 20, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 5-3

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  string input;
  cout << "Enter text to analyze: ";

  // get line allows us to capture an entire line of input
  // and store it into the text variable.
  getline(std::cin, input);

  // Construct a map to map from each character to its
  // frequency in the inputted line of text.
  map<char, int> my_map;

  // Write a loop to iterate through each character in the
  // text and insert to the map to track that character's frequency.
  for (char c : input) {
    if (my_map[c] != 0) {
      // The key 'c' exists in the map.
      my_map.at(c) += 1;
    } else {
      // The letter 'c' is not currently a key in the map.
      my_map.at(c) = 1;
    }
  }

  // The code block in a while loop will be executed as long as
  // the condition in the parentheses is true. We use `while (true)`
  // so we can ask the user for input as many times as they want.
  char input_char = 'Q';
  while (true) {
    cout << "What character do you want stats on? ";
    cin >> input_char;

    // The special keyword "break" is used to jump out of a loop.
    // Since the while loop's condition is always true, we will
    // only stop looping when the user inputs 'Q'.
    if (input_char == 'Q') {
      break;
    }

    // Show the user how many times the character appeared.
    int frequency = my_map.count(input_char) != 0 ? my_map[input_char] : 0;
    cout << "The character " << input_char << " appears " << frequency
         << " times." << endl;
  }

  cout << "Goodbye!" << endl;
  return 0;
}