#include <iostream>

int fib(int n) {
  if (n <= 1) {
    return n; // Base cases: fib(0) = 0, fib(1) = 1
  }
  return fib(n - 1) + fib(n - 2); // Recursive case
}

int main() {
	std::cout << fib(10);
	return 0;
}

/*iterate through fib seq where n < 4x10^6*/
/*select all values that are even*/
/*create array that holds all the even numbers*/
/*then add them together*/




