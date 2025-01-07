// https://projecteuler.net/problem=4

#include <bits/stdc++.h>
#include <sys/time.h>

#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>

int main() {
  int largest = 0;
  for (int i = 100; i <= 999; i++) {
    for (int j = i + 1; j <= 999; j++) {
      std::string result = std::to_string(i * j);
      std::string reverseresult = result;
      std::reverse(result.begin(), result.end());
      if (result == reverseresult) {
        largest = std::max(largest, i * j);
      }
    }
  }
  std::cout << largest;

  /*void Timer() {*/
  /*  struct timeval start, end;*/
  /*  gettimeofday(&start, NULL);*/
  /*  std::ios_base::sync_with_stdio(false);*/
  /*  gettimeofday(&end, NULL);*/
  /*  double time_taken;*/
  /*  time_taken = (end.tv_sec - start.tv_sec) * 1e6;*/
  /*  time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;*/
  /*  std::cout << std::endl*/
  /*            << "Time taken by program is : " << std::fixed << time_taken*/
  /*            << std::setprecision(6);*/
  /*  std::cout << " sec" << std::endl;*/
  /*}*/
  return 0;
}
