#include <iostream>
#include <vector>
#include <queue>
#include <limits>


void bfs(int s, std::vector<std::vector<int>>& g, std::vector<int>& cnt, std::vector<int>& time) {
  std::queue<int> q;
  q.push(s);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v : g[u]) {
      if (time[v] == std::numeric_limits<int>::max()) {
        cnt[v] = cnt[u];
        time[v] = time[u] + 1;
        q.push(v);
      }
      else {
        if (time[v] == time[u] + 1) cnt[v] += cnt[u];
      }
      cnt[v] %= 1000000007;
    }
  }
}

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> g(n + 1);
  std::vector<int> cnt(n + 1, 0);
  cnt[1] = 1;
  std::vector<int> time(n + 1, std::numeric_limits<int>::max());

  for (int i = 0; i < m; i++) {
    int a, b;
    std::cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  bfs(1, g, cnt, time);

  if (time[n] == std::numeric_limits<int>::max()) {
    std::cout << 0 << std::endl;
  }
  else {
    std::cout << cnt[n] << std::endl;
  }
  return 0;
}