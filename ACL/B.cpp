#include <iostream>
#include <vector>


class FenwickTree {
  public:
    FenwickTree(int n) : n(n), data(n + 1, 0) {}

    void add(int i, long long x) {
      i++; // Convert to 1-based indexing
      for (; i <= n; i += (i & -i)) data[i] += x;
    }

    long long sum(int r) {
      long long s = 0;
      for (; r > 0; r -= (r & -r)) s += data[r];
      return s;
    }

    long long sum(int l, int r) {
      return sum(r) - sum(l);
    }

  private:
    int n;
    std::vector<long long> data;
};   


int main() {
  int n, q;
  std::cin >> n >> q;
  FenwickTree ft(n);
  for (int i = 0; i < n; i++) {
    long long a;
    std::cin >> a;
    ft.add(i, a);
  }
  
  for (int i = 0; i < q; i++) {
    int t;
    std::cin >> t;
    if (t == 0) {
      int p;
      long long x;
      std::cin >> p >> x;
      ft.add(p, x);
    } else {
      int l, r;
      std::cin >> l >> r;
      std::cout << ft.sum(l, r) << std::endl;
    }
  }

  return 0;
}