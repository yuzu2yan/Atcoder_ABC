#include <iostream>
#include <set>

int main() {
  std::set<int> s;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    std::cin >> a;
    s.insert(a);
  }
  std::cout << s.size() << std::endl;
}