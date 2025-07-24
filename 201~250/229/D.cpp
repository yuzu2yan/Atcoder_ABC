#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main() {
  std::string s;
  int k;
  std::cin >> s >> k;
  int n = s.size();
  std::vector<int> cnt(n + 1, 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == '.') cnt[i + 1] = cnt[i] + 1;
    else cnt[i + 1] = cnt[i];
  }

  int ans = 0;
  int r = 0;
  for (int l = 0; l < n; l++) {
    while (r < n && cnt[r + 1] - cnt[l] <= k) r++;
    ans = std::max(ans, r - l);
  }
  std::cout << ans << std::endl;
  return 0;
}