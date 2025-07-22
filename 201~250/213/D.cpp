#include <iostream>
#include <vector>
#include <algorithm>


void dfs(const std::vector<std::vector<int>>& g, int v, std::vector<bool>& done, std::vector<int>& ans) {
  done[v] = true;
  ans.push_back(v + 1);
  for (int u : g[v]) {
    if (!done[u]) {
      dfs(g, u, done, ans);
      ans.push_back(v + 1);
    }
  }
}

int main() {
  int N;
  std::cin >> N;
  std::vector<std::vector<int>> g(N);

  for (int i = 0; i < N; i++) {
    int a, b;
    std::cin >> a >> b;
    g[a - 1].push_back(b - 1);
    g[b - 1].push_back(a - 1);
  }
  for (int i = 0; i < N; i++) std::sort(g[i].begin(), g[i].end());
  
  std::vector<int> ans;
  std::vector<bool> done(N, false);
  dfs(g, 0, done, ans);
  for (int i = 0; i < ans.size(); i++) std::cout << ans[i] << " ";
  std::cout << std::endl;

  return 0;
}