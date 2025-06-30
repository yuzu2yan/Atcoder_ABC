#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
  int N; std::cin >> N;
  std::vector<double> l(N), r(N);
  for (int i = 0; i < N; i++) {
    int t;
    std::cin >> t >> l[i] >> r[i];
    if (t == 2) r[i] -= 0.5;
    if (t == 3) l[i] += 0.5;
    if (t == 4) l[i] += 0.5, r[i] -= 0.5;
  }
  
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      ans += (std::max(l[i], l[j]) <= std::min(r[i], r[j]));
    }
  }
  std::cout << ans << std::endl;
  return 0;
}