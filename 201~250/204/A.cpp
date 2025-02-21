#include <iostream>

int main() {
  int N;
  std::cin >> N;
  int A;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    std::cin >> A;
    if (A > 10) {
      sum += A - 10;
    }
  }
  std::cout << sum << std::endl;
}