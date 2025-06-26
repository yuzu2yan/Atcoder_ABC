#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> S(N), T(N);
  for (int i = 0; i < N; i++) std::cin >> S[i];
  for (int i = 0; i < N; i++) std::cin >> T[i];
  std::vector<int> time = T;
  for (int i = 0; i < 2 * N; i++) {
    time[(i + 1) % N] = std::min(time[(i + 1) % N], time[i % N] + S[i % N]);
  }
  for (int ans : time) std::cout << ans << std::endl;
  return 0;
}