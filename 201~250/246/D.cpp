#include <iostream>
#include <limits>
#include <algorithm>


long long f(long long a, long long b) {
  return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main() {
  long long n;
  std::cin >> n;
  long long ans = std::numeric_limits<long long>::max();
  for (long long b = 0; b <= 1000100; b++) {
    long long left = 0, right = 1000100;
    while (right - left > 1) {
      long long mid = (left + right) / 2;
      if (f(mid, b) <= n) {
        left = mid;
      } else {
        right = mid;
      }
    }
    if (n <= f(left, b)) {
      ans = std::min(ans, f(left, b));
    }
    else {
      ans = std::min(ans, f(right, b));
    }
  }
  std::cout << ans << std::endl;

  return 0;
}