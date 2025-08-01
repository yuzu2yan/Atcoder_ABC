#include <iostream>
#include <vector>


int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  long long mod = 998244353;
  std::vector<std::vector<long long>> dp(n + 1, std::vector<long long>(k + 1, 0));

  for (int i = 1; i <= m; i++) {
    dp[1][i] = 1;
  }

  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      for (int l = 1; l < j; l++) {
        if (j - l <= m) {
          dp[i][j] += dp[i - 1][l];
          dp[i][j] %= mod;
        }
      }
    }
  }

  long long ans = 0;
  for (int i = 1; i <= k; i++) {
    ans += dp[n][i];
    ans %= mod;
  }
  std::cout << ans << std::endl;
}