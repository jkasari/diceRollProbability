#include <iostream>
#include "functions.cpp"

using namespace std;

int main() {

uint32_t sideNum = 6;
uint32_t diceNum = 3;
uint32_t* outcomes = posOutcomes(sideNum, diceNum);

for(int i = 0; i < ((sideNum * diceNum) - (diceNum - 1)); ++i) {
  cout << outcomes[i] << endl;
}
  return 0;
}
