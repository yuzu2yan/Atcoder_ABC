#include <iostream>
#include <vector>
#include <set>


int main() {
  long long l, q;
  std::cin >> l >> q;
  std::set<long> st;
  st.insert(0);
  st.insert(l);

  for (int i = 0; i < q; i++) {
    long long c, x;
    std::cin >> c >> x;
    if (c == 1) {
      st.insert(x);
    }
    else {
      auto it = st.lower_bound(x);
      long long r = *it;
      long long l = *(--it);
      std::cout << r - l << std::endl;
    }
  }

  return 0;
}