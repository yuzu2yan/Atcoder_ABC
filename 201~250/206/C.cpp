#include <iostream>
#include <unordered_map>

int main() {
  int N;
  std::cin >> N;
  long long ans = static_cast<long long>(N) * (N - 1) / 2;
  std::unordered_map<long long, int> map;
  for (int i = 0; i < N; i++) {
    long long a;
    std::cin >> a;
    map[a]++;
  }
  for (const auto& p : map) {
    ans -= static_cast<long long>(p.second) * (p.second - 1) / 2;
  }
  std::cout << ans << std::endl;
}