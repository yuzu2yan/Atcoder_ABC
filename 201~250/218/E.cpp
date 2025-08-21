#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>


class UnionFind {
  public:
    UnionFind(int n) : par(n, -1) {} 
    int root(int x) {
      if (par[x] < 0) return x;
      return par[x] = root(par[x]);
    }
    void unite(int x, int y) {
      int rx = root(x);
      int ry = root(y);
      if (rx == ry) return;
      par[rx] += par[ry];
      par[ry] = rx;
    }
    bool same(int x, int y) {
      return root(x) == root(y);
    }
  private:
    std::vector<int> par;
};

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<std::tuple<int, int, int>> edges;

  UnionFind uf(n);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    a--; b--; 
    edges.push_back(std::make_tuple(c, a, b));
  }

  std::sort(edges.begin(), edges.end());

  long long ans = 0;
  for (int i = 0; i < m; i++) ans += std::get<0>(edges[i]);

  for (int i = 0; i < m; i++) {
    int c, a, b;
    std::tie(c, a, b) = edges[i];
    if (c < 0) {
      uf.unite(a, b);
      ans += std::abs(c);
    }
    else {
      if (!uf.same(a, b)) {
        ans -= c;
        uf.unite(a, b);
      }
    }
  }

  std::cout << ans << std::endl;  
  return 0;
}