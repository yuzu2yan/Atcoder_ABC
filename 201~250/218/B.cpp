#include <iostream>
#include <string>

int main() {
  std::string s;
  for (int i = 0; i < 26; i++) {
    std::cin >> s;
    int num = std::stoi(s);
    std::cout << char('a' + num - 1);
  }
  std::cout << std::endl;
}