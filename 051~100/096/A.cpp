#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  ans += a;
  if (b < a) ans--;
  cout << ans << endl; 
}