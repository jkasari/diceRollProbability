#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>

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
 * behaves like any mumber of any sided dice
 */
uint32_t diceRoll(uint32_t sideNum, uint32_t diceNum) {
  dice d(sideNum);
  uint32_t rollValue = 0;
  for (int i = 0; i < diceNum; ++i) {
    rollValue += d.roll();
  }
  return rollValue;
}

/**
 * takes the number of sides on a die plus the number of dice and
 * gives you all possible number outcomes in numerical order
 */
uint32_t* posOutcomes(uint32_t sideNum, uint32_t diceNum) {
  uint32_t* outcomes = new uint32_t[((sideNum * diceNum) - (diceNum - 1))];
  uint32_t targetNum = diceNum;
  for (int i = 0; i < ((sideNum * diceNum) - (diceNum - 1)); ++i) {
    outcomes[i] = targetNum;
    targetNum++;
  }
  return outcomes;
}

/**
 * takes the side of a dice, number of dice and the number of times you want to
 * roll and returns a int* with the number of hits for each possible number
 * combo.
 */
uint32_t* diceCalc(uint32_t sideNum, uint32_t diceNum, uint32_t rollNum) {
  uint32_t* outcomes = posOutcomes(sideNum, diceNum);
  uint32_t* results = new uint32_t[((sideNum * diceNum) - (diceNum - 1))];
  for (int i = 0; i < rollNum; ++i) {
    uint32_t rollValue = diceRoll(sideNum, diceNum);
    for (int i = 0; i < ((sideNum * diceNum) - (diceNum - 1)); ++i) {
      if (rollValue == outcomes[i]) {
        results[i] += 1;
      }
    }
  }
  return results;
}
