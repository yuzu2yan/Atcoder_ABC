#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#define INF 1000000

int main() {
  int n, x, y;
  std::cin >> n >> x >> y;
  std::vector<std::vector<std::vector<int>>> dp(n + 1, std::vector<std::vector<int>>(x + 1, std::vector<int>(y + 1, INF)));
  dp[0][0][0] = 0;
  
  for (int i = 1; i <= n; i++) {
    int a, b;
    std::cin >> a >> b;
    for (int j = 0; j <= x; j++) {
      for (int k = 0; k <= y; k++) {
        dp[i][j][k] = std::min(dp[i][j][k], dp[i - 1][j][k]);
        int x_ = std::min(j + a, x);
        int y_ = std::min(k + b, y);
        dp[i][x_][y_] = std::min(dp[i][x_][y_], dp[i - 1][j][k] + 1);
      }
    }
  }

  if (dp[n][x][y] == INF) {
    std::cout << -1 << std::endl;
  }
  else {
    std::cout << dp[n][x][y] << std::endl;
  }
  return 0;
}