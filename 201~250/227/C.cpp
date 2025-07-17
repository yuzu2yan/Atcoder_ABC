#include <iostream>

int main() {
  long long n;
  std::cin >> n ;
  long long ans = 0;
  
  for (long long a = 1; a * a * a <= n; a++) {
    for (long long b = a; a * b * b <= n; b++) {
      ans += n / (a * b) - b + 1;
    }
  }

  std::cout << ans << std::endl;
  return 0;
}