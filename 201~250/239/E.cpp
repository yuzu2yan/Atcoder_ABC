#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <tuple>


void dfs(const std::vector<std::vector<int>>& g, std::vector<std::vector<long long>>& p) {
  std::deque<std::tuple<int, int, int>> que;
  que.push_back(std::make_tuple(1, 0, 1));

  while (!que.empty()) {
    int current, parent, count;
    std::tie(current, parent, count) = que.back();
    que.pop_back();

    if (count == 1) {
      que.push_back(std::make_tuple(current, parent, 2));
      for (int u : g[current]) {
        if (u == parent) continue;
        que.push_back(std::make_tuple(u, current, 1));
      }
    }
    else { // count == 2
      for (int u : g[current]) {
         if (u == parent) continue;
         for (long long val : p[u]) {
           p[current].push_back(val);
         }
      }
      std::sort(p[current].begin(), p[current].end(), std::greater<long long>());
      p[current].resize(20);
    }
  }
}

int main() {
  int n, q;
  std::cin >> n >> q;
  std::vector<std::vector<int>> g(n + 1);
  std::vector<long long> x(n + 1, 0);
  for (int i = 1; i <= n; i++) std::cin >> x[i];

  for (int i = 0; i < n - 1; i++) {
    int a, b;
    std::cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  std::vector<std::vector<long long>> p(n + 1);
  for (int i = 1; i <= n; i++) p[i].push_back(x[i]);
  dfs(g, p);

  for (int i = 0; i < q; i++) {
    int v, k;
    std::cin >> v >> k;
    std::cout << p[v][k - 1] << std::endl;
  }

  return 0;
}