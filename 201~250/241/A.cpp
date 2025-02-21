#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  std::vector<int> v(10);
  for (int i = 0; i < 10 ; i++) std::cin >> v[i];
  int k = 0;
  for (int i = 0; i < 2; i++) {
    k = v[k];
  }
  std::cout << v[k] << std::endl;
}