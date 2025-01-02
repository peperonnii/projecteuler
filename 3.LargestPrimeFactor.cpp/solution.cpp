#include <cstdio>
#include <iostream>

bool isPrime(int n) {
  if (n == 1) {
    std::cout << "n == 1 \n aborting...";
    return false;
  } else if (n / n == 1 && n / 1 == n) {
    return true;
  }
  return false;
}

int main() {
  int input;
  std::cout << 'Enter a number: ';
  std::cin >> input;
  isPrime(input);

  return 0;
}
