#include <iostream>
#include "functions.cpp"
#include <ctime>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
  srand(time(0));

  if (argc != 4) {
    cout << "This program expects exactly three arguements" << endl;
    cout << endl;
    cout << " 1.) The number of sides for each die" << endl;
    cout << endl;
    cout << " 2.) The number of dice you want roll." << endl;
    cout << endl;
    cout << " 3. The number of times you want to roll." << endl << endl;
    return 0;
  }

  cout << fixed;
  cout << setprecision(3);

  uint32_t rollNum = stol(argv[3]);
  uint32_t diceNum = stol(argv[2]);
  uint32_t sideNum = stol(argv[1]);
  uint32_t width = 6;
  uint32_t arrSize = ((sideNum * diceNum) - (diceNum - 1));

  cout << endl;
  cout << "Calculating the probablity for each potential roll for ";
  cout << diceNum << ", " << sideNum << "'d dice. . . .";
  cout << endl << endl;

  uint32_t* outcomes = posOutcomes(sideNum, diceNum);
  uint32_t* results = diceCalc(sideNum, diceNum, rollNum);
  for (int i = 0; i < arrSize; ++i) {
    cout.width(width);
    cout << right;
    cout << static_cast<double>(results[i]) / rollNum * 100 << "%";
    cout << " |----| " << outcomes[i] << endl;
  }

  cout << endl;
  cout << "The roll with the highest probablity is ====> | ";
  cout << outcomes[findLargestValLocation(results, arrSize)] << " | with a probablity of | ";
  cout << static_cast<double>(findLargestVal(results, arrSize)) / rollNum * 100 << "% |";
  cout << endl;
  delete[] results;
  results = nullptr;
  return 0;
}
