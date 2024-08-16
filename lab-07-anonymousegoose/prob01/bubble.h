// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 7-1

// Write the Bubble class here, containing one member variable,
// Then, define the following member functions:
// 1. The accessor (getter) function for radius_.
// 2. The mutator (setter) function for radius_.
// 3. The CalculateVolume member function.
class Bubble {
 public:
  double GetRadius() const { return radius_; }
  void SetRadius(double radius) { radius_ = radius; }
  double CalculateVolume() const {
    double volume = (4.0 / 3.0) * 3.1415 * radius_ * radius_ * radius_;
    return volume;
  }

 private:
  double radius_;
};

// 1. Use pass-by-reference to pass in the Bubble objects efficiently.
// 2. Consider if the inputs passed in should be modified. If not,
//    please mark them const.
Bubble CombineBubbles(const Bubble& bubble1, const Bubble& bubble2);