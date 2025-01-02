#include <iostream>

void Calculation() {
  // init values to 0 because otherwise they will contain garbage values.
  int squaresum = 0;
  int sumsquares = 0;
  for (int i = 1; i <= 100; i++) {
    squaresum += i;
    sumsquares += i * i;
  }
  squaresum *= squaresum;
  int result = squaresum - sumsquares;
  std::cout << result << "\n";
}

int main() {
  Calculation();
  return 0;
}
