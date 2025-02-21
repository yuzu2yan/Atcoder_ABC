#include <iostream>

int main() {
  int X;
  std::cin >> X;
  int result;

  if (X < 40) {
    result = 40 - X;
  } else if (X < 70) {
    result = 70 - X;
  } else if (X < 90) {
    result = 90 - X;
  } else {
    std::cout << "expert" << std::endl;
    return 0;
  }
  std::cout << result << std::endl;
}