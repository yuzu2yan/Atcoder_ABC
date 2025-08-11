#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX_P 1000000

void construct_prime_list(long long n, std::vector<long long> &prime_list) {
  if (n > MAX_P) n = MAX_P;
  std::vector<bool> is_prime(n + 1, true);

  for (int i = 2; i * i <= n; i++) {  
    if (is_prime[i]) {
      for (int j = i * i; j <= n; j += i) {  
        is_prime[j] = false;
      }
    }
  }
  
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      prime_list.push_back(i);
    }
  }
}

int main() {
  long long n;
  std::cin >> n;
  std::vector<long long> prime_list;
  
  construct_prime_list(n, prime_list);
  int size = prime_list.size();
  int k = size - 1;
  
  if (size < 2) {
    std::cout << 0 << std::endl;
    return 0;
  }
  
  long long ans = 0;

  for (int i = 0; i < size; i++) {
    while (i < k && prime_list[i] > n / (prime_list[k] * prime_list[k] * prime_list[k])) k--;
    if (k <= i) break;
    ans += k - i;
  }
  
  std::cout << ans << std::endl;
}