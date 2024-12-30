#include <iostream>
#include <numeric>
#include <vector>

int fib(int n) {
	if (n <= 1) {
		return n; // Base cases: fib(0) = 0, fib(1) = 1
	}
	return fib(n - 1) + fib(n - 2); // Recursive case
}

int main() {
	std::vector<int> even;
	for (int i = 1; i<=4000000; i++) {
		int n = fib(i);
		if (n > 4000000) {break;}
		if (n % 2 == 0) {
			even.push_back(n);
		}
	}
	std::cout << std::accumulate(even.begin(),even.end(),0);
	return 0;
}

/*iterate through fib seq where n < 4x10^6*/
/*select all values that are even*/
/*create array that holds all the even numbers*/
/*then add them together*/
