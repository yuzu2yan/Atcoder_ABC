#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<bool> A(2 * N + 2, false);
  for (int i = 1; i <= 2 * N + 1; i++) {
    for (int j = i; j <= 2 * N + 1; j++) {
      if (A[j] == false) {
        std::cout << j << std::endl;
        A[j] = true;
        break;
      }
    }
    int in;
    std::cin >> in;
    if (in == 0) return 0;
    A[in] = true;
  }
}