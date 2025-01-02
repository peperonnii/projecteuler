#include <algorithm>
#include <iostream>
#include <ostream>

bool isPrime(int n) {
  if (n <= 1) return false;  // Numbers less than or equal to 1 are not prime
  if (n == 2 || n == 3) return true;  // 2 and 3 are prime numbers
  if (n % 2 == 0 || n % 3 == 0)
    return false;  // Eliminate even numbers and multiples of 3
  // Check for factors from 5 upwards, skipping even numbers and multiples of 3
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;  // n is divisible by i or i+2, so it's not prime
    }
  }
  return true;  // No divisors found, so n is prime
}

int main() {
  int n = 10001;
  int largest = 0;
  int count = 0;
  int i = 2;
  while (count != n) {
    if (isPrime(i)) {
      largest = std::max(largest, i);
      count++;
    }
    i++;
  }
  std::cout << largest;

  return 0;
}
