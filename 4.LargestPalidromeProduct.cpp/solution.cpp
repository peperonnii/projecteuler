// https://projecteuler.net/problem=4

#include <iostream>
#include <string>
#include <vector>

std::string Calculator() {
  std::string largest;
  for (int i = 100; i <= 999; i++) {
    // nested loop to multiply every 3 digit number sum possible.
    for (int j = 100; j <= 999; j++) {
      std::string result = std::to_string(i * j);
      std::vector<std::string> arr;
      // pushes each char onto the vector
      for (int k = 0; k < result.size(); k++) {
        arr.push_back(std::string(1, result.at(k)));
      }
      int n = arr.size();
      if (n ==
          6) {  // skip n=5 for efficiency; we are looking for the largest only.
        if ((arr[n - 6] == arr[n - 1]) && (arr[n - 5] == arr[n - 2]) &&
            (arr[n - 4] == arr[n - 3])) {
          if (result > largest) {
            largest = result;
          }
        }
      }
      std::cout << i << " x " << j << " = " << result << "\n";  // eye candy.
    }
  }
  return largest;
}

int main() {
  std::string result = Calculator();
  std::cout << "The largest palindrome possible: " << result;
  return 1;
}
