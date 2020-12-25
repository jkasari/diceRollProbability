#include <random>
#include <iostream>
#include <algorithm>

/**
 * behives like a die, use the .roll function to generate a virtual roll.
 */
class dice {
 public:
  dice(const uint32_t sides) { this->sides = sides; }
  uint32_t roll() const { return (rand() % sides) + 1; }

 private:
  uint32_t sides;
};

/**
 * takes an int for the number of sides on a die plus the number of dice and gives you all possible number outcomes
 */
int* posOutcomes(uint32_t sideNum, uint32_t diceNUm) {}

/**
 * takes an int for the number of sides on a die plus the number of dice and returns a int* with the percentage for each possible number combo.
 */
int* diceCalc(uint32_t sideNum, uint32_t diceNum, &int* outcomes) {}

