#include <iostream>
#include <vector>
#include <queue>


int bfs(const std::vector<std::vector<int>>& g, int s) {
  std::vector<bool> done(g.size(), false);
  std::queue<int> q;
  q.push(s);
  done[s] = true;
  int ans = 0;

  while (!q.empty()) {
    int v = q.front();
    q.pop();
    ans++;
    for (int u : g[v]) {
      if (!done[u]) {
        done[u] = true;
        q.push(u);
      }
    }
  }
  return ans;
}

int main() {
  long long n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> g(n);

  for (int i = 0; i < m; ++i) {
    int a, b;
    std::cin >> a >> b;
    g[a - 1].push_back(b - 1);
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += bfs(g, i);
  }

  std::cout << ans << std::endl;

  return 0;
}