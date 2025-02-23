#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> A(N);
  long long int sum = 0;
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
    sum += A[i];
  }
  long long int X;
  std::cin >> X;
  long long int ans = X / sum * N;
  X %= sum;
  int i = 0;
  while (X >= 0) {
    X -= A[i];
    i++;
    ans++;
  }
  std::cout << ans << std::endl;
  return 0;
}