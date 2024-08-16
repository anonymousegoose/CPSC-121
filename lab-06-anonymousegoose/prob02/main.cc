// Rick Morales
// CPSC 121A-15
// February 25, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 6-2

#include <iomanip>
#include <iostream>
#include <string>

#include "cup.h"
using namespace std;

int main() {
  string drink_name;
  double amount = 0.0;

  cout << "What kind of drink can I get you?: ";
  getline(cin, drink_name);

  while (cout << "How much do you want to fill?: " && !(cin >> amount)) {
    cin.clear();
    cin.ignore();
    cout << "Invalid input; please re-enter.\n";
  }

  Cup mug(drink_name, amount);

  while (true) {
    char menu_input = 'X';

    cout << "\n=== Your cup currently has " << mug.GetFluidOz() << " oz. of "
         << mug.GetDrinkType() << " === \n\n";
    cout << "Please select what you want to do with your drink/cup?:\n";
    cout << "D: Drink\n";
    cout << "R: Refill\n";
    cout << "N: Get a brand new drink\n";
    cout << "E: Empty\n";
    cout << "X: Exit\n";
    cout << "Selection: ";
    cin >> menu_input;
    cin.ignore();

    if (menu_input == 'X' || menu_input == 'x') {
      cout << "Thank you for using our cup!\n";
      break;
    }
    if (menu_input == 'D' || menu_input == 'd') {
      cout << "How much do you want to drink from the cup?: ";
      cin >> amount;
      cin.ignore();
      mug.Drink(amount);
    } else if (menu_input == 'R' || menu_input == 'r') {
      cout << "How much do you want to refill your cup?: ";
      cin >> amount;
      cin.ignore();
      mug.Refill(amount);
    } else if (menu_input == 'N' || menu_input == 'n') {
      cout << "What is the new drink you want?: ";
      getline(cin, drink_name);
      cout << "What is the amount you want?: ";
      cin >> amount;
      cin.ignore();
      mug.NewDrink(drink_name, amount);
    } else if (menu_input == 'E' || menu_input == 'e') {
      cout << "Emptying your cup\n";
      mug.Empty();
    } else {
      cout << "Invalid use of a cup!\n";
    }
  }
  return 0;
}