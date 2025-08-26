#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> dist(n, std::vector<int>(n, 1e9));
  for (int i = 0; i < n; i++) dist[i][i] = 0;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    a--;
    b--;
    dist[a][b] = c;
  }

  long long ans = 0;
  for (int k = 0; k < n; k++) {
    std::vector<std::vector<int>> dist_k(n, std::vector<int>(n, 1e9));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dist_k[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (dist_k[i][j] != 1e9) {
          ans += dist_k[i][j];
        }
      }
    }
    dist = dist_k;
  }

  std::cout << ans << std::endl;

  return 0;
}