#include <bits/stdc++.h>
using namespace std;

int main(void) {
  char c;
  int ans = 700;
  for (int i = 0; i < 3; i++) {
    cin >> c;
    if (c == 'o') ans += 100;
  }
  cout << ans << endl;
}