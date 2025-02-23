#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

int main() {
  long long N, W;
  std::cin >> N >> W;
  std::vector<std::pair<long, long>> cheese(N);
  for (int i = 0; i < N; i++) {
    std::cin >> cheese[i].first >> cheese[i].second;
  }
  std::sort(cheese.rbegin(), cheese.rend());
  long long ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < cheese[i].second; j++) {
      if (W > 0) {
        W--;
        ans += cheese[i].first;
      }
      if (W == 0) {
        std::cout << ans << std::endl;
        return 0;
      }
    }
  }
  std::cout << ans << std::endl;
}