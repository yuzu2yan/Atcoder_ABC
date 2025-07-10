#include <iostream>
#include <vector>

long long dfs(const std::vector<std::vector<long long>>& a, long long pos, long long product, long long n, long long x) {
  if (pos == n) return product == x ? 1 : 0;
  long long res = 0;
  for (long long c : a[pos]) {
    if (product * c > x) continue;
    res += dfs(a, pos + 1, product * c, n, x);
  }
  return res;
}

int main() {
  long long n, x;
  std::cin >> n >> x;
  std::vector<std::vector<long long>> a(n);

  for (long long i = 0; i < n; ++i) {
    long long l;
    std::cin >> l;
    a[i].resize(l);
    for (long long j = 0; j < l; ++j) std::cin >> a[i][j];
  }

  long long ans = dfs(a, 0, 1, n, x);
  std::cout << ans << std::endl;

  return 0;
}