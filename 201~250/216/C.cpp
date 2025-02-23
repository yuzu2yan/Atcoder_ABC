#include <iostream>
#include <string>
#include <algorithm>

int main() {
  long long N;
  std::cin >> N;
  std::string S = "";
  while (N != 1) {
    if (N % 2 != 0) {
      S += "A";
      N -= 1;
    }
    else {
      S += "B";
      N /= 2;
    }
  }
  S += "A";
  std::reverse(S.begin(), S.end());
  std::cout << S << std::endl;
}