#include <iostream>
#include <vector>
#include <algorithm>


int main() {
  int n, q;
  std::cin >> n;
  std::vector<std::vector<int>> idx(n + 1, std::vector<int>(0));
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    idx[a].push_back(i);
  }
  std::cin >> q;

  for (int i = 0; i < q; i++) {
    int l, r, x;
    std::cin >> l >> r >> x;
    l--; r--; 
    int count = std::upper_bound(idx[x].begin(), idx[x].end(), r) - std::lower_bound(idx[x].begin(), idx[x].end(), l);
    std::cout << count << std::endl;
  }
}