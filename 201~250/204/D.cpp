#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>


int main() {
  int n;
  std::cin >> n;
  std::vector<int> t(n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> t[i];
    sum += t[i];
  }

  std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(sum + 1, false));
  dp[0][0] = true;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= sum; j++) {
      if (dp[i - 1][j]) {
        dp[i][j] = true;
      }
      if (0 <= j - t[i] && dp[i - 1][j - t[i]]) {
        dp[i][j] = true;
      }
    }
  }

  long long ans = std::numeric_limits<long long>::max();
  for (int i = 0; i <= sum; i++) {
    if (dp[n][i]) {
      ans = std::min(ans, std::max((long long)i, sum - i));
    }
  }
  std::cout << ans << std::endl;
  return 0;
}