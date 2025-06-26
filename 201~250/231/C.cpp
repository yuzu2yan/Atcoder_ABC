#include <iostream>
#include <vector>
#include <algorithm>

int search(long x, const std::vector<long>&A) {
  int left = 0, right = A.size() - 1;
  while (left < right) {
    int mid = (left + right) / 2;
    if (A[mid] < x) {
      left = mid + 1;
    }  else {
      right = mid; 
    }
  }
  return left;
}

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
    if (x < A[0]) {
      std::cout << N << std::endl;
      continue;
    }
    if (x > A[N - 1]) {
      std::cout << 0 << std::endl;
      continue;
    }
    int pos = search(x, A);
    std::cout << N - pos << std::endl;
  }
  return 0;
}