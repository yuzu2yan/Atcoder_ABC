#include <iostream>
#include <string>


int main() {
  std::string s;
  std::cin >> s;
  int l = s.size();
  int central = l / 2;
  s.erase(central, 1) ;
  std::cout << s;
  return 0;
}