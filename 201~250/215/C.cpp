#include <iostream>
#include <algorithm>
#include <string>

int main() {
  std::string S;
  int K;
  std::cin >> S >> K;
  std::sort(S.begin(), S.end());
  while (K > 1 && std::next_permutation(S.begin(), S.end())) {
    --K;
  }
  std::cout << S << std::endl;
  return 0;
}