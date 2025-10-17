#include <iostream>
#include <vector>


long long f(long long x) {
  long long ans = 0;
  while (x) {
    ans += x % 10;
    x /= 10;
  }
  return ans;
}

int main() {
  long long n;
  std::cin >> n;
  std::vector<int> a(n + 1);
  a[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) a[i] += f(a[j]);
  }
  std::cout << a[n] << std::endl;
  return 0;
}