#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>


int main() {
  int N;
  std::cin >> N;
  std::vector<std::pair<int, int>> v(N);

  for (int i = 0; i < N; i++) std::cin >> v[i].first >> v[i].second;
  std::sort(v.begin(), v.end());
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (v[i].first < v[j].first && v[i].second < v[j].second) {
        if (std::binary_search(v.begin(), v.end(), std::make_pair(v[i].first, v[j].second)) && std::binary_search(v.begin(), v.end(), std::make_pair(v[j].first, v[i].second))) {
          ans++;
        }
      }
    }
  }
  std::cout << ans << std::endl;

  return 0;
}