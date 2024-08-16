// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-2

#include <string>
using namespace std;

class Chirp {
 public:
  Chirp();
  Chirp(const string& message);
  Chirp(const string& message, int likes);

  void SetMessage(const string& message);
  string GetMessage() const;

  void AddLike();
  void AddLike(int num_likes);
  int GetLikes() const;

 private:
  string message_;
  int likes_;
};
