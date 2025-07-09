#include <iostream>
#include <string>
#include <deque>

int main() {
  int N;
  std::string S;
  std::cin >> N >> S;
  std::deque<int> deq = {N};
  
  for (int i = N - 1; i >= 0; i--) (S[i] == 'L') ? deq.push_back(i) : deq.push_front(i);

  for (int i = 0; i <= N; i++) {
    std::cout << deq[i];
    i < N - 1 ? std::cout << " " : std::cout << std::endl;
  }

  return 0;
}