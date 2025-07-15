#include <iostream>
#include <cmath>

const long long mod = 998244353;
const long long inv2 = 499122177; // 2の逆元 (998244353+1)/2

long long sum(long long a, long long b) {
  if (a > b) return 0;
  a %= mod;
  b %= mod;
  
  // 等差数列の和: (a + b) * (b - a + 1) / 2
  long long sum_ab = (a + b) % mod;
  long long count = (b - a + 1 + mod) % mod;
  long long res = (sum_ab * count) % mod;
  res = (res * inv2) % mod;  // 逆元を使った除算
  
  return res;
}

int main() {
  long long n;
  std::cin >> n;
  long long ans = 0;

  long long power10 = 1; // 10^(i-1)
  for (long long i = 1; i <= 18; i++) {
    power10 *= 10; // 10^i
    if (power10 <= n) {
      ans += sum(1, 9 * (power10 / 10)); // 9 * 10^(i-1)
      ans %= mod;
    }
    else {
      long long count = n - (power10 / 10) + 1;
      if (count > 0) {
        ans += sum(1, count);
        ans %= mod;
      }
      break;
    }
  }

  std::cout << ans << std::endl;
  return 0;
}

