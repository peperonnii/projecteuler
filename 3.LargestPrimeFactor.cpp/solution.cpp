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

/*int PrimeFactor() {*/
/**/
/*}*/
/**/
int main() {
  int input;
  std::cout << "Enter a number (n): ";
  std::cin >> input;
  isPrime(input);

  return 0;
}
