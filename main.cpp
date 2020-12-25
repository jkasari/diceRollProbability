#include <iostream>
#include "functions.cpp"
#include <ctime>

using namespace std;

int main() {
  srand(time(0));

      uint32_t sideNum = 6;
  uint32_t diceNum = 3;
  uint32_t* outcomes = posOutcomes(sideNum, diceNum);

  // for(int i = 0; i < ((sideNum * diceNum) - (diceNum - 1)); ++i) {
  //  cout << outcomes[i] << endl;
  //}

  uint32_t rollValue = diceRoll(sideNum, diceNum);
  cout << rollValue << endl;

  return 0;
}
