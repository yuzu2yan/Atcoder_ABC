#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main() {
  std::string S, T = "?chokudai";
  std::cin >> S;
  S = "?" + S;
  int N = S.size();
  long long mod = std::pow(10, 9) + 7;
  std::vector<std::vector<int>> dp(N + 1, std::vector<int>(9, 0));

  for (int i = 0; i < N + 1; i++) {
    dp[i][0] = 1; // Base case: empty string is a subsequence of any string
  }
  for (int i = 1; i < N + 1; i++) {
    for (int j = 1; j < T.size(); j++) {
      if (S[i] == T[j]) {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  std::cout << dp[N][8] << std::endl;

  return 0;
}