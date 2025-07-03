#include <iostream>
#include <vector>
#include <queue>

int main() {
  int N, K;
  std::cin >> N >> K;
  std::vector<int> P(N);
  for (int i = 0; i < N; i++) std::cin >> P[i];
  
  std::priority_queue<int, std::vector<int>, std::greater<int>> que;
  for (int i = 0; i < K; i++) que.push(P[i]);

  std::cout << que.top() << std::endl;
  for (int i = K; i < N; i++) {
    if (que.top() < P[i]) {
      que.pop();
      que.push(P[i]);
    }
    std::cout << que.top() << std::endl;
  }

  return 0;
}