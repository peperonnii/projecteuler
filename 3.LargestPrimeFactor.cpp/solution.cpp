#include <cstdio>
#include <iostream>

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i < n - 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int PrimeFactors(int n) {
  int lpf;
  for (int i = 1; i <= n - 1; i++) {
    if (isPrime(i)) {
      std::cout << i << "\n";
      lpf = i;
    }
  }
  return lpf;
}

int main() {
  int input;
  std::cout << "Enter a number (n): ";
  std::cin >> input;

  PrimeFactors(input);

  return 0;
}
