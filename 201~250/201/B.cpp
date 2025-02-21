#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<std::pair<int, std::string>> v;
  for (int i = 0; i < N; i++) {
    std::string s;
    int t;
    std::cin >> s >> t;
    v.push_back(std::make_pair(t, s));
  }
  std::sort(v.rbegin(), v.rend());
  std::cout << v[1].second << std::endl;
}