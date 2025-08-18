#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>


int main() {
  long long n, d;
  std::cin >> n >> d;
  std::vector<std::pair<long long, long long>> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i].first >> a[i].second;
  }

  std::sort(a.begin(), a.end(), [](const auto& a, const auto& b) { return a.second < b.second; });

  long long x = a[0].second;
  long long ans = 1;

  for (int i = 1; i < n; i++) {
    long long left = a[i].first;
    long long right = a[i].second;
    if (x + d - 1 < left) {
      x = right;
      ans++;
    }
  }
  std::cout << ans << std::endl;

  return 0;
}