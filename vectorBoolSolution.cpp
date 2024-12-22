#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Instead of std::vector<bool>, use std::vector<char> or std::bitset
  std::vector<char> boolVector;
  boolVector.push_back(1); // true
  boolVector.push_back(0); // false

  std::cout << "Using std::vector<char>: \n";
  for (char val : boolVector) {
    std::cout << val << " ";
  }
  std::cout << "\n";

  std::bitset<10> bitsetExample;
  bitsetExample[0] = 1;
  bitsetExample[1] = 0;
  
  std::cout << "Using std::bitset: \n";
  std::cout << bitsetExample << "\n";

  return 0;
}
