#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> C(N);
  for (int i = 0; i < N; i++) std::cin >> C[i];
  sort(C.begin(), C.end());
  long long ans = 1;
  for (int i = 0; i < N; i++) ans = ans * std::max(0, C[i] - i) % 1000000007;
  std::cout << ans << std::endl;
}