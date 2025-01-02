#include <cstdio>
#include <iostream>

long long PrimeFactors(long long n) {
  long long largest = -1;
  /*elimating factors of two first to make the search faster*/
  while (n % 2 == 0) {
    largest = 2;
    n /= 2;
  }
  /*eliminating odd factors instead of checking whether each number is prime	*/
  for (long long i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      largest = i;
      n /= i;
    }
  }
  if (n > 2) {
    largest = n;
  }
  return largest;
}

int main() {
  long long input;
  std::cout << "Enter a number (n): ";
  std::cin >> input;

  long long final = PrimeFactors(input);
  std::cout << "The largest prime factor of " << input << " is " << final;

  return 0;
}
