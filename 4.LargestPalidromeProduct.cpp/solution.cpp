#include <iostream>

void Palindrome() {
  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      int result = i * j;
      std::cout << i << " x " << j << " = " << result;
    }
  }
}

int main() {
  std::cout << "lol";
  Palindrome();
  return 1;
}
