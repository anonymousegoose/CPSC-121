// Rick Morales
// CPSC 121A-15
// May 1, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 12-2

#include "astronaut.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H
using namespace std;

class Crewmate : public Astronaut {
 public:
  Crewmate(const string& name, graphics::Color color)
      : Astronaut{name, color}, is_alive_(true), task_count_(0) {}
  Crewmate()
      : Astronaut{"no name", graphics::Color(0, 0, 0)},
        is_alive_(true),
        task_count_(0) {}
  bool GetIsAlive() const { return is_alive_; }
  void SetIsAlive(bool is_alive) { is_alive_ = is_alive; }
  int GetTaskCount() const { return task_count_; }
  void DoTask(string task_name) {
    task_count_++;
    cout << Astronaut::GetName() << " is doing " << task_name << endl;
  }
  graphics::Color GetColor() const;
  string GetIconFilename() const;

 private:
  bool is_alive_;
  int task_count_;
};

#endif  // CREWMATE_H
