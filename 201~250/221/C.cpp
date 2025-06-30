#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
  std::string N; std::cin >> N;
  int n = N.size();
  int ans = 0;
  
  for (int bit = 1; bit < (1 << n) - 1; ++bit) {
    std::string l = "", r = "";
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) l += N[i];
      else r += N[i];
    }
    std::sort(l.rbegin(), l.rend());
    std::sort(r.rbegin(), r.rend());
    if (l[0] == '0' || r[0] == '0') continue; 
    int left = std::stoi(l), right = std::stoi(r);
    ans = std::max(ans, left * right);
  }
  std::cout << ans << std::endl;
  return 0;
}