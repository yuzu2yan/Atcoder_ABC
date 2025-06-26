#include <iostream>
#include <vector>
#include <algorithm>


int main() {
  int N, Q;
  std::cin >> N >> Q;
  std::vector<long> A(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> A[i];
  }
  std::sort(A.begin(), A.end());
  for (int i = 0; i < Q; i++) {
    long x;
    std::cin >> x;
    auto it = std::lower_bound(A.begin(), A.end(), x);
    std::cout << (A.end() - it) << std::endl;
  }
  return 0;
}