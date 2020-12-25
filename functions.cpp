#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>

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
int* diceCalc(uint32_t sideNum, uint32_t diceNum, int* outcomes) {}
