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
  int n, q;
  std::cin >> n >> q;
  UnionFind uf(n);
  for (int i = 0; i < q; i++) {
    int p, a, b;
    std::cin >> p >> a >> b;
    if (p == 0) {
      uf.unite(a, b);
    } else {
      std::cout << (uf.same(a, b) ? "Yes" : "No") << std::endl;
    }
  }

  return 0;
}