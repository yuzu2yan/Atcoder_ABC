#include <iostream>
#include <cmath>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;
  if (C % 2 == 0) {
    A = std::abs(A);
    B = std::abs(B);
    if (A > B) {
      std::cout << ">" << std::endl;
    } else if (A < B) {
      std::cout << "<" << std::endl;
    } else {
      std::cout << "=" << std::endl;
    }
  }
  else {
    if (A >= 0) {
      if (B >= 0) {
        if (A > B) {
          std::cout << ">" << std::endl;
        } else if (A < B) {
          std::cout << "<" << std::endl;
        } else {
          std::cout << "=" << std::endl;
        }
      } else {
        std::cout << ">" << std::endl;
      }
    } else if (A < 0) {
      if (B < 0) {
        if (A > B) {
          std::cout << ">" << std::endl;
        } else if (A < B) {
          std::cout << "<" << std::endl;
        } else {
          std::cout << "=" << std::endl;
        }
      } else {
        std::cout << "<" << std::endl;
      }
    }
  }
  return 0;
}