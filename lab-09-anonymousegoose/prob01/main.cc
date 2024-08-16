// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 9-1

#include <iostream>

#include "foodpantry.h"
#include "volunteer.h"
using namespace std;

shared_ptr<FoodPantry> CreatePantry(const string &pantry_name) {
  // 1. Create a shared_ptr containing a FoodPantry with
  //    the given pantry_name, and return the shared_ptr.
  shared_ptr<FoodPantry> pantry_ptr = make_shared<FoodPantry>(pantry_name);
  return pantry_ptr;
}

int main() {
  Volunteer jc("JC");
  Volunteer paul("Paul");

  // 2. Call CreatePantry, passing in "Tuffy's Pantry"
  //    and assign it to a shared_ptr named tuffys_pantry.
  shared_ptr<FoodPantry> tuffys_pantry = CreatePantry("Tuffy's Pantry");

  // 3. Predict what this prints out. Prints 1
  cout << tuffys_pantry.use_count() << endl;

  // 4. Assign the Volunteers `jc` and `paul` to the
  //    tuffys_pantry using the AssignToPantry function.
  jc.AssignToPantry(tuffys_pantry);
  paul.AssignToPantry(tuffys_pantry);

  // 5. Predict what this prints out then uncomment the line below
  // 1
  // Assigned JC to Tuffy's Pantry
  // Assigned Paul to Tuffy's Pantry
  // 3
  cout << tuffys_pantry.use_count() << endl;

  // If you're here, uncomment the two lines of code below!
  jc.AssignedPantry()->Donate("Mango", 5);
  paul.AssignedPantry()->Donate("Mango", 20);

  // 6. Predict what this prints out.
  //    Look in the foodpantry.h file to see what it does.
  // 1
  // Assigned JC to Tuffy's Pantry
  // Assigned Paul to Tuffy's Pantry
  // 3
  // 25 Mango
  tuffys_pantry->DisplayPantryItems();

  // 7. Call CreatePantry and create a new shared_ptr
  //    representing a different pantry location.
  //    Assign `jc` and `paul` to the new pantry.
  shared_ptr<FoodPantry> new_pantry = CreatePantry("new_pantry");
  jc.AssignToPantry(new_pantry);
  paul.AssignToPantry(new_pantry);

  // 8. Predict what this prints out.
  // 1
  // Assigned JC to Tuffy's Pantry
  // Assigned Paul to Tuffy's Pantry
  // 3
  // 25 Mango
  // Assigned JC to new_pantry
  // Assigned Paul to new_pantry
  // 1
  cout << tuffys_pantry.use_count() << endl;

  // 9. Predict what this prints out.
  tuffys_pantry = nullptr;
  cout << tuffys_pantry.use_count() << endl;

  // 10. Print out the secret key to confirm that you
  //     have read the README and completed the tasks in main.cc.
  cout << "TUFFY121L" << endl;
}