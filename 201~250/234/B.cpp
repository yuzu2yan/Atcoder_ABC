#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
  int N;
  std::cin >> N;
  std::vector<std::pair<double, double>> A(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A[i].first >> A[i].second;
  }

  double max = 0.0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      double x = A[i].first - A[j].first;
      double y = A[i].second - A[j].second;
      double dist = std::sqrt(x * x + y * y);
      if (dist > max) {
        max = dist;
      }
    }
  }
  std::cout << std::fixed << std::setprecision(10) << max << std::endl;
  return 0;
}