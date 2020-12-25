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
uint32_t diceRoll(uint32_t sideNum, uint32_t diceNum){
    dice d(sideNum);
    uint32_t rollValue = 0;
    for(int i = 0; i < diceNum; ++i) {
        rollValue += d.roll();
    }
    return rollValue;
}


/**
 * takes an int for the number of sides on a die plus the number of dice and
 * gives you all possible number outcomes
 */
uint32_t* posOutcomes(uint32_t sideNum, uint32_t diceNum) {
  uint32_t* outcomes = new uint32_t[((sideNum * diceNum) - (diceNum - 1))];
  uint32_t targetNum = diceNum;
  for(int i = 0; i < ((sideNum * diceNum) - (diceNum - 1)); ++i) {
      outcomes[i] = targetNum;
      targetNum++;
  }
  return outcomes;
}

/**
 * takes an int for the number of sides on a die plus the number of dice and
 * returns a int* with the percentage for each possible number combo.
 */
//int* diceCalc(uint32_t sideNum, uint32_t diceNum, uint32_t rollNum, int* outcomes) {
//  for(int i = 0; i < rollNum; ++i {
//
//  }
//}
