// https://projecteuler.net/problem=4

#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int largest = 0;
  for (int i = 100; i <= 999; i++) {
    for (int j = i + 1; j <= 999; j++) {
      std::string result = std::to_string(i * j);
      std::string reverseresult = result;
      std::reverse(result.begin(), result.end());
      if (result == reverseresult) {
        largest = std::max(largest, i * j);
      }
    }
  }
  std::cout << largest;
  return 1;
}
