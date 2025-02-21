#include <iostream>

long long int f(int x) {
  return x * x + 2 * x + 3;
}

int main() {
  int t;
  std::cin >> t;
  long long int result = f(f(f(t) + t) + f(f(t)));
  std::cout << result << std::endl;
}