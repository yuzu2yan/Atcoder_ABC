#include <iostream>
#include <vector>
#include <string>


int main() {
  int n;
  long long x;
  std::string s;
  std::cin >> n >> x >> s;
  std::vector<char> move;
  for (int i = 0; i < n ; i++) {
    if (move.size() == 0) {
      move.push_back(s[i]);
    } else {
      if (s[i] == 'L' || s[i] == 'R') {
        move.push_back(s[i]);
      } else {
        if (move.back() == 'L' || move.back() == 'R') {
          move.pop_back();
        } else {
          move.push_back(s[i]);
        }
      }
    }
  }
  
  for (char c : move) {
    if (c == 'L') {
      x = x * 2;
    } else if (c == 'R') {
      x = x * 2 + 1;
    } else {
      x = x / 2;
    }
  }
  std::cout << x << std::endl;
}