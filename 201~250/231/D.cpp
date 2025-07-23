#include <iostream>
#include <vector>


class UnionFind {
  public:
    UnionFind(int n) : par(n, -1) {} // 初期化
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
    std::vector<int> par; // par[i] = -1 のとき i は根 そうでなければ根の番号
};

int main() {
  int n, m;
  std::cin >> n >> m;
  UnionFind uf(n);
  std::vector<int> d(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    std::cin >> a >> b;
    a--;
    b--;
    if (uf.same(a, b)) {
      std::cout << "No" << std::endl;
      return 0;
    }
    uf.unite(a, b);
    d[a]++;
    d[b]++;
  }
  for (int i = 0; i < n; i++) {
    if (d[i] > 2) {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
  return 0;
}